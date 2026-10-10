// roc 2008-06 006c6d80  unit: CInstanceRecord::CNameItem  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c6d80
//
// 006c6d80  53                   push ebx
// 006c6d81  55                   push ebp
// 006c6d82  56                   push esi
// 006c6d83  57                   push edi
// 006c6d84  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c6d88  837f0400             cmp dword ptr [edi + 4], 0
// 006c6d8c  8bd9                 mov ebx, ecx
// 006c6d8e  7468                 je 0x6c6df8
// 006c6d90  8b03                 mov eax, dword ptr [ebx]
// 006c6d92  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006c6d98  ffd2                 call edx
// 006c6d9a  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c6d9e  83f8ff               cmp eax, -1
// 006c6da1  744c                 je 0x6c6def
// 006c6da3  8b4704               mov eax, dword ptr [edi + 4]
// 006c6da6  8ba800010000         mov ebp, dword ptr [eax + 0x100]
// 006c6dac  8b13                 mov edx, dword ptr [ebx]
// 006c6dae  8b7d00               mov edi, dword ptr [ebp]
// 006c6db1  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 006c6db7  8bcb                 mov ecx, ebx
// 006c6db9  81c7a8000000         add edi, 0xa8
// 006c6dbf  ffd0                 call eax
// 006c6dc1  8b0e                 mov ecx, dword ptr [esi]
// 006c6dc3  8b5604               mov edx, dword ptr [esi + 4]
// 006c6dc6  50                   push eax
// 006c6dc7  83ec10               sub esp, 0x10
// 006c6dca  8bc4                 mov eax, esp
// 006c6dcc  8908                 mov dword ptr [eax], ecx
// 006c6dce  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c6dd1  895004               mov dword ptr [eax + 4], edx
// 006c6dd4  8b560c               mov edx, dword ptr [esi + 0xc]
// 006c6dd7  894808               mov dword ptr [eax + 8], ecx
// 006c6dda  89500c               mov dword ptr [eax + 0xc], edx
// 006c6ddd  8b442428             mov eax, dword ptr [esp + 0x28]
// 006c6de1  8b4804               mov ecx, dword ptr [eax + 4]
// 006c6de4  8b17                 mov edx, dword ptr [edi]
// 006c6de6  51                   push ecx
// 006c6de7  6a00                 push 0
// 006c6de9  8bcd                 mov ecx, ebp
// 006c6deb  ffd2                 call edx
// 006c6ded  0106                 add dword ptr [esi], eax
// 006c6def  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 006c6df3  7403                 je 0x6c6df8
// 006c6df5  83060f               add dword ptr [esi], 0xf
// 006c6df8  5f                   pop edi
// 006c6df9  5e                   pop esi
// 006c6dfa  5d                   pop ebp
// 006c6dfb  5b                   pop ebx
// 006c6dfc  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?GetCaptionRect@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
