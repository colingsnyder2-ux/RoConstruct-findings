// roc 2009-12 008f69e8  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f69e8
//
// 008f69e8  8bff                 mov edi, edi
// 008f69ea  55                   push ebp
// 008f69eb  8bec                 mov ebp, esp
// 008f69ed  6a01                 push 1
// 008f69ef  e8c0480000           call 0x8fb2b4
// 008f69f4  5d                   pop ebp
// 008f69f5  ff25ccb3b600         jmp dword ptr [0xb6b3cc]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }