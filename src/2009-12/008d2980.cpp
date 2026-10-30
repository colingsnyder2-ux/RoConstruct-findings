// roc 2009-12 008d2980  unit: CXTPTabPaintManager  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d2980
//
// 008d2980  53                   push ebx
// 008d2981  55                   push ebp
// 008d2982  56                   push esi
// 008d2983  8b742410             mov esi, dword ptr [esp + 0x10]
// 008d2987  57                   push edi
// 008d2988  8d4624               lea eax, [esi + 0x24]
// 008d298b  50                   push eax
// 008d298c  8be9                 mov ebp, ecx
// 008d298e  ff159cca9800         call dword ptr [0x98ca9c]
// 008d2994  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d2998  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008d299c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008d29a0  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008d29a4  8d7e44               lea edi, [esi + 0x44]
// 008d29a7  894634               mov dword ptr [esi + 0x34], eax
// 008d29aa  8907                 mov dword ptr [edi], eax
// 008d29ac  894e38               mov dword ptr [esi + 0x38], ecx
// 008d29af  894f04               mov dword ptr [edi + 4], ecx
// 008d29b2  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008d29b8  89563c               mov dword ptr [esi + 0x3c], edx
// 008d29bb  895708               mov dword ptr [edi + 8], edx
// 008d29be  6a01                 push 1
// 008d29c0  895e40               mov dword ptr [esi + 0x40], ebx
// 008d29c3  895f0c               mov dword ptr [edi + 0xc], ebx
// 008d29c6  e845c0ffff           call 0x8cea10
// 008d29cb  33d2                 xor edx, edx
// 008d29cd  33c0                 xor eax, eax
// 008d29cf  39565c               cmp dword ptr [esi + 0x5c], edx
// 008d29d2  7e1c                 jle 0x8d29f0
// 008d29d4  3bc2                 cmp eax, edx
// 008d29d6  7c0d                 jl 0x8d29e5
// 008d29d8  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 008d29db  7d08                 jge 0x8d29e5
// 008d29dd  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008d29e0  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008d29e3  eb02                 jmp 0x8d29e7
// 008d29e5  33c9                 xor ecx, ecx
// 008d29e7  40                   inc eax
// 008d29e8  895164               mov dword ptr [ecx + 0x64], edx
// 008d29eb  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 008d29ee  7ce4                 jl 0x8d29d4
// 008d29f0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008d29f4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d29fa  8b11                 mov edx, dword ptr [ecx]
// 008d29fc  8b522c               mov edx, dword ptr [edx + 0x2c]
// 008d29ff  83ec10               sub esp, 0x10
// 008d2a02  8bc4                 mov eax, esp
// 008d2a04  8918                 mov dword ptr [eax], ebx
// 008d2a06  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008d2a0a  895804               mov dword ptr [eax + 4], ebx
// 008d2a0d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008d2a11  895808               mov dword ptr [eax + 8], ebx
// 008d2a14  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 008d2a18  89580c               mov dword ptr [eax + 0xc], ebx
// 008d2a1b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d2a1f  50                   push eax
// 008d2a20  56                   push esi
// 008d2a21  ffd2                 call edx
// 008d2a23  8b4500               mov eax, dword ptr [ebp]
// 008d2a26  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008d2a29  57                   push edi
// 008d2a2a  56                   push esi
// 008d2a2b  8bcd                 mov ecx, ebp
// 008d2a2d  ffd2                 call edx
// 008d2a2f  5f                   pop edi
// 008d2a30  5e                   pop esi
// 008d2a31  5d                   pop ebp
// 008d2a32  5b                   pop ebx
// 008d2a33  c21800               ret 0x18
// copied from an identical function in another client (function ?RepositionTabControl@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp