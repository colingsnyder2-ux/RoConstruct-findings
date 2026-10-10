// roc 2008-06 006a2c40  unit: CXTPCommandBar  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2c40
//
// 006a2c40  83ec1c               sub esp, 0x1c
// 006a2c43  56                   push esi
// 006a2c44  8bf1                 mov esi, ecx
// 006a2c46  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 006a2c4d  0f848c000000         je 0x6a2cdf
// 006a2c53  53                   push ebx
// 006a2c54  8b1dc42c8000         mov ebx, dword ptr [0x802cc4]
// 006a2c5a  55                   push ebp
// 006a2c5b  8b2dc82c8000         mov ebp, dword ptr [0x802cc8]
// 006a2c61  57                   push edi
// 006a2c62  8b3d782c8000         mov edi, dword ptr [0x802c78]
// 006a2c68  6a00                 push 0
// 006a2c6a  6a00                 push 0
// 006a2c6c  6a00                 push 0
// 006a2c6e  8d44241c             lea eax, [esp + 0x1c]
// 006a2c72  50                   push eax
// 006a2c73  ffd7                 call edi
// 006a2c75  85c0                 test eax, eax
// 006a2c77  7463                 je 0x6a2cdc
// 006a2c79  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 006a2c80  7440                 je 0x6a2cc2
// 006a2c82  817c24146a030000     cmp dword ptr [esp + 0x14], 0x36a
// 006a2c8a  7425                 je 0x6a2cb1
// 006a2c8c  e8bde1ffff           call 0x6a0e4e
// 006a2c91  8b10                 mov edx, dword ptr [eax]
// 006a2c93  8b5260               mov edx, dword ptr [edx + 0x60]
// 006a2c96  8d4c2410             lea ecx, [esp + 0x10]
// 006a2c9a  51                   push ecx
// 006a2c9b  8bc8                 mov ecx, eax
// 006a2c9d  ffd2                 call edx
// 006a2c9f  85c0                 test eax, eax
// 006a2ca1  750e                 jne 0x6a2cb1
// 006a2ca3  8d442410             lea eax, [esp + 0x10]
// 006a2ca7  50                   push eax
// 006a2ca8  ffd3                 call ebx
// 006a2caa  8d4c2410             lea ecx, [esp + 0x10]
// 006a2cae  51                   push ecx
// 006a2caf  ffd5                 call ebp
// 006a2cb1  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 006a2cb8  75ae                 jne 0x6a2c68
// 006a2cba  5f                   pop edi
// 006a2cbb  5d                   pop ebp
// 006a2cbc  5b                   pop ebx
// 006a2cbd  5e                   pop esi
// 006a2cbe  83c41c               add esp, 0x1c
// 006a2cc1  c3                   ret 
// 006a2cc2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a2cc6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a2cca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a2cce  52                   push edx
// 006a2ccf  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a2cd3  50                   push eax
// 006a2cd4  51                   push ecx
// 006a2cd5  52                   push edx
// 006a2cd6  ff150c2e8000         call dword ptr [0x802e0c]
// 006a2cdc  5f                   pop edi
// 006a2cdd  5d                   pop ebp
// 006a2cde  5b                   pop ebx
// 006a2cdf  5e                   pop esi
// 006a2ce0  83c41c               add esp, 0x1c
// 006a2ce3  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?PumpMessage@CXTPPopupBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
