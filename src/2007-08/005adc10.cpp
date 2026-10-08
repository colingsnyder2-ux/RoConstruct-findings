// roc 2007-08 005adc10  unit: P8CRenderSettings::?$GetSetImpl  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005adc10
//
// 005adc10  6aff                 push -1
// 005adc12  68a5887500           push 0x7588a5
// 005adc17  64a100000000         mov eax, dword ptr fs:[0]
// 005adc1d  50                   push eax
// 005adc1e  64892500000000       mov dword ptr fs:[0], esp
// 005adc25  51                   push ecx
// 005adc26  56                   push esi
// 005adc27  8bf1                 mov esi, ecx
// 005adc29  89742404             mov dword ptr [esp + 4], esi
// 005adc2d  8d442418             lea eax, [esp + 0x18]
// 005adc31  50                   push eax
// 005adc32  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005adc3a  e861f0ffff           call 0x5acca0
// 005adc3f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005adc43  8b542460             mov edx, dword ptr [esp + 0x60]
// 005adc47  8b442464             mov eax, dword ptr [esp + 0x64]
// 005adc4b  894e44               mov dword ptr [esi + 0x44], ecx
// 005adc4e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005adc52  894e50               mov dword ptr [esi + 0x50], ecx
// 005adc55  8d4e58               lea ecx, [esi + 0x58]
// 005adc58  c644241001           mov byte ptr [esp + 0x10], 1
// 005adc5d  895648               mov dword ptr [esi + 0x48], edx
// 005adc60  89464c               mov dword ptr [esi + 0x4c], eax
// 005adc63  c6465400             mov byte ptr [esi + 0x54], 0
// 005adc67  ff15a4e67700         call dword ptr [0x77e6a4]
// 005adc6d  8bce                 mov ecx, esi
// 005adc6f  c644241002           mov byte ptr [esp + 0x10], 2
// 005adc74  e8a7fbffff           call 0x5ad820
// 005adc79  8d4c2434             lea ecx, [esp + 0x34]
// 005adc7d  c744241003000000     mov dword ptr [esp + 0x10], 3
// 005adc85  ff15ace67700         call dword ptr [0x77e6ac]
// 005adc8b  8d4c2418             lea ecx, [esp + 0x18]
// 005adc8f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005adc97  ff15ace67700         call dword ptr [0x77e6ac]
// 005adc9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005adca1  8bc6                 mov eax, esi
// 005adca3  5e                   pop esi
// 005adca4  64890d00000000       mov dword ptr fs:[0], ecx
// 005adcab  83c410               add esp, 0x10
// 005adcae  c25400               ret 0x54
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@V?$char_separator@DU?$char_traits@D@std@@@1@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
