// roc 2009-12 008f7083  unit: std::D::DU?$char_traits::DV?$basic_streambuf::?$lexical_stream_limited_src  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f7083
//
// 008f7083  8bff                 mov edi, edi
// 008f7085  55                   push ebp
// 008f7086  8bec                 mov ebp, esp
// 008f7088  6a01                 push 1
// 008f708a  e825420000           call 0x8fb2b4
// 008f708f  5d                   pop ebp
// 008f7090  ff25ccb2b600         jmp dword ptr [0xb6b2cc]
// copied from an identical function in another client (function ?fn_ROCX000000_0081b62e@@YAHH@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD /Oy- /hotpatch
extern "C" int __stdcall helper(int);
extern "C" int __declspec(dllimport) tail(int);
int func_0081b62e(int x) { helper(1); return tail(x); }