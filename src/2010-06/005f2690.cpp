// roc 2010-06 005f2690  unit: TextXmlParser  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2690
//
// 005f2690  83ec18               sub esp, 0x18
// 005f2693  83790408             cmp dword ptr [ecx + 4], 8
// 005f2697  894c2404             mov dword ptr [esp + 4], ecx
// 005f269b  0f85a8000000         jne 0x5f2749
// 005f26a1  8b4908               mov ecx, dword ptr [ecx + 8]
// 005f26a4  56                   push esi
// 005f26a5  57                   push edi
// 005f26a6  8d442418             lea eax, [esp + 0x18]
// 005f26aa  50                   push eax
// 005f26ab  e8806fe1ff           call 0x409630
// 005f26b0  8b08                 mov ecx, dword ptr [eax]
// 005f26b2  8b742424             mov esi, dword ptr [esp + 0x24]
// 005f26b6  8d542408             lea edx, [esp + 8]
// 005f26ba  52                   push edx
// 005f26bb  8d442414             lea eax, [esp + 0x14]
// 005f26bf  894c240c             mov dword ptr [esp + 0xc], ecx
// 005f26c3  50                   push eax
// 005f26c4  8bce                 mov ecx, esi
// 005f26c6  e8e593efff           call 0x4ebab0
// 005f26cb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005f26cf  85ff                 test edi, edi
// 005f26d1  742a                 je 0x5f26fd
// 005f26d3  8d4f04               lea ecx, [edi + 4]
// 005f26d6  83caff               or edx, 0xffffffff
// 005f26d9  f00fc111             lock xadd dword ptr [ecx], edx
// 005f26dd  751e                 jne 0x5f26fd
// 005f26df  8b07                 mov eax, dword ptr [edi]
// 005f26e1  8b5004               mov edx, dword ptr [eax + 4]
// 005f26e4  8bcf                 mov ecx, edi
// 005f26e6  ffd2                 call edx
// 005f26e8  8d4708               lea eax, [edi + 8]
// 005f26eb  83c9ff               or ecx, 0xffffffff
// 005f26ee  f00fc108             lock xadd dword ptr [eax], ecx
// 005f26f2  7509                 jne 0x5f26fd
// 005f26f4  8b17                 mov edx, dword ptr [edi]
// 005f26f6  8b4208               mov eax, dword ptr [edx + 8]
// 005f26f9  8bcf                 mov ecx, edi
// 005f26fb  ffd0                 call eax
// 005f26fd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005f2701  53                   push ebx
// 005f2702  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 005f2705  8b36                 mov esi, dword ptr [esi]
// 005f2707  55                   push ebp
// 005f2708  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 005f270e  85ff                 test edi, edi
// 005f2710  7404                 je 0x5f2716
// 005f2712  3bfe                 cmp edi, esi
// 005f2714  7402                 je 0x5f2718
// 005f2716  ffd5                 call ebp
// 005f2718  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005f271c  3bf3                 cmp esi, ebx
// 005f271e  7425                 je 0x5f2745
// 005f2720  85ff                 test edi, edi
// 005f2722  752b                 jne 0x5f274f
// 005f2724  ffd5                 call ebp
// 005f2726  3b7718               cmp esi, dword ptr [edi + 0x18]
// 005f2729  7502                 jne 0x5f272d
// 005f272b  ffd5                 call ebp
// 005f272d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f2731  8b5610               mov edx, dword ptr [esi + 0x10]
// 005f2734  8b4108               mov eax, dword ptr [ecx + 8]
// 005f2737  83c614               add esi, 0x14
// 005f273a  56                   push esi
// 005f273b  8d4804               lea ecx, [eax + 4]
// 005f273e  8910                 mov dword ptr [eax], edx
// 005f2740  e84bf9e0ff           call 0x402090
// 005f2745  5d                   pop ebp
// 005f2746  5b                   pop ebx
// 005f2747  5f                   pop edi
// 005f2748  5e                   pop esi
// 005f2749  83c418               add esp, 0x18
// 005f274c  c20400               ret 4
// 005f274f  8b3f                 mov edi, dword ptr [edi]
// 005f2751  ebd3                 jmp 0x5f2726
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?replaceHandles@XmlNameValuePair@@QAEXABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
