// roc 2011-06 00516440  unit: RBX::Network::NetworkOwnerJob  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00516440
//
// 00516440  53                   push ebx
// 00516441  56                   push esi
// 00516442  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00516446  8bd9                 mov ebx, ecx
// 00516448  85f6                 test esi, esi
// 0051644a  7446                 je 0x516492
// 0051644c  8a0e                 mov cl, byte ptr [esi]
// 0051644e  84c9                 test cl, cl
// 00516450  7440                 je 0x516492
// 00516452  8bc6                 mov eax, esi
// 00516454  57                   push edi
// 00516455  8d7801               lea edi, [eax + 1]
// 00516458  8a10                 mov dl, byte ptr [eax]
// 0051645a  40                   inc eax
// 0051645b  84d2                 test dl, dl
// 0051645d  75f9                 jne 0x516458
// 0051645f  2bc7                 sub eax, edi
// 00516461  5f                   pop edi
// 00516462  83f80f               cmp eax, 0xf
// 00516465  772b                 ja 0x516492
// 00516467  8b13                 mov edx, dword ptr [ebx]
// 00516469  8b5210               mov edx, dword ptr [edx + 0x10]
// 0051646c  33c0                 xor eax, eax
// 0051646e  380a                 cmp byte ptr [edx], cl
// 00516470  750e                 jne 0x516480
// 00516472  84c9                 test cl, cl
// 00516474  7423                 je 0x516499
// 00516476  8a4c3001             mov cl, byte ptr [eax + esi + 1]
// 0051647a  40                   inc eax
// 0051647b  380c02               cmp byte ptr [edx + eax], cl
// 0051647e  74f2                 je 0x516472
// 00516480  8a1402               mov dl, byte ptr [edx + eax]
// 00516483  84d2                 test dl, dl
// 00516485  740b                 je 0x516492
// 00516487  803c3000             cmp byte ptr [eax + esi], 0
// 0051648b  7405                 je 0x516492
// 0051648d  80fa2a               cmp dl, 0x2a
// 00516490  7407                 je 0x516499
// 00516492  5e                   pop esi
// 00516493  32c0                 xor al, al
// 00516495  5b                   pop ebx
// 00516496  c20400               ret 4
// 00516499  5e                   pop esi
// 0051649a  b001                 mov al, 1
// 0051649c  5b                   pop ebx
// 0051649d  c20400               ret 4
// library rbx2016-raknet/RakString.cpp (function ?IPAddressMatch@RakString@RakNet@@QAE_NPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakString.cpp
