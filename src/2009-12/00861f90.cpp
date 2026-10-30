// roc 2009-12 00861f90  unit: CXTPPropertyGridToolTip  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861f90
//
// 00861f90  51                   push ecx
// 00861f91  57                   push edi
// 00861f92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00861f96  894c2404             mov dword ptr [esp + 4], ecx
// 00861f9a  85ff                 test edi, edi
// 00861f9c  7507                 jne 0x861fa5
// 00861f9e  33c0                 xor eax, eax
// 00861fa0  5f                   pop edi
// 00861fa1  59                   pop ecx
// 00861fa2  c20400               ret 4
// 00861fa5  53                   push ebx
// 00861fa6  55                   push ebp
// 00861fa7  56                   push esi
// 00861fa8  6a38                 push 0x38
// 00861faa  e8b118f9ff           call 0x7f3860
// 00861faf  8bf0                 mov esi, eax
// 00861fb1  83c404               add esp, 4
// 00861fb4  85f6                 test esi, esi
// 00861fb6  740a                 je 0x861fc2
// 00861fb8  8bce                 mov ecx, esi
// 00861fba  ff1574de9800         call dword ptr [0x98de74]
// 00861fc0  eb02                 jmp 0x861fc4
// 00861fc2  33f6                 xor esi, esi
// 00861fc4  8b4708               mov eax, dword ptr [edi + 8]
// 00861fc7  8b2d64cc9800         mov ebp, dword ptr [0x98cc64]
// 00861fcd  894620               mov dword ptr [esi + 0x20], eax
// 00861fd0  8b4f04               mov ecx, dword ptr [edi + 4]
// 00861fd3  894e08               mov dword ptr [esi + 8], ecx
// 00861fd6  8b570c               mov edx, dword ptr [edi + 0xc]
// 00861fd9  8d4710               lea eax, [edi + 0x10]
// 00861fdc  50                   push eax
// 00861fdd  8d4e0c               lea ecx, [esi + 0xc]
// 00861fe0  51                   push ecx
// 00861fe1  895624               mov dword ptr [esi + 0x24], edx
// 00861fe4  ffd5                 call ebp
// 00861fe6  33c0                 xor eax, eax
// 00861fe8  837f24ff             cmp dword ptr [edi + 0x24], -1
// 00861fec  0f94c0               sete al
// 00861fef  894604               mov dword ptr [esi + 4], eax
// 00861ff2  85c0                 test eax, eax
// 00861ff4  b856fd9900           mov eax, 0x99fd56
// 00861ff9  7503                 jne 0x861ffe
// 00861ffb  8b4724               mov eax, dword ptr [edi + 0x24]
// 00861ffe  50                   push eax
// 00861fff  8bce                 mov ecx, esi
// 00862001  ff155cde9800         call dword ptr [0x98de5c]
// 00862007  8b5720               mov edx, dword ptr [edi + 0x20]
// 0086200a  8d5e28               lea ebx, [esi + 0x28]
// 0086200d  53                   push ebx
// 0086200e  89561c               mov dword ptr [esi + 0x1c], edx
// 00862011  ff159cca9800         call dword ptr [0x98ca9c]
// 00862017  833f2c               cmp dword ptr [edi], 0x2c
// 0086201a  750a                 jne 0x862026
// 0086201c  8b4728               mov eax, dword ptr [edi + 0x28]
// 0086201f  83c00c               add eax, 0xc
// 00862022  50                   push eax
// 00862023  53                   push ebx
// 00862024  ffd5                 call ebp
// 00862026  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086202a  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0086202d  83c154               add ecx, 0x54
// 00862030  56                   push esi
// 00862031  52                   push edx
// 00862032  e8398c0000           call 0x86ac70
// 00862037  5e                   pop esi
// 00862038  5d                   pop ebp
// 00862039  5b                   pop ebx
// 0086203a  b801000000           mov eax, 1
// 0086203f  5f                   pop edi
// 00862040  59                   pop ecx
// 00862041  c20400               ret 4
// copied from an identical function in another client (function ?AddTool@CXTPToolTipContextToolTip@@QAEHPAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp