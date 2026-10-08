// from server: 100% by auto
// roc 2012-06 00897c70  unit: RBX::BoxSelectCommand  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00897c70
//
// 00897c70  53                   push ebx
// 00897c71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00897c75  8b4304               mov eax, dword ptr [ebx + 4]
// 00897c78  56                   push esi
// 00897c79  57                   push edi
// 00897c7a  8bf1                 mov esi, ecx
// 00897c7c  8b7e04               mov edi, dword ptr [esi + 4]
// 00897c7f  83c004               add eax, 4
// 00897c82  8b00                 mov eax, dword ptr [eax]
// 00897c84  57                   push edi
// 00897c85  50                   push eax
// 00897c86  e835ffffff           call 0x897bc0
// 00897c8b  894704               mov dword ptr [edi + 4], eax
// 00897c8e  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00897c91  8b5604               mov edx, dword ptr [esi + 4]
// 00897c94  894e08               mov dword ptr [esi + 8], ecx
// 00897c97  8b4204               mov eax, dword ptr [edx + 4]
// 00897c9a  80781500             cmp byte ptr [eax + 0x15], 0
// 00897c9e  7537                 jne 0x897cd7
// 00897ca0  8b08                 mov ecx, dword ptr [eax]
// 00897ca2  80791500             cmp byte ptr [ecx + 0x15], 0
// 00897ca6  750a                 jne 0x897cb2
// 00897ca8  8bc1                 mov eax, ecx
// 00897caa  8b08                 mov ecx, dword ptr [eax]
// 00897cac  80791500             cmp byte ptr [ecx + 0x15], 0
// 00897cb0  74f6                 je 0x897ca8
// 00897cb2  8902                 mov dword ptr [edx], eax
// 00897cb4  8b7604               mov esi, dword ptr [esi + 4]
// 00897cb7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00897cba  8b4108               mov eax, dword ptr [ecx + 8]
// 00897cbd  80781500             cmp byte ptr [eax + 0x15], 0
// 00897cc1  750b                 jne 0x897cce
// 00897cc3  8bc8                 mov ecx, eax
// 00897cc5  8b4108               mov eax, dword ptr [ecx + 8]
// 00897cc8  80781500             cmp byte ptr [eax + 0x15], 0
// 00897ccc  74f5                 je 0x897cc3
// 00897cce  5f                   pop edi
// 00897ccf  894e08               mov dword ptr [esi + 8], ecx
// 00897cd2  5e                   pop esi
// 00897cd3  5b                   pop ebx
// 00897cd4  c20400               ret 4
// 00897cd7  8912                 mov dword ptr [edx], edx
// 00897cd9  8b7604               mov esi, dword ptr [esi + 4]
// 00897cdc  5f                   pop edi
// 00897cdd  897608               mov dword ptr [esi + 8], esi
// 00897ce0  5e                   pop esi
// 00897ce1  5b                   pop ebx
// 00897ce2  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
