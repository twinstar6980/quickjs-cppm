# QuickJS C++ Modules

C++ Modules interface for [QuickJS(ng)](https://github.com/quickjs-ng/quickjs) API.

The purpose of this project is to import C-style API without polluting the global namespace.

If you want to use QuickJS in C++, please consider [quickjspp](https://github.com/ftk/quickjspp) first.

## How does it work?

* Use C++ Modules & Namespace to keep the global namespace clean and avoid macro pollution.

* Compile-time constants are wrapped as `inline constexpr auto variable`.

* Non-compile-time constants (such as `JS_NULL`) are wrapped as `inline auto const variable`.

* Functions and function-like macros are wrapped by a layer of `inline function` with the same signature as the original function.

* Functions with variadic arguments are wrapped as `pointer` to the original function.

* Some conditional macros are wrapped as `inline constexpr auto variable` of `bool` type, which are true when defined and false otherwise.

* Some macros cannot be perfectly implemented as functions or variables. If necessary, please define them yourself. Unimplemented macros are: `JS_CFUNC_SPECIAL_DEF`.

## How to use?

* Enable `C++20` in your project.

* Import `qjsm.cppm` in your project.

* Add `import qjsm;` in hpp/cpp files.

* Finally, use the `qjsm` namespace to access the quickjs interface.

> Note: All interfaces are prefixed with `$` to avoid naming conflicts with macros, such as `JS_NULL` -> `qjsm::$JS_NULL`.
