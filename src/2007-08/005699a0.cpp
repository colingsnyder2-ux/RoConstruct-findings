// roc 2007-08 005699a0  unit: RBX::ModelInstance  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005699a0
//
// 005699a0  83ec18               sub esp, 0x18
// 005699a3  83790408             cmp dword ptr [ecx + 4], 8
// 005699a7  894c2404             mov dword ptr [esp + 4], ecx
// 005699ab  0f85a6000000         jne 0x569a57
// 005699b1  8b4908               mov ecx, dword ptr [ecx + 8]
// 005699b4  56                   push esi
// 005699b5  57                   push edi
// 005699b6  8d442418             lea eax, [esp + 0x18]
// 005699ba  50                   push eax
// 005699bb  e830dfeaff           call 0x4178f0
// 005699c0  8b08                 mov ecx, dword ptr [eax]
// 005699c2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005699c6  8d542408             lea edx, [esp + 8]
// 005699ca  52                   push edx
// 005699cb  8d442414             lea eax, [esp + 0x14]
// 005699cf  894c240c             mov dword ptr [esp + 0xc], ecx
// 005699d3  50                   push eax
// 005699d4  8bcf                 mov ecx, edi
// 005699d6  e825680000           call 0x570200
// 005699db  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005699df  85f6                 test esi, esi
// 005699e1  742a                 je 0x569a0d
// 005699e3  8d4e04               lea ecx, [esi + 4]
// 005699e6  83caff               or edx, 0xffffffff
// 005699e9  f00fc111             lock xadd dword ptr [ecx], edx
// 005699ed  751e                 jne 0x569a0d
// 005699ef  8b06                 mov eax, dword ptr [esi]
// 005699f1  8b5004               mov edx, dword ptr [eax + 4]
// 005699f4  8bce                 mov ecx, esi
// 005699f6  ffd2                 call edx
// 005699f8  8d4608               lea eax, [esi + 8]
// 005699fb  83c9ff               or ecx, 0xffffffff
// 005699fe  f00fc108             lock xadd dword ptr [eax], ecx
// 00569a02  7509                 jne 0x569a0d
// 00569a04  8b16                 mov edx, dword ptr [esi]
// 00569a06  8b4208               mov eax, dword ptr [edx + 8]
// 00569a09  8bce                 mov ecx, esi
// 00569a0b  ffd0                 call eax
// 00569a0d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00569a11  85f6                 test esi, esi
// 00569a13  53                   push ebx
// 00569a14  8b5f04               mov ebx, dword ptr [edi + 4]
// 00569a17  55                   push ebp
// 00569a18  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 00569a1e  7404                 je 0x569a24
// 00569a20  3bf7                 cmp esi, edi
// 00569a22  7402                 je 0x569a26
// 00569a24  ffd5                 call ebp
// 00569a26  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00569a2a  3bfb                 cmp edi, ebx
// 00569a2c  7425                 je 0x569a53
// 00569a2e  85f6                 test esi, esi
// 00569a30  7502                 jne 0x569a34
// 00569a32  ffd5                 call ebp
// 00569a34  3b7e04               cmp edi, dword ptr [esi + 4]
// 00569a37  7502                 jne 0x569a3b
// 00569a39  ffd5                 call ebp
// 00569a3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00569a3f  8b5710               mov edx, dword ptr [edi + 0x10]
// 00569a42  8b4108               mov eax, dword ptr [ecx + 8]
// 00569a45  83c714               add edi, 0x14
// 00569a48  57                   push edi
// 00569a49  8d4804               lea ecx, [eax + 4]
// 00569a4c  8910                 mov dword ptr [eax], edx
// 00569a4e  e80d90e9ff           call 0x402a60
// 00569a53  5d                   pop ebp
// 00569a54  5b                   pop ebx
// 00569a55  5f                   pop edi
// 00569a56  5e                   pop esi
// 00569a57  83c418               add esp, 0x18
// 00569a5a  c20400               ret 4
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?replaceHandles@XmlNameValuePair@@QAEXABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
