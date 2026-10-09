// roc 2008-06 00573480  unit: RBX::GuiTarget  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573480
//
// 00573480  6aff                 push -1
// 00573482  6809e77c00           push 0x7ce709
// 00573487  64a100000000         mov eax, dword ptr fs:[0]
// 0057348d  50                   push eax
// 0057348e  64892500000000       mov dword ptr fs:[0], esp
// 00573495  83ec1c               sub esp, 0x1c
// 00573498  56                   push esi
// 00573499  8bf1                 mov esi, ecx
// 0057349b  684cf88200           push 0x82f84c
// 005734a0  8d4c2408             lea ecx, [esp + 8]
// 005734a4  ff1558248000         call dword ptr [0x802458]
// 005734aa  8b06                 mov eax, dword ptr [esi]
// 005734ac  8b5004               mov edx, dword ptr [eax + 4]
// 005734af  8d4c2404             lea ecx, [esp + 4]
// 005734b3  51                   push ecx
// 005734b4  8bce                 mov ecx, esi
// 005734b6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005734be  ffd2                 call edx
// 005734c0  8d4c2404             lea ecx, [esp + 4]
// 005734c4  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005734cc  ff1568248000         call dword ptr [0x802468]
// 005734d2  8b442430             mov eax, dword ptr [esp + 0x30]
// 005734d6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005734d9  898e54010000         mov dword ptr [esi + 0x154], ecx
// 005734df  d94010               fld dword ptr [eax + 0x10]
// 005734e2  d99e44010000         fstp dword ptr [esi + 0x144]
// 005734e8  d94014               fld dword ptr [eax + 0x14]
// 005734eb  d99e48010000         fstp dword ptr [esi + 0x148]
// 005734f1  d94018               fld dword ptr [eax + 0x18]
// 005734f4  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 005734fa  d9401c               fld dword ptr [eax + 0x1c]
// 005734fd  d99e50010000         fstp dword ptr [esi + 0x150]
// 00573503  8b10                 mov edx, dword ptr [eax]
// 00573505  89965c010000         mov dword ptr [esi + 0x15c], edx
// 0057350b  8b4804               mov ecx, dword ptr [eax + 4]
// 0057350e  898e60010000         mov dword ptr [esi + 0x160], ecx
// 00573514  8b5008               mov edx, dword ptr [eax + 8]
// 00573517  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057351b  899664010000         mov dword ptr [esi + 0x164], edx
// 00573521  5e                   pop esi
// 00573522  64890d00000000       mov dword ptr fs:[0], ecx
// 00573529  83c428               add esp, 0x28
// 0057352c  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?init@RelativePanel@RBX@@IAEXABVLayout@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
