// roc 2010-06 00844610  unit: CXTPDockContext  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00844610
//
// 00844610  8b442404             mov eax, dword ptr [esp + 4]
// 00844614  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00844618  53                   push ebx
// 00844619  8b1d3cbc9e00         mov ebx, dword ptr [0x9ebc3c]
// 0084461f  56                   push esi
// 00844620  8bf1                 mov esi, ecx
// 00844622  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00844626  57                   push edi
// 00844627  894608               mov dword ptr [esi + 8], eax
// 0084462a  8b4604               mov eax, dword ptr [esi + 4]
// 0084462d  894e0c               mov dword ptr [esi + 0xc], ecx
// 00844630  895610               mov dword ptr [esi + 0x10], edx
// 00844633  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00844636  8d7e40               lea edi, [esi + 0x40]
// 00844639  57                   push edi
// 0084463a  51                   push ecx
// 0084463b  ffd3                 call ebx
// 0084463d  8b16                 mov edx, dword ptr [esi]
// 0084463f  8b4210               mov eax, dword ptr [edx + 0x10]
// 00844642  8bce                 mov ecx, esi
// 00844644  ffd0                 call eax
// 00844646  8b4e04               mov ecx, dword ptr [esi + 4]
// 00844649  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0084464c  57                   push edi
// 0084464d  52                   push edx
// 0084464e  ffd3                 call ebx
// 00844650  8b4604               mov eax, dword ptr [esi + 4]
// 00844653  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 0084465a  750b                 jne 0x844667
// 0084465c  8b0f                 mov ecx, dword ptr [edi]
// 0084465e  8b5704               mov edx, dword ptr [edi + 4]
// 00844661  894e28               mov dword ptr [esi + 0x28], ecx
// 00844664  89562c               mov dword ptr [esi + 0x2c], edx
// 00844667  8b4f08               mov ecx, dword ptr [edi + 8]
// 0084466a  2b0f                 sub ecx, dword ptr [edi]
// 0084466c  5f                   pop edi
// 0084466d  5e                   pop esi
// 0084466e  8988c8000000         mov dword ptr [eax + 0xc8], ecx
// 00844674  5b                   pop ebx
// 00844675  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockContext.cpp (function ?StartResize@CXTPDockContext@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockContext.cpp
