// roc 2009-12 008f67ae  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f67ae
//
// 008f67ae  8bff                 mov edi, edi
// 008f67b0  55                   push ebp
// 008f67b1  8bec                 mov ebp, esp
// 008f67b3  6a01                 push 1
// 008f67b5  e8fa4a0000           call 0x8fb2b4
// 008f67ba  5d                   pop ebp
// 008f67bb  ff25e8b2b600         jmp dword ptr [0xb6b2e8]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }