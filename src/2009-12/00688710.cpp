// roc 2009-12 00688710  unit: RBX::ChangeHistoryService  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00688710
//
// 00688710  56                   push esi
// 00688711  57                   push edi
// 00688712  8bf9                 mov edi, ecx
// 00688714  807f0400             cmp byte ptr [edi + 4], 0
// 00688718  7520                 jne 0x68873a
// 0068871a  8b0f                 mov ecx, dword ptr [edi]
// 0068871c  85c9                 test ecx, ecx
// 0068871e  7410                 je 0x688730
// 00688720  ff15c4b49800         call dword ptr [0x98b4c4]
// 00688726  83f8ff               cmp eax, -1
// 00688729  7405                 je 0x688730
// 0068872b  884705               mov byte ptr [edi + 5], al
// 0068872e  eb06                 jmp 0x688736
// 00688730  c70700000000         mov dword ptr [edi], 0
// 00688736  c6470401             mov byte ptr [edi + 4], 1
// 0068873a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068873e  807e0400             cmp byte ptr [esi + 4], 0
// 00688742  7520                 jne 0x688764
// 00688744  8b0e                 mov ecx, dword ptr [esi]
// 00688746  85c9                 test ecx, ecx
// 00688748  7410                 je 0x68875a
// 0068874a  ff15c4b49800         call dword ptr [0x98b4c4]
// 00688750  83f8ff               cmp eax, -1
// 00688753  7405                 je 0x68875a
// 00688755  884605               mov byte ptr [esi + 5], al
// 00688758  eb06                 jmp 0x688760
// 0068875a  c70600000000         mov dword ptr [esi], 0
// 00688760  c6460401             mov byte ptr [esi + 4], 1
// 00688764  833f00               cmp dword ptr [edi], 0
// 00688767  750c                 jne 0x688775
// 00688769  833e00               cmp dword ptr [esi], 0
// 0068876c  740c                 je 0x68877a
// 0068876e  5f                   pop edi
// 0068876f  33c0                 xor eax, eax
// 00688771  5e                   pop esi
// 00688772  c20400               ret 4
// 00688775  833e00               cmp dword ptr [esi], 0
// 00688778  74f4                 je 0x68876e
// 0068877a  5f                   pop edi
// 0068877b  b801000000           mov eax, 1
// 00688780  5e                   pop esi
// 00688781  c20400               ret 4
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
