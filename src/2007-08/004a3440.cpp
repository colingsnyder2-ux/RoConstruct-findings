// roc 2007-08 004a3440  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3440
//
// 004a3440  8b542408             mov edx, dword ptr [esp + 8]
// 004a3444  85d2                 test edx, edx
// 004a3446  8bc1                 mov eax, ecx
// 004a3448  668b4c2404           mov cx, word ptr [esp + 4]
// 004a344d  668908               mov word ptr [eax], cx
// 004a3450  741f                 je 0x4a3471
// 004a3452  53                   push ebx
// 004a3453  56                   push esi
// 004a3454  8d7002               lea esi, [eax + 2]
// 004a3457  2bf2                 sub esi, edx
// 004a3459  8da42400000000       lea esp, [esp]
// 004a3460  8a1a                 mov bl, byte ptr [edx]
// 004a3462  881c16               mov byte ptr [esi + edx], bl
// 004a3465  83c201               add edx, 1
// 004a3468  84db                 test bl, bl
// 004a346a  75f4                 jne 0x4a3460
// 004a346c  5e                   pop esi
// 004a346d  5b                   pop ebx
// 004a346e  c20800               ret 8
// 004a3471  c6400200             mov byte ptr [eax + 2], 0
// 004a3475  c20800               ret 8
// library rbxgs-raknet/RakNetTypes.cpp (function ??0SocketDescriptor@@QAE@GPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RakNetTypes.cpp
