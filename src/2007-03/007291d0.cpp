// roc 2007-03 007291d0  unit: seg_00720000  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007291d0
//
// 007291d0  53                   push ebx
// 007291d1  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 007291d7  56                   push esi
// 007291d8  8bf1                 mov esi, ecx
// 007291da  8b06                 mov eax, dword ptr [esi]
// 007291dc  85c0                 test eax, eax
// 007291de  57                   push edi
// 007291df  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007291e3  7404                 je 0x7291e9
// 007291e5  3b07                 cmp eax, dword ptr [edi]
// 007291e7  7402                 je 0x7291eb
// 007291e9  ffd3                 call ebx
// 007291eb  8b4604               mov eax, dword ptr [esi + 4]
// 007291ee  3b4704               cmp eax, dword ptr [edi + 4]
// 007291f1  7536                 jne 0x729229
// 007291f3  8b06                 mov eax, dword ptr [esi]
// 007291f5  85c0                 test eax, eax
// 007291f7  7405                 je 0x7291fe
// 007291f9  3b4608               cmp eax, dword ptr [esi + 8]
// 007291fc  7402                 je 0x729200
// 007291fe  ffd3                 call ebx
// 00729200  8b4e04               mov ecx, dword ptr [esi + 4]
// 00729203  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 00729206  7416                 je 0x72921e
// 00729208  8b4610               mov eax, dword ptr [esi + 0x10]
// 0072920b  85c0                 test eax, eax
// 0072920d  7405                 je 0x729214
// 0072920f  3b4710               cmp eax, dword ptr [edi + 0x10]
// 00729212  7402                 je 0x729216
// 00729214  ffd3                 call ebx
// 00729216  8b5614               mov edx, dword ptr [esi + 0x14]
// 00729219  3b5714               cmp edx, dword ptr [edi + 0x14]
// 0072921c  750b                 jne 0x729229
// 0072921e  5f                   pop edi
// 0072921f  5e                   pop esi
// 00729220  b801000000           mov eax, 1
// 00729225  5b                   pop ebx
// 00729226  c20400               ret 4
// 00729229  5f                   pop edi
// 0072922a  5e                   pop esi
// 0072922b  33c0                 xor eax, eax
// 0072922d  5b                   pop ebx
// 0072922e  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?equal@named_slot_map_iterator@detail@signals@boost@@QBE_NABV1234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
