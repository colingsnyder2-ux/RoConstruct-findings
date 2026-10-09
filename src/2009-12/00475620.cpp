// roc 2009-12 00475620  unit: DxUserInput  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475620
//
// 00475620  6aff                 push -1
// 00475622  68d8dc9200           push 0x92dcd8
// 00475627  64a100000000         mov eax, dword ptr fs:[0]
// 0047562d  50                   push eax
// 0047562e  64892500000000       mov dword ptr fs:[0], esp
// 00475635  51                   push ecx
// 00475636  56                   push esi
// 00475637  57                   push edi
// 00475638  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047563c  8bf1                 mov esi, ecx
// 0047563e  57                   push edi
// 0047563f  8974240c             mov dword ptr [esp + 0xc], esi
// 00475643  e8c8fdffff           call 0x475410
// 00475648  8b4744               mov eax, dword ptr [edi + 0x44]
// 0047564b  894644               mov dword ptr [esi + 0x44], eax
// 0047564e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 00475651  894e48               mov dword ptr [esi + 0x48], ecx
// 00475654  8b574c               mov edx, dword ptr [edi + 0x4c]
// 00475657  89564c               mov dword ptr [esi + 0x4c], edx
// 0047565a  8b4750               mov eax, dword ptr [edi + 0x50]
// 0047565d  894650               mov dword ptr [esi + 0x50], eax
// 00475660  8a4f54               mov cl, byte ptr [edi + 0x54]
// 00475663  83c758               add edi, 0x58
// 00475666  884e54               mov byte ptr [esi + 0x54], cl
// 00475669  57                   push edi
// 0047566a  8d4e58               lea ecx, [esi + 0x58]
// 0047566d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00475675  ff15f0b69800         call dword ptr [0x98b6f0]
// 0047567b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047567f  5f                   pop edi
// 00475680  8bc6                 mov eax, esi
// 00475682  5e                   pop esi
// 00475683  64890d00000000       mov dword ptr fs:[0], ecx
// 0047568a  83c410               add esp, 0x10
// 0047568d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
