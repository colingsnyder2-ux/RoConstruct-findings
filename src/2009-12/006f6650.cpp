// roc 2009-12 006f6650  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f6650
//
// 006f6650  53                   push ebx
// 006f6651  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f6655  8b4318               mov eax, dword ptr [ebx + 0x18]
// 006f6658  56                   push esi
// 006f6659  57                   push edi
// 006f665a  8bf1                 mov esi, ecx
// 006f665c  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006f665f  83c004               add eax, 4
// 006f6662  8b00                 mov eax, dword ptr [eax]
// 006f6664  57                   push edi
// 006f6665  50                   push eax
// 006f6666  e895f9ffff           call 0x6f6000
// 006f666b  894704               mov dword ptr [edi + 4], eax
// 006f666e  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 006f6671  8b5618               mov edx, dword ptr [esi + 0x18]
// 006f6674  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006f6677  8b4204               mov eax, dword ptr [edx + 4]
// 006f667a  80781500             cmp byte ptr [eax + 0x15], 0
// 006f667e  7537                 jne 0x6f66b7
// 006f6680  8b08                 mov ecx, dword ptr [eax]
// 006f6682  80791500             cmp byte ptr [ecx + 0x15], 0
// 006f6686  750a                 jne 0x6f6692
// 006f6688  8bc1                 mov eax, ecx
// 006f668a  8b08                 mov ecx, dword ptr [eax]
// 006f668c  80791500             cmp byte ptr [ecx + 0x15], 0
// 006f6690  74f6                 je 0x6f6688
// 006f6692  8902                 mov dword ptr [edx], eax
// 006f6694  8b7618               mov esi, dword ptr [esi + 0x18]
// 006f6697  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f669a  8b4108               mov eax, dword ptr [ecx + 8]
// 006f669d  80781500             cmp byte ptr [eax + 0x15], 0
// 006f66a1  750b                 jne 0x6f66ae
// 006f66a3  8bc8                 mov ecx, eax
// 006f66a5  8b4108               mov eax, dword ptr [ecx + 8]
// 006f66a8  80781500             cmp byte ptr [eax + 0x15], 0
// 006f66ac  74f5                 je 0x6f66a3
// 006f66ae  5f                   pop edi
// 006f66af  894e08               mov dword ptr [esi + 8], ecx
// 006f66b2  5e                   pop esi
// 006f66b3  5b                   pop ebx
// 006f66b4  c20400               ret 4
// 006f66b7  8912                 mov dword ptr [edx], edx
// 006f66b9  8b7618               mov esi, dword ptr [esi + 0x18]
// 006f66bc  5f                   pop edi
// 006f66bd  897608               mov dword ptr [esi + 8], esi
// 006f66c0  5e                   pop esi
// 006f66c1  5b                   pop ebx
// 006f66c2  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
