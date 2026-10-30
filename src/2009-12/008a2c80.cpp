// roc 2009-12 008a2c80  unit: CXTPReportHyperlinks  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2c80
//
// 008a2c80  55                   push ebp
// 008a2c81  57                   push edi
// 008a2c82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a2c86  8be9                 mov ebp, ecx
// 008a2c88  3bfd                 cmp edi, ebp
// 008a2c8a  7452                 je 0x8a2cde
// 008a2c8c  8b4500               mov eax, dword ptr [ebp]
// 008a2c8f  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 008a2c95  ffd2                 call edx
// 008a2c97  85ff                 test edi, edi
// 008a2c99  7443                 je 0x8a2cde
// 008a2c9b  8b07                 mov eax, dword ptr [edi]
// 008a2c9d  8b5058               mov edx, dword ptr [eax + 0x58]
// 008a2ca0  53                   push ebx
// 008a2ca1  8bcf                 mov ecx, edi
// 008a2ca3  ffd2                 call edx
// 008a2ca5  33db                 xor ebx, ebx
// 008a2ca7  89442410             mov dword ptr [esp + 0x10], eax
// 008a2cab  85c0                 test eax, eax
// 008a2cad  7e2e                 jle 0x8a2cdd
// 008a2caf  56                   push esi
// 008a2cb0  8b07                 mov eax, dword ptr [edi]
// 008a2cb2  8b5060               mov edx, dword ptr [eax + 0x60]
// 008a2cb5  53                   push ebx
// 008a2cb6  8bcf                 mov ecx, edi
// 008a2cb8  ffd2                 call edx
// 008a2cba  8bf0                 mov esi, eax
// 008a2cbc  85f6                 test esi, esi
// 008a2cbe  7415                 je 0x8a2cd5
// 008a2cc0  8d4604               lea eax, [esi + 4]
// 008a2cc3  50                   push eax
// 008a2cc4  ff150cb29800         call dword ptr [0x98b20c]
// 008a2cca  8b5500               mov edx, dword ptr [ebp]
// 008a2ccd  8b4278               mov eax, dword ptr [edx + 0x78]
// 008a2cd0  56                   push esi
// 008a2cd1  8bcd                 mov ecx, ebp
// 008a2cd3  ffd0                 call eax
// 008a2cd5  43                   inc ebx
// 008a2cd6  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 008a2cda  7cd4                 jl 0x8a2cb0
// 008a2cdc  5e                   pop esi
// 008a2cdd  5b                   pop ebx
// 008a2cde  5f                   pop edi
// 008a2cdf  5d                   pop ebp
// 008a2ce0  c20400               ret 4
// copied from an identical function in another client (function ?CopyFrom@CXTPReportHyperlinks@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp