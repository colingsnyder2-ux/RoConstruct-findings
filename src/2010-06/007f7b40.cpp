// roc 2010-06 007f7b40  unit: CXTPPopupBar  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f7b40
//
// 007f7b40  83ec38               sub esp, 0x38
// 007f7b43  55                   push ebp
// 007f7b44  56                   push esi
// 007f7b45  57                   push edi
// 007f7b46  8bf9                 mov edi, ecx
// 007f7b48  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 007f7b4e  8b87b4010000         mov eax, dword ptr [edi + 0x1b4]
// 007f7b54  8b97bc010000         mov edx, dword ptr [edi + 0x1bc]
// 007f7b5a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007f7b5e  8d4c2418             lea ecx, [esp + 0x18]
// 007f7b62  89442418             mov dword ptr [esp + 0x18], eax
// 007f7b66  8b87c0010000         mov eax, dword ptr [edi + 0x1c0]
// 007f7b6c  51                   push ecx
// 007f7b6d  33ed                 xor ebp, ebp
// 007f7b6f  8bcf                 mov ecx, edi
// 007f7b71  89afec010000         mov dword ptr [edi + 0x1ec], ebp
// 007f7b77  89542424             mov dword ptr [esp + 0x24], edx
// 007f7b7b  89442428             mov dword ptr [esp + 0x28], eax
// 007f7b7f  e8bc03fbff           call 0x7a7f40
// 007f7b84  8b3584bc9e00         mov esi, dword ptr [0x9ebc84]
// 007f7b8a  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 007f7b92  ffd6                 call esi
// 007f7b94  85c0                 test eax, eax
// 007f7b96  0f85a3010000         jne 0x7f7d3f
// 007f7b9c  8b5720               mov edx, dword ptr [edi + 0x20]
// 007f7b9f  53                   push ebx
// 007f7ba0  52                   push edx
// 007f7ba1  ff1580bc9e00         call dword ptr [0x9ebc80]
// 007f7ba7  50                   push eax
// 007f7ba8  e8bd00fbff           call 0x7a7c6a
// 007f7bad  33db                 xor ebx, ebx
// 007f7baf  ffd6                 call esi
// 007f7bb1  50                   push eax
// 007f7bb2  e8b300fbff           call 0x7a7c6a
// 007f7bb7  3bc7                 cmp eax, edi
// 007f7bb9  0f8562010000         jne 0x7f7d21
// 007f7bbf  8b3588bc9e00         mov esi, dword ptr [0x9ebc88]
// 007f7bc5  6a00                 push 0
// 007f7bc7  6a0f                 push 0xf
// 007f7bc9  6a0f                 push 0xf
// 007f7bcb  6a00                 push 0
// 007f7bcd  8d44243c             lea eax, [esp + 0x3c]
// 007f7bd1  50                   push eax
// 007f7bd2  ffd6                 call esi
// 007f7bd4  85c0                 test eax, eax
// 007f7bd6  7433                 je 0x7f7c0b
// 007f7bd8  6a0f                 push 0xf
// 007f7bda  6a0f                 push 0xf
// 007f7bdc  6a00                 push 0
// 007f7bde  8d4c2438             lea ecx, [esp + 0x38]
// 007f7be2  51                   push ecx
// 007f7be3  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 007f7be9  85c0                 test eax, eax
// 007f7beb  741e                 je 0x7f7c0b
// 007f7bed  8d54242c             lea edx, [esp + 0x2c]
// 007f7bf1  52                   push edx
// 007f7bf2  ff1508bc9e00         call dword ptr [0x9ebc08]
// 007f7bf8  6a00                 push 0
// 007f7bfa  6a0f                 push 0xf
// 007f7bfc  6a0f                 push 0xf
// 007f7bfe  6a00                 push 0
// 007f7c00  8d44243c             lea eax, [esp + 0x3c]
// 007f7c04  50                   push eax
// 007f7c05  ffd6                 call esi
// 007f7c07  85c0                 test eax, eax
// 007f7c09  75cd                 jne 0x7f7bd8
// 007f7c0b  6a00                 push 0
// 007f7c0d  6a00                 push 0
// 007f7c0f  6a00                 push 0
// 007f7c11  8d4c2438             lea ecx, [esp + 0x38]
// 007f7c15  51                   push ecx
// 007f7c16  ff15f0bb9e00         call dword ptr [0x9ebbf0]
// 007f7c1c  85c0                 test eax, eax
// 007f7c1e  0f84f3000000         je 0x7f7d17
// 007f7c24  8b442430             mov eax, dword ptr [esp + 0x30]
// 007f7c28  3d02020000           cmp eax, 0x202
// 007f7c2d  0f84ee000000         je 0x7f7d21
// 007f7c33  3d00020000           cmp eax, 0x200
// 007f7c38  0f85a8000000         jne 0x7f7ce6
// 007f7c3e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f7c42  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f7c46  3bd9                 cmp ebx, ecx
// 007f7c48  7508                 jne 0x7f7c52
// 007f7c4a  3bea                 cmp ebp, edx
// 007f7c4c  0f84a4000000         je 0x7f7cf6
// 007f7c52  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f7c56  83c00a               add eax, 0xa
// 007f7c59  3bc8                 cmp ecx, eax
// 007f7c5b  8bea                 mov ebp, edx
// 007f7c5d  8bd9                 mov ebx, ecx
// 007f7c5f  896c2418             mov dword ptr [esp + 0x18], ebp
// 007f7c63  7f28                 jg 0x7f7c8d
// 007f7c65  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f7c69  83c0f6               add eax, -0xa
// 007f7c6c  3bc8                 cmp ecx, eax
// 007f7c6e  7c1d                 jl 0x7f7c8d
// 007f7c70  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f7c74  83c00a               add eax, 0xa
// 007f7c77  3bd0                 cmp edx, eax
// 007f7c79  7f12                 jg 0x7f7c8d
// 007f7c7b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f7c7f  83c0f6               add eax, -0xa
// 007f7c82  3bd0                 cmp edx, eax
// 007f7c84  7c07                 jl 0x7f7c8d
// 007f7c86  b801000000           mov eax, 1
// 007f7c8b  eb02                 jmp 0x7f7c8f
// 007f7c8d  33c0                 xor eax, eax
// 007f7c8f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007f7c93  7414                 je 0x7f7ca9
// 007f7c95  52                   push edx
// 007f7c96  51                   push ecx
// 007f7c97  50                   push eax
// 007f7c98  8bcf                 mov ecx, edi
// 007f7c9a  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f7c9e  e81dfaffff           call 0x7f76c0
// 007f7ca3  8b3588bc9e00         mov esi, dword ptr [0x9ebc88]
// 007f7ca9  8b8fec010000         mov ecx, dword ptr [edi + 0x1ec]
// 007f7caf  85c9                 test ecx, ecx
// 007f7cb1  744e                 je 0x7f7d01
// 007f7cb3  8bb7e4010000         mov esi, dword ptr [edi + 0x1e4]
// 007f7cb9  8bc6                 mov eax, esi
// 007f7cbb  99                   cdq 
// 007f7cbc  2bc2                 sub eax, edx
// 007f7cbe  8bd0                 mov edx, eax
// 007f7cc0  d1fa                 sar edx, 1
// 007f7cc2  8bc3                 mov eax, ebx
// 007f7cc4  2bc2                 sub eax, edx
// 007f7cc6  6a01                 push 1
// 007f7cc8  8d55f6               lea edx, [ebp - 0xa]
// 007f7ccb  8bafe8010000         mov ebp, dword ptr [edi + 0x1e8]
// 007f7cd1  55                   push ebp
// 007f7cd2  56                   push esi
// 007f7cd3  52                   push edx
// 007f7cd4  50                   push eax
// 007f7cd5  e89800fbff           call 0x7a7d72
// 007f7cda  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007f7cde  8b3588bc9e00         mov esi, dword ptr [0x9ebc88]
// 007f7ce4  eb1b                 jmp 0x7f7d01
// 007f7ce6  3d00010000           cmp eax, 0x100
// 007f7ceb  7509                 jne 0x7f7cf6
// 007f7ced  837c24341b           cmp dword ptr [esp + 0x34], 0x1b
// 007f7cf2  742d                 je 0x7f7d21
// 007f7cf4  eb0b                 jmp 0x7f7d01
// 007f7cf6  8d44242c             lea eax, [esp + 0x2c]
// 007f7cfa  50                   push eax
// 007f7cfb  ff1508bc9e00         call dword ptr [0x9ebc08]
// 007f7d01  ff1584bc9e00         call dword ptr [0x9ebc84]
// 007f7d07  50                   push eax
// 007f7d08  e85dfffaff           call 0x7a7c6a
// 007f7d0d  3bc7                 cmp eax, edi
// 007f7d0f  0f84b0feffff         je 0x7f7bc5
// 007f7d15  eb0a                 jmp 0x7f7d21
// 007f7d17  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f7d1b  51                   push ecx
// 007f7d1c  e861551800           call 0x97d282
// 007f7d21  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 007f7d27  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 007f7d2e  5b                   pop ebx
// 007f7d2f  740e                 je 0x7f7d3f
// 007f7d31  8bcf                 mov ecx, edi
// 007f7d33  e89808fcff           call 0x7b85d0
// 007f7d38  8bc8                 mov ecx, eax
// 007f7d3a  e87122fdff           call 0x7c9fb0
// 007f7d3f  5f                   pop edi
// 007f7d40  5e                   pop esi
// 007f7d41  5d                   pop ebp
// 007f7d42  83c438               add esp, 0x38
// 007f7d45  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?TrackTearOff@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
