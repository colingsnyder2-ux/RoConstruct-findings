// roc 2009-12 008f6e03  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f6e03
//
// 008f6e03  8bff                 mov edi, edi
// 008f6e05  55                   push ebp
// 008f6e06  8bec                 mov ebp, esp
// 008f6e08  6a01                 push 1
// 008f6e0a  e8a5440000           call 0x8fb2b4
// 008f6e0f  5d                   pop ebp
// 008f6e10  ff25c8b2b600         jmp dword ptr [0xb6b2c8]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }