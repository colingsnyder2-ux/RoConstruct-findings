// from server: 100% by auto
// roc 2007-08 0068b570  unit: CXTPTabClientWnd  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b570
//
// 0068b570  83ec1c               sub esp, 0x1c
// 0068b573  53                   push ebx
// 0068b574  56                   push esi
// 0068b575  57                   push edi
// 0068b576  8b3d40ec7700         mov edi, dword ptr [0x77ec40]
// 0068b57c  6a00                 push 0
// 0068b57e  6a0f                 push 0xf
// 0068b580  6a0f                 push 0xf
// 0068b582  6a00                 push 0
// 0068b584  8d44241c             lea eax, [esp + 0x1c]
// 0068b588  50                   push eax
// 0068b589  8bf1                 mov esi, ecx
// 0068b58b  ffd7                 call edi
// 0068b58d  85c0                 test eax, eax
// 0068b58f  7439                 je 0x68b5ca
// 0068b591  8b1d2ced7700         mov ebx, dword ptr [0x77ed2c]
// 0068b597  6a0f                 push 0xf
// 0068b599  6a0f                 push 0xf
// 0068b59b  6a00                 push 0
// 0068b59d  8d4c2418             lea ecx, [esp + 0x18]
// 0068b5a1  51                   push ecx
// 0068b5a2  ff1510ee7700         call dword ptr [0x77ee10]
// 0068b5a8  85c0                 test eax, eax
// 0068b5aa  0f8493000000         je 0x68b643
// 0068b5b0  8d54240c             lea edx, [esp + 0xc]
// 0068b5b4  52                   push edx
// 0068b5b5  ffd3                 call ebx
// 0068b5b7  6a00                 push 0
// 0068b5b9  6a0f                 push 0xf
// 0068b5bb  6a0f                 push 0xf
// 0068b5bd  6a00                 push 0
// 0068b5bf  8d44241c             lea eax, [esp + 0x1c]
// 0068b5c3  50                   push eax
// 0068b5c4  ffd7                 call edi
// 0068b5c6  85c0                 test eax, eax
// 0068b5c8  75cd                 jne 0x68b597
// 0068b5ca  8b3d14ee7700         mov edi, dword ptr [0x77ee14]
// 0068b5d0  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0068b5d6  51                   push ecx
// 0068b5d7  ffd7                 call edi
// 0068b5d9  8d96dc000000         lea edx, [esi + 0xdc]
// 0068b5df  52                   push edx
// 0068b5e0  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0068b5ea  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 0068b5f4  ffd7                 call edi
// 0068b5f6  c786f000000000000000 mov dword ptr [esi + 0xf0], 0
// 0068b600  ff154cee7700         call dword ptr [0x77ee4c]
// 0068b606  50                   push eax
// 0068b607  e8b44bfaff           call 0x6301c0
// 0068b60c  8bf8                 mov edi, eax
// 0068b60e  8b4720               mov eax, dword ptr [edi + 0x20]
// 0068b611  50                   push eax
// 0068b612  ff1548ee7700         call dword ptr [0x77ee48]
// 0068b618  85c0                 test eax, eax
// 0068b61a  740d                 je 0x68b629
// 0068b61c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0068b61f  6803040000           push 0x403
// 0068b624  6a00                 push 0
// 0068b626  51                   push ecx
// 0068b627  eb08                 jmp 0x68b631
// 0068b629  8b5720               mov edx, dword ptr [edi + 0x20]
// 0068b62c  6a03                 push 3
// 0068b62e  6a00                 push 0
// 0068b630  52                   push edx
// 0068b631  ff1544ee7700         call dword ptr [0x77ee44]
// 0068b637  50                   push eax
// 0068b638  e881cd0a00           call 0x7383be
// 0068b63d  898610010000         mov dword ptr [esi + 0x110], eax
// 0068b643  5f                   pop edi
// 0068b644  5e                   pop esi
// 0068b645  5b                   pop ebx
// 0068b646  83c41c               add esp, 0x1c
// 0068b649  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?InitLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
