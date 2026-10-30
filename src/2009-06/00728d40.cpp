// roc 2009-06 00728d40  unit: CXTPPaintManager  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00728d40
//
// 00728d40  6aff                 push -1
// 00728d42  68b8518700           push 0x8751b8
// 00728d47  64a100000000         mov eax, dword ptr fs:[0]
// 00728d4d  50                   push eax
// 00728d4e  83ec20               sub esp, 0x20
// 00728d51  53                   push ebx
// 00728d52  55                   push ebp
// 00728d53  56                   push esi
// 00728d54  57                   push edi
// 00728d55  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00728d5a  33c4                 xor eax, esp
// 00728d5c  50                   push eax
// 00728d5d  8d442434             lea eax, [esp + 0x34]
// 00728d61  64a300000000         mov dword ptr fs:[0], eax
// 00728d67  8bf9                 mov edi, ecx
// 00728d69  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00728d6e  0f85bb000000         jne 0x728e2f
// 00728d74  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 00728d78  53                   push ebx
// 00728d79  8d4c2418             lea ecx, [esp + 0x18]
// 00728d7d  e84e770400           call 0x7704d0
// 00728d82  8b742444             mov esi, dword ptr [esp + 0x44]
// 00728d86  8d87bc000000         lea eax, [edi + 0xbc]
// 00728d8c  50                   push eax
// 00728d8d  56                   push esi
// 00728d8e  8d4c242c             lea ecx, [esp + 0x2c]
// 00728d92  e8c97a0400           call 0x770860
// 00728d97  6a18                 push 0x18
// 00728d99  8bcf                 mov ecx, edi
// 00728d9b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00728da3  e8d899ffff           call 0x722780
// 00728da8  50                   push eax
// 00728da9  8d4c2418             lea ecx, [esp + 0x18]
// 00728dad  51                   push ecx
// 00728dae  8bce                 mov ecx, esi
// 00728db0  e81b0affff           call 0x7197d0
// 00728db5  8b2de4ee8900         mov ebp, dword ptr [0x89eee4]
// 00728dbb  6a10                 push 0x10
// 00728dbd  ffd5                 call ebp
// 00728dbf  50                   push eax
// 00728dc0  6a10                 push 0x10
// 00728dc2  ffd5                 call ebp
// 00728dc4  50                   push eax
// 00728dc5  8d54241c             lea edx, [esp + 0x1c]
// 00728dc9  52                   push edx
// 00728dca  8bce                 mov ecx, esi
// 00728dcc  e8f909ffff           call 0x7197ca
// 00728dd1  6a01                 push 1
// 00728dd3  8bce                 mov ecx, esi
// 00728dd5  e82c311200           call 0x84bf06
// 00728dda  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00728ddd  8b16                 mov edx, dword ptr [esi]
// 00728ddf  f7d8                 neg eax
// 00728de1  1bc0                 sbb eax, eax
// 00728de3  83e006               and eax, 6
// 00728de6  83c011               add eax, 0x11
// 00728de9  50                   push eax
// 00728dea  8bcf                 mov ecx, edi
// 00728dec  e88f99ffff           call 0x722780
// 00728df1  8b5238               mov edx, dword ptr [edx + 0x38]
// 00728df4  50                   push eax
// 00728df5  8bce                 mov ecx, esi
// 00728df7  ffd2                 call edx
// 00728df9  8d7b54               lea edi, [ebx + 0x54]
// 00728dfc  8b1e                 mov ebx, dword ptr [esi]
// 00728dfe  6a25                 push 0x25
// 00728e00  8d442418             lea eax, [esp + 0x18]
// 00728e04  50                   push eax
// 00728e05  8bcf                 mov ecx, edi
// 00728e07  ff1554fb8900         call dword ptr [0x89fb54]
// 00728e0d  50                   push eax
// 00728e0e  8bcf                 mov ecx, edi
// 00728e10  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00728e16  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00728e19  50                   push eax
// 00728e1a  8bce                 mov ecx, esi
// 00728e1c  ffd2                 call edx
// 00728e1e  8d4c2424             lea ecx, [esp + 0x24]
// 00728e22  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00728e2a  e8b17a0400           call 0x7708e0
// 00728e2f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00728e33  64890d00000000       mov dword ptr fs:[0], ecx
// 00728e3a  59                   pop ecx
// 00728e3b  5f                   pop edi
// 00728e3c  5e                   pop esi
// 00728e3d  5d                   pop ebp
// 00728e3e  5b                   pop ebx
// 00728e3f  83c42c               add esp, 0x2c
// 00728e42  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp