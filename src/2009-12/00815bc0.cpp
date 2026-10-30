// roc 2009-12 00815bc0  unit: CXTPCommandBar  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815bc0
//
// 00815bc0  53                   push ebx
// 00815bc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00815bc5  55                   push ebp
// 00815bc6  56                   push esi
// 00815bc7  57                   push edi
// 00815bc8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00815bcc  6a01                 push 1
// 00815bce  6a00                 push 0
// 00815bd0  6a01                 push 1
// 00815bd2  6a01                 push 1
// 00815bd4  8bf1                 mov esi, ecx
// 00815bd6  8b0b                 mov ecx, dword ptr [ebx]
// 00815bd8  57                   push edi
// 00815bd9  e8f2f80200           call 0x8454d0
// 00815bde  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00815be1  f6415c01             test byte ptr [ecx + 0x5c], 1
// 00815be5  0f8483000000         je 0x815c6e
// 00815beb  3bc7                 cmp eax, edi
// 00815bed  0f8f7b000000         jg 0x815c6e
// 00815bf3  8b13                 mov edx, dword ptr [ebx]
// 00815bf5  8b4220               mov eax, dword ptr [edx + 0x20]
// 00815bf8  6a01                 push 1
// 00815bfa  50                   push eax
// 00815bfb  8bce                 mov ecx, esi
// 00815bfd  8be8                 mov ebp, eax
// 00815bff  e8fcf3ffff           call 0x815000
// 00815c04  50                   push eax
// 00815c05  8bce                 mov ecx, esi
// 00815c07  e834f4ffff           call 0x815040
// 00815c0c  50                   push eax
// 00815c0d  8bce                 mov ecx, esi
// 00815c0f  e8ccf0ffff           call 0x814ce0
// 00815c14  6a01                 push 1
// 00815c16  6a00                 push 0
// 00815c18  6a01                 push 1
// 00815c1a  8bf8                 mov edi, eax
// 00815c1c  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00815c22  6a01                 push 1
// 00815c24  6aff                 push -1
// 00815c26  890b                 mov dword ptr [ebx], ecx
// 00815c28  e8a3f80200           call 0x8454d0
// 00815c2d  83f8ff               cmp eax, -1
// 00815c30  753c                 jne 0x815c6e
// 00815c32  3bfd                 cmp edi, ebp
// 00815c34  7450                 je 0x815c86
// 00815c36  6a01                 push 1
// 00815c38  57                   push edi
// 00815c39  8bce                 mov ecx, esi
// 00815c3b  e8c0f3ffff           call 0x815000
// 00815c40  50                   push eax
// 00815c41  8bce                 mov ecx, esi
// 00815c43  e8f8f3ffff           call 0x815040
// 00815c48  50                   push eax
// 00815c49  8bce                 mov ecx, esi
// 00815c4b  e890f0ffff           call 0x814ce0
// 00815c50  6a01                 push 1
// 00815c52  6a00                 push 0
// 00815c54  6a01                 push 1
// 00815c56  8bf8                 mov edi, eax
// 00815c58  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 00815c5e  6a01                 push 1
// 00815c60  6aff                 push -1
// 00815c62  890b                 mov dword ptr [ebx], ecx
// 00815c64  e867f80200           call 0x8454d0
// 00815c69  83f8ff               cmp eax, -1
// 00815c6c  74c4                 je 0x815c32
// 00815c6e  8b1b                 mov ebx, dword ptr [ebx]
// 00815c70  85c0                 test eax, eax
// 00815c72  7c12                 jl 0x815c86
// 00815c74  3b432c               cmp eax, dword ptr [ebx + 0x2c]
// 00815c77  7d0d                 jge 0x815c86
// 00815c79  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00815c7c  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00815c7f  5f                   pop edi
// 00815c80  5e                   pop esi
// 00815c81  5d                   pop ebp
// 00815c82  5b                   pop ebx
// 00815c83  c20800               ret 8
// 00815c86  5f                   pop edi
// 00815c87  5e                   pop esi
// 00815c88  5d                   pop ebp
// 00815c89  33c0                 xor eax, eax
// 00815c8b  5b                   pop ebx
// 00815c8c  c20800               ret 8
// copied from an identical function in another client (function ?_GetNextControl@CXTPCommandBars@@IBEPAVCXTPControl@@AAPAVCXTPControls@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp