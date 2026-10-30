// roc 2009-12 008a4030  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4030
//
// 008a4030  83ec18               sub esp, 0x18
// 008a4033  57                   push edi
// 008a4034  8bf9                 mov edi, ecx
// 008a4036  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a403a  e8e13af8ff           call 0x827b20
// 008a403f  85c0                 test eax, eax
// 008a4041  7460                 je 0x8a40a3
// 008a4043  8b07                 mov eax, dword ptr [edi]
// 008a4045  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 008a404b  8bcf                 mov ecx, edi
// 008a404d  ffd2                 call edx
// 008a404f  2b4758               sub eax, dword ptr [edi + 0x58]
// 008a4052  85c0                 test eax, eax
// 008a4054  7e01                 jle 0x8a4057
// 008a4056  40                   inc eax
// 008a4057  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008a405a  56                   push esi
// 008a405b  50                   push eax
// 008a405c  e86f84f7ff           call 0x81c4d0
// 008a4061  8b742424             mov esi, dword ptr [esp + 0x24]
// 008a4065  0106                 add dword ptr [esi], eax
// 008a4067  8b5608               mov edx, dword ptr [esi + 8]
// 008a406a  8b06                 mov eax, dword ptr [esi]
// 008a406c  8b4e04               mov ecx, dword ptr [esi + 4]
// 008a406f  89542418             mov dword ptr [esp + 0x18], edx
// 008a4073  89442410             mov dword ptr [esp + 0x10], eax
// 008a4077  8b460c               mov eax, dword ptr [esi + 0xc]
// 008a407a  8d542410             lea edx, [esp + 0x10]
// 008a407e  52                   push edx
// 008a407f  57                   push edi
// 008a4080  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a4084  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008a4087  89442424             mov dword ptr [esp + 0x24], eax
// 008a408b  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008a4091  6a00                 push 0
// 008a4093  8d442414             lea eax, [esp + 0x14]
// 008a4097  50                   push eax
// 008a4098  e84373ffff           call 0x89b3e0
// 008a409d  8b00                 mov eax, dword ptr [eax]
// 008a409f  40                   inc eax
// 008a40a0  0106                 add dword ptr [esi], eax
// 008a40a2  5e                   pop esi
// 008a40a3  5f                   pop edi
// 008a40a4  83c418               add esp, 0x18
// 008a40a7  c20800               ret 8
// copied from an identical function in another client (function ?ShiftTreeIndent@CXTPReportRow@@UBEXAAVCRect@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp