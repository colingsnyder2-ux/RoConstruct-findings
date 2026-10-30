// roc 2009-06 007bec50  unit: CXTPDockContext  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bec50
//
// 007bec50  8b442404             mov eax, dword ptr [esp + 4]
// 007bec54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007bec58  53                   push ebx
// 007bec59  8b1df4ed8900         mov ebx, dword ptr [0x89edf4]
// 007bec5f  56                   push esi
// 007bec60  8bf1                 mov esi, ecx
// 007bec62  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007bec66  57                   push edi
// 007bec67  894608               mov dword ptr [esi + 8], eax
// 007bec6a  8b4604               mov eax, dword ptr [esi + 4]
// 007bec6d  894e0c               mov dword ptr [esi + 0xc], ecx
// 007bec70  895610               mov dword ptr [esi + 0x10], edx
// 007bec73  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007bec76  8d7e40               lea edi, [esi + 0x40]
// 007bec79  57                   push edi
// 007bec7a  51                   push ecx
// 007bec7b  ffd3                 call ebx
// 007bec7d  8b16                 mov edx, dword ptr [esi]
// 007bec7f  8b4210               mov eax, dword ptr [edx + 0x10]
// 007bec82  8bce                 mov ecx, esi
// 007bec84  ffd0                 call eax
// 007bec86  8b4e04               mov ecx, dword ptr [esi + 4]
// 007bec89  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007bec8c  57                   push edi
// 007bec8d  52                   push edx
// 007bec8e  ffd3                 call ebx
// 007bec90  8b4604               mov eax, dword ptr [esi + 4]
// 007bec93  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 007bec9a  750b                 jne 0x7beca7
// 007bec9c  8b0f                 mov ecx, dword ptr [edi]
// 007bec9e  8b5704               mov edx, dword ptr [edi + 4]
// 007beca1  894e28               mov dword ptr [esi + 0x28], ecx
// 007beca4  89562c               mov dword ptr [esi + 0x2c], edx
// 007beca7  8b4f08               mov ecx, dword ptr [edi + 8]
// 007becaa  2b0f                 sub ecx, dword ptr [edi]
// 007becac  5f                   pop edi
// 007becad  5e                   pop esi
// 007becae  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 007becb4  5b                   pop ebx
// 007becb5  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?StartResize@CXTPDockContext@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
