// roc 2008-06 005df870  unit: RBX::VLighting::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df870
//
// 005df870  6aff                 push -1
// 005df872  6858627d00           push 0x7d6258
// 005df877  64a100000000         mov eax, dword ptr fs:[0]
// 005df87d  50                   push eax
// 005df87e  64892500000000       mov dword ptr fs:[0], esp
// 005df885  51                   push ecx
// 005df886  56                   push esi
// 005df887  57                   push edi
// 005df888  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005df88c  8bf1                 mov esi, ecx
// 005df88e  57                   push edi
// 005df88f  8974240c             mov dword ptr [esp + 0xc], esi
// 005df893  e838feffff           call 0x5df6d0
// 005df898  8b4744               mov eax, dword ptr [edi + 0x44]
// 005df89b  894644               mov dword ptr [esi + 0x44], eax
// 005df89e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 005df8a1  894e48               mov dword ptr [esi + 0x48], ecx
// 005df8a4  8b574c               mov edx, dword ptr [edi + 0x4c]
// 005df8a7  89564c               mov dword ptr [esi + 0x4c], edx
// 005df8aa  8b4750               mov eax, dword ptr [edi + 0x50]
// 005df8ad  894650               mov dword ptr [esi + 0x50], eax
// 005df8b0  8a4f54               mov cl, byte ptr [edi + 0x54]
// 005df8b3  83c758               add edi, 0x58
// 005df8b6  884e54               mov byte ptr [esi + 0x54], cl
// 005df8b9  57                   push edi
// 005df8ba  8d4e58               lea ecx, [esi + 0x58]
// 005df8bd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005df8c5  ff155c248000         call dword ptr [0x80245c]
// 005df8cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005df8cf  5f                   pop edi
// 005df8d0  8bc6                 mov eax, esi
// 005df8d2  5e                   pop esi
// 005df8d3  64890d00000000       mov dword ptr fs:[0], ecx
// 005df8da  83c410               add esp, 0x10
// 005df8dd  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
