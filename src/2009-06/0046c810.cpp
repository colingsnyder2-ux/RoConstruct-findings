// roc 2009-06 0046c810  unit: DxUserInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c810
//
// 0046c810  56                   push esi
// 0046c811  8bf1                 mov esi, ecx
// 0046c813  8b06                 mov eax, dword ptr [esi]
// 0046c815  57                   push edi
// 0046c816  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0046c81a  83f8fc               cmp eax, -4
// 0046c81d  740e                 je 0x46c82d
// 0046c81f  85c0                 test eax, eax
// 0046c821  7404                 je 0x46c827
// 0046c823  3b07                 cmp eax, dword ptr [edi]
// 0046c825  7406                 je 0x46c82d
// 0046c827  ff15ace98900         call dword ptr [0x89e9ac]
// 0046c82d  8b4604               mov eax, dword ptr [esi + 4]
// 0046c830  33c9                 xor ecx, ecx
// 0046c832  3b4704               cmp eax, dword ptr [edi + 4]
// 0046c835  5f                   pop edi
// 0046c836  0f94c1               sete cl
// 0046c839  8ac1                 mov al, cl
// 0046c83b  5e                   pop esi
// 0046c83c  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??8?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
