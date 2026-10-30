// roc 2009-12 008f2c60  unit: CXTPRibbonSystemPopupBar  size: 541 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2c60
//
// 008f2c60  6aff                 push -1
// 008f2c62  68786b9600           push 0x966b78
// 008f2c67  64a100000000         mov eax, dword ptr fs:[0]
// 008f2c6d  50                   push eax
// 008f2c6e  83ec48               sub esp, 0x48
// 008f2c71  53                   push ebx
// 008f2c72  55                   push ebp
// 008f2c73  56                   push esi
// 008f2c74  57                   push edi
// 008f2c75  a10052b600           mov eax, dword ptr [0xb65200]
// 008f2c7a  33c4                 xor eax, esp
// 008f2c7c  50                   push eax
// 008f2c7d  8d44245c             lea eax, [esp + 0x5c]
// 008f2c81  64a300000000         mov dword ptr fs:[0], eax
// 008f2c87  8bd9                 mov ebx, ecx
// 008f2c89  8d4c2434             lea ecx, [esp + 0x34]
// 008f2c8d  e8ee4bf0ff           call 0x7f7880
// 008f2c92  8bcb                 mov ecx, ebx
// 008f2c94  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008f2c9c  33ff                 xor edi, edi
// 008f2c9e  e8ad25f1ff           call 0x805250
// 008f2ca3  85c0                 test eax, eax
// 008f2ca5  7e50                 jle 0x8f2cf7
// 008f2ca7  57                   push edi
// 008f2ca8  8bcb                 mov ecx, ebx
// 008f2caa  e8b125f1ff           call 0x805260
// 008f2caf  8bf0                 mov esi, eax
// 008f2cb1  85f6                 test esi, esi
// 008f2cb3  7436                 je 0x8f2ceb
// 008f2cb5  e866edffff           call 0x8f1a20
// 008f2cba  50                   push eax
// 008f2cbb  8bce                 mov ecx, esi
// 008f2cbd  e82611f0ff           call 0x7f3de8
// 008f2cc2  85c0                 test eax, eax
// 008f2cc4  7425                 je 0x8f2ceb
// 008f2cc6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008f2cca  56                   push esi
// 008f2ccb  50                   push eax
// 008f2ccc  8d4c243c             lea ecx, [esp + 0x3c]
// 008f2cd0  e89b7ff7ff           call 0x86ac70
// 008f2cd5  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008f2cdb  8b16                 mov edx, dword ptr [esi]
// 008f2cdd  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008f2ce3  83c804               or eax, 4
// 008f2ce6  50                   push eax
// 008f2ce7  8bce                 mov ecx, esi
// 008f2ce9  ffd2                 call edx
// 008f2ceb  8bcb                 mov ecx, ebx
// 008f2ced  47                   inc edi
// 008f2cee  e85d25f1ff           call 0x805250
// 008f2cf3  3bf8                 cmp edi, eax
// 008f2cf5  7cb0                 jl 0x8f2ca7
// 008f2cf7  8b442474             mov eax, dword ptr [esp + 0x74]
// 008f2cfb  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008f2cff  50                   push eax
// 008f2d00  51                   push ecx
// 008f2d01  8d54241c             lea edx, [esp + 0x1c]
// 008f2d05  52                   push edx
// 008f2d06  8bcb                 mov ecx, ebx
// 008f2d08  e8b3f9f4ff           call 0x8426c0
// 008f2d0d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008f2d11  85f6                 test esi, esi
// 008f2d13  7513                 jne 0x8f2d28
// 008f2d15  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008f2d19  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f2d1d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f2d21  8906                 mov dword ptr [esi], eax
// 008f2d23  894e04               mov dword ptr [esi + 4], ecx
// 008f2d26  eb78                 jmp 0x8f2da0
// 008f2d28  53                   push ebx
// 008f2d29  8d4c244c             lea ecx, [esp + 0x4c]
// 008f2d2d  e8a419f0ff           call 0x7f46d6
// 008f2d32  8bcb                 mov ecx, ebx
// 008f2d34  c644246401           mov byte ptr [esp + 0x64], 1
// 008f2d39  e85218f1ff           call 0x804590
// 008f2d3e  8b10                 mov edx, dword ptr [eax]
// 008f2d40  6a00                 push 0
// 008f2d42  8bc8                 mov ecx, eax
// 008f2d44  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008f2d4a  53                   push ebx
// 008f2d4b  ffd0                 call eax
// 008f2d4d  50                   push eax
// 008f2d4e  8d4c244c             lea ecx, [esp + 0x4c]
// 008f2d52  51                   push ecx
// 008f2d53  8d4c242c             lea ecx, [esp + 0x2c]
// 008f2d57  e80489f5ff           call 0x84b660
// 008f2d5c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008f2d60  2bbb08020000         sub edi, dword ptr [ebx + 0x208]
// 008f2d66  8d6eff               lea ebp, [esi - 1]
// 008f2d69  47                   inc edi
// 008f2d6a  c644246402           mov byte ptr [esp + 0x64], 2
// 008f2d6f  85ed                 test ebp, ebp
// 008f2d71  7d61                 jge 0x8f2dd4
// 008f2d73  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008f2d77  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f2d7b  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f2d7f  8d4c2424             lea ecx, [esp + 0x24]
// 008f2d83  8916                 mov dword ptr [esi], edx
// 008f2d85  894604               mov dword ptr [esi + 4], eax
// 008f2d88  c644246401           mov byte ptr [esp + 0x64], 1
// 008f2d8d  e84e89f5ff           call 0x84b6e0
// 008f2d92  8d4c2448             lea ecx, [esp + 0x48]
// 008f2d96  c644246400           mov byte ptr [esp + 0x64], 0
// 008f2d9b  e83019f0ff           call 0x7f46d0
// 008f2da0  8d4c2434             lea ecx, [esp + 0x34]
// 008f2da4  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008f2dac  e8ef4af0ff           call 0x7f78a0
// 008f2db1  8bc6                 mov eax, esi
// 008f2db3  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008f2db7  64890d00000000       mov dword ptr fs:[0], ecx
// 008f2dbe  59                   pop ecx
// 008f2dbf  5f                   pop edi
// 008f2dc0  5e                   pop esi
// 008f2dc1  5d                   pop ebp
// 008f2dc2  5b                   pop ebx
// 008f2dc3  83c454               add esp, 0x54
// 008f2dc6  c20c00               ret 0xc
// 008f2dc9  8da42400000000       lea esp, [esp]
// 008f2dd0  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008f2dd4  85ed                 test ebp, ebp
// 008f2dd6  0f8c9c000000         jl 0x8f2e78
// 008f2ddc  3bee                 cmp ebp, esi
// 008f2dde  0f8d94000000         jge 0x8f2e78
// 008f2de4  8b542438             mov edx, dword ptr [esp + 0x38]
// 008f2de8  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 008f2deb  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008f2df1  8b06                 mov eax, dword ptr [esi]
// 008f2df3  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008f2df9  83e1fb               and ecx, 0xfffffffb
// 008f2dfc  51                   push ecx
// 008f2dfd  8bce                 mov ecx, esi
// 008f2dff  ffd2                 call edx
// 008f2e01  8b06                 mov eax, dword ptr [esi]
// 008f2e03  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008f2e09  8d4c2448             lea ecx, [esp + 0x48]
// 008f2e0d  51                   push ecx
// 008f2e0e  8d542420             lea edx, [esp + 0x20]
// 008f2e12  52                   push edx
// 008f2e13  8bce                 mov ecx, esi
// 008f2e15  ffd0                 call eax
// 008f2e17  8b442418             mov eax, dword ptr [esp + 0x18]
// 008f2e1b  8d48fd               lea ecx, [eax - 3]
// 008f2e1e  2b830c020000         sub eax, dword ptr [ebx + 0x20c]
// 008f2e24  894c2470             mov dword ptr [esp + 0x70], ecx
// 008f2e28  83c004               add eax, 4
// 008f2e2b  8bd7                 mov edx, edi
// 008f2e2d  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 008f2e31  83ec10               sub esp, 0x10
// 008f2e34  8bcc                 mov ecx, esp
// 008f2e36  8911                 mov dword ptr [ecx], edx
// 008f2e38  89842484000000       mov dword ptr [esp + 0x84], eax
// 008f2e3f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008f2e46  8b06                 mov eax, dword ptr [esi]
// 008f2e48  8b407c               mov eax, dword ptr [eax + 0x7c]
// 008f2e4b  895104               mov dword ptr [ecx + 4], edx
// 008f2e4e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008f2e55  897908               mov dword ptr [ecx + 8], edi
// 008f2e58  89510c               mov dword ptr [ecx + 0xc], edx
// 008f2e5b  8bce                 mov ecx, esi
// 008f2e5d  ffd0                 call eax
// 008f2e5f  b9faffffff           mov ecx, 0xfffffffa
// 008f2e64  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008f2e68  03f9                 add edi, ecx
// 008f2e6a  83ed01               sub ebp, 1
// 008f2e6d  0f895dffffff         jns 0x8f2dd0
// 008f2e73  e9fbfeffff           jmp 0x8f2d73
// 008f2e78  e88f0cf0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonSystemPopupBar@@UAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp