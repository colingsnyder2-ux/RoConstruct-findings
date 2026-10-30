// roc 2009-06 007fe0d0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fe0d0
//
// 007fe0d0  83ec20               sub esp, 0x20
// 007fe0d3  53                   push ebx
// 007fe0d4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007fe0d8  8b03                 mov eax, dword ptr [ebx]
// 007fe0da  8b5048               mov edx, dword ptr [eax + 0x48]
// 007fe0dd  55                   push ebp
// 007fe0de  56                   push esi
// 007fe0df  8bf1                 mov esi, ecx
// 007fe0e1  57                   push edi
// 007fe0e2  8bcb                 mov ecx, ebx
// 007fe0e4  ffd2                 call edx
// 007fe0e6  50                   push eax
// 007fe0e7  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fe0ea  8b5050               mov edx, dword ptr [eax + 0x50]
// 007fe0ed  83c050               add eax, 0x50
// 007fe0f0  83ec10               sub esp, 0x10
// 007fe0f3  8bcc                 mov ecx, esp
// 007fe0f5  8911                 mov dword ptr [ecx], edx
// 007fe0f7  8b5004               mov edx, dword ptr [eax + 4]
// 007fe0fa  895104               mov dword ptr [ecx + 4], edx
// 007fe0fd  8b5008               mov edx, dword ptr [eax + 8]
// 007fe100  8b400c               mov eax, dword ptr [eax + 0xc]
// 007fe103  895108               mov dword ptr [ecx + 8], edx
// 007fe106  89410c               mov dword ptr [ecx + 0xc], eax
// 007fe109  8d4c2450             lea ecx, [esp + 0x50]
// 007fe10d  51                   push ecx
// 007fe10e  e8cdbaffff           call 0x7f9be0
// 007fe113  83c418               add esp, 0x18
// 007fe116  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 007fe11a  0f84df000000         je 0x7fe1ff
// 007fe120  8b16                 mov edx, dword ptr [esi]
// 007fe122  8b421c               mov eax, dword ptr [edx + 0x1c]
// 007fe125  53                   push ebx
// 007fe126  8bce                 mov ecx, esi
// 007fe128  ffd0                 call eax
// 007fe12a  8b542444             mov edx, dword ptr [esp + 0x44]
// 007fe12e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fe132  89542418             mov dword ptr [esp + 0x18], edx
// 007fe136  8b542448             mov edx, dword ptr [esp + 0x48]
// 007fe13a  8954241c             mov dword ptr [esp + 0x1c], edx
// 007fe13e  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007fe141  837a3802             cmp dword ptr [edx + 0x38], 2
// 007fe145  89442434             mov dword ptr [esp + 0x34], eax
// 007fe149  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007fe14d  89442410             mov dword ptr [esp + 0x10], eax
// 007fe151  7405                 je 0x7fe158
// 007fe153  40                   inc eax
// 007fe154  89442410             mov dword ptr [esp + 0x10], eax
// 007fe158  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 007fe15b  41                   inc ecx
// 007fe15c  33ed                 xor ebp, ebp
// 007fe15e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007fe162  85c0                 test eax, eax
// 007fe164  0f8e95000000         jle 0x7fe1ff
// 007fe16a  8d9b00000000         lea ebx, [ebx]
// 007fe170  85ed                 test ebp, ebp
// 007fe172  7c15                 jl 0x7fe189
// 007fe174  3be8                 cmp ebp, eax
// 007fe176  7d11                 jge 0x7fe189
// 007fe178  3b6b5c               cmp ebp, dword ptr [ebx + 0x5c]
// 007fe17b  0f8d88000000         jge 0x7fe209
// 007fe181  8b4358               mov eax, dword ptr [ebx + 0x58]
// 007fe184  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 007fe187  eb02                 jmp 0x7fe18b
// 007fe189  33f6                 xor esi, esi
// 007fe18b  8b542434             mov edx, dword ptr [esp + 0x34]
// 007fe18f  8d3c11               lea edi, [ecx + edx]
// 007fe192  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fe196  83ec10               sub esp, 0x10
// 007fe199  8bc4                 mov eax, esp
// 007fe19b  8910                 mov dword ptr [eax], edx
// 007fe19d  894804               mov dword ptr [eax + 4], ecx
// 007fe1a0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fe1a4  894808               mov dword ptr [eax + 8], ecx
// 007fe1a7  8bce                 mov ecx, esi
// 007fe1a9  89780c               mov dword ptr [eax + 0xc], edi
// 007fe1ac  e89f5affff           call 0x7f3c50
// 007fe1b1  8b5660               mov edx, dword ptr [esi + 0x60]
// 007fe1b4  8bcf                 mov ecx, edi
// 007fe1b6  397204               cmp dword ptr [edx + 4], esi
// 007fe1b9  7538                 jne 0x7fe1f3
// 007fe1bb  8b7b5c               mov edi, dword ptr [ebx + 0x5c]
// 007fe1be  8b542434             mov edx, dword ptr [esp + 0x34]
// 007fe1c2  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007fe1c6  2bfd                 sub edi, ebp
// 007fe1c8  4f                   dec edi
// 007fe1c9  0faffa               imul edi, edx
// 007fe1cc  8bc6                 mov eax, esi
// 007fe1ce  2bc7                 sub eax, edi
// 007fe1d0  03d1                 add edx, ecx
// 007fe1d2  3bd0                 cmp edx, eax
// 007fe1d4  7e02                 jle 0x7fe1d8
// 007fe1d6  8bc2                 mov eax, edx
// 007fe1d8  8d56ff               lea edx, [esi - 1]
// 007fe1db  3bc2                 cmp eax, edx
// 007fe1dd  8bf0                 mov esi, eax
// 007fe1df  7c02                 jl 0x7fe1e3
// 007fe1e1  8bf2                 mov esi, edx
// 007fe1e3  3bce                 cmp ecx, esi
// 007fe1e5  7e04                 jle 0x7fe1eb
// 007fe1e7  8bc1                 mov eax, ecx
// 007fe1e9  eb06                 jmp 0x7fe1f1
// 007fe1eb  3bc2                 cmp eax, edx
// 007fe1ed  7c02                 jl 0x7fe1f1
// 007fe1ef  8bc2                 mov eax, edx
// 007fe1f1  8bc8                 mov ecx, eax
// 007fe1f3  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 007fe1f6  45                   inc ebp
// 007fe1f7  3be8                 cmp ebp, eax
// 007fe1f9  0f8c71ffffff         jl 0x7fe170
// 007fe1ff  5f                   pop edi
// 007fe200  5e                   pop esi
// 007fe201  5d                   pop ebp
// 007fe202  5b                   pop ebx
// 007fe203  83c420               add esp, 0x20
// 007fe206  c21800               ret 0x18
// 007fe209  e8d6aaf1ff           call 0x718ce4
// copied from an identical function in another client (function ?RepositionTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp