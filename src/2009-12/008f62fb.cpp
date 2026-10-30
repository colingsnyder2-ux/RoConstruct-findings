// roc 2009-12 008f62fb  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f62fb
//
// 008f62fb  8bff                 mov edi, edi
// 008f62fd  55                   push ebp
// 008f62fe  8bec                 mov ebp, esp
// 008f6300  6a01                 push 1
// 008f6302  e8ad4f0000           call 0x8fb2b4
// 008f6307  5d                   pop ebp
// 008f6308  ff25b4b3b600         jmp dword ptr [0xb6b3b4]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }