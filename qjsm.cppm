module;

// quickjs-ng 0.7.0
#include "quickjs.h"

// export type
#define M_qjsm_type\
	using

// export function
#define M_qjsm_func\
	inline auto

// export value for compile-time constant
#define M_qjsm_valc\
	inline constexpr auto

// export value for run-time constant
#define M_qjsm_valr\
	inline auto const

export module qjsm;

export namespace qjsm {

	M_qjsm_valc $JS_NAN_BOXING = bool{
		#if !defined JS_NAN_BOXING
		false
		#else
		true
		#endif
	};

	M_qjsm_type $JS_BOOL = JS_BOOL;

	M_qjsm_type $JSRuntime = JSRuntime;

	M_qjsm_type $JSContext = JSContext;

	M_qjsm_type $JSObject = JSObject;

	M_qjsm_type $JSClass = JSClass;

	M_qjsm_type $JSClassID = JSClassID;

	M_qjsm_type $JSAtom = JSAtom;

	M_qjsm_valc $JS_TAG_FIRST = JS_TAG_FIRST;

	M_qjsm_valc $JS_TAG_BIG_INT = JS_TAG_BIG_INT;

	M_qjsm_valc $JS_TAG_SYMBOL = JS_TAG_SYMBOL;

	M_qjsm_valc $JS_TAG_STRING = JS_TAG_STRING;

	M_qjsm_valc $JS_TAG_MODULE = JS_TAG_MODULE;

	M_qjsm_valc $JS_TAG_FUNCTION_BYTECODE = JS_TAG_FUNCTION_BYTECODE;

	M_qjsm_valc $JS_TAG_OBJECT = JS_TAG_OBJECT;

	M_qjsm_valc $JS_TAG_INT = JS_TAG_INT;

	M_qjsm_valc $JS_TAG_BOOL = JS_TAG_BOOL;

	M_qjsm_valc $JS_TAG_NULL = JS_TAG_NULL;

	M_qjsm_valc $JS_TAG_UNDEFINED = JS_TAG_UNDEFINED;

	M_qjsm_valc $JS_TAG_UNINITIALIZED = JS_TAG_UNINITIALIZED;

	M_qjsm_valc $JS_TAG_CATCH_OFFSET = JS_TAG_CATCH_OFFSET;

	M_qjsm_valc $JS_TAG_EXCEPTION = JS_TAG_EXCEPTION;

	M_qjsm_valc $JS_TAG_FLOAT64 = JS_TAG_FLOAT64;

	M_qjsm_valc $JS_FLOAT64_NAN = JS_FLOAT64_NAN;

	M_qjsm_type $JSValueConst = JSValueConst;

	M_qjsm_type $JSValue = JSValue;

	// SKIP : only available if not JS_NAN_BOXING
	// JSValueUnion

	M_qjsm_func $JS_VALUE_GET_TAG (JSValue v) -> int64_t { return JS_VALUE_GET_TAG(v); }

	M_qjsm_func $JS_VALUE_GET_NORM_TAG (JSValue v) -> int64_t { return JS_VALUE_GET_NORM_TAG(v); }

	M_qjsm_func $JS_VALUE_GET_INT (JSValue v) -> int32_t { return JS_VALUE_GET_INT(v); }

	M_qjsm_func $JS_VALUE_GET_BOOL (JSValue v) -> int32_t { return JS_VALUE_GET_BOOL(v); }

	M_qjsm_func $JS_VALUE_GET_FLOAT64 (JSValue v) -> double { return JS_VALUE_GET_FLOAT64(v); }

	M_qjsm_func $JS_VALUE_GET_PTR (JSValue v) -> void * { return JS_VALUE_GET_PTR(v); }

	M_qjsm_func $JS_MKPTR (int64_t tag, void * ptr) -> JSValue { return JS_MKPTR(tag, ptr); }

	M_qjsm_func $JS_MKVAL (int64_t tag, int32_t val) -> JSValue { return JS_MKVAL(tag, val); }

	// SKIP : only available if JS_NAN_BOXING
	// JS_FLOAT64_TAG_ADDEND

	// SKIP : only available if JS_NAN_BOXING
	// JS_MKNAN

	M_qjsm_valr $JS_NAN = JS_NAN;

	M_qjsm_func $JS_TAG_IS_FLOAT64 (int64_t tag) -> JS_BOOL { return JS_TAG_IS_FLOAT64(tag); }

	M_qjsm_func $JS_VALUE_IS_NAN (JSValue v) -> JS_BOOL { return JS_VALUE_IS_NAN(v); }

	M_qjsm_func $JS_VALUE_IS_BOTH_INT (JSValue v1, JSValue v2) -> JS_BOOL { return JS_VALUE_IS_BOTH_INT(v1, v2); }

	M_qjsm_func $JS_VALUE_IS_BOTH_FLOAT (JSValue v1, JSValue v2) -> JS_BOOL { return JS_VALUE_IS_BOTH_FLOAT(v1, v2); }

	M_qjsm_func $JS_VALUE_GET_OBJ (JSValue v) -> JSObject * { return JS_VALUE_GET_OBJ(v); }

	M_qjsm_func $JS_VALUE_HAS_REF_COUNT (JSValue v) -> JS_BOOL { return JS_VALUE_HAS_REF_COUNT(v); }

	M_qjsm_valr $JS_NULL = JS_NULL;

	M_qjsm_valr $JS_UNDEFINED = JS_UNDEFINED;

	M_qjsm_valr $JS_FALSE = JS_FALSE;

	M_qjsm_valr $JS_TRUE = JS_TRUE;

	M_qjsm_valr $JS_EXCEPTION = JS_EXCEPTION;

	M_qjsm_valr $JS_UNINITIALIZED = JS_UNINITIALIZED;

	M_qjsm_valc $JS_PROP_CONFIGURABLE = JS_PROP_CONFIGURABLE;

	M_qjsm_valc $JS_PROP_WRITABLE = JS_PROP_WRITABLE;

	M_qjsm_valc $JS_PROP_ENUMERABLE = JS_PROP_ENUMERABLE;

	M_qjsm_valc $JS_PROP_C_W_E = JS_PROP_C_W_E;

	M_qjsm_valc $JS_PROP_LENGTH = JS_PROP_LENGTH;

	M_qjsm_valc $JS_PROP_TMASK = JS_PROP_TMASK;

	M_qjsm_valc $JS_PROP_NORMAL = JS_PROP_NORMAL;

	M_qjsm_valc $JS_PROP_GETSET = JS_PROP_GETSET;

	M_qjsm_valc $JS_PROP_VARREF = JS_PROP_VARREF;

	M_qjsm_valc $JS_PROP_AUTOINIT = JS_PROP_AUTOINIT;

	M_qjsm_valc $JS_PROP_HAS_SHIFT = JS_PROP_HAS_SHIFT;

	M_qjsm_valc $JS_PROP_HAS_CONFIGURABLE = JS_PROP_HAS_CONFIGURABLE;

	M_qjsm_valc $JS_PROP_HAS_WRITABLE = JS_PROP_HAS_WRITABLE;

	M_qjsm_valc $JS_PROP_HAS_ENUMERABLE = JS_PROP_HAS_ENUMERABLE;

	M_qjsm_valc $JS_PROP_HAS_GET = JS_PROP_HAS_GET;

	M_qjsm_valc $JS_PROP_HAS_SET = JS_PROP_HAS_SET;

	M_qjsm_valc $JS_PROP_HAS_VALUE = JS_PROP_HAS_VALUE;

	M_qjsm_valc $JS_PROP_THROW = JS_PROP_THROW;

	M_qjsm_valc $JS_PROP_THROW_STRICT = JS_PROP_THROW_STRICT;

	M_qjsm_valc $JS_PROP_NO_ADD = JS_PROP_NO_ADD;

	M_qjsm_valc $JS_PROP_NO_EXOTIC = JS_PROP_NO_EXOTIC;

	M_qjsm_valc $JS_PROP_DEFINE_PROPERTY = JS_PROP_DEFINE_PROPERTY;

	M_qjsm_valc $JS_PROP_REFLECT_DEFINE_PROPERTY = JS_PROP_REFLECT_DEFINE_PROPERTY;

	M_qjsm_valc $JS_DEFAULT_STACK_SIZE = JS_DEFAULT_STACK_SIZE;

	M_qjsm_valc $JS_EVAL_TYPE_GLOBAL = JS_EVAL_TYPE_GLOBAL;

	M_qjsm_valc $JS_EVAL_TYPE_MODULE = JS_EVAL_TYPE_MODULE;

	M_qjsm_valc $JS_EVAL_TYPE_DIRECT = JS_EVAL_TYPE_DIRECT;

	M_qjsm_valc $JS_EVAL_TYPE_INDIRECT = JS_EVAL_TYPE_INDIRECT;

	M_qjsm_valc $JS_EVAL_TYPE_MASK = JS_EVAL_TYPE_MASK;

	M_qjsm_valc $JS_EVAL_FLAG_STRICT = JS_EVAL_FLAG_STRICT;

	M_qjsm_valc $JS_EVAL_FLAG_UNUSED = JS_EVAL_FLAG_UNUSED;

	M_qjsm_valc $JS_EVAL_FLAG_COMPILE_ONLY = JS_EVAL_FLAG_COMPILE_ONLY;

	M_qjsm_valc $JS_EVAL_FLAG_BACKTRACE_BARRIER = JS_EVAL_FLAG_BACKTRACE_BARRIER;

	M_qjsm_valc $JS_EVAL_FLAG_ASYNC = JS_EVAL_FLAG_ASYNC;

	M_qjsm_type $JSCFunction = JSCFunction;

	M_qjsm_type $JSCFunctionMagic = JSCFunctionMagic;

	M_qjsm_type $JSCFunctionData = JSCFunctionData;

	M_qjsm_type $JSMallocFunctions = JSMallocFunctions;

	M_qjsm_type $JSRuntimeFinalizer = JSRuntimeFinalizer;

	M_qjsm_type $JSGCObjectHeader = JSGCObjectHeader;

	M_qjsm_func $JS_NewRuntime () -> JSRuntime * { return JS_NewRuntime(); }

	M_qjsm_func $JS_SetRuntimeInfo (JSRuntime * rt, char const * info) -> void { return JS_SetRuntimeInfo(rt, info); }

	M_qjsm_func $JS_SetMemoryLimit (JSRuntime * rt, size_t limit) -> void { return JS_SetMemoryLimit(rt, limit); }

	M_qjsm_func $JS_SetDumpFlags (JSRuntime * rt, uint64_t flags) -> void { return JS_SetDumpFlags(rt, flags); }

	M_qjsm_func $JS_GetGCThreshold (JSRuntime * rt) -> size_t { return JS_GetGCThreshold(rt); }

	M_qjsm_func $JS_SetGCThreshold (JSRuntime * rt, size_t gc_threshold) -> void { return JS_SetGCThreshold(rt, gc_threshold); }

	M_qjsm_func $JS_SetMaxStackSize (JSRuntime * rt, size_t stack_size) -> void { return JS_SetMaxStackSize(rt, stack_size); }

	M_qjsm_func $JS_UpdateStackTop (JSRuntime * rt) -> void { return JS_UpdateStackTop(rt); }

	M_qjsm_func $JS_NewRuntime2 (JSMallocFunctions const * mf, void * opaque) -> JSRuntime * { return JS_NewRuntime2(mf, opaque); }

	M_qjsm_func $JS_FreeRuntime (JSRuntime * rt) -> void { return JS_FreeRuntime(rt); }

	M_qjsm_func $JS_GetRuntimeOpaque (JSRuntime * rt) -> void * { return JS_GetRuntimeOpaque(rt); }

	M_qjsm_func $JS_SetRuntimeOpaque (JSRuntime * rt, void * opaque) -> void { return JS_SetRuntimeOpaque(rt, opaque); }

	M_qjsm_func $JS_AddRuntimeFinalizer (JSRuntime * rt, JSRuntimeFinalizer * finalizer, void * arg) -> int { return JS_AddRuntimeFinalizer(rt, finalizer, arg); }

	M_qjsm_type $JS_MarkFunc = JS_MarkFunc;

	M_qjsm_func $JS_MarkValue (JSRuntime * rt, JSValue val, JS_MarkFunc * mark_func) -> void { return JS_MarkValue(rt, val, mark_func); }

	M_qjsm_func $JS_RunGC (JSRuntime * rt) -> void { return JS_RunGC(rt); }

	M_qjsm_func $JS_IsLiveObject (JSRuntime * rt, JSValue obj) -> JS_BOOL { return JS_IsLiveObject(rt, obj); }

	M_qjsm_func $JS_NewContext (JSRuntime * rt) -> JSContext * { return JS_NewContext(rt); }

	M_qjsm_func $JS_FreeContext (JSContext * s) -> void { return JS_FreeContext(s); }

	M_qjsm_func $JS_DupContext (JSContext * ctx) -> JSContext * { return JS_DupContext(ctx); }

	M_qjsm_func $JS_GetContextOpaque (JSContext * ctx) -> void * { return JS_GetContextOpaque(ctx); }

	M_qjsm_func $JS_SetContextOpaque (JSContext * ctx, void * opaque) -> void { return JS_SetContextOpaque(ctx, opaque); }

	M_qjsm_func $JS_GetRuntime (JSContext * ctx) -> JSRuntime * { return JS_GetRuntime(ctx); }

	M_qjsm_func $JS_SetClassProto (JSContext * ctx, JSClassID class_id, JSValue obj) -> void { return JS_SetClassProto(ctx, class_id, obj); }

	M_qjsm_func $JS_GetClassProto (JSContext * ctx, JSClassID class_id) -> JSValue { return JS_GetClassProto(ctx, class_id); }

	M_qjsm_func $JS_GetFunctionProto (JSContext * ctx) -> JSValue { return JS_GetFunctionProto(ctx); }

	M_qjsm_func $JS_NewContextRaw (JSRuntime * rt) -> JSContext * { return JS_NewContextRaw(rt); }

	M_qjsm_func $JS_AddIntrinsicBaseObjects (JSContext * ctx) -> void { return JS_AddIntrinsicBaseObjects(ctx); }

	M_qjsm_func $JS_AddIntrinsicDate (JSContext * ctx) -> void { return JS_AddIntrinsicDate(ctx); }

	M_qjsm_func $JS_AddIntrinsicEval (JSContext * ctx) -> void { return JS_AddIntrinsicEval(ctx); }

	M_qjsm_func $JS_AddIntrinsicRegExpCompiler (JSContext * ctx) -> void { return JS_AddIntrinsicRegExpCompiler(ctx); }

	M_qjsm_func $JS_AddIntrinsicRegExp (JSContext * ctx) -> void { return JS_AddIntrinsicRegExp(ctx); }

	M_qjsm_func $JS_AddIntrinsicJSON (JSContext * ctx) -> void { return JS_AddIntrinsicJSON(ctx); }

	M_qjsm_func $JS_AddIntrinsicProxy (JSContext * ctx) -> void { return JS_AddIntrinsicProxy(ctx); }

	M_qjsm_func $JS_AddIntrinsicMapSet (JSContext * ctx) -> void { return JS_AddIntrinsicMapSet(ctx); }

	M_qjsm_func $JS_AddIntrinsicTypedArrays (JSContext * ctx) -> void { return JS_AddIntrinsicTypedArrays(ctx); }

	M_qjsm_func $JS_AddIntrinsicPromise (JSContext * ctx) -> void { return JS_AddIntrinsicPromise(ctx); }

	M_qjsm_func $JS_AddIntrinsicBigInt (JSContext * ctx) -> void { return JS_AddIntrinsicBigInt(ctx); }

	M_qjsm_func $JS_AddIntrinsicWeakRef (JSContext * ctx) -> void { return JS_AddIntrinsicWeakRef(ctx); }

	M_qjsm_func $JS_AddPerformance (JSContext * ctx) -> void { return JS_AddPerformance(ctx); }

	M_qjsm_func $JS_IsEqual (JSContext * ctx, JSValue op1, JSValue op2) -> int { return JS_IsEqual(ctx, op1, op2); }

	M_qjsm_func $JS_IsStrictEqual (JSContext * ctx, JSValue op1, JSValue op2) -> JS_BOOL { return JS_IsStrictEqual(ctx, op1, op2); }

	M_qjsm_func $JS_IsSameValue (JSContext * ctx, JSValue op1, JSValue op2) -> JS_BOOL { return JS_IsSameValue(ctx, op1, op2); }

	M_qjsm_func $JS_IsSameValueZero (JSContext * ctx, JSValue op1, JSValue op2) -> JS_BOOL { return JS_IsSameValueZero(ctx, op1, op2); }

	M_qjsm_func $js_string_codePointRange (JSContext * ctx, JSValue this_val, int argc, JSValue * argv) -> JSValue { return js_string_codePointRange(ctx, this_val, argc, argv); }

	M_qjsm_func $js_calloc_rt (JSRuntime * rt, size_t count, size_t size) -> void * { return js_calloc_rt(rt, count, size); }

	M_qjsm_func $js_malloc_rt (JSRuntime * rt, size_t size) -> void * { return js_malloc_rt(rt, size); }

	M_qjsm_func $js_free_rt (JSRuntime * rt, void * ptr) -> void { return js_free_rt(rt, ptr); }

	M_qjsm_func $js_realloc_rt (JSRuntime * rt, void * ptr, size_t size) -> void * { return js_realloc_rt(rt, ptr, size); }

	M_qjsm_func $js_malloc_usable_size_rt (JSRuntime * rt, void const * ptr) -> size_t { return js_malloc_usable_size_rt(rt, ptr); }

	M_qjsm_func $js_mallocz_rt (JSRuntime * rt, size_t size) -> void * { return js_mallocz_rt(rt, size); }

	M_qjsm_func $js_calloc (JSContext * ctx, size_t count, size_t size) -> void * { return js_calloc(ctx, count, size); }

	M_qjsm_func $js_malloc (JSContext * ctx, size_t size) -> void * { return js_malloc(ctx, size); }

	M_qjsm_func $js_free (JSContext * ctx, void * ptr) -> void { return js_free(ctx, ptr); }

	M_qjsm_func $js_realloc (JSContext * ctx, void * ptr, size_t size) -> void * { return js_realloc(ctx, ptr, size); }

	M_qjsm_func $js_malloc_usable_size (JSContext * ctx, void const * ptr) -> size_t { return js_malloc_usable_size(ctx, ptr); }

	M_qjsm_func $js_realloc2 (JSContext * ctx, void * ptr, size_t size, size_t * pslack) -> void * { return js_realloc2(ctx, ptr, size, pslack); }

	M_qjsm_func $js_mallocz (JSContext * ctx, size_t size) -> void * { return js_mallocz(ctx, size); }

	M_qjsm_func $js_strdup (JSContext * ctx, char const * str) -> char * { return js_strdup(ctx, str); }

	M_qjsm_func $js_strndup (JSContext * ctx, char const * s, size_t n) -> char * { return js_strndup(ctx, s, n); }

	M_qjsm_type $JSMemoryUsage = JSMemoryUsage;

	M_qjsm_func $JS_ComputeMemoryUsage (JSRuntime * rt, JSMemoryUsage * s) -> void { return JS_ComputeMemoryUsage(rt, s); }

	M_qjsm_func $JS_DumpMemoryUsage (FILE * fp, JSMemoryUsage const * s, JSRuntime * rt) -> void { return JS_DumpMemoryUsage(fp, s, rt); }

	M_qjsm_valc $JS_ATOM_NULL = JS_ATOM_NULL;

	M_qjsm_func $JS_NewAtomLen (JSContext * ctx, char const * str, size_t len) -> JSAtom { return JS_NewAtomLen(ctx, str, len); }

	M_qjsm_func $JS_NewAtom (JSContext * ctx, char const * str) -> JSAtom { return JS_NewAtom(ctx, str); }

	M_qjsm_func $JS_NewAtomUInt32 (JSContext * ctx, uint32_t n) -> JSAtom { return JS_NewAtomUInt32(ctx, n); }

	M_qjsm_func $JS_DupAtom (JSContext * ctx, JSAtom v) -> JSAtom { return JS_DupAtom(ctx, v); }

	M_qjsm_func $JS_FreeAtom (JSContext * ctx, JSAtom v) -> void { return JS_FreeAtom(ctx, v); }

	M_qjsm_func $JS_FreeAtomRT (JSRuntime * rt, JSAtom v) -> void { return JS_FreeAtomRT(rt, v); }

	M_qjsm_func $JS_AtomToValue (JSContext * ctx, JSAtom atom) -> JSValue { return JS_AtomToValue(ctx, atom); }

	M_qjsm_func $JS_AtomToString (JSContext * ctx, JSAtom atom) -> JSValue { return JS_AtomToString(ctx, atom); }

	M_qjsm_func $JS_AtomToCString (JSContext * ctx, JSAtom atom) -> char const * { return JS_AtomToCString(ctx, atom); }

	M_qjsm_func $JS_ValueToAtom (JSContext * ctx, JSValue val) -> JSAtom { return JS_ValueToAtom(ctx, val); }

	M_qjsm_type $JSPropertyEnum = JSPropertyEnum;

	M_qjsm_type $JSPropertyDescriptor = JSPropertyDescriptor;

	M_qjsm_type $JSClassExoticMethods = JSClassExoticMethods;

	M_qjsm_type $JSClassFinalizer = JSClassFinalizer;

	M_qjsm_type $JSClassGCMark = JSClassGCMark;

	M_qjsm_valc $JS_CALL_FLAG_CONSTRUCTOR = JS_CALL_FLAG_CONSTRUCTOR;

	M_qjsm_type $JSClassCall = JSClassCall;

	M_qjsm_type $JSClassDef = JSClassDef;

	M_qjsm_valc $JS_INVALID_CLASS_ID = JS_INVALID_CLASS_ID;

	M_qjsm_func $JS_NewClassID (JSRuntime * rt, JSClassID * pclass_id) -> JSClassID { return JS_NewClassID(rt, pclass_id); }

	M_qjsm_func $JS_GetClassID (JSValue v) -> JSClassID { return JS_GetClassID(v); }

	M_qjsm_func $JS_NewClass (JSRuntime * rt, JSClassID class_id, JSClassDef const * class_def) -> int { return JS_NewClass(rt, class_id, class_def); }

	M_qjsm_func $JS_IsRegisteredClass (JSRuntime * rt, JSClassID class_id) -> int { return JS_IsRegisteredClass(rt, class_id); }

	M_qjsm_func $JS_NewBool (JSContext * ctx, JS_BOOL val) -> JSValue { return JS_NewBool(ctx, val); }

	M_qjsm_func $JS_NewInt32 (JSContext * ctx, int32_t val) -> JSValue { return JS_NewInt32(ctx, val); }

	M_qjsm_func $JS_NewFloat64 (JSContext * ctx, double val) -> JSValue { return JS_NewFloat64(ctx, val); }

	M_qjsm_func $JS_NewCatchOffset (JSContext * ctx, int32_t val) -> JSValue { return JS_NewCatchOffset(ctx, val); }

	M_qjsm_func $JS_NewInt64 (JSContext * ctx, int64_t val) -> JSValue { return JS_NewInt64(ctx, val); }

	M_qjsm_func $JS_NewUint32 (JSContext * ctx, uint32_t val) -> JSValue { return JS_NewUint32(ctx, val); }

	M_qjsm_func $JS_NewNumber (JSContext * ctx, double d) -> JSValue { return JS_NewNumber(ctx, d); }

	M_qjsm_func $JS_NewBigInt64 (JSContext * ctx, int64_t v) -> JSValue { return JS_NewBigInt64(ctx, v); }

	M_qjsm_func $JS_NewBigUint64 (JSContext * ctx, uint64_t v) -> JSValue { return JS_NewBigUint64(ctx, v); }

	M_qjsm_func $JS_IsNumber (JSValue v) -> JS_BOOL { return JS_IsNumber(v); }

	M_qjsm_func $JS_IsBigInt (JSContext * ctx, JSValue v) -> JS_BOOL { return JS_IsBigInt(ctx, v); }

	M_qjsm_func $JS_IsBool (JSValue v) -> JS_BOOL { return JS_IsBool(v); }

	M_qjsm_func $JS_IsNull (JSValue v) -> JS_BOOL { return JS_IsNull(v); }

	M_qjsm_func $JS_IsUndefined (JSValue v) -> JS_BOOL { return JS_IsUndefined(v); }

	M_qjsm_func $JS_IsException (JSValue v) -> JS_BOOL { return JS_IsException(v); }

	M_qjsm_func $JS_IsUninitialized (JSValue v) -> JS_BOOL { return JS_IsUninitialized(v); }

	M_qjsm_func $JS_IsString (JSValue v) -> JS_BOOL { return JS_IsString(v); }

	M_qjsm_func $JS_IsSymbol (JSValue v) -> JS_BOOL { return JS_IsSymbol(v); }

	M_qjsm_func $JS_IsObject (JSValue v) -> JS_BOOL { return JS_IsObject(v); }

	M_qjsm_func $JS_Throw (JSContext * ctx, JSValue obj) -> JSValue { return JS_Throw(ctx, obj); }

	M_qjsm_func $JS_GetException (JSContext * ctx) -> JSValue { return JS_GetException(ctx); }

	M_qjsm_func $JS_HasException (JSContext * ctx) -> JS_BOOL { return JS_HasException(ctx); }

	M_qjsm_func $JS_IsError (JSContext * ctx, JSValue val) -> JS_BOOL { return JS_IsError(ctx, val); }

	M_qjsm_func $JS_ResetUncatchableError (JSContext * ctx) -> void { return JS_ResetUncatchableError(ctx); }

	M_qjsm_func $JS_NewError (JSContext * ctx) -> JSValue { return JS_NewError(ctx); }

	// NOTE : variadic
	M_qjsm_valc $JS_ThrowPlainError = &JS_ThrowPlainError;

	// NOTE : variadic
	M_qjsm_valc $JS_ThrowSyntaxError = &JS_ThrowSyntaxError;

	// NOTE : variadic
	M_qjsm_valc $JS_ThrowTypeError = &JS_ThrowTypeError;

	// NOTE : variadic
	M_qjsm_valc $JS_ThrowReferenceError = &JS_ThrowReferenceError;

	// NOTE : variadic
	M_qjsm_valc $JS_ThrowRangeError = &JS_ThrowRangeError;

	// NOTE : variadic
	M_qjsm_valc $JS_ThrowInternalError = &JS_ThrowInternalError;

	M_qjsm_func $JS_ThrowOutOfMemory (JSContext * ctx) -> JSValue { return JS_ThrowOutOfMemory(ctx); }

	M_qjsm_func $JS_FreeValue (JSContext * ctx, JSValue v) -> void { return JS_FreeValue(ctx, v); }

	M_qjsm_func $JS_FreeValueRT (JSRuntime * rt, JSValue v) -> void { return JS_FreeValueRT(rt, v); }

	M_qjsm_func $JS_DupValue (JSContext * ctx, JSValue v) -> JSValue { return JS_DupValue(ctx, v); }

	M_qjsm_func $JS_DupValueRT (JSRuntime * rt, JSValue v) -> JSValue { return JS_DupValueRT(rt, v); }

	M_qjsm_func $JS_ToBool (JSContext * ctx, JSValue val) -> int { return JS_ToBool(ctx, val); }

	M_qjsm_func $JS_ToInt32 (JSContext * ctx, int32_t * pres, JSValue val) -> int { return JS_ToInt32(ctx, pres, val); }

	M_qjsm_func $JS_ToUint32 (JSContext * ctx, uint32_t * pres, JSValue val) -> int { return JS_ToUint32(ctx, pres, val); }

	M_qjsm_func $JS_ToInt64 (JSContext * ctx, int64_t * pres, JSValue val) -> int { return JS_ToInt64(ctx, pres, val); }

	M_qjsm_func $JS_ToIndex (JSContext * ctx, uint64_t * plen, JSValue val) -> int { return JS_ToIndex(ctx, plen, val); }

	M_qjsm_func $JS_ToFloat64 (JSContext * ctx, double * pres, JSValue val) -> int { return JS_ToFloat64(ctx, pres, val); }

	M_qjsm_func $JS_ToBigInt64 (JSContext * ctx, int64_t * pres, JSValue val) -> int { return JS_ToBigInt64(ctx, pres, val); }

	M_qjsm_func $JS_ToBigUint64 (JSContext * ctx, uint64_t * pres, JSValue val) -> int { return JS_ToBigUint64(ctx, pres, val); }

	M_qjsm_func $JS_ToInt64Ext (JSContext * ctx, int64_t * pres, JSValue val) -> int { return JS_ToInt64Ext(ctx, pres, val); }

	M_qjsm_func $JS_NewStringLen (JSContext * ctx, char const * str1, size_t len1) -> JSValue { return JS_NewStringLen(ctx, str1, len1); }

	M_qjsm_func $JS_NewString (JSContext * ctx, char const * str) -> JSValue { return JS_NewString(ctx, str); }

	M_qjsm_func $JS_NewAtomString (JSContext * ctx, char const * str) -> JSValue { return JS_NewAtomString(ctx, str); }

	M_qjsm_func $JS_ToString (JSContext * ctx, JSValue val) -> JSValue { return JS_ToString(ctx, val); }

	M_qjsm_func $JS_ToPropertyKey (JSContext * ctx, JSValue val) -> JSValue { return JS_ToPropertyKey(ctx, val); }

	M_qjsm_func $JS_ToCStringLen2 (JSContext * ctx, size_t * plen, JSValue val1, JS_BOOL cesu8) -> char const * { return JS_ToCStringLen2(ctx, plen, val1, cesu8); }

	M_qjsm_func $JS_ToCStringLen (JSContext * ctx, size_t * plen, JSValue val1) -> char const * { return JS_ToCStringLen(ctx, plen, val1); }

	M_qjsm_func $JS_ToCString (JSContext * ctx, JSValue val1) -> char const * { return JS_ToCString(ctx, val1); }

	M_qjsm_func $JS_FreeCString (JSContext * ctx, char const * ptr) -> void { return JS_FreeCString(ctx, ptr); }

	M_qjsm_func $JS_NewObjectProtoClass (JSContext * ctx, JSValue proto, JSClassID class_id) -> JSValue { return JS_NewObjectProtoClass(ctx, proto, class_id); }

	M_qjsm_func $JS_NewObjectClass (JSContext * ctx, int class_id) -> JSValue { return JS_NewObjectClass(ctx, class_id); }

	M_qjsm_func $JS_NewObjectProto (JSContext * ctx, JSValue proto) -> JSValue { return JS_NewObjectProto(ctx, proto); }

	M_qjsm_func $JS_NewObject (JSContext * ctx) -> JSValue { return JS_NewObject(ctx); }

	M_qjsm_func $JS_IsFunction (JSContext * ctx, JSValue val) -> JS_BOOL { return JS_IsFunction(ctx, val); }

	M_qjsm_func $JS_IsConstructor (JSContext * ctx, JSValue val) -> JS_BOOL { return JS_IsConstructor(ctx, val); }

	M_qjsm_func $JS_SetConstructorBit (JSContext * ctx, JSValue func_obj, JS_BOOL val) -> JS_BOOL { return JS_SetConstructorBit(ctx, func_obj, val); }

	M_qjsm_func $JS_NewArray (JSContext * ctx) -> JSValue { return JS_NewArray(ctx); }

	M_qjsm_func $JS_IsArray (JSContext * ctx, JSValue val) -> int { return JS_IsArray(ctx, val); }

	M_qjsm_func $JS_NewDate (JSContext * ctx, double epoch_ms) -> JSValue { return JS_NewDate(ctx, epoch_ms); }

	M_qjsm_func $JS_GetProperty (JSContext * ctx, JSValue this_obj, JSAtom prop) -> JSValue { return JS_GetProperty(ctx, this_obj, prop); }

	M_qjsm_func $JS_GetPropertyUint32 (JSContext * ctx, JSValue this_obj, uint32_t idx) -> JSValue { return JS_GetPropertyUint32(ctx, this_obj, idx); }

	M_qjsm_func $JS_GetPropertyInt64 (JSContext * ctx, JSValue this_obj, int64_t idx) -> JSValue { return JS_GetPropertyInt64(ctx, this_obj, idx); }

	M_qjsm_func $JS_GetPropertyStr (JSContext * ctx, JSValue this_obj, char const * prop) -> JSValue { return JS_GetPropertyStr(ctx, this_obj, prop); }

	M_qjsm_func $JS_SetProperty (JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val) -> int { return JS_SetProperty(ctx, this_obj, prop, val); }

	M_qjsm_func $JS_SetPropertyUint32 (JSContext * ctx, JSValue this_obj, uint32_t idx, JSValue val) -> int { return JS_SetPropertyUint32(ctx, this_obj, idx, val); }

	M_qjsm_func $JS_SetPropertyInt64 (JSContext * ctx, JSValue this_obj, int64_t idx, JSValue val) -> int { return JS_SetPropertyInt64(ctx, this_obj, idx, val); }

	M_qjsm_func $JS_SetPropertyStr (JSContext * ctx, JSValue this_obj, char const * prop, JSValue val) -> int { return JS_SetPropertyStr(ctx, this_obj, prop, val); }

	M_qjsm_func $JS_HasProperty (JSContext * ctx, JSValue this_obj, JSAtom prop) -> int { return JS_HasProperty(ctx, this_obj, prop); }

	M_qjsm_func $JS_IsExtensible (JSContext * ctx, JSValue obj) -> int { return JS_IsExtensible(ctx, obj); }

	M_qjsm_func $JS_PreventExtensions (JSContext * ctx, JSValue obj) -> int { return JS_PreventExtensions(ctx, obj); }

	M_qjsm_func $JS_DeleteProperty (JSContext * ctx, JSValue obj, JSAtom prop, int flags) -> int { return JS_DeleteProperty(ctx, obj, prop, flags); }

	M_qjsm_func $JS_SetPrototype (JSContext * ctx, JSValue obj, JSValue proto_val) -> int { return JS_SetPrototype(ctx, obj, proto_val); }

	M_qjsm_func $JS_GetPrototype (JSContext * ctx, JSValue val) -> JSValue { return JS_GetPrototype(ctx, val); }

	M_qjsm_func $JS_GetLength (JSContext * ctx, JSValue obj, int64_t * pres) -> int { return JS_GetLength(ctx, obj, pres); }

	M_qjsm_func $JS_SetLength (JSContext * ctx, JSValue obj, int64_t len) -> int { return JS_SetLength(ctx, obj, len); }

	M_qjsm_valc $JS_GPN_STRING_MASK = JS_GPN_STRING_MASK;

	M_qjsm_valc $JS_GPN_SYMBOL_MASK = JS_GPN_SYMBOL_MASK;

	M_qjsm_valc $JS_GPN_PRIVATE_MASK = JS_GPN_PRIVATE_MASK;

	M_qjsm_valc $JS_GPN_ENUM_ONLY = JS_GPN_ENUM_ONLY;

	M_qjsm_valc $JS_GPN_SET_ENUM = JS_GPN_SET_ENUM;

	M_qjsm_func $JS_GetOwnPropertyNames (JSContext * ctx, JSPropertyEnum * * ptab, uint32_t * plen, JSValue obj, int flags) -> int { return JS_GetOwnPropertyNames(ctx, ptab, plen, obj, flags); }

	M_qjsm_func $JS_GetOwnProperty (JSContext * ctx, JSPropertyDescriptor * desc, JSValue obj, JSAtom prop) -> int { return JS_GetOwnProperty(ctx, desc, obj, prop); }

	M_qjsm_func $JS_FreePropertyEnum (JSContext * ctx, JSPropertyEnum * tab, uint32_t len) -> void { return JS_FreePropertyEnum(ctx, tab, len); }

	M_qjsm_func $JS_Call (JSContext * ctx, JSValue func_obj, JSValue this_obj, int argc, JSValue * argv) -> JSValue { return JS_Call(ctx, func_obj, this_obj, argc, argv); }

	M_qjsm_func $JS_Invoke (JSContext * ctx, JSValue this_val, JSAtom atom, int argc, JSValue * argv) -> JSValue { return JS_Invoke(ctx, this_val, atom, argc, argv); }

	M_qjsm_func $JS_CallConstructor (JSContext * ctx, JSValue func_obj, int argc, JSValue * argv) -> JSValue { return JS_CallConstructor(ctx, func_obj, argc, argv); }

	M_qjsm_func $JS_CallConstructor2 (JSContext * ctx, JSValue func_obj, JSValue new_target, int argc, JSValue * argv) -> JSValue { return JS_CallConstructor2(ctx, func_obj, new_target, argc, argv); }

	M_qjsm_func $JS_DetectModule (char const * input, size_t input_len) -> JS_BOOL { return JS_DetectModule(input, input_len); }

	M_qjsm_func $JS_Eval (JSContext * ctx, char const * input, size_t input_len, char const * filename, int eval_flags) -> JSValue { return JS_Eval(ctx, input, input_len, filename, eval_flags); }

	M_qjsm_func $JS_EvalThis (JSContext * ctx, JSValue this_obj, char const * input, size_t input_len, char const * filename, int eval_flags) -> JSValue { return JS_EvalThis(ctx, this_obj, input, input_len, filename, eval_flags); }

	M_qjsm_func $JS_GetGlobalObject (JSContext * ctx) -> JSValue { return JS_GetGlobalObject(ctx); }

	M_qjsm_func $JS_IsInstanceOf (JSContext * ctx, JSValue val, JSValue obj) -> int { return JS_IsInstanceOf(ctx, val, obj); }

	M_qjsm_func $JS_DefineProperty (JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val, JSValue getter, JSValue setter, int flags) -> int { return JS_DefineProperty(ctx, this_obj, prop, val, getter, setter, flags); }

	M_qjsm_func $JS_DefinePropertyValue (JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue val, int flags) -> int { return JS_DefinePropertyValue(ctx, this_obj, prop, val, flags); }

	M_qjsm_func $JS_DefinePropertyValueUint32 (JSContext * ctx, JSValue this_obj, uint32_t idx, JSValue val, int flags) -> int { return JS_DefinePropertyValueUint32(ctx, this_obj, idx, val, flags); }

	M_qjsm_func $JS_DefinePropertyValueStr (JSContext * ctx, JSValue this_obj, char const * prop, JSValue val, int flags) -> int { return JS_DefinePropertyValueStr(ctx, this_obj, prop, val, flags); }

	M_qjsm_func $JS_DefinePropertyGetSet (JSContext * ctx, JSValue this_obj, JSAtom prop, JSValue getter, JSValue setter, int flags) -> int { return JS_DefinePropertyGetSet(ctx, this_obj, prop, getter, setter, flags); }

	M_qjsm_func $JS_SetOpaque (JSValue obj, void * opaque) -> JS_BOOL { return JS_SetOpaque(obj, opaque); }

	M_qjsm_func $JS_GetOpaque (JSValue obj, JSClassID class_id) -> void * { return JS_GetOpaque(obj, class_id); }

	M_qjsm_func $JS_GetOpaque2 (JSContext * ctx, JSValue obj, JSClassID class_id) -> void * { return JS_GetOpaque2(ctx, obj, class_id); }

	M_qjsm_func $JS_GetAnyOpaque (JSValue obj, JSClassID * class_id) -> void * { return JS_GetAnyOpaque(obj, class_id); }

	M_qjsm_func $JS_ParseJSON (JSContext * ctx, char const * buf, size_t buf_len, char const * filename) -> JSValue { return JS_ParseJSON(ctx, buf, buf_len, filename); }

	M_qjsm_func $JS_JSONStringify (JSContext * ctx, JSValue obj, JSValue replacer, JSValue space0) -> JSValue { return JS_JSONStringify(ctx, obj, replacer, space0); }

	M_qjsm_type $JSFreeArrayBufferDataFunc = JSFreeArrayBufferDataFunc;

	M_qjsm_func $JS_NewArrayBuffer (JSContext * ctx, uint8_t * buf, size_t len, JSFreeArrayBufferDataFunc * free_func, void * opaque, JS_BOOL is_shared) -> JSValue { return JS_NewArrayBuffer(ctx, buf, len, free_func, opaque, is_shared); }

	M_qjsm_func $JS_NewArrayBufferCopy (JSContext * ctx, uint8_t const * buf, size_t len) -> JSValue { return JS_NewArrayBufferCopy(ctx, buf, len); }

	M_qjsm_func $JS_DetachArrayBuffer (JSContext * ctx, JSValue obj) -> void { return JS_DetachArrayBuffer(ctx, obj); }

	M_qjsm_func $JS_GetArrayBuffer (JSContext * ctx, size_t * psize, JSValue obj) -> uint8_t * { return JS_GetArrayBuffer(ctx, psize, obj); }

	M_qjsm_func $JS_IsArrayBuffer (JSValue obj) -> JS_BOOL { return JS_IsArrayBuffer(obj); }

	M_qjsm_func $JS_GetUint8Array (JSContext * ctx, size_t * psize, JSValue obj) -> uint8_t * { return JS_GetUint8Array(ctx, psize, obj); }

	M_qjsm_func $JS_GetTypedArrayBuffer (JSContext * ctx, JSValue obj, size_t * pbyte_offset, size_t * pbyte_length, size_t * pbytes_per_element) -> JSValue { return JS_GetTypedArrayBuffer(ctx, obj, pbyte_offset, pbyte_length, pbytes_per_element); }

	M_qjsm_func $JS_NewUint8Array (JSContext * ctx, uint8_t * buf, size_t len, JSFreeArrayBufferDataFunc * free_func, void * opaque, JS_BOOL is_shared) -> JSValue { return JS_NewUint8Array(ctx, buf, len, free_func, opaque, is_shared); }

	M_qjsm_func $JS_IsUint8Array (JSValue obj) -> JS_BOOL { return JS_IsUint8Array(obj); }

	M_qjsm_func $JS_NewUint8ArrayCopy (JSContext * ctx, uint8_t const * buf, size_t len) -> JSValue { return JS_NewUint8ArrayCopy(ctx, buf, len); }

	M_qjsm_type $JSSharedArrayBufferFunctions = JSSharedArrayBufferFunctions;

	M_qjsm_func $JS_SetSharedArrayBufferFunctions (JSRuntime * rt, JSSharedArrayBufferFunctions const * sf) -> void { return JS_SetSharedArrayBufferFunctions(rt, sf); }

	M_qjsm_type $JSPromiseStateEnum = JSPromiseStateEnum;

	M_qjsm_valc $JS_PROMISE_PENDING = JS_PROMISE_PENDING;

	M_qjsm_valc $JS_PROMISE_FULFILLED = JS_PROMISE_FULFILLED;

	M_qjsm_valc $JS_PROMISE_REJECTED = JS_PROMISE_REJECTED;

	M_qjsm_func $JS_NewPromiseCapability (JSContext * ctx, JSValue * resolving_funcs) -> JSValue { return JS_NewPromiseCapability(ctx, resolving_funcs); }

	M_qjsm_func $JS_PromiseState (JSContext * ctx, JSValue promise) -> JSPromiseStateEnum { return JS_PromiseState(ctx, promise); }

	M_qjsm_func $JS_PromiseResult (JSContext * ctx, JSValue promise) -> JSValue { return JS_PromiseResult(ctx, promise); }

	M_qjsm_func $JS_NewSymbol (JSContext * ctx, char const * description, JS_BOOL is_global) -> JSValue { return JS_NewSymbol(ctx, description, is_global); }

	M_qjsm_type $JSHostPromiseRejectionTracker = JSHostPromiseRejectionTracker;

	M_qjsm_func $JS_SetHostPromiseRejectionTracker (JSRuntime * rt, JSHostPromiseRejectionTracker * cb, void * opaque) -> void { return JS_SetHostPromiseRejectionTracker(rt, cb, opaque); }

	M_qjsm_type $JSInterruptHandler = JSInterruptHandler;

	M_qjsm_func $JS_SetInterruptHandler (JSRuntime * rt, JSInterruptHandler * cb, void * opaque) -> void { return JS_SetInterruptHandler(rt, cb, opaque); }

	M_qjsm_func $JS_SetCanBlock (JSRuntime * rt, JS_BOOL can_block) -> void { return JS_SetCanBlock(rt, can_block); }

	M_qjsm_func $JS_SetIsHTMLDDA (JSContext * ctx, JSValue obj) -> void { return JS_SetIsHTMLDDA(ctx, obj); }

	M_qjsm_type $JSModuleDef = JSModuleDef;

	M_qjsm_type $JSModuleNormalizeFunc = JSModuleNormalizeFunc;

	M_qjsm_type $JSModuleLoaderFunc = JSModuleLoaderFunc;

	M_qjsm_func $JS_SetModuleLoaderFunc (JSRuntime * rt, JSModuleNormalizeFunc * module_normalize, JSModuleLoaderFunc * module_loader, void * opaque) -> void { return JS_SetModuleLoaderFunc(rt, module_normalize, module_loader, opaque); }

	M_qjsm_func $JS_GetImportMeta (JSContext * ctx, JSModuleDef * m) -> JSValue { return JS_GetImportMeta(ctx, m); }

	M_qjsm_func $JS_GetModuleName (JSContext * ctx, JSModuleDef * m) -> JSAtom { return JS_GetModuleName(ctx, m); }

	M_qjsm_func $JS_GetModuleNamespace (JSContext * ctx, JSModuleDef * m) -> JSValue { return JS_GetModuleNamespace(ctx, m); }

	M_qjsm_type $JSJobFunc = JSJobFunc;

	M_qjsm_func $JS_EnqueueJob (JSContext * ctx, JSJobFunc * job_func, int argc, JSValue * argv) -> int { return JS_EnqueueJob(ctx, job_func, argc, argv); }

	M_qjsm_func $JS_IsJobPending (JSRuntime * rt) -> JS_BOOL { return JS_IsJobPending(rt); }

	M_qjsm_func $JS_ExecutePendingJob (JSRuntime * rt, JSContext * * pctx) -> int { return JS_ExecutePendingJob(rt, pctx); }

	M_qjsm_type $JSSABTab = JSSABTab;

	M_qjsm_valc $JS_WRITE_OBJ_BYTECODE = JS_WRITE_OBJ_BYTECODE;

	M_qjsm_valc $JS_WRITE_OBJ_BSWAP = JS_WRITE_OBJ_BSWAP;

	M_qjsm_valc $JS_WRITE_OBJ_SAB = JS_WRITE_OBJ_SAB;

	M_qjsm_valc $JS_WRITE_OBJ_REFERENCE = JS_WRITE_OBJ_REFERENCE;

	M_qjsm_valc $JS_WRITE_OBJ_STRIP_SOURCE = JS_WRITE_OBJ_STRIP_SOURCE;

	M_qjsm_valc $JS_WRITE_OBJ_STRIP_DEBUG = JS_WRITE_OBJ_STRIP_DEBUG;

	M_qjsm_func $JS_WriteObject (JSContext * ctx, size_t * psize, JSValue obj, int flags) -> uint8_t * { return JS_WriteObject(ctx, psize, obj, flags); }

	M_qjsm_func $JS_WriteObject2 (JSContext * ctx, size_t * psize, JSValue obj, int flags, JSSABTab * psab_tab) -> uint8_t * { return JS_WriteObject2(ctx, psize, obj, flags, psab_tab); }

	M_qjsm_valc $JS_READ_OBJ_BYTECODE = JS_READ_OBJ_BYTECODE;

	M_qjsm_valc $JS_READ_OBJ_ROM_DATA = JS_READ_OBJ_ROM_DATA;

	M_qjsm_valc $JS_READ_OBJ_SAB = JS_READ_OBJ_SAB;

	M_qjsm_valc $JS_READ_OBJ_REFERENCE = JS_READ_OBJ_REFERENCE;

	M_qjsm_func $JS_ReadObject (JSContext * ctx, uint8_t const * buf, size_t buf_len, int flags) -> JSValue { return JS_ReadObject(ctx, buf, buf_len, flags); }

	M_qjsm_func $JS_ReadObject2 (JSContext * ctx, uint8_t const * buf, size_t buf_len, int flags, JSSABTab * psab_tab) -> JSValue { return JS_ReadObject2(ctx, buf, buf_len, flags, psab_tab); }

	M_qjsm_func $JS_EvalFunction (JSContext * ctx, JSValue fun_obj) -> JSValue { return JS_EvalFunction(ctx, fun_obj); }

	M_qjsm_func $JS_ResolveModule (JSContext * ctx, JSValue obj) -> int { return JS_ResolveModule(ctx, obj); }

	M_qjsm_func $JS_GetScriptOrModuleName (JSContext * ctx, int n_stack_levels) -> JSAtom { return JS_GetScriptOrModuleName(ctx, n_stack_levels); }

	M_qjsm_func $JS_LoadModule (JSContext * ctx, char const * basename, char const * filename) -> JSValue { return JS_LoadModule(ctx, basename, filename); }

	M_qjsm_valc $JS_CFUNC_generic = JS_CFUNC_generic;

	M_qjsm_valc $JS_CFUNC_generic_magic = JS_CFUNC_generic_magic;

	M_qjsm_valc $JS_CFUNC_constructor = JS_CFUNC_constructor;

	M_qjsm_valc $JS_CFUNC_constructor_magic = JS_CFUNC_constructor_magic;

	M_qjsm_valc $JS_CFUNC_constructor_or_func = JS_CFUNC_constructor_or_func;

	M_qjsm_valc $JS_CFUNC_constructor_or_func_magic = JS_CFUNC_constructor_or_func_magic;

	M_qjsm_valc $JS_CFUNC_f_f = JS_CFUNC_f_f;

	M_qjsm_valc $JS_CFUNC_f_f_f = JS_CFUNC_f_f_f;

	M_qjsm_valc $JS_CFUNC_getter = JS_CFUNC_getter;

	M_qjsm_valc $JS_CFUNC_setter = JS_CFUNC_setter;

	M_qjsm_valc $JS_CFUNC_getter_magic = JS_CFUNC_getter_magic;

	M_qjsm_valc $JS_CFUNC_setter_magic = JS_CFUNC_setter_magic;

	M_qjsm_valc $JS_CFUNC_iterator_next = JS_CFUNC_iterator_next;

	M_qjsm_type $JSCFunctionEnum = JSCFunctionEnum;

	M_qjsm_type $JSCFunctionType = JSCFunctionType;

	M_qjsm_func $JS_NewCFunction2 (JSContext * ctx, JSCFunction * func, char const * name, int length, JSCFunctionEnum cproto, int magic) -> JSValue { return JS_NewCFunction2(ctx, func, name, length, cproto, magic); }

	M_qjsm_func $JS_NewCFunctionData (JSContext * ctx, JSCFunctionData * func, int length, int magic, int data_len, JSValue * data) -> JSValue { return JS_NewCFunctionData(ctx, func, length, magic, data_len, data); }

	M_qjsm_func $JS_NewCFunction (JSContext * ctx, JSCFunction * func, char const * name, int length) -> JSValue { return JS_NewCFunction(ctx, func, name, length); }

	M_qjsm_func $JS_NewCFunctionMagic (JSContext * ctx, JSCFunctionMagic * func, char const * name, int length, JSCFunctionEnum cproto, int magic) -> JSValue { return JS_NewCFunctionMagic(ctx, func, name, length, cproto, magic); }

	M_qjsm_func $JS_SetConstructor (JSContext * ctx, JSValue func_obj, JSValue proto) -> void { return JS_SetConstructor(ctx, func_obj, proto); }

	M_qjsm_type $JSCFunctionListEntry = JSCFunctionListEntry;

	M_qjsm_valc $JS_DEF_CFUNC = JS_DEF_CFUNC;

	M_qjsm_valc $JS_DEF_CGETSET = JS_DEF_CGETSET;

	M_qjsm_valc $JS_DEF_CGETSET_MAGIC = JS_DEF_CGETSET_MAGIC;

	M_qjsm_valc $JS_DEF_PROP_STRING = JS_DEF_PROP_STRING;

	M_qjsm_valc $JS_DEF_PROP_INT32 = JS_DEF_PROP_INT32;

	M_qjsm_valc $JS_DEF_PROP_INT64 = JS_DEF_PROP_INT64;

	M_qjsm_valc $JS_DEF_PROP_DOUBLE = JS_DEF_PROP_DOUBLE;

	M_qjsm_valc $JS_DEF_PROP_UNDEFINED = JS_DEF_PROP_UNDEFINED;

	M_qjsm_valc $JS_DEF_OBJECT = JS_DEF_OBJECT;

	M_qjsm_valc $JS_DEF_ALIAS = JS_DEF_ALIAS;

	M_qjsm_func $JS_CFUNC_DEF (char const * name, uint8_t length, decltype(JSCFunctionType::generic) func1) -> JSCFunctionListEntry { return JS_CFUNC_DEF(name, length, func1); }

	M_qjsm_func $JS_CFUNC_DEF2 (char const * name, uint8_t length, decltype(JSCFunctionType::generic) func1, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_CFUNC_DEF2(name, length, func1, prop_flags); }

	M_qjsm_func $JS_CFUNC_MAGIC_DEF (char const * name, uint8_t length, decltype(JSCFunctionType::generic_magic) func1, int16_t magic) -> JSCFunctionListEntry { return JS_CFUNC_MAGIC_DEF(name, length, func1, magic); }

	// SKIP : can not implement as a function
	// JS_CFUNC_SPECIAL_DEF

	M_qjsm_func $JS_ITERATOR_NEXT_DEF (char const * name, uint8_t length, decltype(JSCFunctionType::iterator_next) func1, int16_t magic) -> JSCFunctionListEntry { return JS_ITERATOR_NEXT_DEF(name, length, func1, magic); }

	M_qjsm_func $JS_CGETSET_DEF (char const * name, decltype(JSCFunctionType::getter) fgetter, decltype(JSCFunctionType::setter) fsetter) -> JSCFunctionListEntry { return JS_CGETSET_DEF(name, fgetter, fsetter); }

	M_qjsm_func $JS_CGETSET_DEF2 (char const * name, decltype(JSCFunctionType::getter) fgetter, decltype(JSCFunctionType::setter) fsetter, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_CGETSET_DEF2(name, fgetter, fsetter, prop_flags); }

	M_qjsm_func $JS_CGETSET_MAGIC_DEF (char const * name, decltype(JSCFunctionType::getter_magic) fgetter, decltype(JSCFunctionType::setter_magic) fsetter, int16_t magic) -> JSCFunctionListEntry { return JS_CGETSET_MAGIC_DEF(name, fgetter, fsetter, magic); }

	M_qjsm_func $JS_PROP_STRING_DEF (char const * name, char const * cstr, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_PROP_STRING_DEF(name, cstr, prop_flags); }

	M_qjsm_func $JS_PROP_INT32_DEF (char const * name, int32_t val, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_PROP_INT32_DEF(name, val, prop_flags); }

	M_qjsm_func $JS_PROP_INT64_DEF (char const * name, int64_t val, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_PROP_INT64_DEF(name, val, prop_flags); }

	M_qjsm_func $JS_PROP_DOUBLE_DEF (char const * name, double val, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_PROP_DOUBLE_DEF(name, val, prop_flags); }

	M_qjsm_func $JS_PROP_UNDEFINED_DEF (char const * name, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_PROP_UNDEFINED_DEF(name, prop_flags); }

	M_qjsm_func $JS_OBJECT_DEF (char const * name, JSCFunctionListEntry const * tab, int len, uint8_t prop_flags) -> JSCFunctionListEntry { return JS_OBJECT_DEF(name, tab, len, prop_flags); }

	M_qjsm_func $JS_ALIAS_DEF (char const * name, char const * from) -> JSCFunctionListEntry { return JS_ALIAS_DEF(name, from); }

	M_qjsm_func $JS_ALIAS_BASE_DEF (char const * name, char const * from, int base) -> JSCFunctionListEntry { return JS_ALIAS_BASE_DEF(name, from, base); }

	M_qjsm_func $JS_SetPropertyFunctionList (JSContext * ctx, JSValue obj, JSCFunctionListEntry const * tab, int len) -> void { return JS_SetPropertyFunctionList(ctx, obj, tab, len); }

	M_qjsm_type $JSModuleInitFunc = JSModuleInitFunc;

	M_qjsm_func $JS_NewCModule (JSContext * ctx, char const * name_str, JSModuleInitFunc * func) -> JSModuleDef * { return JS_NewCModule(ctx, name_str, func); }

	M_qjsm_func $JS_AddModuleExport (JSContext * ctx, JSModuleDef * m, char const * name_str) -> int { return JS_AddModuleExport(ctx, m, name_str); }

	M_qjsm_func $JS_AddModuleExportList (JSContext * ctx, JSModuleDef * m, JSCFunctionListEntry const * tab, int len) -> int { return JS_AddModuleExportList(ctx, m, tab, len); }

	M_qjsm_func $JS_SetModuleExport (JSContext * ctx, JSModuleDef * m, char const * export_name, JSValue val) -> int { return JS_SetModuleExport(ctx, m, export_name, val); }

	M_qjsm_func $JS_SetModuleExportList (JSContext * ctx, JSModuleDef * m, JSCFunctionListEntry const * tab, int len) -> int { return JS_SetModuleExportList(ctx, m, tab, len); }

	M_qjsm_valc $QJS_VERSION_MAJOR = QJS_VERSION_MAJOR;

	M_qjsm_valc $QJS_VERSION_MINOR = QJS_VERSION_MINOR;

	M_qjsm_valc $QJS_VERSION_PATCH = QJS_VERSION_PATCH;

	M_qjsm_valc $QJS_VERSION_SUFFIX = QJS_VERSION_SUFFIX;

	M_qjsm_func $JS_GetVersion () -> char const * { return JS_GetVersion(); }

	// NOTE : variadic
	M_qjsm_valc $js_std_cmd = &js_std_cmd;

}
