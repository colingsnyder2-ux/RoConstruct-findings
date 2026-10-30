// roc 2009-12 008e33a0  unit: CXTShadowWnd  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e33a0
//
// 008e33a0  83ec30               sub esp, 0x30
// 008e33a3  53                   push ebx
// 008e33a4  8bd9                 mov ebx, ecx
// 008e33a6  53                   push ebx
// 008e33a7  8d4c2408             lea ecx, [esp + 8]
// 008e33ab  e8c07ef6ff           call 0x84b270
// 008e33b0  8d442438             lea eax, [esp + 0x38]
// 008e33b4  50                   push eax
// 008e33b5  8d4c2408             lea ecx, [esp + 8]
// 008e33b9  51                   push ecx
// 008e33ba  8d54241c             lea edx, [esp + 0x1c]
// 008e33be  52                   push edx
// 008e33bf  ff15dcca9800         call dword ptr [0x98cadc]
// 008e33c5  85c0                 test eax, eax
// 008e33c7  7473                 je 0x8e343c
// 008e33c9  56                   push esi
// 008e33ca  57                   push edi
// 008e33cb  53                   push ebx
// 008e33cc  8d4c2430             lea ecx, [esp + 0x30]
// 008e33d0  e8fb7ef6ff           call 0x84b2d0
// 008e33d5  8b3dc4b09800         mov edi, dword ptr [0x98b0c4]
// 008e33db  8d44242c             lea eax, [esp + 0x2c]
// 008e33df  50                   push eax
// 008e33e0  ffd7                 call edi
// 008e33e2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e33e6  8bf0                 mov esi, eax
// 008e33e8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e33ec  f7d9                 neg ecx
// 008e33ee  51                   push ecx
// 008e33ef  f7d8                 neg eax
// 008e33f1  50                   push eax
// 008e33f2  8d4c2424             lea ecx, [esp + 0x24]
// 008e33f6  51                   push ecx
// 008e33f7  ff156ccc9800         call dword ptr [0x98cc6c]
// 008e33fd  8d54241c             lea edx, [esp + 0x1c]
// 008e3401  52                   push edx
// 008e3402  ffd7                 call edi
// 008e3404  6a04                 push 4
// 008e3406  8bf8                 mov edi, eax
// 008e3408  57                   push edi
// 008e3409  56                   push esi
// 008e340a  56                   push esi
// 008e340b  ff15acb09800         call dword ptr [0x98b0ac]
// 008e3411  57                   push edi
// 008e3412  8b3d3cb19800         mov edi, dword ptr [0x98b13c]
// 008e3418  ffd7                 call edi
// 008e341a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008e341d  6a00                 push 0
// 008e341f  56                   push esi
// 008e3420  50                   push eax
// 008e3421  ff1554cb9800         call dword ptr [0x98cb54]
// 008e3427  85c0                 test eax, eax
// 008e3429  7503                 jne 0x8e342e
// 008e342b  56                   push esi
// 008e342c  ffd7                 call edi
// 008e342e  5f                   pop edi
// 008e342f  5e                   pop esi
// 008e3430  b801000000           mov eax, 1
// 008e3435  5b                   pop ebx
// 008e3436  83c430               add esp, 0x30
// 008e3439  c21000               ret 0x10
// 008e343c  b801000000           mov eax, 1
// 008e3441  5b                   pop ebx
// 008e3442  83c430               add esp, 0x30
// 008e3445  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?ExcludeRect@CXTShadowWnd@@IAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
