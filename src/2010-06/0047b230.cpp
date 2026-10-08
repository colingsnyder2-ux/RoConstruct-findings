// roc 2010-06 0047b230  unit: DxUserInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b230
//
// 0047b230  56                   push esi
// 0047b231  8bf1                 mov esi, ecx
// 0047b233  8b06                 mov eax, dword ptr [esi]
// 0047b235  57                   push edi
// 0047b236  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047b23a  83f8fc               cmp eax, -4
// 0047b23d  740e                 je 0x47b24d
// 0047b23f  85c0                 test eax, eax
// 0047b241  7404                 je 0x47b247
// 0047b243  3b07                 cmp eax, dword ptr [edi]
// 0047b245  7406                 je 0x47b24d
// 0047b247  ff150ca99e00         call dword ptr [0x9ea90c]
// 0047b24d  8b4604               mov eax, dword ptr [esi + 4]
// 0047b250  33c9                 xor ecx, ecx
// 0047b252  3b4704               cmp eax, dword ptr [edi + 4]
// 0047b255  5f                   pop edi
// 0047b256  0f94c1               sete cl
// 0047b259  8ac1                 mov al, cl
// 0047b25b  5e                   pop esi
// 0047b25c  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??8?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
