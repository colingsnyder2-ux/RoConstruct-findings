// roc 2009-12 008f67c7  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f67c7
//
// 008f67c7  8bff                 mov edi, edi
// 008f67c9  55                   push ebp
// 008f67ca  8bec                 mov ebp, esp
// 008f67cc  6a01                 push 1
// 008f67ce  e8e14a0000           call 0x8fb2b4
// 008f67d3  5d                   pop ebp
// 008f67d4  ff25c0b3b600         jmp dword ptr [0xb6b3c0]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }