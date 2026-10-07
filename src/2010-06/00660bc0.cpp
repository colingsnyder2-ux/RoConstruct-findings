// roc 2010-06 00660bc0  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00660bc0
//
// 00660bc0  53                   push ebx
// 00660bc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00660bc5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00660bc8  56                   push esi
// 00660bc9  57                   push edi
// 00660bca  8bf1                 mov esi, ecx
// 00660bcc  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00660bcf  83c004               add eax, 4
// 00660bd2  8b00                 mov eax, dword ptr [eax]
// 00660bd4  57                   push edi
// 00660bd5  50                   push eax
// 00660bd6  e875f9ffff           call 0x660550
// 00660bdb  894704               mov dword ptr [edi + 4], eax
// 00660bde  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00660be1  8b5618               mov edx, dword ptr [esi + 0x18]
// 00660be4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00660be7  8b4204               mov eax, dword ptr [edx + 4]
// 00660bea  80781500             cmp byte ptr [eax + 0x15], 0
// 00660bee  7537                 jne 0x660c27
// 00660bf0  8b08                 mov ecx, dword ptr [eax]
// 00660bf2  80791500             cmp byte ptr [ecx + 0x15], 0
// 00660bf6  750a                 jne 0x660c02
// 00660bf8  8bc1                 mov eax, ecx
// 00660bfa  8b08                 mov ecx, dword ptr [eax]
// 00660bfc  80791500             cmp byte ptr [ecx + 0x15], 0
// 00660c00  74f6                 je 0x660bf8
// 00660c02  8902                 mov dword ptr [edx], eax
// 00660c04  8b7618               mov esi, dword ptr [esi + 0x18]
// 00660c07  8b4e04               mov ecx, dword ptr [esi + 4]
// 00660c0a  8b4108               mov eax, dword ptr [ecx + 8]
// 00660c0d  80781500             cmp byte ptr [eax + 0x15], 0
// 00660c11  750b                 jne 0x660c1e
// 00660c13  8bc8                 mov ecx, eax
// 00660c15  8b4108               mov eax, dword ptr [ecx + 8]
// 00660c18  80781500             cmp byte ptr [eax + 0x15], 0
// 00660c1c  74f5                 je 0x660c13
// 00660c1e  5f                   pop edi
// 00660c1f  894e08               mov dword ptr [esi + 8], ecx
// 00660c22  5e                   pop esi
// 00660c23  5b                   pop ebx
// 00660c24  c20400               ret 4
// 00660c27  8912                 mov dword ptr [edx], edx
// 00660c29  8b7618               mov esi, dword ptr [esi + 0x18]
// 00660c2c  5f                   pop edi
// 00660c2d  897608               mov dword ptr [esi + 8], esi
// 00660c30  5e                   pop esi
// 00660c31  5b                   pop ebx
// 00660c32  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEXABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
