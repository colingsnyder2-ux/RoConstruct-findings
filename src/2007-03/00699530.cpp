// roc 2007-03 00699530  unit: seg_00690000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00699530
//
// 00699530  53                   push ebx
// 00699531  56                   push esi
// 00699532  8bf1                 mov esi, ecx
// 00699534  e847faf9ff           call 0x638f80
// 00699539  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069953d  3b8eb0010000         cmp ecx, dword ptr [esi + 0x1b0]
// 00699543  8bd8                 mov ebx, eax
// 00699545  7506                 jne 0x69954d
// 00699547  8b9eb4010000         mov ebx, dword ptr [esi + 0x1b4]
// 0069954d  85db                 test ebx, ebx
// 0069954f  7433                 je 0x699584
// 00699551  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 00699557  85c0                 test eax, eax
// 00699559  7429                 je 0x699584
// 0069955b  3bc3                 cmp eax, ebx
// 0069955d  7425                 je 0x699584
// 0069955f  57                   push edi
// 00699560  51                   push ecx
// 00699561  e82652f8ff           call 0x61e78c
// 00699566  8bf8                 mov edi, eax
// 00699568  85ff                 test edi, edi
// 0069956a  7417                 je 0x699583
// 0069956c  8b4704               mov eax, dword ptr [edi + 4]
// 0069956f  50                   push eax
// 00699570  ff152ced7700         call dword ptr [0x77ed2c]
// 00699576  85c0                 test eax, eax
// 00699578  7409                 je 0x699583
// 0069957a  57                   push edi
// 0069957b  53                   push ebx
// 0069957c  8bce                 mov ecx, esi
// 0069957e  e8fdfcffff           call 0x699280
// 00699583  5f                   pop edi
// 00699584  5e                   pop esi
// 00699585  5b                   pop ebx
// 00699586  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?SwitchMDIMenu@CXTPMenuBar@@IAEXPAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
