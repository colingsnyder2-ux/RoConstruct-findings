// roc 2009-12 008f918d  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f918d
//
// 008f918d  8bff                 mov edi, edi
// 008f918f  55                   push ebp
// 008f9190  8bec                 mov ebp, esp
// 008f9192  6a01                 push 1
// 008f9194  e81b210000           call 0x8fb2b4
// 008f9199  5d                   pop ebp
// 008f919a  ff25f8b2b600         jmp dword ptr [0xb6b2f8]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }