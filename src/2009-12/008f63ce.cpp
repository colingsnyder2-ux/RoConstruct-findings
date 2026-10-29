// roc 2009-12 008f63ce  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f63ce
//
// 008f63ce  8bff                 mov edi, edi
// 008f63d0  55                   push ebp
// 008f63d1  8bec                 mov ebp, esp
// 008f63d3  6a01                 push 1
// 008f63d5  e8da4e0000           call 0x8fb2b4
// 008f63da  5d                   pop ebp
// 008f63db  ff25dcb2b600         jmp dword ptr [0xb6b2dc]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }