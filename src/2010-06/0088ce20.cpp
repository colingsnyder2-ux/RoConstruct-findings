// roc 2010-06 0088ce20  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088ce20
//
// 0088ce20  83ec20               sub esp, 0x20
// 0088ce23  53                   push ebx
// 0088ce24  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0088ce28  8b03                 mov eax, dword ptr [ebx]
// 0088ce2a  8b5048               mov edx, dword ptr [eax + 0x48]
// 0088ce2d  55                   push ebp
// 0088ce2e  56                   push esi
// 0088ce2f  8bf1                 mov esi, ecx
// 0088ce31  57                   push edi
// 0088ce32  8bcb                 mov ecx, ebx
// 0088ce34  ffd2                 call edx
// 0088ce36  50                   push eax
// 0088ce37  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088ce3a  8b5050               mov edx, dword ptr [eax + 0x50]
// 0088ce3d  83c050               add eax, 0x50
// 0088ce40  83ec10               sub esp, 0x10
// 0088ce43  8bcc                 mov ecx, esp
// 0088ce45  8911                 mov dword ptr [ecx], edx
// 0088ce47  8b5004               mov edx, dword ptr [eax + 4]
// 0088ce4a  895104               mov dword ptr [ecx + 4], edx
// 0088ce4d  8b5008               mov edx, dword ptr [eax + 8]
// 0088ce50  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088ce53  895108               mov dword ptr [ecx + 8], edx
// 0088ce56  89410c               mov dword ptr [ecx + 0xc], eax
// 0088ce59  8d4c2450             lea ecx, [esp + 0x50]
// 0088ce5d  51                   push ecx
// 0088ce5e  e8cdbaffff           call 0x888930
// 0088ce63  83c418               add esp, 0x18
// 0088ce66  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0088ce6a  0f84df000000         je 0x88cf4f
// 0088ce70  8b16                 mov edx, dword ptr [esi]
// 0088ce72  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0088ce75  53                   push ebx
// 0088ce76  8bce                 mov ecx, esi
// 0088ce78  ffd0                 call eax
// 0088ce7a  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088ce7e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0088ce82  89542418             mov dword ptr [esp + 0x18], edx
// 0088ce86  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088ce8a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0088ce8e  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0088ce91  837a3802             cmp dword ptr [edx + 0x38], 2
// 0088ce95  89442434             mov dword ptr [esp + 0x34], eax
// 0088ce99  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088ce9d  89442410             mov dword ptr [esp + 0x10], eax
// 0088cea1  7405                 je 0x88cea8
// 0088cea3  40                   inc eax
// 0088cea4  89442410             mov dword ptr [esp + 0x10], eax
// 0088cea8  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 0088ceab  41                   inc ecx
// 0088ceac  33ed                 xor ebp, ebp
// 0088ceae  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0088ceb2  85c0                 test eax, eax
// 0088ceb4  0f8e95000000         jle 0x88cf4f
// 0088ceba  8d9b00000000         lea ebx, [ebx]
// 0088cec0  85ed                 test ebp, ebp
// 0088cec2  7c15                 jl 0x88ced9
// 0088cec4  3be8                 cmp ebp, eax
// 0088cec6  7d11                 jge 0x88ced9
// 0088cec8  3b6b5c               cmp ebp, dword ptr [ebx + 0x5c]
// 0088cecb  0f8d88000000         jge 0x88cf59
// 0088ced1  8b4358               mov eax, dword ptr [ebx + 0x58]
// 0088ced4  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 0088ced7  eb02                 jmp 0x88cedb
// 0088ced9  33f6                 xor esi, esi
// 0088cedb  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088cedf  8d3c11               lea edi, [ecx + edx]
// 0088cee2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0088cee6  83ec10               sub esp, 0x10
// 0088cee9  8bc4                 mov eax, esp
// 0088ceeb  8910                 mov dword ptr [eax], edx
// 0088ceed  894804               mov dword ptr [eax + 4], ecx
// 0088cef0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088cef4  894808               mov dword ptr [eax + 8], ecx
// 0088cef7  8bce                 mov ecx, esi
// 0088cef9  89780c               mov dword ptr [eax + 0xc], edi
// 0088cefc  e8df5affff           call 0x8829e0
// 0088cf01  8b5660               mov edx, dword ptr [esi + 0x60]
// 0088cf04  8bcf                 mov ecx, edi
// 0088cf06  397204               cmp dword ptr [edx + 4], esi
// 0088cf09  7538                 jne 0x88cf43
// 0088cf0b  8b7b5c               mov edi, dword ptr [ebx + 0x5c]
// 0088cf0e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088cf12  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0088cf16  2bfd                 sub edi, ebp
// 0088cf18  4f                   dec edi
// 0088cf19  0faffa               imul edi, edx
// 0088cf1c  8bc6                 mov eax, esi
// 0088cf1e  2bc7                 sub eax, edi
// 0088cf20  03d1                 add edx, ecx
// 0088cf22  3bd0                 cmp edx, eax
// 0088cf24  7e02                 jle 0x88cf28
// 0088cf26  8bc2                 mov eax, edx
// 0088cf28  8d56ff               lea edx, [esi - 1]
// 0088cf2b  3bc2                 cmp eax, edx
// 0088cf2d  8bf0                 mov esi, eax
// 0088cf2f  7c02                 jl 0x88cf33
// 0088cf31  8bf2                 mov esi, edx
// 0088cf33  3bce                 cmp ecx, esi
// 0088cf35  7e04                 jle 0x88cf3b
// 0088cf37  8bc1                 mov eax, ecx
// 0088cf39  eb06                 jmp 0x88cf41
// 0088cf3b  3bc2                 cmp eax, edx
// 0088cf3d  7c02                 jl 0x88cf41
// 0088cf3f  8bc2                 mov eax, edx
// 0088cf41  8bc8                 mov ecx, eax
// 0088cf43  8b435c               mov eax, dword ptr [ebx + 0x5c]
// 0088cf46  45                   inc ebp
// 0088cf47  3be8                 cmp ebp, eax
// 0088cf49  0f8c71ffffff         jl 0x88cec0
// 0088cf4f  5f                   pop edi
// 0088cf50  5e                   pop esi
// 0088cf51  5d                   pop ebp
// 0088cf52  5b                   pop ebx
// 0088cf53  83c420               add esp, 0x20
// 0088cf56  c21800               ret 0x18
// 0088cf59  e8eeacf1ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RepositionTabControl@CAppearanceSetVisio@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabPaintManagerAppearance.cpp