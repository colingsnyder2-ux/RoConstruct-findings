// roc 2010-06 007a2220  unit: W4_D3DFORMAT::?$EnumDesc  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a2220
//
// 007a2220  83ec08               sub esp, 8
// 007a2223  56                   push esi
// 007a2224  8bf1                 mov esi, ecx
// 007a2226  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007a2229  57                   push edi
// 007a222a  85c9                 test ecx, ecx
// 007a222c  7504                 jne 0x7a2232
// 007a222e  33c0                 xor eax, eax
// 007a2230  eb08                 jmp 0x7a223a
// 007a2232  8b4614               mov eax, dword ptr [esi + 0x14]
// 007a2235  2bc1                 sub eax, ecx
// 007a2237  c1f802               sar eax, 2
// 007a223a  8b7e10               mov edi, dword ptr [esi + 0x10]
// 007a223d  8bd7                 mov edx, edi
// 007a223f  2bd1                 sub edx, ecx
// 007a2241  c1fa02               sar edx, 2
// 007a2244  3bd0                 cmp edx, eax
// 007a2246  7331                 jae 0x7a2279
// 007a2248  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a224c  c644240800           mov byte ptr [esp + 8], 0
// 007a2251  8b442408             mov eax, dword ptr [esp + 8]
// 007a2255  50                   push eax
// 007a2256  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a225a  51                   push ecx
// 007a225b  8d5608               lea edx, [esi + 8]
// 007a225e  52                   push edx
// 007a225f  50                   push eax
// 007a2260  6a01                 push 1
// 007a2262  57                   push edi
// 007a2263  e8a87ff6ff           call 0x70a210
// 007a2268  83c418               add esp, 0x18
// 007a226b  83c704               add edi, 4
// 007a226e  897e10               mov dword ptr [esi + 0x10], edi
// 007a2271  5f                   pop edi
// 007a2272  5e                   pop esi
// 007a2273  83c408               add esp, 8
// 007a2276  c20400               ret 4
// 007a2279  3bcf                 cmp ecx, edi
// 007a227b  7606                 jbe 0x7a2283
// 007a227d  ff150ca99e00         call dword ptr [0x9ea90c]
// 007a2283  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a2287  8b06                 mov eax, dword ptr [esi]
// 007a2289  51                   push ecx
// 007a228a  57                   push edi
// 007a228b  50                   push eax
// 007a228c  8d542414             lea edx, [esp + 0x14]
// 007a2290  52                   push edx
// 007a2291  8bce                 mov ecx, esi
// 007a2293  e8c8feffff           call 0x7a2160
// 007a2298  5f                   pop edi
// 007a2299  5e                   pop esi
// 007a229a  83c408               add esp, 8
// 007a229d  c20400               ret 4
// library openrbx-client/App\v8datamodel\Enums.cpp (function ?push_back@?$vector@W4PartType@Part@RBX@@V?$allocator@W4PartType@Part@RBX@@@std@@@std@@QAEXABW4PartType@Part@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
