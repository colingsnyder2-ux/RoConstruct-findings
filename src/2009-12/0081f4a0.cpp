// roc 2009-12 0081f4a0  unit: CXTPReportControl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f4a0
//
// 0081f4a0  53                   push ebx
// 0081f4a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0081f4a5  55                   push ebp
// 0081f4a6  56                   push esi
// 0081f4a7  8b742414             mov esi, dword ptr [esp + 0x14]
// 0081f4ab  57                   push edi
// 0081f4ac  8bf9                 mov edi, ecx
// 0081f4ae  8b8fe0000000         mov ecx, dword ptr [edi + 0xe0]
// 0081f4b4  8b01                 mov eax, dword ptr [ecx]
// 0081f4b6  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0081f4b9  56                   push esi
// 0081f4ba  53                   push ebx
// 0081f4bb  ffd2                 call edx
// 0081f4bd  8d4604               lea eax, [esi + 4]
// 0081f4c0  50                   push eax
// 0081f4c1  ff150cb29800         call dword ptr [0x98b20c]
// 0081f4c7  8b16                 mov edx, dword ptr [esi]
// 0081f4c9  8b4278               mov eax, dword ptr [edx + 0x78]
// 0081f4cc  bd01000000           mov ebp, 1
// 0081f4d1  8bce                 mov ecx, esi
// 0081f4d3  896e5c               mov dword ptr [esi + 0x5c], ebp
// 0081f4d6  ffd0                 call eax
// 0081f4d8  85c0                 test eax, eax
// 0081f4da  7426                 je 0x81f502
// 0081f4dc  8b16                 mov edx, dword ptr [esi]
// 0081f4de  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0081f4e4  8bce                 mov ecx, esi
// 0081f4e6  ffd0                 call eax
// 0081f4e8  85c0                 test eax, eax
// 0081f4ea  7416                 je 0x81f502
// 0081f4ec  8b17                 mov edx, dword ptr [edi]
// 0081f4ee  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 0081f4f4  56                   push esi
// 0081f4f5  53                   push ebx
// 0081f4f6  8bcf                 mov ecx, edi
// 0081f4f8  ffd0                 call eax
// 0081f4fa  5f                   pop edi
// 0081f4fb  5e                   pop esi
// 0081f4fc  5d                   pop ebp
// 0081f4fd  40                   inc eax
// 0081f4fe  5b                   pop ebx
// 0081f4ff  c20800               ret 8
// 0081f502  5f                   pop edi
// 0081f503  5e                   pop esi
// 0081f504  8bc5                 mov eax, ebp
// 0081f506  5d                   pop ebp
// 0081f507  5b                   pop ebx
// 0081f508  c20800               ret 8
// copied from an identical function in another client (function ?InsertRow@CXTPReportControl@@MAEHHPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp