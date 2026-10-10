// roc 2008-06 00715140  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715140
//
// 00715140  53                   push ebx
// 00715141  8bd9                 mov ebx, ecx
// 00715143  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00715146  85c0                 test eax, eax
// 00715148  745a                 je 0x7151a4
// 0071514a  56                   push esi
// 0071514b  57                   push edi
// 0071514c  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00715152  33f6                 xor esi, esi
// 00715154  56                   push esi
// 00715155  56                   push esi
// 00715156  688b010000           push 0x18b
// 0071515b  50                   push eax
// 0071515c  ffd7                 call edi
// 0071515e  85c0                 test eax, eax
// 00715160  7e40                 jle 0x7151a2
// 00715162  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00715165  6a00                 push 0
// 00715167  56                   push esi
// 00715168  6899010000           push 0x199
// 0071516d  50                   push eax
// 0071516e  ffd7                 call edi
// 00715170  85c0                 test eax, eax
// 00715172  741a                 je 0x71518e
// 00715174  39b080000000         cmp dword ptr [eax + 0x80], esi
// 0071517a  7412                 je 0x71518e
// 0071517c  8b10                 mov edx, dword ptr [eax]
// 0071517e  89b080000000         mov dword ptr [eax + 0x80], esi
// 00715184  8bc8                 mov ecx, eax
// 00715186  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 0071518c  ffd0                 call eax
// 0071518e  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00715191  6a00                 push 0
// 00715193  6a00                 push 0
// 00715195  688b010000           push 0x18b
// 0071519a  51                   push ecx
// 0071519b  46                   inc esi
// 0071519c  ffd7                 call edi
// 0071519e  3bf0                 cmp esi, eax
// 007151a0  7cc0                 jl 0x715162
// 007151a2  5f                   pop edi
// 007151a3  5e                   pop esi
// 007151a4  5b                   pop ebx
// 007151a5  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?_RefreshIndexes@CXTPPropertyGridView@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
