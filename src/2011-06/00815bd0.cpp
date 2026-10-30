// roc 2011-06 00815bd0  unit: CXTPPaintManager  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00815bd0
//
// 00815bd0  6aff                 push -1
// 00815bd2  686827a000           push 0xa02768
// 00815bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00815bdd  50                   push eax
// 00815bde  83ec20               sub esp, 0x20
// 00815be1  53                   push ebx
// 00815be2  55                   push ebp
// 00815be3  56                   push esi
// 00815be4  57                   push edi
// 00815be5  a12058c900           mov eax, dword ptr [0xc95820]
// 00815bea  33c4                 xor eax, esp
// 00815bec  50                   push eax
// 00815bed  8d442434             lea eax, [esp + 0x34]
// 00815bf1  64a300000000         mov dword ptr fs:[0], eax
// 00815bf7  8bf9                 mov edi, ecx
// 00815bf9  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00815bfe  0f85bb000000         jne 0x815cbf
// 00815c04  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00815c08  53                   push ebx
// 00815c09  8d4c2418             lea ecx, [esp + 0x18]
// 00815c0d  e87e710400           call 0x85cd90
// 00815c12  8b742444             mov esi, dword ptr [esp + 0x44]
// 00815c16  8d87bc000000         lea eax, [edi + 0xbc]
// 00815c1c  50                   push eax
// 00815c1d  56                   push esi
// 00815c1e  8d4c242c             lea ecx, [esp + 0x2c]
// 00815c22  e8f9740400           call 0x85d120
// 00815c27  6a18                 push 0x18
// 00815c29  8bcf                 mov ecx, edi
// 00815c2b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00815c33  e87899ffff           call 0x80f5b0
// 00815c38  50                   push eax
// 00815c39  8d4c2418             lea ecx, [esp + 0x18]
// 00815c3d  51                   push ecx
// 00815c3e  8bce                 mov ecx, esi
// 00815c40  e8db51ffff           call 0x80ae20
// 00815c45  8b2d181ba400         mov ebp, dword ptr [0xa41b18]
// 00815c4b  6a10                 push 0x10
// 00815c4d  ffd5                 call ebp
// 00815c4f  50                   push eax
// 00815c50  6a10                 push 0x10
// 00815c52  ffd5                 call ebp
// 00815c54  50                   push eax
// 00815c55  8d54241c             lea edx, [esp + 0x1c]
// 00815c59  52                   push edx
// 00815c5a  8bce                 mov ecx, esi
// 00815c5c  e8b951ffff           call 0x80ae1a
// 00815c61  6a01                 push 1
// 00815c63  8bce                 mov ecx, esi
// 00815c65  e884691b00           call 0x9cc5ee
// 00815c6a  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00815c6d  8b16                 mov edx, dword ptr [esi]
// 00815c6f  f7d8                 neg eax
// 00815c71  1bc0                 sbb eax, eax
// 00815c73  83e006               and eax, 6
// 00815c76  83c011               add eax, 0x11
// 00815c79  50                   push eax
// 00815c7a  8bcf                 mov ecx, edi
// 00815c7c  e82f99ffff           call 0x80f5b0
// 00815c81  8b5238               mov edx, dword ptr [edx + 0x38]
// 00815c84  50                   push eax
// 00815c85  8bce                 mov ecx, esi
// 00815c87  ffd2                 call edx
// 00815c89  8d7b54               lea edi, [ebx + 0x54]
// 00815c8c  8b1e                 mov ebx, dword ptr [esi]
// 00815c8e  6a25                 push 0x25
// 00815c90  8d442418             lea eax, [esp + 0x18]
// 00815c94  50                   push eax
// 00815c95  8bcf                 mov ecx, edi
// 00815c97  ff15a826a400         call dword ptr [0xa426a8]
// 00815c9d  50                   push eax
// 00815c9e  8bcf                 mov ecx, edi
// 00815ca0  ff15c82da400         call dword ptr [0xa42dc8]
// 00815ca6  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00815ca9  50                   push eax
// 00815caa  8bce                 mov ecx, esi
// 00815cac  ffd2                 call edx
// 00815cae  8d4c2424             lea ecx, [esp + 0x24]
// 00815cb2  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00815cba  e8e1740400           call 0x85d1a0
// 00815cbf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00815cc3  64890d00000000       mov dword ptr fs:[0], ecx
// 00815cca  59                   pop ecx
// 00815ccb  5f                   pop edi
// 00815ccc  5e                   pop esi
// 00815ccd  5d                   pop ebp
// 00815cce  5b                   pop ebx
// 00815ccf  83c42c               add esp, 0x2c
// 00815cd2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp