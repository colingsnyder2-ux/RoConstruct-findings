// roc 2009-06 00819cb0  unit: CXTButtonTheme  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00819cb0
//
// 00819cb0  6aff                 push -1
// 00819cb2  68112b8800           push 0x882b11
// 00819cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00819cbd  50                   push eax
// 00819cbe  83ec2c               sub esp, 0x2c
// 00819cc1  53                   push ebx
// 00819cc2  55                   push ebp
// 00819cc3  56                   push esi
// 00819cc4  57                   push edi
// 00819cc5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00819cca  33c4                 xor eax, esp
// 00819ccc  50                   push eax
// 00819ccd  8d442440             lea eax, [esp + 0x40]
// 00819cd1  64a300000000         mov dword ptr fs:[0], eax
// 00819cd7  8bf1                 mov esi, ecx
// 00819cd9  8d4c2414             lea ecx, [esp + 0x14]
// 00819cdd  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00819ce3  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 00819ce7  8d442414             lea eax, [esp + 0x14]
// 00819ceb  50                   push eax
// 00819cec  8bcd                 mov ecx, ebp
// 00819cee  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00819cf6  e825f3efff           call 0x719020
// 00819cfb  8d4c2414             lea ecx, [esp + 0x14]
// 00819cff  ff155cfb8900         call dword ptr [0x89fb5c]
// 00819d05  84c0                 test al, al
// 00819d07  0f8525010000         jne 0x819e32
// 00819d0d  e85e88f5ff           call 0x772570
// 00819d12  8d4c2414             lea ecx, [esp + 0x14]
// 00819d16  51                   push ecx
// 00819d17  e81458f5ff           call 0x76f530
// 00819d1c  8b16                 mov edx, dword ptr [esi]
// 00819d1e  8b4220               mov eax, dword ptr [edx + 0x20]
// 00819d21  83c404               add esp, 4
// 00819d24  55                   push ebp
// 00819d25  8bce                 mov ecx, esi
// 00819d27  ffd0                 call eax
// 00819d29  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00819d2d  50                   push eax
// 00819d2e  57                   push edi
// 00819d2f  8d4c2438             lea ecx, [esp + 0x38]
// 00819d33  e8286bf5ff           call 0x770860
// 00819d38  8d4c2428             lea ecx, [esp + 0x28]
// 00819d3c  51                   push ecx
// 00819d3d  8d4c2418             lea ecx, [esp + 0x18]
// 00819d41  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00819d46  ff1554fb8900         call dword ptr [0x89fb54]
// 00819d4c  50                   push eax
// 00819d4d  8d4c241c             lea ecx, [esp + 0x1c]
// 00819d51  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00819d57  8b5708               mov edx, dword ptr [edi + 8]
// 00819d5a  50                   push eax
// 00819d5b  52                   push edx
// 00819d5c  ff1550e18900         call dword ptr [0x89e150]
// 00819d62  8b442428             mov eax, dword ptr [esp + 0x28]
// 00819d66  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00819d6a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00819d6e  8b16                 mov edx, dword ptr [esi]
// 00819d70  8b5244               mov edx, dword ptr [edx + 0x44]
// 00819d73  55                   push ebp
// 00819d74  89442424             mov dword ptr [esp + 0x24], eax
// 00819d78  894c2428             mov dword ptr [esp + 0x28], ecx
// 00819d7c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00819d80  8d442424             lea eax, [esp + 0x24]
// 00819d84  50                   push eax
// 00819d85  51                   push ecx
// 00819d86  53                   push ebx
// 00819d87  8d442428             lea eax, [esp + 0x28]
// 00819d8b  50                   push eax
// 00819d8c  8bce                 mov ecx, esi
// 00819d8e  ffd2                 call edx
// 00819d90  837d7c00             cmp dword ptr [ebp + 0x7c], 0
// 00819d94  7505                 jne 0x819d9b
// 00819d96  f6c301               test bl, 1
// 00819d99  7413                 je 0x819dae
// 00819d9b  837e1800             cmp dword ptr [esi + 0x18], 0
// 00819d9f  740d                 je 0x819dae
// 00819da1  b801000000           mov eax, 1
// 00819da6  01442418             add dword ptr [esp + 0x18], eax
// 00819daa  0144241c             add dword ptr [esp + 0x1c], eax
// 00819dae  8b07                 mov eax, dword ptr [edi]
// 00819db0  8b16                 mov edx, dword ptr [esi]
// 00819db2  55                   push ebp
// 00819db3  89442460             mov dword ptr [esp + 0x60], eax
// 00819db7  8b4248               mov eax, dword ptr [edx + 0x48]
// 00819dba  53                   push ebx
// 00819dbb  8bce                 mov ecx, esi
// 00819dbd  ffd0                 call eax
// 00819dbf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00819dc3  50                   push eax
// 00819dc4  8b4238               mov eax, dword ptr [edx + 0x38]
// 00819dc7  8bcf                 mov ecx, edi
// 00819dc9  ffd0                 call eax
// 00819dcb  f7c300010000         test ebx, 0x100
// 00819dd1  750c                 jne 0x819ddf
// 00819dd3  8d4c2414             lea ecx, [esp + 0x14]
// 00819dd7  51                   push ecx
// 00819dd8  8bcd                 mov ecx, ebp
// 00819dda  e841f2efff           call 0x719020
// 00819ddf  6a00                 push 0
// 00819de1  8bcf                 mov ecx, edi
// 00819de3  e82cfbefff           call 0x719914
// 00819de8  8d4c2414             lea ecx, [esp + 0x14]
// 00819dec  ff1554fb8900         call dword ptr [0x89fb54]
// 00819df2  8d4c2414             lea ecx, [esp + 0x14]
// 00819df6  8bf0                 mov esi, eax
// 00819df8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00819dfe  8b542424             mov edx, dword ptr [esp + 0x24]
// 00819e02  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00819e06  8b7f04               mov edi, dword ptr [edi + 4]
// 00819e09  6a02                 push 2
// 00819e0b  52                   push edx
// 00819e0c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00819e10  51                   push ecx
// 00819e11  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00819e15  52                   push edx
// 00819e16  51                   push ecx
// 00819e17  56                   push esi
// 00819e18  50                   push eax
// 00819e19  6a00                 push 0
// 00819e1b  6a00                 push 0
// 00819e1d  57                   push edi
// 00819e1e  ff150cef8900         call dword ptr [0x89ef0c]
// 00819e24  8d4c2430             lea ecx, [esp + 0x30]
// 00819e28  c644244800           mov byte ptr [esp + 0x48], 0
// 00819e2d  e8ae6af5ff           call 0x7708e0
// 00819e32  8d4c2414             lea ecx, [esp + 0x14]
// 00819e36  ff1510fd8900         call dword ptr [0x89fd10]
// 00819e3c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00819e40  64890d00000000       mov dword ptr fs:[0], ecx
// 00819e47  59                   pop ecx
// 00819e48  5f                   pop edi
// 00819e49  5e                   pop esi
// 00819e4a  5d                   pop ebp
// 00819e4b  5b                   pop ebx
// 00819e4c  83c438               add esp, 0x38
// 00819e4f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawButtonText@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp