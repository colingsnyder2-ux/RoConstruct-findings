// roc 2009-06 006223e0  unit: RBX::RootInstance  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006223e0
//
// 006223e0  83ec18               sub esp, 0x18
// 006223e3  83790408             cmp dword ptr [ecx + 4], 8
// 006223e7  894c2404             mov dword ptr [esp + 4], ecx
// 006223eb  0f85a8000000         jne 0x622499
// 006223f1  8b4908               mov ecx, dword ptr [ecx + 8]
// 006223f4  56                   push esi
// 006223f5  57                   push edi
// 006223f6  8d442418             lea eax, [esp + 0x18]
// 006223fa  50                   push eax
// 006223fb  e8708adfff           call 0x41ae70
// 00622400  8b08                 mov ecx, dword ptr [eax]
// 00622402  8b742424             mov esi, dword ptr [esp + 0x24]
// 00622406  8d542408             lea edx, [esp + 8]
// 0062240a  52                   push edx
// 0062240b  8d442414             lea eax, [esp + 0x14]
// 0062240f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00622413  50                   push eax
// 00622414  8bce                 mov ecx, esi
// 00622416  e84548ecff           call 0x4e6c60
// 0062241b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0062241f  85ff                 test edi, edi
// 00622421  742a                 je 0x62244d
// 00622423  8d4f04               lea ecx, [edi + 4]
// 00622426  83caff               or edx, 0xffffffff
// 00622429  f00fc111             lock xadd dword ptr [ecx], edx
// 0062242d  751e                 jne 0x62244d
// 0062242f  8b07                 mov eax, dword ptr [edi]
// 00622431  8b5004               mov edx, dword ptr [eax + 4]
// 00622434  8bcf                 mov ecx, edi
// 00622436  ffd2                 call edx
// 00622438  8d4708               lea eax, [edi + 8]
// 0062243b  83c9ff               or ecx, 0xffffffff
// 0062243e  f00fc108             lock xadd dword ptr [eax], ecx
// 00622442  7509                 jne 0x62244d
// 00622444  8b17                 mov edx, dword ptr [edi]
// 00622446  8b4208               mov eax, dword ptr [edx + 8]
// 00622449  8bcf                 mov ecx, edi
// 0062244b  ffd0                 call eax
// 0062244d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00622451  53                   push ebx
// 00622452  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00622455  8b36                 mov esi, dword ptr [esi]
// 00622457  55                   push ebp
// 00622458  8b2dace98900         mov ebp, dword ptr [0x89e9ac]
// 0062245e  85ff                 test edi, edi
// 00622460  7404                 je 0x622466
// 00622462  3bfe                 cmp edi, esi
// 00622464  7402                 je 0x622468
// 00622466  ffd5                 call ebp
// 00622468  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0062246c  3bf3                 cmp esi, ebx
// 0062246e  7425                 je 0x622495
// 00622470  85ff                 test edi, edi
// 00622472  752b                 jne 0x62249f
// 00622474  ffd5                 call ebp
// 00622476  3b7718               cmp esi, dword ptr [edi + 0x18]
// 00622479  7502                 jne 0x62247d
// 0062247b  ffd5                 call ebp
// 0062247d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00622481  8b5610               mov edx, dword ptr [esi + 0x10]
// 00622484  8b4108               mov eax, dword ptr [ecx + 8]
// 00622487  83c614               add esi, 0x14
// 0062248a  56                   push esi
// 0062248b  8d4804               lea ecx, [eax + 4]
// 0062248e  8910                 mov dword ptr [eax], edx
// 00622490  e86b00deff           call 0x402500
// 00622495  5d                   pop ebp
// 00622496  5b                   pop ebx
// 00622497  5f                   pop edi
// 00622498  5e                   pop esi
// 00622499  83c418               add esp, 0x18
// 0062249c  c20400               ret 4
// 0062249f  8b3f                 mov edi, dword ptr [edi]
// 006224a1  ebd3                 jmp 0x622476
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?replaceHandles@XmlNameValuePair@@QAEXABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
