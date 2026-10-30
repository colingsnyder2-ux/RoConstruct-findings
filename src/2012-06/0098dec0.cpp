// roc 2012-06 0098dec0  unit: CXTPPaintManager  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098dec0
//
// 0098dec0  6aff                 push -1
// 0098dec2  6808c3ad00           push 0xadc308
// 0098dec7  64a100000000         mov eax, dword ptr fs:[0]
// 0098decd  50                   push eax
// 0098dece  83ec20               sub esp, 0x20
// 0098ded1  53                   push ebx
// 0098ded2  55                   push ebp
// 0098ded3  56                   push esi
// 0098ded4  57                   push edi
// 0098ded5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098deda  33c4                 xor eax, esp
// 0098dedc  50                   push eax
// 0098dedd  8d442434             lea eax, [esp + 0x34]
// 0098dee1  64a300000000         mov dword ptr fs:[0], eax
// 0098dee7  8bf9                 mov edi, ecx
// 0098dee9  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0098deee  0f85bb000000         jne 0x98dfaf
// 0098def4  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0098def8  53                   push ebx
// 0098def9  8d4c2418             lea ecx, [esp + 0x18]
// 0098defd  e89e720400           call 0x9d51a0
// 0098df02  8b742444             mov esi, dword ptr [esp + 0x44]
// 0098df06  8d87bc000000         lea eax, [edi + 0xbc]
// 0098df0c  50                   push eax
// 0098df0d  56                   push esi
// 0098df0e  8d4c242c             lea ecx, [esp + 0x2c]
// 0098df12  e819760400           call 0x9d5530
// 0098df17  6a18                 push 0x18
// 0098df19  8bcf                 mov ecx, edi
// 0098df1b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0098df23  e86899ffff           call 0x987890
// 0098df28  50                   push eax
// 0098df29  8d4c2418             lea ecx, [esp + 0x18]
// 0098df2d  51                   push ecx
// 0098df2e  8bce                 mov ecx, esi
// 0098df30  e8774fffff           call 0x982eac
// 0098df35  8b2dd83cb200         mov ebp, dword ptr [0xb23cd8]
// 0098df3b  6a10                 push 0x10
// 0098df3d  ffd5                 call ebp
// 0098df3f  50                   push eax
// 0098df40  6a10                 push 0x10
// 0098df42  ffd5                 call ebp
// 0098df44  50                   push eax
// 0098df45  8d54241c             lea edx, [esp + 0x1c]
// 0098df49  52                   push edx
// 0098df4a  8bce                 mov ecx, esi
// 0098df4c  e8554fffff           call 0x982ea6
// 0098df51  6a01                 push 1
// 0098df53  8bce                 mov ecx, esi
// 0098df55  e84eb61000           call 0xa995a8
// 0098df5a  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 0098df5d  8b16                 mov edx, dword ptr [esi]
// 0098df5f  f7d8                 neg eax
// 0098df61  1bc0                 sbb eax, eax
// 0098df63  83e006               and eax, 6
// 0098df66  83c011               add eax, 0x11
// 0098df69  50                   push eax
// 0098df6a  8bcf                 mov ecx, edi
// 0098df6c  e81f99ffff           call 0x987890
// 0098df71  8b5238               mov edx, dword ptr [edx + 0x38]
// 0098df74  50                   push eax
// 0098df75  8bce                 mov ecx, esi
// 0098df77  ffd2                 call edx
// 0098df79  8d7b54               lea edi, [ebx + 0x54]
// 0098df7c  8b1e                 mov ebx, dword ptr [esi]
// 0098df7e  6a25                 push 0x25
// 0098df80  8d442418             lea eax, [esp + 0x18]
// 0098df84  50                   push eax
// 0098df85  8bcf                 mov ecx, edi
// 0098df87  ff155846b200         call dword ptr [0xb24658]
// 0098df8d  50                   push eax
// 0098df8e  8bcf                 mov ecx, edi
// 0098df90  ff159847b200         call dword ptr [0xb24798]
// 0098df96  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0098df99  50                   push eax
// 0098df9a  8bce                 mov ecx, esi
// 0098df9c  ffd2                 call edx
// 0098df9e  8d4c2424             lea ecx, [esp + 0x24]
// 0098dfa2  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0098dfaa  e801760400           call 0x9d55b0
// 0098dfaf  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098dfb3  64890d00000000       mov dword ptr fs:[0], ecx
// 0098dfba  59                   pop ecx
// 0098dfbb  5f                   pop edi
// 0098dfbc  5e                   pop esi
// 0098dfbd  5d                   pop ebp
// 0098dfbe  5b                   pop ebx
// 0098dfbf  83c42c               add esp, 0x2c
// 0098dfc2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp