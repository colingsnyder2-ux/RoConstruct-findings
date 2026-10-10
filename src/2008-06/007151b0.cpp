// roc 2008-06 007151b0  unit: CXTPPropertyGridView  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007151b0
//
// 007151b0  8b442404             mov eax, dword ptr [esp + 4]
// 007151b4  53                   push ebx
// 007151b5  8bd9                 mov ebx, ecx
// 007151b7  85c0                 test eax, eax
// 007151b9  0f8480000000         je 0x71523f
// 007151bf  55                   push ebp
// 007151c0  8b2d142e8000         mov ebp, dword ptr [0x802e14]
// 007151c6  56                   push esi
// 007151c7  8bb080000000         mov esi, dword ptr [eax + 0x80]
// 007151cd  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007151d0  6a00                 push 0
// 007151d2  6a00                 push 0
// 007151d4  688b010000           push 0x18b
// 007151d9  50                   push eax
// 007151da  46                   inc esi
// 007151db  ffd5                 call ebp
// 007151dd  3bf0                 cmp esi, eax
// 007151df  7d55                 jge 0x715236
// 007151e1  57                   push edi
// 007151e2  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007151e5  6a00                 push 0
// 007151e7  56                   push esi
// 007151e8  6899010000           push 0x199
// 007151ed  51                   push ecx
// 007151ee  ffd5                 call ebp
// 007151f0  8bf8                 mov edi, eax
// 007151f2  85ff                 test edi, edi
// 007151f4  743f                 je 0x715235
// 007151f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 007151fa  52                   push edx
// 007151fb  8bcf                 mov ecx, edi
// 007151fd  e83ebcffff           call 0x710e40
// 00715202  85c0                 test eax, eax
// 00715204  742f                 je 0x715235
// 00715206  8b07                 mov eax, dword ptr [edi]
// 00715208  8b90a4000000         mov edx, dword ptr [eax + 0xa4]
// 0071520e  6a00                 push 0
// 00715210  8bcf                 mov ecx, edi
// 00715212  ffd2                 call edx
// 00715214  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00715217  6a00                 push 0
// 00715219  56                   push esi
// 0071521a  6882010000           push 0x182
// 0071521f  50                   push eax
// 00715220  ffd5                 call ebp
// 00715222  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00715225  6a00                 push 0
// 00715227  6a00                 push 0
// 00715229  688b010000           push 0x18b
// 0071522e  51                   push ecx
// 0071522f  ffd5                 call ebp
// 00715231  3bf0                 cmp esi, eax
// 00715233  7cad                 jl 0x7151e2
// 00715235  5f                   pop edi
// 00715236  8bcb                 mov ecx, ebx
// 00715238  e803ffffff           call 0x715140
// 0071523d  5e                   pop esi
// 0071523e  5d                   pop ebp
// 0071523f  5b                   pop ebx
// 00715240  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_DoCollapse@CXTPPropertyGridView@@AAEXPAVCXTPPropertyGridItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
