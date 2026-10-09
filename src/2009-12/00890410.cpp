// roc 2009-12 00890410  unit: CXTPDockContext  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890410
//
// 00890410  8b442404             mov eax, dword ptr [esp + 4]
// 00890414  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00890418  53                   push ebx
// 00890419  8b1d70cc9800         mov ebx, dword ptr [0x98cc70]
// 0089041f  56                   push esi
// 00890420  8bf1                 mov esi, ecx
// 00890422  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00890426  57                   push edi
// 00890427  894608               mov dword ptr [esi + 8], eax
// 0089042a  8b4604               mov eax, dword ptr [esi + 4]
// 0089042d  894e0c               mov dword ptr [esi + 0xc], ecx
// 00890430  895610               mov dword ptr [esi + 0x10], edx
// 00890433  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00890436  8d7e40               lea edi, [esi + 0x40]
// 00890439  57                   push edi
// 0089043a  51                   push ecx
// 0089043b  ffd3                 call ebx
// 0089043d  8b16                 mov edx, dword ptr [esi]
// 0089043f  8b4210               mov eax, dword ptr [edx + 0x10]
// 00890442  8bce                 mov ecx, esi
// 00890444  ffd0                 call eax
// 00890446  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890449  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0089044c  57                   push edi
// 0089044d  52                   push edx
// 0089044e  ffd3                 call ebx
// 00890450  8b4604               mov eax, dword ptr [esi + 4]
// 00890453  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 0089045a  750b                 jne 0x890467
// 0089045c  8b0f                 mov ecx, dword ptr [edi]
// 0089045e  8b5704               mov edx, dword ptr [edi + 4]
// 00890461  894e28               mov dword ptr [esi + 0x28], ecx
// 00890464  89562c               mov dword ptr [esi + 0x2c], edx
// 00890467  8b4f08               mov ecx, dword ptr [edi + 8]
// 0089046a  2b0f                 sub ecx, dword ptr [edi]
// 0089046c  5f                   pop edi
// 0089046d  5e                   pop esi
// 0089046e  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 00890474  5b                   pop ebx
// 00890475  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?StartResize@CXTPDockContext@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
