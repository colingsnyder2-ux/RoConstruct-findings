// roc 2008-06 005e0560  unit: RBX::P8Lighting::?$GetSetImpl  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0560
//
// 005e0560  6aff                 push -1
// 005e0562  6895627d00           push 0x7d6295
// 005e0567  64a100000000         mov eax, dword ptr fs:[0]
// 005e056d  50                   push eax
// 005e056e  64892500000000       mov dword ptr fs:[0], esp
// 005e0575  51                   push ecx
// 005e0576  56                   push esi
// 005e0577  8bf1                 mov esi, ecx
// 005e0579  89742404             mov dword ptr [esp + 4], esi
// 005e057d  8d442418             lea eax, [esp + 0x18]
// 005e0581  50                   push eax
// 005e0582  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e058a  e841f1ffff           call 0x5df6d0
// 005e058f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005e0593  8b542460             mov edx, dword ptr [esp + 0x60]
// 005e0597  8b442464             mov eax, dword ptr [esp + 0x64]
// 005e059b  894e44               mov dword ptr [esi + 0x44], ecx
// 005e059e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005e05a2  894e50               mov dword ptr [esi + 0x50], ecx
// 005e05a5  8d4e58               lea ecx, [esi + 0x58]
// 005e05a8  c644241001           mov byte ptr [esp + 0x10], 1
// 005e05ad  895648               mov dword ptr [esi + 0x48], edx
// 005e05b0  89464c               mov dword ptr [esi + 0x4c], eax
// 005e05b3  c6465400             mov byte ptr [esi + 0x54], 0
// 005e05b7  ff1560248000         call dword ptr [0x802460]
// 005e05bd  8bce                 mov ecx, esi
// 005e05bf  c644241002           mov byte ptr [esp + 0x10], 2
// 005e05c4  e897fbffff           call 0x5e0160
// 005e05c9  8d4c2434             lea ecx, [esp + 0x34]
// 005e05cd  c744241003000000     mov dword ptr [esp + 0x10], 3
// 005e05d5  ff1568248000         call dword ptr [0x802468]
// 005e05db  8d4c2418             lea ecx, [esp + 0x18]
// 005e05df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005e05e7  ff1568248000         call dword ptr [0x802468]
// 005e05ed  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e05f1  8bc6                 mov eax, esi
// 005e05f3  5e                   pop esi
// 005e05f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005e05fb  83c410               add esp, 0x10
// 005e05fe  c25400               ret 0x54
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@V?$char_separator@DU?$char_traits@D@std@@@1@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
