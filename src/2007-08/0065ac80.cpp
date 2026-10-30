// from server: 100% by auto
// roc 2007-08 0065ac80  unit: CXTPReportControl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ac80
//
// 0065ac80  83ec0c               sub esp, 0xc
// 0065ac83  53                   push ebx
// 0065ac84  8b1dbced7700         mov ebx, dword ptr [0x77edbc]
// 0065ac8a  57                   push edi
// 0065ac8b  8bf9                 mov edi, ecx
// 0065ac8d  8b4720               mov eax, dword ptr [edi + 0x20]
// 0065ac90  50                   push eax
// 0065ac91  ffd3                 call ebx
// 0065ac93  85c0                 test eax, eax
// 0065ac95  7508                 jne 0x65ac9f
// 0065ac97  5f                   pop edi
// 0065ac98  5b                   pop ebx
// 0065ac99  83c40c               add esp, 0xc
// 0065ac9c  c20800               ret 8
// 0065ac9f  56                   push esi
// 0065aca0  8b742420             mov esi, dword ptr [esp + 0x20]
// 0065aca4  85f6                 test esi, esi
// 0065aca6  7504                 jne 0x65acac
// 0065aca8  8d74240c             lea esi, [esp + 0xc]
// 0065acac  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0065acaf  890e                 mov dword ptr [esi], ecx
// 0065acb1  8bcf                 mov ecx, edi
// 0065acb3  e8f8d80d00           call 0x7385b0
// 0065acb8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065acbc  894604               mov dword ptr [esi + 4], eax
// 0065acbf  895608               mov dword ptr [esi + 8], edx
// 0065acc2  8b4738               mov eax, dword ptr [edi + 0x38]
// 0065acc5  85c0                 test eax, eax
// 0065acc7  750a                 jne 0x65acd3
// 0065acc9  8b4720               mov eax, dword ptr [edi + 0x20]
// 0065accc  50                   push eax
// 0065accd  ff15f8eb7700         call dword ptr [0x77ebf8]
// 0065acd3  50                   push eax
// 0065acd4  e8e754fdff           call 0x6301c0
// 0065acd9  8bf8                 mov edi, eax
// 0065acdb  85ff                 test edi, edi
// 0065acdd  7424                 je 0x65ad03
// 0065acdf  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0065ace2  51                   push ecx
// 0065ace3  ffd3                 call ebx
// 0065ace5  85c0                 test eax, eax
// 0065ace7  741a                 je 0x65ad03
// 0065ace9  8b4604               mov eax, dword ptr [esi + 4]
// 0065acec  8b5720               mov edx, dword ptr [edi + 0x20]
// 0065acef  56                   push esi
// 0065acf0  50                   push eax
// 0065acf1  6a4e                 push 0x4e
// 0065acf3  52                   push edx
// 0065acf4  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0065acfa  5e                   pop esi
// 0065acfb  5f                   pop edi
// 0065acfc  5b                   pop ebx
// 0065acfd  83c40c               add esp, 0xc
// 0065ad00  c20800               ret 8
// 0065ad03  5e                   pop esi
// 0065ad04  5f                   pop edi
// 0065ad05  33c0                 xor eax, eax
// 0065ad07  5b                   pop ebx
// 0065ad08  83c40c               add esp, 0xc
// 0065ad0b  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ?SendNotifyMessageA@CXTPReportControl@@QBEJIPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
