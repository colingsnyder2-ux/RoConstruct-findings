// roc 2012-06 00a19c30  unit: CXTPDockContext  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19c30
//
// 00a19c30  8b442404             mov eax, dword ptr [esp + 4]
// 00a19c34  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a19c38  53                   push ebx
// 00a19c39  8b1df83ab200         mov ebx, dword ptr [0xb23af8]
// 00a19c3f  56                   push esi
// 00a19c40  8bf1                 mov esi, ecx
// 00a19c42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a19c46  57                   push edi
// 00a19c47  894608               mov dword ptr [esi + 8], eax
// 00a19c4a  8b4604               mov eax, dword ptr [esi + 4]
// 00a19c4d  894e0c               mov dword ptr [esi + 0xc], ecx
// 00a19c50  895610               mov dword ptr [esi + 0x10], edx
// 00a19c53  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a19c56  8d7e40               lea edi, [esi + 0x40]
// 00a19c59  57                   push edi
// 00a19c5a  51                   push ecx
// 00a19c5b  ffd3                 call ebx
// 00a19c5d  8b16                 mov edx, dword ptr [esi]
// 00a19c5f  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a19c62  8bce                 mov ecx, esi
// 00a19c64  ffd0                 call eax
// 00a19c66  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a19c69  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a19c6c  57                   push edi
// 00a19c6d  52                   push edx
// 00a19c6e  ffd3                 call ebx
// 00a19c70  8b4604               mov eax, dword ptr [esi + 4]
// 00a19c73  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00a19c7a  750b                 jne 0xa19c87
// 00a19c7c  8b0f                 mov ecx, dword ptr [edi]
// 00a19c7e  8b5704               mov edx, dword ptr [edi + 4]
// 00a19c81  894e28               mov dword ptr [esi + 0x28], ecx
// 00a19c84  89562c               mov dword ptr [esi + 0x2c], edx
// 00a19c87  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a19c8a  2b0f                 sub ecx, dword ptr [edi]
// 00a19c8c  5f                   pop edi
// 00a19c8d  5e                   pop esi
// 00a19c8e  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 00a19c94  5b                   pop ebx
// 00a19c95  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?StartResize@CXTPDockContext@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
