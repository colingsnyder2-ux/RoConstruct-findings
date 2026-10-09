// roc 2009-12 00475690  unit: DxUserInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475690
//
// 00475690  56                   push esi
// 00475691  8bf1                 mov esi, ecx
// 00475693  8b06                 mov eax, dword ptr [esi]
// 00475695  57                   push edi
// 00475696  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047569a  83f8fc               cmp eax, -4
// 0047569d  740e                 je 0x4756ad
// 0047569f  85c0                 test eax, eax
// 004756a1  7404                 je 0x4756a7
// 004756a3  3b07                 cmp eax, dword ptr [edi]
// 004756a5  7406                 je 0x4756ad
// 004756a7  ff1560b79800         call dword ptr [0x98b760]
// 004756ad  8b4604               mov eax, dword ptr [esi + 4]
// 004756b0  33c9                 xor ecx, ecx
// 004756b2  3b4704               cmp eax, dword ptr [edi + 4]
// 004756b5  5f                   pop edi
// 004756b6  0f94c1               sete cl
// 004756b9  8ac1                 mov al, cl
// 004756bb  5e                   pop esi
// 004756bc  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??8?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
