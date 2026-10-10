// roc 2008-06 00753b10  unit: CXTPReportHeaderDragWnd  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753b10
//
// 00753b10  8b442414             mov eax, dword ptr [esp + 0x14]
// 00753b14  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00753b18  56                   push esi
// 00753b19  8bf1                 mov esi, ecx
// 00753b1b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00753b1f  894654               mov dword ptr [esi + 0x54], eax
// 00753b22  8b442414             mov eax, dword ptr [esp + 0x14]
// 00753b26  57                   push edi
// 00753b27  89565c               mov dword ptr [esi + 0x5c], edx
// 00753b2a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753b2e  8bf8                 mov edi, eax
// 00753b30  2bfa                 sub edi, edx
// 00753b32  894e58               mov dword ptr [esi + 0x58], ecx
// 00753b35  7511                 jne 0x753b48
// 00753b37  8b01                 mov eax, dword ptr [ecx]
// 00753b39  8b5068               mov edx, dword ptr [eax + 0x68]
// 00753b3c  ffd2                 call edx
// 00753b3e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00753b42  03c2                 add eax, edx
// 00753b44  89442418             mov dword ptr [esp + 0x18], eax
// 00753b48  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00753b4c  2b7c240c             sub edi, dword ptr [esp + 0xc]
// 00753b50  53                   push ebx
// 00753b51  2bc2                 sub eax, edx
// 00753b53  55                   push ebp
// 00753b54  8bd8                 mov ebx, eax
// 00753b56  e8cbcdf4ff           call 0x6a0926
// 00753b5b  68007f0000           push 0x7f00
// 00753b60  6a00                 push 0
// 00753b62  ff15d02d8000         call dword ptr [0x802dd0]
// 00753b68  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00753b6c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00753b70  6a00                 push 0
// 00753b72  6a00                 push 0
// 00753b74  8b2e                 mov ebp, dword ptr [esi]
// 00753b76  6a00                 push 0
// 00753b78  53                   push ebx
// 00753b79  57                   push edi
// 00753b7a  51                   push ecx
// 00753b7b  52                   push edx
// 00753b7c  6800000088           push 0x88000000
// 00753b81  6a00                 push 0
// 00753b83  6a00                 push 0
// 00753b85  6a00                 push 0
// 00753b87  50                   push eax
// 00753b88  6a00                 push 0
// 00753b8a  e8fdd3f4ff           call 0x6a0f8c
// 00753b8f  50                   push eax
// 00753b90  8b4564               mov eax, dword ptr [ebp + 0x64]
// 00753b93  6888000000           push 0x88
// 00753b98  8bce                 mov ecx, esi
// 00753b9a  ffd0                 call eax
// 00753b9c  8bf8                 mov edi, eax
// 00753b9e  5d                   pop ebp
// 00753b9f  5b                   pop ebx
// 00753ba0  85ff                 test edi, edi
// 00753ba2  7427                 je 0x753bcb
// 00753ba4  8b4654               mov eax, dword ptr [esi + 0x54]
// 00753ba7  85c0                 test eax, eax
// 00753ba9  7420                 je 0x753bcb
// 00753bab  8b4024               mov eax, dword ptr [eax + 0x24]
// 00753bae  85c0                 test eax, eax
// 00753bb0  7419                 je 0x753bcb
// 00753bb2  83b83402000000       cmp dword ptr [eax + 0x234], 0
// 00753bb9  7410                 je 0x753bcb
// 00753bbb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00753bbe  6a00                 push 0
// 00753bc0  6a64                 push 0x64
// 00753bc2  6a01                 push 1
// 00753bc4  51                   push ecx
// 00753bc5  ff157c2d8000         call dword ptr [0x802d7c]
// 00753bcb  8bc7                 mov eax, edi
// 00753bcd  5f                   pop edi
// 00753bce  5e                   pop esi
// 00753bcf  c21c00               ret 0x1c
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportDragDrop.cpp (function ?Create@CXTPReportHeaderDragWnd@@UAEHVCRect@@PAVCXTPReportHeader@@PAVCXTPReportPaintManager@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp
