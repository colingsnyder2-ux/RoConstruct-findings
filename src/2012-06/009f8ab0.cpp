// from server: 100% by auto
// roc 2012-06 009f8ab0  unit: CXTPResourceManager  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8ab0
//
// 009f8ab0  83ec18               sub esp, 0x18
// 009f8ab3  56                   push esi
// 009f8ab4  8b742420             mov esi, dword ptr [esp + 0x20]
// 009f8ab8  56                   push esi
// 009f8ab9  ff15143bb200         call dword ptr [0xb23b14]
// 009f8abf  85c0                 test eax, eax
// 009f8ac1  7532                 jne 0x9f8af5
// 009f8ac3  8b442428             mov eax, dword ptr [esp + 0x28]
// 009f8ac7  50                   push eax
// 009f8ac8  56                   push esi
// 009f8ac9  ff15083cb200         call dword ptr [0xb23c08]
// 009f8acf  68704e9800           push 0x984e70
// 009f8ad4  b958a0e500           mov ecx, 0xe5a058
// 009f8ad9  e8a00a0a00           call 0xa9957e
// 009f8ade  85c0                 test eax, eax
// 009f8ae0  7505                 jne 0x9f8ae7
// 009f8ae2  e8d998f8ff           call 0x9823c0
// 009f8ae7  c7402400000000       mov dword ptr [eax + 0x24], 0
// 009f8aee  5e                   pop esi
// 009f8aef  83c418               add esp, 0x18
// 009f8af2  c21000               ret 0x10
// 009f8af5  57                   push edi
// 009f8af6  8d4c2410             lea ecx, [esp + 0x10]
// 009f8afa  51                   push ecx
// 009f8afb  56                   push esi
// 009f8afc  ff15f83ab200         call dword ptr [0xb23af8]
// 009f8b02  8d542408             lea edx, [esp + 8]
// 009f8b06  52                   push edx
// 009f8b07  ff158c3ab200         call dword ptr [0xb23a8c]
// 009f8b0d  56                   push esi
// 009f8b0e  ff15503ab200         call dword ptr [0xb23a50]
// 009f8b14  85c0                 test eax, eax
// 009f8b16  741e                 je 0x9f8b36
// 009f8b18  6af0                 push -0x10
// 009f8b1a  56                   push esi
// 009f8b1b  ff15bc3ab200         call dword ptr [0xb23abc]
// 009f8b21  85c0                 test eax, eax
// 009f8b23  7811                 js 0x9f8b36
// 009f8b25  56                   push esi
// 009f8b26  e805ffffff           call 0x9f8a30
// 009f8b2b  83c404               add esp, 4
// 009f8b2e  85c0                 test eax, eax
// 009f8b30  7504                 jne 0x9f8b36
// 009f8b32  33ff                 xor edi, edi
// 009f8b34  eb05                 jmp 0x9f8b3b
// 009f8b36  bf01000000           mov edi, 1
// 009f8b3b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f8b3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009f8b43  50                   push eax
// 009f8b44  51                   push ecx
// 009f8b45  8d542418             lea edx, [esp + 0x18]
// 009f8b49  52                   push edx
// 009f8b4a  ff15483bb200         call dword ptr [0xb23b48]
// 009f8b50  85c0                 test eax, eax
// 009f8b52  7404                 je 0x9f8b58
// 009f8b54  85ff                 test edi, edi
// 009f8b56  753b                 jne 0x9f8b93
// 009f8b58  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009f8b5c  50                   push eax
// 009f8b5d  56                   push esi
// 009f8b5e  ff15083cb200         call dword ptr [0xb23c08]
// 009f8b64  68704e9800           push 0x984e70
// 009f8b69  b958a0e500           mov ecx, 0xe5a058
// 009f8b6e  e80b0a0a00           call 0xa9957e
// 009f8b73  85c0                 test eax, eax
// 009f8b75  7505                 jne 0x9f8b7c
// 009f8b77  e84498f8ff           call 0x9823c0
// 009f8b7c  6a00                 push 0
// 009f8b7e  6a00                 push 0
// 009f8b80  68a3020000           push 0x2a3
// 009f8b85  56                   push esi
// 009f8b86  c7402400000000       mov dword ptr [eax + 0x24], 0
// 009f8b8d  ff15243cb200         call dword ptr [0xb23c24]
// 009f8b93  5f                   pop edi
// 009f8b94  5e                   pop esi
// 009f8b95  83c418               add esp, 0x18
// 009f8b98  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPMouseManager.cpp (function ?TrackMouseTimerProc@CXTPMouseManager@@CGXPAUHWND__@@IIK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMouseManager.cpp
