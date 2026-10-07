// roc 2012-06 00a79a90  unit: CXTButtonTheme  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79a90
//
// 00a79a90  53                   push ebx
// 00a79a91  56                   push esi
// 00a79a92  57                   push edi
// 00a79a93  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a79a97  8bf1                 mov esi, ecx
// 00a79a99  8b06                 mov eax, dword ptr [esi]
// 00a79a9b  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a79a9e  57                   push edi
// 00a79a9f  ffd2                 call edx
// 00a79aa1  8a5c2410             mov bl, byte ptr [esp + 0x10]
// 00a79aa5  85c0                 test eax, eax
// 00a79aa7  747c                 je 0xa79b25
// 00a79aa9  55                   push ebp
// 00a79aaa  8bcf                 mov ecx, edi
// 00a79aac  bd01000000           mov ebp, 1
// 00a79ab1  e82a0cffff           call 0xa6a6e0
// 00a79ab6  3c01                 cmp al, 1
// 00a79ab8  7505                 jne 0xa79abf
// 00a79aba  bd05000000           mov ebp, 5
// 00a79abf  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00a79ac6  750b                 jne 0xa79ad3
// 00a79ac8  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a79ace  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00a79ad1  7505                 jne 0xa79ad8
// 00a79ad3  bd02000000           mov ebp, 2
// 00a79ad8  f6c301               test bl, 1
// 00a79adb  7506                 jne 0xa79ae3
// 00a79add  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 00a79ae1  7405                 je 0xa79ae8
// 00a79ae3  bd03000000           mov ebp, 3
// 00a79ae8  f6c304               test bl, 4
// 00a79aeb  7405                 je 0xa79af2
// 00a79aed  bd04000000           mov ebp, 4
// 00a79af2  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a79af5  83f8ff               cmp eax, -1
// 00a79af8  7503                 jne 0xa79afd
// 00a79afa  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a79afd  8d4c2418             lea ecx, [esp + 0x18]
// 00a79b01  51                   push ecx
// 00a79b02  68db0e0000           push 0xedb
// 00a79b07  55                   push ebp
// 00a79b08  6a01                 push 1
// 00a79b0a  8d4e74               lea ecx, [esi + 0x74]
// 00a79b0d  89442428             mov dword ptr [esp + 0x28], eax
// 00a79b11  e8fabbf7ff           call 0x9f5710
// 00a79b16  5d                   pop ebp
// 00a79b17  85c0                 test eax, eax
// 00a79b19  7c0a                 jl 0xa79b25
// 00a79b1b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a79b1f  5f                   pop edi
// 00a79b20  5e                   pop esi
// 00a79b21  5b                   pop ebx
// 00a79b22  c20800               ret 8
// 00a79b25  f6c304               test bl, 4
// 00a79b28  7411                 je 0xa79b3b
// 00a79b2a  8b4640               mov eax, dword ptr [esi + 0x40]
// 00a79b2d  83f8ff               cmp eax, -1
// 00a79b30  7514                 jne 0xa79b46
// 00a79b32  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00a79b35  5f                   pop edi
// 00a79b36  5e                   pop esi
// 00a79b37  5b                   pop ebx
// 00a79b38  c20800               ret 8
// 00a79b3b  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a79b3e  83f8ff               cmp eax, -1
// 00a79b41  7503                 jne 0xa79b46
// 00a79b43  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a79b46  5f                   pop edi
// 00a79b47  5e                   pop esi
// 00a79b48  5b                   pop ebx
// 00a79b49  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTButtonTheme.cpp
