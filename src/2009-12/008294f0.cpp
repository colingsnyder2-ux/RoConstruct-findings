// roc 2009-12 008294f0  unit: CXTPReportHeader  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008294f0
//
// 008294f0  83ec14               sub esp, 0x14
// 008294f3  55                   push ebp
// 008294f4  8be9                 mov ebp, ecx
// 008294f6  8b4524               mov eax, dword ptr [ebp + 0x24]
// 008294f9  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008294fc  2b4870               sub ecx, dword ptr [eax + 0x70]
// 008294ff  83c070               add eax, 0x70
// 00829502  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 00829509  894c2404             mov dword ptr [esp + 4], ecx
// 0082950d  750c                 jne 0x82951b
// 0082950f  b8007d0000           mov eax, 0x7d00
// 00829514  5d                   pop ebp
// 00829515  83c414               add esp, 0x14
// 00829518  c20400               ret 4
// 0082951b  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0082951e  53                   push ebx
// 0082951f  56                   push esi
// 00829520  57                   push edi
// 00829521  33f6                 xor esi, esi
// 00829523  33ff                 xor edi, edi
// 00829525  397030               cmp dword ptr [eax + 0x30], esi
// 00829528  7e52                 jle 0x82957c
// 0082952a  8d9b00000000         lea ebx, [ebx]
// 00829530  85f6                 test esi, esi
// 00829532  7c0d                 jl 0x829541
// 00829534  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829537  7d08                 jge 0x829541
// 00829539  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0082953c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0082953f  eb02                 jmp 0x829543
// 00829541  33db                 xor ebx, ebx
// 00829543  8bcb                 mov ecx, ebx
// 00829545  e876a50800           call 0x8b3ac0
// 0082954a  85c0                 test eax, eax
// 0082954c  7425                 je 0x829573
// 0082954e  85ff                 test edi, edi
// 00829550  7e09                 jle 0x82955b
// 00829552  8bcb                 mov ecx, ebx
// 00829554  e8f7e9ffff           call 0x827f50
// 00829559  2bf8                 sub edi, eax
// 0082955b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082955f  3bd9                 cmp ebx, ecx
// 00829561  7510                 jne 0x829573
// 00829563  8d542414             lea edx, [esp + 0x14]
// 00829567  52                   push edx
// 00829568  e863e5ffff           call 0x827ad0
// 0082956d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00829571  2b38                 sub edi, dword ptr [eax]
// 00829573  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00829576  46                   inc esi
// 00829577  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0082957a  7cb4                 jl 0x829530
// 0082957c  8bc7                 mov eax, edi
// 0082957e  5f                   pop edi
// 0082957f  5e                   pop esi
// 00829580  5b                   pop ebx
// 00829581  5d                   pop ebp
// 00829582  83c414               add esp, 0x14
// 00829585  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
