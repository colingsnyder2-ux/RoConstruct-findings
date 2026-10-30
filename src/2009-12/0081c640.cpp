// roc 2009-12 0081c640  unit: CXTPReportControl  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c640
//
// 0081c640  51                   push ecx
// 0081c641  56                   push esi
// 0081c642  8b742410             mov esi, dword ptr [esp + 0x10]
// 0081c646  8b06                 mov eax, dword ptr [esi]
// 0081c648  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0081c64e  894c2404             mov dword ptr [esp + 4], ecx
// 0081c652  8bce                 mov ecx, esi
// 0081c654  ffd2                 call edx
// 0081c656  85c0                 test eax, eax
// 0081c658  7505                 jne 0x81c65f
// 0081c65a  5e                   pop esi
// 0081c65b  59                   pop ecx
// 0081c65c  c20800               ret 8
// 0081c65f  8b06                 mov eax, dword ptr [esi]
// 0081c661  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c667  53                   push ebx
// 0081c668  55                   push ebp
// 0081c669  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0081c66d  8bce                 mov ecx, esi
// 0081c66f  896c2418             mov dword ptr [esp + 0x18], ebp
// 0081c673  33db                 xor ebx, ebx
// 0081c675  ffd2                 call edx
// 0081c677  8bc8                 mov ecx, eax
// 0081c679  e8a2050100           call 0x82cc20
// 0081c67e  85c0                 test eax, eax
// 0081c680  7e66                 jle 0x81c6e8
// 0081c682  57                   push edi
// 0081c683  8b06                 mov eax, dword ptr [esi]
// 0081c685  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c68b  8bce                 mov ecx, esi
// 0081c68d  ffd2                 call edx
// 0081c68f  8b10                 mov edx, dword ptr [eax]
// 0081c691  8bc8                 mov ecx, eax
// 0081c693  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0081c696  53                   push ebx
// 0081c697  ffd0                 call eax
// 0081c699  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0081c69c  8bf8                 mov edi, eax
// 0081c69e  41                   inc ecx
// 0081c69f  894f54               mov dword ptr [edi + 0x54], ecx
// 0081c6a2  8b16                 mov edx, dword ptr [esi]
// 0081c6a4  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0081c6aa  8bce                 mov ecx, esi
// 0081c6ac  ffd0                 call eax
// 0081c6ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081c6b2  f7d8                 neg eax
// 0081c6b4  1bc0                 sbb eax, eax
// 0081c6b6  f7d8                 neg eax
// 0081c6b8  034658               add eax, dword ptr [esi + 0x58]
// 0081c6bb  57                   push edi
// 0081c6bc  894758               mov dword ptr [edi + 0x58], eax
// 0081c6bf  8b11                 mov edx, dword ptr [ecx]
// 0081c6c1  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 0081c6c7  8d4501               lea eax, [ebp + 1]
// 0081c6ca  50                   push eax
// 0081c6cb  ffd2                 call edx
// 0081c6cd  03e8                 add ebp, eax
// 0081c6cf  8b06                 mov eax, dword ptr [esi]
// 0081c6d1  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c6d7  8bce                 mov ecx, esi
// 0081c6d9  43                   inc ebx
// 0081c6da  ffd2                 call edx
// 0081c6dc  8bc8                 mov ecx, eax
// 0081c6de  e83d050100           call 0x82cc20
// 0081c6e3  3bd8                 cmp ebx, eax
// 0081c6e5  7c9c                 jl 0x81c683
// 0081c6e7  5f                   pop edi
// 0081c6e8  8bc5                 mov eax, ebp
// 0081c6ea  2b442418             sub eax, dword ptr [esp + 0x18]
// 0081c6ee  5d                   pop ebp
// 0081c6ef  5b                   pop ebx
// 0081c6f0  5e                   pop esi
// 0081c6f1  59                   pop ecx
// 0081c6f2  c20800               ret 8
// copied from an identical function in another client (function ?_DoExpand@CXTPReportControl@@MAEHHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp