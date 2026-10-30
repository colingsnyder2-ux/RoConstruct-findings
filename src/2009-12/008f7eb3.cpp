// roc 2009-12 008f7eb3  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f7eb3
//
// 008f7eb3  8bff                 mov edi, edi
// 008f7eb5  55                   push ebp
// 008f7eb6  8bec                 mov ebp, esp
// 008f7eb8  6a01                 push 1
// 008f7eba  e8f5330000           call 0x8fb2b4
// 008f7ebf  5d                   pop ebp
// 008f7ec0  ff2560b3b600         jmp dword ptr [0xb6b360]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }