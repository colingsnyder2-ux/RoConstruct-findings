// roc 2008-06 00591c60  unit: RBX::RootInstance  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591c60
//
// 00591c60  83ec18               sub esp, 0x18
// 00591c63  83790408             cmp dword ptr [ecx + 4], 8
// 00591c67  894c2404             mov dword ptr [esp + 4], ecx
// 00591c6b  0f85a8000000         jne 0x591d19
// 00591c71  8b4908               mov ecx, dword ptr [ecx + 8]
// 00591c74  56                   push esi
// 00591c75  57                   push edi
// 00591c76  8d442418             lea eax, [esp + 0x18]
// 00591c7a  50                   push eax
// 00591c7b  e830f9efff           call 0x4915b0
// 00591c80  8b08                 mov ecx, dword ptr [eax]
// 00591c82  8b742424             mov esi, dword ptr [esp + 0x24]
// 00591c86  8d542408             lea edx, [esp + 8]
// 00591c8a  52                   push edx
// 00591c8b  8d442414             lea eax, [esp + 0x14]
// 00591c8f  894c240c             mov dword ptr [esp + 0xc], ecx
// 00591c93  50                   push eax
// 00591c94  8bce                 mov ecx, esi
// 00591c96  e835ffffff           call 0x591bd0
// 00591c9b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00591c9f  85ff                 test edi, edi
// 00591ca1  742a                 je 0x591ccd
// 00591ca3  8d4f04               lea ecx, [edi + 4]
// 00591ca6  83caff               or edx, 0xffffffff
// 00591ca9  f00fc111             lock xadd dword ptr [ecx], edx
// 00591cad  751e                 jne 0x591ccd
// 00591caf  8b07                 mov eax, dword ptr [edi]
// 00591cb1  8b5004               mov edx, dword ptr [eax + 4]
// 00591cb4  8bcf                 mov ecx, edi
// 00591cb6  ffd2                 call edx
// 00591cb8  8d4708               lea eax, [edi + 8]
// 00591cbb  83c9ff               or ecx, 0xffffffff
// 00591cbe  f00fc108             lock xadd dword ptr [eax], ecx
// 00591cc2  7509                 jne 0x591ccd
// 00591cc4  8b17                 mov edx, dword ptr [edi]
// 00591cc6  8b4208               mov eax, dword ptr [edx + 8]
// 00591cc9  8bcf                 mov ecx, edi
// 00591ccb  ffd0                 call eax
// 00591ccd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00591cd1  53                   push ebx
// 00591cd2  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00591cd5  8b36                 mov esi, dword ptr [esi]
// 00591cd7  55                   push ebp
// 00591cd8  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00591cde  85ff                 test edi, edi
// 00591ce0  7404                 je 0x591ce6
// 00591ce2  3bfe                 cmp edi, esi
// 00591ce4  7402                 je 0x591ce8
// 00591ce6  ffd5                 call ebp
// 00591ce8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00591cec  3bf3                 cmp esi, ebx
// 00591cee  7425                 je 0x591d15
// 00591cf0  85ff                 test edi, edi
// 00591cf2  752b                 jne 0x591d1f
// 00591cf4  ffd5                 call ebp
// 00591cf6  3b7718               cmp esi, dword ptr [edi + 0x18]
// 00591cf9  7502                 jne 0x591cfd
// 00591cfb  ffd5                 call ebp
// 00591cfd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00591d01  8b5610               mov edx, dword ptr [esi + 0x10]
// 00591d04  8b4108               mov eax, dword ptr [ecx + 8]
// 00591d07  83c614               add esi, 0x14
// 00591d0a  56                   push esi
// 00591d0b  8d4804               lea ecx, [eax + 4]
// 00591d0e  8910                 mov dword ptr [eax], edx
// 00591d10  e89b08e7ff           call 0x4025b0
// 00591d15  5d                   pop ebp
// 00591d16  5b                   pop ebx
// 00591d17  5f                   pop edi
// 00591d18  5e                   pop esi
// 00591d19  83c418               add esp, 0x18
// 00591d1c  c20400               ret 4
// 00591d1f  8b3f                 mov edi, dword ptr [edi]
// 00591d21  ebd3                 jmp 0x591cf6
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?replaceHandles@XmlNameValuePair@@QAEXABV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
