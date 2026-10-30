// roc 2009-12 0081e010  unit: CXTPReportControl  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e010
//
// 0081e010  81ec94000000         sub esp, 0x94
// 0081e016  a10052b600           mov eax, dword ptr [0xb65200]
// 0081e01b  33c4                 xor eax, esp
// 0081e01d  89842490000000       mov dword ptr [esp + 0x90], eax
// 0081e024  c7042403000000       mov dword ptr [esp], 3
// 0081e02b  e8f0d60100           call 0x83b720
// 0081e030  8bc8                 mov ecx, eax
// 0081e032  e819d70100           call 0x83b750
// 0081e037  84c0                 test al, al
// 0081e039  0f8481000000         je 0x81e0c0
// 0081e03f  8d442404             lea eax, [esp + 4]
// 0081e043  50                   push eax
// 0081e044  6a01                 push 1
// 0081e046  6a00                 push 0
// 0081e048  68644d9f00           push 0x9f4d64
// 0081e04d  6801000080           push 0x80000001
// 0081e052  ff1510b09800         call dword ptr [0x98b010]
// 0081e058  85c0                 test eax, eax
// 0081e05a  7575                 jne 0x81e0d1
// 0081e05c  8d4c2408             lea ecx, [esp + 8]
// 0081e060  51                   push ecx
// 0081e061  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081e065  8d542414             lea edx, [esp + 0x14]
// 0081e069  52                   push edx
// 0081e06a  8d442414             lea eax, [esp + 0x14]
// 0081e06e  50                   push eax
// 0081e06f  6a00                 push 0
// 0081e071  68504d9f00           push 0x9f4d50
// 0081e076  51                   push ecx
// 0081e077  c744242080000000     mov dword ptr [esp + 0x20], 0x80
// 0081e07f  ff1520b09800         call dword ptr [0x98b020]
// 0081e085  85c0                 test eax, eax
// 0081e087  7514                 jne 0x81e09d
// 0081e089  6a0a                 push 0xa
// 0081e08b  50                   push eax
// 0081e08c  8d542418             lea edx, [esp + 0x18]
// 0081e090  52                   push edx
// 0081e091  ff152cb99800         call dword ptr [0x98b92c]
// 0081e097  83c40c               add esp, 0xc
// 0081e09a  890424               mov dword ptr [esp], eax
// 0081e09d  8b442404             mov eax, dword ptr [esp + 4]
// 0081e0a1  50                   push eax
// 0081e0a2  ff1508b09800         call dword ptr [0x98b008]
// 0081e0a8  8b0424               mov eax, dword ptr [esp]
// 0081e0ab  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0081e0b2  33cc                 xor ecx, esp
// 0081e0b4  e8e172fdff           call 0x7f539a
// 0081e0b9  81c494000000         add esp, 0x94
// 0081e0bf  c3                   ret 
// 0081e0c0  6a00                 push 0
// 0081e0c2  8d4c2404             lea ecx, [esp + 4]
// 0081e0c6  51                   push ecx
// 0081e0c7  6a00                 push 0
// 0081e0c9  6a68                 push 0x68
// 0081e0cb  ff1500cc9800         call dword ptr [0x98cc00]
// 0081e0d1  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0081e0d8  8b0424               mov eax, dword ptr [esp]
// 0081e0db  33cc                 xor ecx, esp
// 0081e0dd  e8b872fdff           call 0x7f539a
// 0081e0e2  81c494000000         add esp, 0x94
// 0081e0e8  c3                   ret 
// copied from an identical function in another client (function ?GetMouseScrollLines@CXTPReportControl@@KAIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp