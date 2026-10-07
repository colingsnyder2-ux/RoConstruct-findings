// roc 2007-08 0065fee0  unit: CXTPReportHeader  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065fee0
//
// 0065fee0  83ec14               sub esp, 0x14
// 0065fee3  55                   push ebp
// 0065fee4  8be9                 mov ebp, ecx
// 0065fee6  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0065fee9  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0065feec  2b4870               sub ecx, dword ptr [eax + 0x70]
// 0065feef  83c070               add eax, 0x70
// 0065fef2  83bd8c00000000       cmp dword ptr [ebp + 0x8c], 0
// 0065fef9  894c2404             mov dword ptr [esp + 4], ecx
// 0065fefd  750c                 jne 0x65ff0b
// 0065feff  b8007d0000           mov eax, 0x7d00
// 0065ff04  5d                   pop ebp
// 0065ff05  83c414               add esp, 0x14
// 0065ff08  c20400               ret 4
// 0065ff0b  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0065ff0e  53                   push ebx
// 0065ff0f  56                   push esi
// 0065ff10  57                   push edi
// 0065ff11  33f6                 xor esi, esi
// 0065ff13  33ff                 xor edi, edi
// 0065ff15  397030               cmp dword ptr [eax + 0x30], esi
// 0065ff18  7e54                 jle 0x65ff6e
// 0065ff1a  8d9b00000000         lea ebx, [ebx]
// 0065ff20  85f6                 test esi, esi
// 0065ff22  7c0d                 jl 0x65ff31
// 0065ff24  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0065ff27  7d08                 jge 0x65ff31
// 0065ff29  8b402c               mov eax, dword ptr [eax + 0x2c]
// 0065ff2c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0065ff2f  eb02                 jmp 0x65ff33
// 0065ff31  33db                 xor ebx, ebx
// 0065ff33  8bcb                 mov ecx, ebx
// 0065ff35  e876e6ffff           call 0x65e5b0
// 0065ff3a  85c0                 test eax, eax
// 0065ff3c  7425                 je 0x65ff63
// 0065ff3e  85ff                 test edi, edi
// 0065ff40  7e09                 jle 0x65ff4b
// 0065ff42  8bcb                 mov ecx, ebx
// 0065ff44  e887eaffff           call 0x65e9d0
// 0065ff49  2bf8                 sub edi, eax
// 0065ff4b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065ff4f  3bd9                 cmp ebx, ecx
// 0065ff51  7510                 jne 0x65ff63
// 0065ff53  8d542414             lea edx, [esp + 0x14]
// 0065ff57  52                   push edx
// 0065ff58  e843220300           call 0x6921a0
// 0065ff5d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065ff61  2b38                 sub edi, dword ptr [eax]
// 0065ff63  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0065ff66  83c601               add esi, 1
// 0065ff69  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0065ff6c  7cb2                 jl 0x65ff20
// 0065ff6e  8bc7                 mov eax, edi
// 0065ff70  5f                   pop edi
// 0065ff71  5e                   pop esi
// 0065ff72  5b                   pop ebx
// 0065ff73  5d                   pop ebp
// 0065ff74  83c414               add esp, 0x14
// 0065ff77  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?GetMaxAvailWidth@CXTPReportHeader@@IAEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
