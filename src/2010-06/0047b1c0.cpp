// roc 2010-06 0047b1c0  unit: DxUserInput  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b1c0
//
// 0047b1c0  6aff                 push -1
// 0047b1c2  68c84e9800           push 0x984ec8
// 0047b1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0047b1cd  50                   push eax
// 0047b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0047b1d5  51                   push ecx
// 0047b1d6  56                   push esi
// 0047b1d7  57                   push edi
// 0047b1d8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047b1dc  8bf1                 mov esi, ecx
// 0047b1de  57                   push edi
// 0047b1df  8974240c             mov dword ptr [esp + 0xc], esi
// 0047b1e3  e8c8fdffff           call 0x47afb0
// 0047b1e8  8b4744               mov eax, dword ptr [edi + 0x44]
// 0047b1eb  894644               mov dword ptr [esi + 0x44], eax
// 0047b1ee  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0047b1f1  894e48               mov dword ptr [esi + 0x48], ecx
// 0047b1f4  8b574c               mov edx, dword ptr [edi + 0x4c]
// 0047b1f7  89564c               mov dword ptr [esi + 0x4c], edx
// 0047b1fa  8b4750               mov eax, dword ptr [edi + 0x50]
// 0047b1fd  894650               mov dword ptr [esi + 0x50], eax
// 0047b200  8a4f54               mov cl, byte ptr [edi + 0x54]
// 0047b203  83c758               add edi, 0x58
// 0047b206  884e54               mov byte ptr [esi + 0x54], cl
// 0047b209  57                   push edi
// 0047b20a  8d4e58               lea ecx, [esi + 0x58]
// 0047b20d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0047b215  ff150ca49e00         call dword ptr [0x9ea40c]
// 0047b21b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047b21f  5f                   pop edi
// 0047b220  8bc6                 mov eax, esi
// 0047b222  5e                   pop esi
// 0047b223  64890d00000000       mov dword ptr fs:[0], ecx
// 0047b22a  83c410               add esp, 0x10
// 0047b22d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
