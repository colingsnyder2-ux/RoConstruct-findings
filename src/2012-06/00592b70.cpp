// roc 2012-06 00592b70  unit: RBX::Network::ServerReplicator  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00592b70
//
// 00592b70  8b442404             mov eax, dword ptr [esp + 4]
// 00592b74  57                   push edi
// 00592b75  8bf9                 mov edi, ecx
// 00592b77  8907                 mov dword ptr [edi], eax
// 00592b79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00592b7d  894704               mov dword ptr [edi + 4], eax
// 00592b80  85c0                 test eax, eax
// 00592b82  7446                 je 0x592bca
// 00592b84  56                   push esi
// 00592b85  83c004               add eax, 4
// 00592b88  b901000000           mov ecx, 1
// 00592b8d  f00fc108             lock xadd dword ptr [eax], ecx
// 00592b91  8b742410             mov esi, dword ptr [esp + 0x10]
// 00592b95  85f6                 test esi, esi
// 00592b97  742a                 je 0x592bc3
// 00592b99  8d5604               lea edx, [esi + 4]
// 00592b9c  83c8ff               or eax, 0xffffffff
// 00592b9f  f00fc102             lock xadd dword ptr [edx], eax
// 00592ba3  751e                 jne 0x592bc3
// 00592ba5  8b16                 mov edx, dword ptr [esi]
// 00592ba7  8b4204               mov eax, dword ptr [edx + 4]
// 00592baa  8bce                 mov ecx, esi
// 00592bac  ffd0                 call eax
// 00592bae  8d4e08               lea ecx, [esi + 8]
// 00592bb1  83caff               or edx, 0xffffffff
// 00592bb4  f00fc111             lock xadd dword ptr [ecx], edx
// 00592bb8  7509                 jne 0x592bc3
// 00592bba  8b06                 mov eax, dword ptr [esi]
// 00592bbc  8b5008               mov edx, dword ptr [eax + 8]
// 00592bbf  8bce                 mov ecx, esi
// 00592bc1  ffd2                 call edx
// 00592bc3  5e                   pop esi
// 00592bc4  8bc7                 mov eax, edi
// 00592bc6  5f                   pop edi
// 00592bc7  c20800               ret 8
// 00592bca  8bc7                 mov eax, edi
// 00592bcc  5f                   pop edi
// 00592bcd  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage1@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
