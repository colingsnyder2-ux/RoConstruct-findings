// roc 2008-06 0074eba0  unit: CXTPReportHyperlinks  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074eba0
//
// 0074eba0  55                   push ebp
// 0074eba1  57                   push edi
// 0074eba2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074eba6  8be9                 mov ebp, ecx
// 0074eba8  3bfd                 cmp edi, ebp
// 0074ebaa  7452                 je 0x74ebfe
// 0074ebac  8b4500               mov eax, dword ptr [ebp]
// 0074ebaf  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0074ebb5  ffd2                 call edx
// 0074ebb7  85ff                 test edi, edi
// 0074ebb9  7443                 je 0x74ebfe
// 0074ebbb  8b07                 mov eax, dword ptr [edi]
// 0074ebbd  8b5058               mov edx, dword ptr [eax + 0x58]
// 0074ebc0  53                   push ebx
// 0074ebc1  8bcf                 mov ecx, edi
// 0074ebc3  ffd2                 call edx
// 0074ebc5  33db                 xor ebx, ebx
// 0074ebc7  89442410             mov dword ptr [esp + 0x10], eax
// 0074ebcb  85c0                 test eax, eax
// 0074ebcd  7e2e                 jle 0x74ebfd
// 0074ebcf  56                   push esi
// 0074ebd0  8b07                 mov eax, dword ptr [edi]
// 0074ebd2  8b5060               mov edx, dword ptr [eax + 0x60]
// 0074ebd5  53                   push ebx
// 0074ebd6  8bcf                 mov ecx, edi
// 0074ebd8  ffd2                 call edx
// 0074ebda  8bf0                 mov esi, eax
// 0074ebdc  85f6                 test esi, esi
// 0074ebde  7415                 je 0x74ebf5
// 0074ebe0  8d4604               lea eax, [esi + 4]
// 0074ebe3  50                   push eax
// 0074ebe4  ff15b0218000         call dword ptr [0x8021b0]
// 0074ebea  8b5500               mov edx, dword ptr [ebp]
// 0074ebed  8b4278               mov eax, dword ptr [edx + 0x78]
// 0074ebf0  56                   push esi
// 0074ebf1  8bcd                 mov ecx, ebp
// 0074ebf3  ffd0                 call eax
// 0074ebf5  43                   inc ebx
// 0074ebf6  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 0074ebfa  7cd4                 jl 0x74ebd0
// 0074ebfc  5e                   pop esi
// 0074ebfd  5b                   pop ebx
// 0074ebfe  5f                   pop edi
// 0074ebff  5d                   pop ebp
// 0074ec00  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportHyperlink.cpp (function ?CopyFrom@CXTPReportHyperlinks@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHyperlink.cpp
