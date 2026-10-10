// roc 2008-06 00749ce0  unit: CXTPReportPaintManager  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00749ce0
//
// 00749ce0  83ec08               sub esp, 8
// 00749ce3  83b9a802000000       cmp dword ptr [ecx + 0x2a8], 0
// 00749cea  890c24               mov dword ptr [esp], ecx
// 00749ced  0f85e7000000         jne 0x749dda
// 00749cf3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00749cf7  85c0                 test eax, eax
// 00749cf9  0f84db000000         je 0x749dda
// 00749cff  837c241000           cmp dword ptr [esp + 0x10], 0
// 00749d04  0f84d0000000         je 0x749dda
// 00749d0a  53                   push ebx
// 00749d0b  8b9964020000         mov ebx, dword ptr [ecx + 0x264]
// 00749d11  55                   push ebp
// 00749d12  56                   push esi
// 00749d13  57                   push edi
// 00749d14  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 00749d1a  8b4730               mov eax, dword ptr [edi + 0x30]
// 00749d1d  33ed                 xor ebp, ebp
// 00749d1f  897c241c             mov dword ptr [esp + 0x1c], edi
// 00749d23  89442414             mov dword ptr [esp + 0x14], eax
// 00749d27  85c0                 test eax, eax
// 00749d29  0f8e9f000000         jle 0x749dce
// 00749d2f  90                   nop 
// 00749d30  85ed                 test ebp, ebp
// 00749d32  0f8c8b000000         jl 0x749dc3
// 00749d38  3b6f30               cmp ebp, dword ptr [edi + 0x30]
// 00749d3b  0f8d82000000         jge 0x749dc3
// 00749d41  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00749d44  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 00749d47  85f6                 test esi, esi
// 00749d49  7478                 je 0x749dc3
// 00749d4b  8bce                 mov ecx, esi
// 00749d4d  e88ea8f8ff           call 0x6d45e0
// 00749d52  85c0                 test eax, eax
// 00749d54  746d                 je 0x749dc3
// 00749d56  8bce                 mov ecx, esi
// 00749d58  e8a3a7f8ff           call 0x6d4500
// 00749d5d  a810                 test al, 0x10
// 00749d5f  741f                 je 0x749d80
// 00749d61  8b442424             mov eax, dword ptr [esp + 0x24]
// 00749d65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00749d69  8b11                 mov edx, dword ptr [ecx]
// 00749d6b  8b92e4000000         mov edx, dword ptr [edx + 0xe4]
// 00749d71  50                   push eax
// 00749d72  8b442424             mov eax, dword ptr [esp + 0x24]
// 00749d76  56                   push esi
// 00749d77  50                   push eax
// 00749d78  ffd2                 call edx
// 00749d7a  3bd8                 cmp ebx, eax
// 00749d7c  7f02                 jg 0x749d80
// 00749d7e  8bd8                 mov ebx, eax
// 00749d80  8b7e5c               mov edi, dword ptr [esi + 0x5c]
// 00749d83  83ffff               cmp edi, -1
// 00749d86  7437                 je 0x749dbf
// 00749d88  8bce                 mov ecx, esi
// 00749d8a  e8c1a9f8ff           call 0x6d4750
// 00749d8f  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 00749d95  6a00                 push 0
// 00749d97  57                   push edi
// 00749d98  8bc8                 mov ecx, eax
// 00749d9a  e8b167f7ff           call 0x6c0550
// 00749d9f  8bf0                 mov esi, eax
// 00749da1  85f6                 test esi, esi
// 00749da3  741a                 je 0x749dbf
// 00749da5  8bce                 mov ecx, esi
// 00749da7  e8b4fcf6ff           call 0x6b9a60
// 00749dac  83c002               add eax, 2
// 00749daf  3bd8                 cmp ebx, eax
// 00749db1  7f0c                 jg 0x749dbf
// 00749db3  8bce                 mov ecx, esi
// 00749db5  e8a6fcf6ff           call 0x6b9a60
// 00749dba  8bd8                 mov ebx, eax
// 00749dbc  83c302               add ebx, 2
// 00749dbf  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00749dc3  45                   inc ebp
// 00749dc4  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00749dc8  0f8c62ffffff         jl 0x749d30
// 00749dce  5f                   pop edi
// 00749dcf  5e                   pop esi
// 00749dd0  5d                   pop ebp
// 00749dd1  8bc3                 mov eax, ebx
// 00749dd3  5b                   pop ebx
// 00749dd4  83c408               add esp, 8
// 00749dd7  c20c00               ret 0xc
// 00749dda  8b01                 mov eax, dword ptr [ecx]
// 00749ddc  8b5068               mov edx, dword ptr [eax + 0x68]
// 00749ddf  ffd2                 call edx
// 00749de1  83c408               add esp, 8
// 00749de4  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetHeaderHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
