// roc 2010-06 00831db0  unit: CXTPRibbonTheme  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00831db0
//
// 00831db0  6aff                 push -1
// 00831db2  680e619b00           push 0x9b610e
// 00831db7  64a100000000         mov eax, dword ptr fs:[0]
// 00831dbd  50                   push eax
// 00831dbe  83ec24               sub esp, 0x24
// 00831dc1  53                   push ebx
// 00831dc2  55                   push ebp
// 00831dc3  56                   push esi
// 00831dc4  57                   push edi
// 00831dc5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00831dca  33c4                 xor eax, esp
// 00831dcc  50                   push eax
// 00831dcd  8d442438             lea eax, [esp + 0x38]
// 00831dd1  64a300000000         mov dword ptr fs:[0], eax
// 00831dd7  8bf9                 mov edi, ecx
// 00831dd9  837c245000           cmp dword ptr [esp + 0x50], 0
// 00831dde  740f                 je 0x831def
// 00831de0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00831de4  50                   push eax
// 00831de5  e896fbffff           call 0x831980
// 00831dea  e980010000           jmp 0x831f6f
// 00831def  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00831df3  55                   push ebp
// 00831df4  8d4c241c             lea ecx, [esp + 0x1c]
// 00831df8  e813d5fcff           call 0x7ff310
// 00831dfd  8b742448             mov esi, dword ptr [esp + 0x48]
// 00831e01  8d8fbc000000         lea ecx, [edi + 0xbc]
// 00831e07  51                   push ecx
// 00831e08  56                   push esi
// 00831e09  8d4c2430             lea ecx, [esp + 0x30]
// 00831e0d  e88ed8fcff           call 0x7ff6a0
// 00831e12  51                   push ecx
// 00831e13  8bcc                 mov ecx, esp
// 00831e15  89642450             mov dword ptr [esp + 0x50], esp
// 00831e19  687c27a600           push 0xa6277c
// 00831e1e  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00831e26  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00831e2c  51                   push ecx
// 00831e2d  8bcc                 mov ecx, esp
// 00831e2f  89642458             mov dword ptr [esp + 0x58], esp
// 00831e33  688868a100           push 0xa16888
// 00831e38  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00831e3d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00831e43  8bcf                 mov ecx, edi
// 00831e45  c644244802           mov byte ptr [esp + 0x48], 2
// 00831e4a  e8a1030000           call 0x8321f0
// 00831e4f  8bc8                 mov ecx, eax
// 00831e51  c644244800           mov byte ptr [esp + 0x48], 0
// 00831e56  e815350600           call 0x895370
// 00831e5b  51                   push ecx
// 00831e5c  8bcc                 mov ecx, esp
// 00831e5e  89642450             mov dword ptr [esp + 0x50], esp
// 00831e62  687027a600           push 0xa62770
// 00831e67  89442458             mov dword ptr [esp + 0x58], eax
// 00831e6b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00831e71  51                   push ecx
// 00831e72  8bcc                 mov ecx, esp
// 00831e74  89642450             mov dword ptr [esp + 0x50], esp
// 00831e78  688868a100           push 0xa16888
// 00831e7d  c644244c03           mov byte ptr [esp + 0x4c], 3
// 00831e82  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00831e88  8bcf                 mov ecx, edi
// 00831e8a  c644244804           mov byte ptr [esp + 0x48], 4
// 00831e8f  e85c030000           call 0x8321f0
// 00831e94  8bc8                 mov ecx, eax
// 00831e96  c644244800           mov byte ptr [esp + 0x48], 0
// 00831e9b  e8d0340600           call 0x895370
// 00831ea0  51                   push ecx
// 00831ea1  8bcc                 mov ecx, esp
// 00831ea3  8964244c             mov dword ptr [esp + 0x4c], esp
// 00831ea7  686027a600           push 0xa62760
// 00831eac  89442454             mov dword ptr [esp + 0x54], eax
// 00831eb0  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00831eb6  51                   push ecx
// 00831eb7  8bcc                 mov ecx, esp
// 00831eb9  8964241c             mov dword ptr [esp + 0x1c], esp
// 00831ebd  688868a100           push 0xa16888
// 00831ec2  c644244c05           mov byte ptr [esp + 0x4c], 5
// 00831ec7  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00831ecd  8bcf                 mov ecx, edi
// 00831ecf  c644244806           mov byte ptr [esp + 0x48], 6
// 00831ed4  e817030000           call 0x8321f0
// 00831ed9  8bc8                 mov ecx, eax
// 00831edb  c644244800           mov byte ptr [esp + 0x48], 0
// 00831ee0  e88b340600           call 0x895370
// 00831ee5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00831ee9  6a00                 push 0
// 00831eeb  52                   push edx
// 00831eec  8bd8                 mov ebx, eax
// 00831eee  8b442458             mov eax, dword ptr [esp + 0x58]
// 00831ef2  50                   push eax
// 00831ef3  8d4c2424             lea ecx, [esp + 0x24]
// 00831ef7  51                   push ecx
// 00831ef8  56                   push esi
// 00831ef9  e802f4fcff           call 0x801300
// 00831efe  8bc8                 mov ecx, eax
// 00831f00  e82bf4fcff           call 0x801330
// 00831f05  53                   push ebx
// 00831f06  53                   push ebx
// 00831f07  8d542420             lea edx, [esp + 0x20]
// 00831f0b  52                   push edx
// 00831f0c  8bce                 mov ecx, esi
// 00831f0e  e82568f7ff           call 0x7a8738
// 00831f13  6a01                 push 1
// 00831f15  8bce                 mov ecx, esi
// 00831f17  e898ae1400           call 0x97cdb4
// 00831f1c  8b1e                 mov ebx, dword ptr [esi]
// 00831f1e  33c0                 xor eax, eax
// 00831f20  39456c               cmp dword ptr [ebp + 0x6c], eax
// 00831f23  8bcf                 mov ecx, edi
// 00831f25  0f95c0               setne al
// 00831f28  83c011               add eax, 0x11
// 00831f2b  50                   push eax
// 00831f2c  e8dfb1f7ff           call 0x7ad110
// 00831f31  8b5338               mov edx, dword ptr [ebx + 0x38]
// 00831f34  50                   push eax
// 00831f35  8bce                 mov ecx, esi
// 00831f37  ffd2                 call edx
// 00831f39  8b3e                 mov edi, dword ptr [esi]
// 00831f3b  6a25                 push 0x25
// 00831f3d  8d44241c             lea eax, [esp + 0x1c]
// 00831f41  83c554               add ebp, 0x54
// 00831f44  50                   push eax
// 00831f45  8bcd                 mov ecx, ebp
// 00831f47  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00831f4d  50                   push eax
// 00831f4e  8bcd                 mov ecx, ebp
// 00831f50  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00831f56  8b5770               mov edx, dword ptr [edi + 0x70]
// 00831f59  50                   push eax
// 00831f5a  8bce                 mov ecx, esi
// 00831f5c  ffd2                 call edx
// 00831f5e  8d4c2428             lea ecx, [esp + 0x28]
// 00831f62  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 00831f6a  e8b1d7fcff           call 0x7ff720
// 00831f6f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00831f73  64890d00000000       mov dword ptr fs:[0], ecx
// 00831f7a  59                   pop ecx
// 00831f7b  5f                   pop edi
// 00831f7c  5e                   pop esi
// 00831f7d  5d                   pop ebp
// 00831f7e  5b                   pop ebx
// 00831f7f  83c430               add esp, 0x30
// 00831f82  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp