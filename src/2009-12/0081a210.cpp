// roc 2009-12 0081a210  unit: CInstanceRecord::CNameItem  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a210
//
// 0081a210  53                   push ebx
// 0081a211  55                   push ebp
// 0081a212  56                   push esi
// 0081a213  57                   push edi
// 0081a214  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0081a218  837f0400             cmp dword ptr [edi + 4], 0
// 0081a21c  8bd9                 mov ebx, ecx
// 0081a21e  7468                 je 0x81a288
// 0081a220  8b03                 mov eax, dword ptr [ebx]
// 0081a222  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0081a228  ffd2                 call edx
// 0081a22a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0081a22e  83f8ff               cmp eax, -1
// 0081a231  744c                 je 0x81a27f
// 0081a233  8b4704               mov eax, dword ptr [edi + 4]
// 0081a236  8ba800010000         mov ebp, dword ptr [eax + 0x100]
// 0081a23c  8b13                 mov edx, dword ptr [ebx]
// 0081a23e  8b7d00               mov edi, dword ptr [ebp]
// 0081a241  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0081a247  8bcb                 mov ecx, ebx
// 0081a249  81c7a8000000         add edi, 0xa8
// 0081a24f  ffd0                 call eax
// 0081a251  8b0e                 mov ecx, dword ptr [esi]
// 0081a253  8b5604               mov edx, dword ptr [esi + 4]
// 0081a256  50                   push eax
// 0081a257  83ec10               sub esp, 0x10
// 0081a25a  8bc4                 mov eax, esp
// 0081a25c  8908                 mov dword ptr [eax], ecx
// 0081a25e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081a261  895004               mov dword ptr [eax + 4], edx
// 0081a264  8b560c               mov edx, dword ptr [esi + 0xc]
// 0081a267  894808               mov dword ptr [eax + 8], ecx
// 0081a26a  89500c               mov dword ptr [eax + 0xc], edx
// 0081a26d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081a271  8b4804               mov ecx, dword ptr [eax + 4]
// 0081a274  8b17                 mov edx, dword ptr [edi]
// 0081a276  51                   push ecx
// 0081a277  6a00                 push 0
// 0081a279  8bcd                 mov ecx, ebp
// 0081a27b  ffd2                 call edx
// 0081a27d  0106                 add dword ptr [esi], eax
// 0081a27f  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 0081a283  7403                 je 0x81a288
// 0081a285  83060f               add dword ptr [esi], 0xf
// 0081a288  5f                   pop edi
// 0081a289  5e                   pop esi
// 0081a28a  5d                   pop ebp
// 0081a28b  5b                   pop ebx
// 0081a28c  c20800               ret 8
// copied from an identical function in another client (function ?GetCaptionRect@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp