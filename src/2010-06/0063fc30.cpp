// roc 2010-06 0063fc30  unit: RBX::VVisit::?$BoundFuncDesc  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0063fc30
//
// 0063fc30  6aff                 push -1
// 0063fc32  6889009a00           push 0x9a0089
// 0063fc37  64a100000000         mov eax, dword ptr fs:[0]
// 0063fc3d  50                   push eax
// 0063fc3e  64892500000000       mov dword ptr fs:[0], esp
// 0063fc45  51                   push ecx
// 0063fc46  56                   push esi
// 0063fc47  57                   push edi
// 0063fc48  8bf9                 mov edi, ecx
// 0063fc4a  897c2408             mov dword ptr [esp + 8], edi
// 0063fc4e  8b7720               mov esi, dword ptr [edi + 0x20]
// 0063fc51  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0063fc59  85f6                 test esi, esi
// 0063fc5b  742a                 je 0x63fc87
// 0063fc5d  8d4604               lea eax, [esi + 4]
// 0063fc60  83c9ff               or ecx, 0xffffffff
// 0063fc63  f00fc108             lock xadd dword ptr [eax], ecx
// 0063fc67  751e                 jne 0x63fc87
// 0063fc69  8b16                 mov edx, dword ptr [esi]
// 0063fc6b  8b4204               mov eax, dword ptr [edx + 4]
// 0063fc6e  8bce                 mov ecx, esi
// 0063fc70  ffd0                 call eax
// 0063fc72  8d4e08               lea ecx, [esi + 8]
// 0063fc75  83caff               or edx, 0xffffffff
// 0063fc78  f00fc111             lock xadd dword ptr [ecx], edx
// 0063fc7c  7509                 jne 0x63fc87
// 0063fc7e  8b06                 mov eax, dword ptr [esi]
// 0063fc80  8b5008               mov edx, dword ptr [eax + 8]
// 0063fc83  8bce                 mov ecx, esi
// 0063fc85  ffd2                 call edx
// 0063fc87  8bcf                 mov ecx, edi
// 0063fc89  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0063fc91  ff1500a49e00         call dword ptr [0x9ea400]
// 0063fc97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063fc9b  5f                   pop edi
// 0063fc9c  5e                   pop esi
// 0063fc9d  64890d00000000       mov dword ptr fs:[0], ecx
// 0063fca4  83c410               add esp, 0x10
// 0063fca7  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
