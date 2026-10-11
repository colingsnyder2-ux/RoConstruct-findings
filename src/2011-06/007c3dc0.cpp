// roc 2011-06 007c3dc0  unit: RBX::Network::ConcurrentRakPeer::StatsUpdateJob  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c3dc0
//
// 007c3dc0  6aff                 push -1
// 007c3dc2  6829e09e00           push 0x9ee029
// 007c3dc7  64a100000000         mov eax, dword ptr fs:[0]
// 007c3dcd  50                   push eax
// 007c3dce  64892500000000       mov dword ptr fs:[0], esp
// 007c3dd5  51                   push ecx
// 007c3dd6  56                   push esi
// 007c3dd7  57                   push edi
// 007c3dd8  8bf9                 mov edi, ecx
// 007c3dda  897c2408             mov dword ptr [esp + 8], edi
// 007c3dde  8b7720               mov esi, dword ptr [edi + 0x20]
// 007c3de1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007c3de9  85f6                 test esi, esi
// 007c3deb  742a                 je 0x7c3e17
// 007c3ded  8d4604               lea eax, [esi + 4]
// 007c3df0  83c9ff               or ecx, 0xffffffff
// 007c3df3  f00fc108             lock xadd dword ptr [eax], ecx
// 007c3df7  751e                 jne 0x7c3e17
// 007c3df9  8b16                 mov edx, dword ptr [esi]
// 007c3dfb  8b4204               mov eax, dword ptr [edx + 4]
// 007c3dfe  8bce                 mov ecx, esi
// 007c3e00  ffd0                 call eax
// 007c3e02  8d4e08               lea ecx, [esi + 8]
// 007c3e05  83caff               or edx, 0xffffffff
// 007c3e08  f00fc111             lock xadd dword ptr [ecx], edx
// 007c3e0c  7509                 jne 0x7c3e17
// 007c3e0e  8b06                 mov eax, dword ptr [esi]
// 007c3e10  8b5008               mov edx, dword ptr [eax + 8]
// 007c3e13  8bce                 mov ecx, esi
// 007c3e15  ffd2                 call edx
// 007c3e17  8bcf                 mov ecx, edi
// 007c3e19  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007c3e21  ff15d004a400         call dword ptr [0xa404d0]
// 007c3e27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007c3e2b  5f                   pop edi
// 007c3e2c  5e                   pop esi
// 007c3e2d  64890d00000000       mov dword ptr fs:[0], ecx
// 007c3e34  83c410               add esp, 0x10
// 007c3e37  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
