// roc 2011-06 00512570  unit: RBX::Network::ClientReplicator  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512570
//
// 00512570  8b442404             mov eax, dword ptr [esp + 4]
// 00512574  56                   push esi
// 00512575  8b7008               mov esi, dword ptr [eax + 8]
// 00512578  85f6                 test esi, esi
// 0051257a  742b                 je 0x5125a7
// 0051257c  8d4e04               lea ecx, [esi + 4]
// 0051257f  83caff               or edx, 0xffffffff
// 00512582  f00fc111             lock xadd dword ptr [ecx], edx
// 00512586  751f                 jne 0x5125a7
// 00512588  8b06                 mov eax, dword ptr [esi]
// 0051258a  8b5004               mov edx, dword ptr [eax + 4]
// 0051258d  8bce                 mov ecx, esi
// 0051258f  ffd2                 call edx
// 00512591  8d4608               lea eax, [esi + 8]
// 00512594  83c9ff               or ecx, 0xffffffff
// 00512597  f00fc108             lock xadd dword ptr [eax], ecx
// 0051259b  750a                 jne 0x5125a7
// 0051259d  8b16                 mov edx, dword ptr [esi]
// 0051259f  8b4208               mov eax, dword ptr [edx + 8]
// 005125a2  8bce                 mov ecx, esi
// 005125a4  5e                   pop esi
// 005125a5  ffe0                 jmp eax
// 005125a7  5e                   pop esi
// 005125a8  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$_Destroy@UWaitItem@IdSerializer@Network@RBX@@@std@@YAXPAUWaitItem@IdSerializer@Network@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
