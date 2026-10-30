// roc 2009-12 00876ea0  unit: CXTPRibbonTheme  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876ea0
//
// 00876ea0  6aff                 push -1
// 00876ea2  688e019600           push 0x96018e
// 00876ea7  64a100000000         mov eax, dword ptr fs:[0]
// 00876ead  50                   push eax
// 00876eae  83ec24               sub esp, 0x24
// 00876eb1  53                   push ebx
// 00876eb2  55                   push ebp
// 00876eb3  56                   push esi
// 00876eb4  57                   push edi
// 00876eb5  a10052b600           mov eax, dword ptr [0xb65200]
// 00876eba  33c4                 xor eax, esp
// 00876ebc  50                   push eax
// 00876ebd  8d442438             lea eax, [esp + 0x38]
// 00876ec1  64a300000000         mov dword ptr fs:[0], eax
// 00876ec7  8bf9                 mov edi, ecx
// 00876ec9  837c245000           cmp dword ptr [esp + 0x50], 0
// 00876ece  740f                 je 0x876edf
// 00876ed0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00876ed4  50                   push eax
// 00876ed5  e876fbffff           call 0x876a50
// 00876eda  e980010000           jmp 0x87705f
// 00876edf  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00876ee3  55                   push ebp
// 00876ee4  8d4c241c             lea ecx, [esp + 0x1c]
// 00876ee8  e8e343fdff           call 0x84b2d0
// 00876eed  8b742448             mov esi, dword ptr [esp + 0x48]
// 00876ef1  8d8fbc000000         lea ecx, [edi + 0xbc]
// 00876ef7  51                   push ecx
// 00876ef8  56                   push esi
// 00876ef9  8d4c2430             lea ecx, [esp + 0x30]
// 00876efd  e85e47fdff           call 0x84b660
// 00876f02  51                   push ecx
// 00876f03  8bcc                 mov ecx, esp
// 00876f05  89642450             mov dword ptr [esp + 0x50], esp
// 00876f09  68bce49f00           push 0x9fe4bc
// 00876f0e  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00876f16  ff15b8de9800         call dword ptr [0x98deb8]
// 00876f1c  51                   push ecx
// 00876f1d  8bcc                 mov ecx, esp
// 00876f1f  89642458             mov dword ptr [esp + 0x58], esp
// 00876f23  68b8589b00           push 0x9b58b8
// 00876f28  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00876f2d  ff15b8de9800         call dword ptr [0x98deb8]
// 00876f33  8bcf                 mov ecx, edi
// 00876f35  c644244802           mov byte ptr [esp + 0x48], 2
// 00876f3a  e8b17d0000           call 0x87ecf0
// 00876f3f  8bc8                 mov ecx, eax
// 00876f41  c644244800           mov byte ptr [esp + 0x48], 0
// 00876f46  e8b5a10600           call 0x8e1100
// 00876f4b  51                   push ecx
// 00876f4c  8bcc                 mov ecx, esp
// 00876f4e  89642450             mov dword ptr [esp + 0x50], esp
// 00876f52  68b0e49f00           push 0x9fe4b0
// 00876f57  89442458             mov dword ptr [esp + 0x58], eax
// 00876f5b  ff15b8de9800         call dword ptr [0x98deb8]
// 00876f61  51                   push ecx
// 00876f62  8bcc                 mov ecx, esp
// 00876f64  89642450             mov dword ptr [esp + 0x50], esp
// 00876f68  68b8589b00           push 0x9b58b8
// 00876f6d  c644244c03           mov byte ptr [esp + 0x4c], 3
// 00876f72  ff15b8de9800         call dword ptr [0x98deb8]
// 00876f78  8bcf                 mov ecx, edi
// 00876f7a  c644244804           mov byte ptr [esp + 0x48], 4
// 00876f7f  e86c7d0000           call 0x87ecf0
// 00876f84  8bc8                 mov ecx, eax
// 00876f86  c644244800           mov byte ptr [esp + 0x48], 0
// 00876f8b  e870a10600           call 0x8e1100
// 00876f90  51                   push ecx
// 00876f91  8bcc                 mov ecx, esp
// 00876f93  8964244c             mov dword ptr [esp + 0x4c], esp
// 00876f97  68a0e49f00           push 0x9fe4a0
// 00876f9c  89442454             mov dword ptr [esp + 0x54], eax
// 00876fa0  ff15b8de9800         call dword ptr [0x98deb8]
// 00876fa6  51                   push ecx
// 00876fa7  8bcc                 mov ecx, esp
// 00876fa9  8964241c             mov dword ptr [esp + 0x1c], esp
// 00876fad  68b8589b00           push 0x9b58b8
// 00876fb2  c644244c05           mov byte ptr [esp + 0x4c], 5
// 00876fb7  ff15b8de9800         call dword ptr [0x98deb8]
// 00876fbd  8bcf                 mov ecx, edi
// 00876fbf  c644244806           mov byte ptr [esp + 0x48], 6
// 00876fc4  e8277d0000           call 0x87ecf0
// 00876fc9  8bc8                 mov ecx, eax
// 00876fcb  c644244800           mov byte ptr [esp + 0x48], 0
// 00876fd0  e82ba10600           call 0x8e1100
// 00876fd5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00876fd9  6a00                 push 0
// 00876fdb  52                   push edx
// 00876fdc  8bd8                 mov ebx, eax
// 00876fde  8b442458             mov eax, dword ptr [esp + 0x58]
// 00876fe2  50                   push eax
// 00876fe3  8d4c2424             lea ecx, [esp + 0x24]
// 00876fe7  51                   push ecx
// 00876fe8  56                   push esi
// 00876fe9  e8b262fdff           call 0x84d2a0
// 00876fee  8bc8                 mov ecx, eax
// 00876ff0  e8db62fdff           call 0x84d2d0
// 00876ff5  53                   push ebx
// 00876ff6  53                   push ebx
// 00876ff7  8d542420             lea edx, [esp + 0x20]
// 00876ffb  52                   push edx
// 00876ffc  8bce                 mov ecx, esi
// 00876ffe  e8f5d5f7ff           call 0x7f45f8
// 00877003  6a01                 push 1
// 00877005  8bce                 mov ecx, esi
// 00877007  e884f40a00           call 0x926490
// 0087700c  8b1e                 mov ebx, dword ptr [esi]
// 0087700e  33c0                 xor eax, eax
// 00877010  39456c               cmp dword ptr [ebp + 0x6c], eax
// 00877013  8bcf                 mov ecx, edi
// 00877015  0f95c0               setne al
// 00877018  83c011               add eax, 0x11
// 0087701b  50                   push eax
// 0087701c  e81f66f8ff           call 0x7fd640
// 00877021  8b5338               mov edx, dword ptr [ebx + 0x38]
// 00877024  50                   push eax
// 00877025  8bce                 mov ecx, esi
// 00877027  ffd2                 call edx
// 00877029  8b3e                 mov edi, dword ptr [esi]
// 0087702b  6a25                 push 0x25
// 0087702d  8d44241c             lea eax, [esp + 0x1c]
// 00877031  83c554               add ebp, 0x54
// 00877034  50                   push eax
// 00877035  8bcd                 mov ecx, ebp
// 00877037  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0087703d  50                   push eax
// 0087703e  8bcd                 mov ecx, ebp
// 00877040  ff1580de9800         call dword ptr [0x98de80]
// 00877046  8b5770               mov edx, dword ptr [edi + 0x70]
// 00877049  50                   push eax
// 0087704a  8bce                 mov ecx, esi
// 0087704c  ffd2                 call edx
// 0087704e  8d4c2428             lea ecx, [esp + 0x28]
// 00877052  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0087705a  e88146fdff           call 0x84b6e0
// 0087705f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00877063  64890d00000000       mov dword ptr fs:[0], ecx
// 0087706a  59                   pop ecx
// 0087706b  5f                   pop edi
// 0087706c  5e                   pop esi
// 0087706d  5d                   pop ebp
// 0087706e  5b                   pop ebx
// 0087706f  83c430               add esp, 0x30
// 00877072  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp