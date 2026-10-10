// roc 2012-06 00a19710  unit: CXTPShortcutManager  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19710
//
// 00a19710  83ec10               sub esp, 0x10
// 00a19713  56                   push esi
// 00a19714  57                   push edi
// 00a19715  8bf1                 mov esi, ecx
// 00a19717  33ff                 xor edi, edi
// 00a19719  897e08               mov dword ptr [esi + 8], edi
// 00a1971c  e8ab8ff6ff           call 0x9826cc
// 00a19721  b07f                 mov al, 0x7f
// 00a19723  88442408             mov byte ptr [esp + 8], al
// 00a19727  88442409             mov byte ptr [esp + 9], al
// 00a1972b  8844240a             mov byte ptr [esp + 0xa], al
// 00a1972f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a19733  897c240c             mov dword ptr [esp + 0xc], edi
// 00a19737  3bc7                 cmp eax, edi
// 00a19739  750a                 jne 0xa19745
// 00a1973b  5f                   pop edi
// 00a1973c  33c0                 xor eax, eax
// 00a1973e  5e                   pop esi
// 00a1973f  83c410               add esp, 0x10
// 00a19742  c20400               ret 4
// 00a19745  53                   push ebx
// 00a19746  8d4c240c             lea ecx, [esp + 0xc]
// 00a1974a  51                   push ecx
// 00a1974b  8d542424             lea edx, [esp + 0x24]
// 00a1974f  52                   push edx
// 00a19750  8d4c2420             lea ecx, [esp + 0x20]
// 00a19754  51                   push ecx
// 00a19755  8d542420             lea edx, [esp + 0x20]
// 00a19759  52                   push edx
// 00a1975a  8d4c2420             lea ecx, [esp + 0x20]
// 00a1975e  51                   push ecx
// 00a1975f  50                   push eax
// 00a19760  e83bfcffff           call 0xa193a0
// 00a19765  83c418               add esp, 0x18
// 00a19768  85c0                 test eax, eax
// 00a1976a  751d                 jne 0xa19789
// 00a1976c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a19770  3bc7                 cmp eax, edi
// 00a19772  740a                 je 0xa1977e
// 00a19774  50                   push eax
// 00a19775  ff15c829b200         call dword ptr [0xb229c8]
// 00a1977b  83c404               add esp, 4
// 00a1977e  5b                   pop ebx
// 00a1977f  5f                   pop edi
// 00a19780  33c0                 xor eax, eax
// 00a19782  5e                   pop esi
// 00a19783  83c410               add esp, 0x10
// 00a19786  c20400               ret 4
// 00a19789  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a1978d  3bdf                 cmp ebx, edi
// 00a1978f  74ed                 je 0xa1977e
// 00a19791  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a19795  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a19799  55                   push ebp
// 00a1979a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00a1979e  55                   push ebp
// 00a1979f  51                   push ecx
// 00a197a0  50                   push eax
// 00a197a1  53                   push ebx
// 00a197a2  8bce                 mov ecx, esi
// 00a197a4  e8b7faffff           call 0xa19260
// 00a197a9  53                   push ebx
// 00a197aa  8bf8                 mov edi, eax
// 00a197ac  ff15c829b200         call dword ptr [0xb229c8]
// 00a197b2  83c404               add esp, 4
// 00a197b5  85ff                 test edi, edi
// 00a197b7  750c                 jne 0xa197c5
// 00a197b9  5d                   pop ebp
// 00a197ba  5b                   pop ebx
// 00a197bb  5f                   pop edi
// 00a197bc  33c0                 xor eax, eax
// 00a197be  5e                   pop esi
// 00a197bf  83c410               add esp, 0x10
// 00a197c2  c20400               ret 4
// 00a197c5  33d2                 xor edx, edx
// 00a197c7  83fd04               cmp ebp, 4
// 00a197ca  0f94c2               sete dl
// 00a197cd  57                   push edi
// 00a197ce  8bce                 mov ecx, esi
// 00a197d0  895608               mov dword ptr [esi + 8], edx
// 00a197d3  e8008ff6ff           call 0x9826d8
// 00a197d8  5d                   pop ebp
// 00a197d9  5b                   pop ebx
// 00a197da  5f                   pop edi
// 00a197db  b801000000           mov eax, 1
// 00a197e0  5e                   pop esi
// 00a197e1  83c410               add esp, 0x10
// 00a197e4  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPAVCFile@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
