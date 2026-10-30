// roc 2007-03 00720d40  unit: seg_00720000  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00720d40
//
// 00720d40  83ec10               sub esp, 0x10
// 00720d43  f744242000800000     test dword ptr [esp + 0x20], 0x8000
// 00720d4b  53                   push ebx
// 00720d4c  55                   push ebp
// 00720d4d  56                   push esi
// 00720d4e  57                   push edi
// 00720d4f  be01000000           mov esi, 1
// 00720d54  7408                 je 0x720d5e
// 00720d56  814c243000400000     or dword ptr [esp + 0x30], 0x4000
// 00720d5e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00720d62  8b08                 mov ecx, dword ptr [eax]
// 00720d64  8b5004               mov edx, dword ptr [eax + 4]
// 00720d67  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00720d6b  894c2410             mov dword ptr [esp + 0x10], ecx
// 00720d6f  8b4808               mov ecx, dword ptr [eax + 8]
// 00720d72  89542414             mov dword ptr [esp + 0x14], edx
// 00720d76  8b500c               mov edx, dword ptr [eax + 0xc]
// 00720d79  894c2418             mov dword ptr [esp + 0x18], ecx
// 00720d7d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00720d81  83e303               and ebx, 3
// 00720d84  e8470af6ff           call 0x6817d0
// 00720d89  85db                 test ebx, ebx
// 00720d8b  8b7838               mov edi, dword ptr [eax + 0x38]
// 00720d8e  8b2d38ef7700         mov ebp, dword ptr [0x77ef38]
// 00720d94  7512                 jne 0x720da8
// 00720d96  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00720d9a  83e30c               and ebx, 0xc
// 00720d9d  0f84f2010000         je 0x720f95
// 00720da3  8364242cf3           and dword ptr [esp + 0x2c], 0xfffffff3
// 00720da8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720dac  a900400000           test eax, 0x4000
// 00720db1  744b                 je 0x720dfe
// 00720db3  a900800000           test eax, 0x8000
// 00720db8  7427                 je 0x720de1
// 00720dba  f6c303               test bl, 3
// 00720dbd  7411                 je 0x720dd0
// 00720dbf  6a06                 push 6
// 00720dc1  ffd5                 call ebp
// 00720dc3  8bf0                 mov esi, eax
// 00720dc5  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720dc9  8bde                 mov ebx, esi
// 00720dcb  e9ad000000           jmp 0x720e7d
// 00720dd0  6a05                 push 5
// 00720dd2  ffd5                 call ebp
// 00720dd4  8bf0                 mov esi, eax
// 00720dd6  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720dda  8bde                 mov ebx, esi
// 00720ddc  e99c000000           jmp 0x720e7d
// 00720de1  f6c303               test bl, 3
// 00720de4  740a                 je 0x720df0
// 00720de6  8b7730               mov esi, dword ptr [edi + 0x30]
// 00720de9  8bde                 mov ebx, esi
// 00720deb  e98d000000           jmp 0x720e7d
// 00720df0  6a0f                 push 0xf
// 00720df2  ffd5                 call ebp
// 00720df4  8bf0                 mov esi, eax
// 00720df6  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720dfa  8bde                 mov ebx, esi
// 00720dfc  eb7f                 jmp 0x720e7d
// 00720dfe  83c3ff               add ebx, -1
// 00720e01  83fb07               cmp ebx, 7
// 00720e04  0f877f010000         ja 0x720f89
// 00720e0a  ff249d18107200       jmp dword ptr [ebx*4 + 0x721018]
// 00720e11  a900100000           test eax, 0x1000
// 00720e16  7408                 je 0x720e20
// 00720e18  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 00720e1b  8b7734               mov esi, dword ptr [edi + 0x34]
// 00720e1e  eb5d                 jmp 0x720e7d
// 00720e20  6a16                 push 0x16
// 00720e22  ffd5                 call ebp
// 00720e24  8b7734               mov esi, dword ptr [edi + 0x34]
// 00720e27  8bd8                 mov ebx, eax
// 00720e29  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720e2d  eb4e                 jmp 0x720e7d
// 00720e2f  a900100000           test eax, 0x1000
// 00720e34  740f                 je 0x720e45
// 00720e36  6a16                 push 0x16
// 00720e38  ffd5                 call ebp
// 00720e3a  8b7730               mov esi, dword ptr [edi + 0x30]
// 00720e3d  8bd8                 mov ebx, eax
// 00720e3f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720e43  eb38                 jmp 0x720e7d
// 00720e45  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 00720e48  8b7730               mov esi, dword ptr [edi + 0x30]
// 00720e4b  eb30                 jmp 0x720e7d
// 00720e4d  a900100000           test eax, 0x1000
// 00720e52  7408                 je 0x720e5c
// 00720e54  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 00720e57  8b772c               mov esi, dword ptr [edi + 0x2c]
// 00720e5a  eb21                 jmp 0x720e7d
// 00720e5c  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 00720e5f  8b772c               mov esi, dword ptr [edi + 0x2c]
// 00720e62  eb19                 jmp 0x720e7d
// 00720e64  a900100000           test eax, 0x1000
// 00720e69  7405                 je 0x720e70
// 00720e6b  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 00720e6e  eb03                 jmp 0x720e73
// 00720e70  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 00720e73  6a16                 push 0x16
// 00720e75  ffd5                 call ebp
// 00720e77  8bf0                 mov esi, eax
// 00720e79  8b442430             mov eax, dword ptr [esp + 0x30]
// 00720e7d  a810                 test al, 0x10
// 00720e7f  741c                 je 0x720e9d
// 00720e81  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00720e85  50                   push eax
// 00720e86  56                   push esi
// 00720e87  53                   push ebx
// 00720e88  8d44241c             lea eax, [esp + 0x1c]
// 00720e8c  50                   push eax
// 00720e8d  51                   push ecx
// 00720e8e  e82dfeffff           call 0x720cc0
// 00720e93  83c414               add esp, 0x14
// 00720e96  8bf0                 mov esi, eax
// 00720e98  e9f9feffff           jmp 0x720d96
// 00720e9d  a804                 test al, 4
// 00720e9f  7436                 je 0x720ed7
// 00720ea1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00720ea5  2b8734010000         sub eax, dword ptr [edi + 0x134]
// 00720eab  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00720eaf  2b542414             sub edx, dword ptr [esp + 0x14]
// 00720eb3  56                   push esi
// 00720eb4  52                   push edx
// 00720eb5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00720eb9  89442420             mov dword ptr [esp + 0x20], eax
// 00720ebd  8b8f34010000         mov ecx, dword ptr [edi + 0x134]
// 00720ec3  51                   push ecx
// 00720ec4  52                   push edx
// 00720ec5  50                   push eax
// 00720ec6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00720eca  50                   push eax
// 00720ecb  e870faffff           call 0x720940
// 00720ed0  8b442448             mov eax, dword ptr [esp + 0x48]
// 00720ed4  83c418               add esp, 0x18
// 00720ed7  a808                 test al, 8
// 00720ed9  7436                 je 0x720f11
// 00720edb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00720edf  2b8738010000         sub eax, dword ptr [edi + 0x138]
// 00720ee5  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720ee9  56                   push esi
// 00720eea  8b742428             mov esi, dword ptr [esp + 0x28]
// 00720eee  89442420             mov dword ptr [esp + 0x20], eax
// 00720ef2  8b8f38010000         mov ecx, dword ptr [edi + 0x138]
// 00720ef8  51                   push ecx
// 00720ef9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00720efd  2bd1                 sub edx, ecx
// 00720eff  52                   push edx
// 00720f00  50                   push eax
// 00720f01  51                   push ecx
// 00720f02  56                   push esi
// 00720f03  e838faffff           call 0x720940
// 00720f08  8b442448             mov eax, dword ptr [esp + 0x48]
// 00720f0c  83c418               add esp, 0x18
// 00720f0f  eb04                 jmp 0x720f15
// 00720f11  8b742424             mov esi, dword ptr [esp + 0x24]
// 00720f15  a801                 test al, 1
// 00720f17  7436                 je 0x720f4f
// 00720f19  8b442414             mov eax, dword ptr [esp + 0x14]
// 00720f1d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00720f21  8b9734010000         mov edx, dword ptr [edi + 0x134]
// 00720f27  53                   push ebx
// 00720f28  2bc8                 sub ecx, eax
// 00720f2a  51                   push ecx
// 00720f2b  52                   push edx
// 00720f2c  50                   push eax
// 00720f2d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00720f31  50                   push eax
// 00720f32  56                   push esi
// 00720f33  e808faffff           call 0x720940
// 00720f38  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00720f3c  8b442448             mov eax, dword ptr [esp + 0x48]
// 00720f40  83c418               add esp, 0x18
// 00720f43  038f34010000         add ecx, dword ptr [edi + 0x134]
// 00720f49  894c2410             mov dword ptr [esp + 0x10], ecx
// 00720f4d  eb04                 jmp 0x720f53
// 00720f4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00720f53  a802                 test al, 2
// 00720f55  7428                 je 0x720f7f
// 00720f57  8b9738010000         mov edx, dword ptr [edi + 0x138]
// 00720f5d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00720f61  53                   push ebx
// 00720f62  52                   push edx
// 00720f63  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00720f67  2bc1                 sub eax, ecx
// 00720f69  50                   push eax
// 00720f6a  52                   push edx
// 00720f6b  51                   push ecx
// 00720f6c  56                   push esi
// 00720f6d  e8cef9ffff           call 0x720940
// 00720f72  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 00720f78  83c418               add esp, 0x18
// 00720f7b  01442414             add dword ptr [esp + 0x14], eax
// 00720f7f  be01000000           mov esi, 1
// 00720f84  e90dfeffff           jmp 0x720d96
// 00720f89  5f                   pop edi
// 00720f8a  5e                   pop esi
// 00720f8b  5d                   pop ebp
// 00720f8c  33c0                 xor eax, eax
// 00720f8e  5b                   pop ebx
// 00720f8f  83c410               add esp, 0x10
// 00720f92  c21000               ret 0x10
// 00720f95  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00720f99  f7c300080000         test ebx, 0x800
// 00720f9f  7441                 je 0x720fe2
// 00720fa1  f6c310               test bl, 0x10
// 00720fa4  7404                 je 0x720faa
// 00720fa6  33f6                 xor esi, esi
// 00720fa8  eb38                 jmp 0x720fe2
// 00720faa  f7c300800000         test ebx, 0x8000
// 00720fb0  7404                 je 0x720fb6
// 00720fb2  6a05                 push 5
// 00720fb4  eb02                 jmp 0x720fb8
// 00720fb6  6a0f                 push 0xf
// 00720fb8  ffd5                 call ebp
// 00720fba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00720fbe  8b542418             mov edx, dword ptr [esp + 0x18]
// 00720fc2  50                   push eax
// 00720fc3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00720fc7  2bc8                 sub ecx, eax
// 00720fc9  51                   push ecx
// 00720fca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00720fce  2bd1                 sub edx, ecx
// 00720fd0  52                   push edx
// 00720fd1  50                   push eax
// 00720fd2  8b442434             mov eax, dword ptr [esp + 0x34]
// 00720fd6  51                   push ecx
// 00720fd7  50                   push eax
// 00720fd8  e863f9ffff           call 0x720940
// 00720fdd  83c418               add esp, 0x18
// 00720fe0  8bf0                 mov esi, eax
// 00720fe2  f7c300200000         test ebx, 0x2000
// 00720fe8  741f                 je 0x721009
// 00720fea  8b442428             mov eax, dword ptr [esp + 0x28]
// 00720fee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00720ff2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00720ff6  8908                 mov dword ptr [eax], ecx
// 00720ff8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00720ffc  895004               mov dword ptr [eax + 4], edx
// 00720fff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00721003  894808               mov dword ptr [eax + 8], ecx
// 00721006  89500c               mov dword ptr [eax + 0xc], edx
// 00721009  5f                   pop edi
// 0072100a  8bc6                 mov eax, esi
// 0072100c  5e                   pop esi
// 0072100d  5d                   pop ebp
// 0072100e  5b                   pop ebx
// 0072100f  83c410               add esp, 0x10
// 00721012  c21000               ret 0x10
// 00721015  8d4900               lea ecx, [ecx]
// 00721018  110e                 adc dword ptr [esi], ecx
// 0072101a  7200                 jb 0x72101c
// 0072101c  4d                   dec ebp
// 0072101d  0e                   push cs
// 0072101e  7200                 jb 0x721020
// 00721020  890f                 mov dword ptr [edi], ecx
// 00721022  7200                 jb 0x721024
// 00721024  2f                   das 
// 00721025  0e                   push cs
// 00721026  7200                 jb 0x721028
// 00721028  890f                 mov dword ptr [edi], ecx
// 0072102a  7200                 jb 0x72102c
// 0072102c  890f                 mov dword ptr [edi], ecx
// 0072102e  7200                 jb 0x721030
// 00721030  890f                 mov dword ptr [edi], ecx
// 00721032  7200                 jb 0x721034
// 00721034  640e                 push cs
// 00721036  7200                 jb 0x721038
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinDrawTools.cpp (function ?XTRSkinFrameworkDrawEdge@@YGHPAUHDC__@@PAUtagRECT@@II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinDrawTools.cpp
