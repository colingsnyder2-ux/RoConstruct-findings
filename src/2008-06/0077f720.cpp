// roc 2008-06 0077f720  unit: CXTPTabPaintManager  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077f720
//
// 0077f720  53                   push ebx
// 0077f721  55                   push ebp
// 0077f722  56                   push esi
// 0077f723  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077f727  57                   push edi
// 0077f728  8d4624               lea eax, [esi + 0x24]
// 0077f72b  50                   push eax
// 0077f72c  8be9                 mov ebp, ecx
// 0077f72e  ff157c2c8000         call dword ptr [0x802c7c]
// 0077f734  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077f738  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0077f73c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0077f740  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0077f744  8d7e44               lea edi, [esi + 0x44]
// 0077f747  894634               mov dword ptr [esi + 0x34], eax
// 0077f74a  8907                 mov dword ptr [edi], eax
// 0077f74c  894e38               mov dword ptr [esi + 0x38], ecx
// 0077f74f  894f04               mov dword ptr [edi + 4], ecx
// 0077f752  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0077f758  89563c               mov dword ptr [esi + 0x3c], edx
// 0077f75b  895708               mov dword ptr [edi + 8], edx
// 0077f75e  6a01                 push 1
// 0077f760  895e40               mov dword ptr [esi + 0x40], ebx
// 0077f763  895f0c               mov dword ptr [edi + 0xc], ebx
// 0077f766  e8a5bfffff           call 0x77b710
// 0077f76b  33d2                 xor edx, edx
// 0077f76d  33c0                 xor eax, eax
// 0077f76f  39565c               cmp dword ptr [esi + 0x5c], edx
// 0077f772  7e1c                 jle 0x77f790
// 0077f774  3bc2                 cmp eax, edx
// 0077f776  7c0d                 jl 0x77f785
// 0077f778  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0077f77b  7d08                 jge 0x77f785
// 0077f77d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0077f780  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0077f783  eb02                 jmp 0x77f787
// 0077f785  33c9                 xor ecx, ecx
// 0077f787  40                   inc eax
// 0077f788  895164               mov dword ptr [ecx + 0x64], edx
// 0077f78b  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0077f78e  7ce4                 jl 0x77f774
// 0077f790  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0077f794  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 0077f79a  8b11                 mov edx, dword ptr [ecx]
// 0077f79c  8b522c               mov edx, dword ptr [edx + 0x2c]
// 0077f79f  83ec10               sub esp, 0x10
// 0077f7a2  8bc4                 mov eax, esp
// 0077f7a4  8918                 mov dword ptr [eax], ebx
// 0077f7a6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0077f7aa  895804               mov dword ptr [eax + 4], ebx
// 0077f7ad  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0077f7b1  895808               mov dword ptr [eax + 8], ebx
// 0077f7b4  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0077f7b8  89580c               mov dword ptr [eax + 0xc], ebx
// 0077f7bb  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077f7bf  50                   push eax
// 0077f7c0  56                   push esi
// 0077f7c1  ffd2                 call edx
// 0077f7c3  8b4500               mov eax, dword ptr [ebp]
// 0077f7c6  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0077f7c9  57                   push edi
// 0077f7ca  56                   push esi
// 0077f7cb  8bcd                 mov ecx, ebp
// 0077f7cd  ffd2                 call edx
// 0077f7cf  5f                   pop edi
// 0077f7d0  5e                   pop esi
// 0077f7d1  5d                   pop ebp
// 0077f7d2  5b                   pop ebx
// 0077f7d3  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp
