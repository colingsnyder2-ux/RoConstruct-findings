// roc 2009-12 0068ae90  unit: TextXmlParser  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ae90
//
// 0068ae90  83ec18               sub esp, 0x18
// 0068ae93  83790408             cmp dword ptr [ecx + 4], 8
// 0068ae97  894c2404             mov dword ptr [esp + 4], ecx
// 0068ae9b  0f85a8000000         jne 0x68af49
// 0068aea1  8b4908               mov ecx, dword ptr [ecx + 8]
// 0068aea4  56                   push esi
// 0068aea5  57                   push edi
// 0068aea6  8d442418             lea eax, [esp + 0x18]
// 0068aeaa  50                   push eax
// 0068aeab  e80050e7ff           call 0x4ffeb0
// 0068aeb0  8b08                 mov ecx, dword ptr [eax]
// 0068aeb2  8b742424             mov esi, dword ptr [esp + 0x24]
// 0068aeb6  8d542408             lea edx, [esp + 8]
// 0068aeba  52                   push edx
// 0068aebb  8d442414             lea eax, [esp + 0x14]
// 0068aebf  894c240c             mov dword ptr [esp + 0xc], ecx
// 0068aec3  50                   push eax
// 0068aec4  8bce                 mov ecx, esi
// 0068aec6  e8052aebff           call 0x53d8d0
// 0068aecb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0068aecf  85ff                 test edi, edi
// 0068aed1  742a                 je 0x68aefd
// 0068aed3  8d4f04               lea ecx, [edi + 4]
// 0068aed6  83caff               or edx, 0xffffffff
// 0068aed9  f00fc111             lock xadd dword ptr [ecx], edx
// 0068aedd  751e                 jne 0x68aefd
// 0068aedf  8b07                 mov eax, dword ptr [edi]
// 0068aee1  8b5004               mov edx, dword ptr [eax + 4]
// 0068aee4  8bcf                 mov ecx, edi
// 0068aee6  ffd2                 call edx
// 0068aee8  8d4708               lea eax, [edi + 8]
// 0068aeeb  83c9ff               or ecx, 0xffffffff
// 0068aeee  f00fc108             lock xadd dword ptr [eax], ecx
// 0068aef2  7509                 jne 0x68aefd
// 0068aef4  8b17                 mov edx, dword ptr [edi]
// 0068aef6  8b4208               mov eax, dword ptr [edx + 8]
// 0068aef9  8bcf                 mov ecx, edi
// 0068aefb  ffd0                 call eax
// 0068aefd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0068af01  53                   push ebx
// 0068af02  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0068af05  8b36                 mov esi, dword ptr [esi]
// 0068af07  55                   push ebp
// 0068af08  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 0068af0e  85ff                 test edi, edi
// 0068af10  7404                 je 0x68af16
// 0068af12  3bfe                 cmp edi, esi
// 0068af14  7402                 je 0x68af18
// 0068af16  ffd5                 call ebp
// 0068af18  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0068af1c  3bf3                 cmp esi, ebx
// 0068af1e  7425                 je 0x68af45
// 0068af20  85ff                 test edi, edi
// 0068af22  752b                 jne 0x68af4f
// 0068af24  ffd5                 call ebp
// 0068af26  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0068af29  7502                 jne 0x68af2d
// 0068af2b  ffd5                 call ebp
// 0068af2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068af31  8b5610               mov edx, dword ptr [esi + 0x10]
// 0068af34  8b4108               mov eax, dword ptr [ecx + 8]
// 0068af37  83c614               add esi, 0x14
// 0068af3a  56                   push esi
// 0068af3b  8d4804               lea ecx, [eax + 4]
// 0068af3e  8910                 mov dword ptr [eax], edx
// 0068af40  e85b71d7ff           call 0x4020a0
// 0068af45  5d                   pop ebp
// 0068af46  5b                   pop ebx
// 0068af47  5f                   pop edi
// 0068af48  5e                   pop esi
// 0068af49  83c418               add esp, 0x18
// 0068af4c  c20400               ret 4
// 0068af4f  8b3f                 mov edi, dword ptr [edi]
// 0068af51  ebd3                 jmp 0x68af26
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?replaceHandles@XmlNameValuePair@@QAEXABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
