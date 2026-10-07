// roc 2007-08 00720a60  unit: CXTButtonTheme  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720a60
//
// 00720a60  53                   push ebx
// 00720a61  56                   push esi
// 00720a62  57                   push edi
// 00720a63  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00720a67  8bf1                 mov esi, ecx
// 00720a69  8b06                 mov eax, dword ptr [esi]
// 00720a6b  8b5014               mov edx, dword ptr [eax + 0x14]
// 00720a6e  57                   push edi
// 00720a6f  ffd2                 call edx
// 00720a71  85c0                 test eax, eax
// 00720a73  8a5c2410             mov bl, byte ptr [esp + 0x10]
// 00720a77  747c                 je 0x720af5
// 00720a79  55                   push ebp
// 00720a7a  8bcf                 mov ecx, edi
// 00720a7c  bd01000000           mov ebp, 1
// 00720a81  e8fa3fffff           call 0x714a80
// 00720a86  3c01                 cmp al, 1
// 00720a88  7505                 jne 0x720a8f
// 00720a8a  bd05000000           mov ebp, 5
// 00720a8f  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00720a96  750b                 jne 0x720aa3
// 00720a98  ff1544ec7700         call dword ptr [0x77ec44]
// 00720a9e  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00720aa1  7505                 jne 0x720aa8
// 00720aa3  bd02000000           mov ebp, 2
// 00720aa8  f6c301               test bl, 1
// 00720aab  7506                 jne 0x720ab3
// 00720aad  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 00720ab1  7405                 je 0x720ab8
// 00720ab3  bd03000000           mov ebp, 3
// 00720ab8  f6c304               test bl, 4
// 00720abb  7405                 je 0x720ac2
// 00720abd  bd04000000           mov ebp, 4
// 00720ac2  8b4634               mov eax, dword ptr [esi + 0x34]
// 00720ac5  83f8ff               cmp eax, -1
// 00720ac8  7503                 jne 0x720acd
// 00720aca  8b4630               mov eax, dword ptr [esi + 0x30]
// 00720acd  8d4c2418             lea ecx, [esp + 0x18]
// 00720ad1  51                   push ecx
// 00720ad2  68db0e0000           push 0xedb
// 00720ad7  55                   push ebp
// 00720ad8  6a01                 push 1
// 00720ada  8d4e74               lea ecx, [esi + 0x74]
// 00720add  89442428             mov dword ptr [esp + 0x28], eax
// 00720ae1  e81adff7ff           call 0x69ea00
// 00720ae6  85c0                 test eax, eax
// 00720ae8  5d                   pop ebp
// 00720ae9  7c0a                 jl 0x720af5
// 00720aeb  8b442414             mov eax, dword ptr [esp + 0x14]
// 00720aef  5f                   pop edi
// 00720af0  5e                   pop esi
// 00720af1  5b                   pop ebx
// 00720af2  c20800               ret 8
// 00720af5  f6c304               test bl, 4
// 00720af8  7411                 je 0x720b0b
// 00720afa  8b4640               mov eax, dword ptr [esi + 0x40]
// 00720afd  83f8ff               cmp eax, -1
// 00720b00  7514                 jne 0x720b16
// 00720b02  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00720b05  5f                   pop edi
// 00720b06  5e                   pop esi
// 00720b07  5b                   pop ebx
// 00720b08  c20800               ret 8
// 00720b0b  8b4634               mov eax, dword ptr [esi + 0x34]
// 00720b0e  83f8ff               cmp eax, -1
// 00720b11  7503                 jne 0x720b16
// 00720b13  8b4630               mov eax, dword ptr [esi + 0x30]
// 00720b16  5f                   pop edi
// 00720b17  5e                   pop esi
// 00720b18  5b                   pop ebx
// 00720b19  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
