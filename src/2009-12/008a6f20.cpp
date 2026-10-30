// roc 2009-12 008a6f20  unit: CXTPReportHeaderDragWnd  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6f20
//
// 008a6f20  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a6f24  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a6f28  56                   push esi
// 008a6f29  8bf1                 mov esi, ecx
// 008a6f2b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a6f2f  894654               mov dword ptr [esi + 0x54], eax
// 008a6f32  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a6f36  57                   push edi
// 008a6f37  89565c               mov dword ptr [esi + 0x5c], edx
// 008a6f3a  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6f3e  8bf8                 mov edi, eax
// 008a6f40  2bfa                 sub edi, edx
// 008a6f42  894e58               mov dword ptr [esi + 0x58], ecx
// 008a6f45  7511                 jne 0x8a6f58
// 008a6f47  8b01                 mov eax, dword ptr [ecx]
// 008a6f49  8b5068               mov edx, dword ptr [eax + 0x68]
// 008a6f4c  ffd2                 call edx
// 008a6f4e  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6f52  03c2                 add eax, edx
// 008a6f54  89442418             mov dword ptr [esp + 0x18], eax
// 008a6f58  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a6f5c  2b7c240c             sub edi, dword ptr [esp + 0xc]
// 008a6f60  53                   push ebx
// 008a6f61  2bc2                 sub eax, edx
// 008a6f63  55                   push ebp
// 008a6f64  8bd8                 mov ebx, eax
// 008a6f66  e8b3cbf4ff           call 0x7f3b1e
// 008a6f6b  68007f0000           push 0x7f00
// 008a6f70  6a00                 push 0
// 008a6f72  ff1548ca9800         call dword ptr [0x98ca48]
// 008a6f78  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a6f7c  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a6f80  6a00                 push 0
// 008a6f82  6a00                 push 0
// 008a6f84  8b2e                 mov ebp, dword ptr [esi]
// 008a6f86  6a00                 push 0
// 008a6f88  53                   push ebx
// 008a6f89  57                   push edi
// 008a6f8a  51                   push ecx
// 008a6f8b  52                   push edx
// 008a6f8c  6800000088           push 0x88000000
// 008a6f91  6a00                 push 0
// 008a6f93  6a00                 push 0
// 008a6f95  6a00                 push 0
// 008a6f97  50                   push eax
// 008a6f98  6a00                 push 0
// 008a6f9a  e887d2f4ff           call 0x7f4226
// 008a6f9f  50                   push eax
// 008a6fa0  8b4564               mov eax, dword ptr [ebp + 0x64]
// 008a6fa3  6888000000           push 0x88
// 008a6fa8  8bce                 mov ecx, esi
// 008a6faa  ffd0                 call eax
// 008a6fac  8bf8                 mov edi, eax
// 008a6fae  5d                   pop ebp
// 008a6faf  5b                   pop ebx
// 008a6fb0  85ff                 test edi, edi
// 008a6fb2  7427                 je 0x8a6fdb
// 008a6fb4  8b4654               mov eax, dword ptr [esi + 0x54]
// 008a6fb7  85c0                 test eax, eax
// 008a6fb9  7420                 je 0x8a6fdb
// 008a6fbb  8b4024               mov eax, dword ptr [eax + 0x24]
// 008a6fbe  85c0                 test eax, eax
// 008a6fc0  7419                 je 0x8a6fdb
// 008a6fc2  83b83402000000       cmp dword ptr [eax + 0x234], 0
// 008a6fc9  7410                 je 0x8a6fdb
// 008a6fcb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6fce  6a00                 push 0
// 008a6fd0  6a64                 push 0x64
// 008a6fd2  6a01                 push 1
// 008a6fd4  51                   push ecx
// 008a6fd5  ff1558cc9800         call dword ptr [0x98cc58]
// 008a6fdb  8bc7                 mov eax, edi
// 008a6fdd  5f                   pop edi
// 008a6fde  5e                   pop esi
// 008a6fdf  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Create@CXTPReportHeaderDragWnd@@UAEHVCRect@@PAVCXTPReportHeader@@PAVCXTPReportPaintManager@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp