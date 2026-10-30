// roc 2010-06 00892790  unit: CXTColorLum  size: 613 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00892790
//
// 00892790  6aff                 push -1
// 00892792  68f0b69b00           push 0x9bb6f0
// 00892797  64a100000000         mov eax, dword ptr fs:[0]
// 0089279d  50                   push eax
// 0089279e  51                   push ecx
// 0089279f  53                   push ebx
// 008927a0  56                   push esi
// 008927a1  57                   push edi
// 008927a2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008927a7  33c4                 xor eax, esp
// 008927a9  50                   push eax
// 008927aa  8d442414             lea eax, [esp + 0x14]
// 008927ae  64a300000000         mov dword ptr fs:[0], eax
// 008927b4  8bf1                 mov esi, ecx
// 008927b6  89742410             mov dword ptr [esp + 0x10], esi
// 008927ba  6a30                 push 0x30
// 008927bc  33ff                 xor edi, edi
// 008927be  57                   push edi
// 008927bf  6861240000           push 0x2461
// 008927c4  e85faa0e00           call 0x97d228
// 008927c9  8d8e88000000         lea ecx, [esi + 0x88]
// 008927cf  897c241c             mov dword ptr [esp + 0x1c], edi
// 008927d3  c7065cfba600         mov dword ptr [esi], 0xa6fb5c
// 008927d9  e872f2ffff           call 0x891a50
// 008927de  8d8e08010000         lea ecx, [esi + 0x108]
// 008927e4  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008927e9  e832f8ffff           call 0x892020
// 008927ee  8d9e80010000         lea ebx, [esi + 0x180]
// 008927f4  8bcb                 mov ecx, ebx
// 008927f6  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008927fb  e8885af1ff           call 0x7a8288
// 00892800  c7034cd6a500         mov dword ptr [ebx], 0xa5d64c
// 00892806  8d9ed4010000         lea ebx, [esi + 0x1d4]
// 0089280c  8bcb                 mov ecx, ebx
// 0089280e  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00892813  e8705af1ff           call 0x7a8288
// 00892818  c7034cd6a500         mov dword ptr [ebx], 0xa5d64c
// 0089281e  8d9e28020000         lea ebx, [esi + 0x228]
// 00892824  8bcb                 mov ecx, ebx
// 00892826  c644241c04           mov byte ptr [esp + 0x1c], 4
// 0089282b  e8585af1ff           call 0x7a8288
// 00892830  c7034cd6a500         mov dword ptr [ebx], 0xa5d64c
// 00892836  8d9e7c020000         lea ebx, [esi + 0x27c]
// 0089283c  8bcb                 mov ecx, ebx
// 0089283e  c644241c05           mov byte ptr [esp + 0x1c], 5
// 00892843  e8405af1ff           call 0x7a8288
// 00892848  c7034cd6a500         mov dword ptr [ebx], 0xa5d64c
// 0089284e  8d9ed0020000         lea ebx, [esi + 0x2d0]
// 00892854  8bcb                 mov ecx, ebx
// 00892856  c644241c06           mov byte ptr [esp + 0x1c], 6
// 0089285b  e8285af1ff           call 0x7a8288
// 00892860  c7034cd6a500         mov dword ptr [ebx], 0xa5d64c
// 00892866  8d9e24030000         lea ebx, [esi + 0x324]
// 0089286c  8bcb                 mov ecx, ebx
// 0089286e  c644241c07           mov byte ptr [esp + 0x1c], 7
// 00892873  e8105af1ff           call 0x7a8288
// 00892878  c7034cd6a500         mov dword ptr [ebx], 0xa5d64c
// 0089287e  8d9e78030000         lea ebx, [esi + 0x378]
// 00892884  8bcb                 mov ecx, ebx
// 00892886  c644241c08           mov byte ptr [esp + 0x1c], 8
// 0089288b  e8f859f1ff           call 0x7a8288
// 00892890  c703acf8a600         mov dword ptr [ebx], 0xa6f8ac
// 00892896  8d9ecc030000         lea ebx, [esi + 0x3cc]
// 0089289c  8bcb                 mov ecx, ebx
// 0089289e  c644241c09           mov byte ptr [esp + 0x1c], 9
// 008928a3  e8e059f1ff           call 0x7a8288
// 008928a8  c703acf8a600         mov dword ptr [ebx], 0xa6f8ac
// 008928ae  8d9e20040000         lea ebx, [esi + 0x420]
// 008928b4  8bcb                 mov ecx, ebx
// 008928b6  c644241c0a           mov byte ptr [esp + 0x1c], 0xa
// 008928bb  e8c859f1ff           call 0x7a8288
// 008928c0  c703acf8a600         mov dword ptr [ebx], 0xa6f8ac
// 008928c6  8d9e74040000         lea ebx, [esi + 0x474]
// 008928cc  8bcb                 mov ecx, ebx
// 008928ce  c644241c0b           mov byte ptr [esp + 0x1c], 0xb
// 008928d3  e8b059f1ff           call 0x7a8288
// 008928d8  c703acf8a600         mov dword ptr [ebx], 0xa6f8ac
// 008928de  8d9ec8040000         lea ebx, [esi + 0x4c8]
// 008928e4  8bcb                 mov ecx, ebx
// 008928e6  c644241c0c           mov byte ptr [esp + 0x1c], 0xc
// 008928eb  e89859f1ff           call 0x7a8288
// 008928f0  c703acf8a600         mov dword ptr [ebx], 0xa6f8ac
// 008928f6  8d9e1c050000         lea ebx, [esi + 0x51c]
// 008928fc  8bcb                 mov ecx, ebx
// 008928fe  c644241c0d           mov byte ptr [esp + 0x1c], 0xd
// 00892903  e88059f1ff           call 0x7a8288
// 00892908  c703acf8a600         mov dword ptr [ebx], 0xa6f8ac
// 0089290e  8d9e70050000         lea ebx, [esi + 0x570]
// 00892914  8bcb                 mov ecx, ebx
// 00892916  c644241c0e           mov byte ptr [esp + 0x1c], 0xe
// 0089291b  e86859f1ff           call 0x7a8288
// 00892920  c7032467a500         mov dword ptr [ebx], 0xa56724
// 00892926  8d9ec4050000         lea ebx, [esi + 0x5c4]
// 0089292c  8bcb                 mov ecx, ebx
// 0089292e  c644241c0f           mov byte ptr [esp + 0x1c], 0xf
// 00892933  e85059f1ff           call 0x7a8288
// 00892938  c7032467a500         mov dword ptr [ebx], 0xa56724
// 0089293e  8d9e18060000         lea ebx, [esi + 0x618]
// 00892944  8bcb                 mov ecx, ebx
// 00892946  c644241c10           mov byte ptr [esp + 0x1c], 0x10
// 0089294b  e83859f1ff           call 0x7a8288
// 00892950  c7032467a500         mov dword ptr [ebx], 0xa56724
// 00892956  8d9e6c060000         lea ebx, [esi + 0x66c]
// 0089295c  8bcb                 mov ecx, ebx
// 0089295e  c644241c11           mov byte ptr [esp + 0x1c], 0x11
// 00892963  e82059f1ff           call 0x7a8288
// 00892968  c7032467a500         mov dword ptr [ebx], 0xa56724
// 0089296e  8d9ec0060000         lea ebx, [esi + 0x6c0]
// 00892974  8bcb                 mov ecx, ebx
// 00892976  c644241c12           mov byte ptr [esp + 0x1c], 0x12
// 0089297b  e80859f1ff           call 0x7a8288
// 00892980  c7032467a500         mov dword ptr [ebx], 0xa56724
// 00892986  8d9e14070000         lea ebx, [esi + 0x714]
// 0089298c  8bcb                 mov ecx, ebx
// 0089298e  c644241c13           mov byte ptr [esp + 0x1c], 0x13
// 00892993  e8f058f1ff           call 0x7a8288
// 00892998  c7032467a500         mov dword ptr [ebx], 0xa56724
// 0089299e  8bce                 mov ecx, esi
// 008929a0  c644241c14           mov byte ptr [esp + 0x1c], 0x14
// 008929a5  e88ea70e00           call 0x97d138
// 008929aa  83c004               add eax, 4
// 008929ad  8320df               and dword ptr [eax], 0xffffffdf
// 008929b0  8b442424             mov eax, dword ptr [esp + 0x24]
// 008929b4  898680070000         mov dword ptr [esi + 0x780], eax
// 008929ba  89be68070000         mov dword ptr [esi + 0x768], edi
// 008929c0  89be6c070000         mov dword ptr [esi + 0x76c], edi
// 008929c6  89be70070000         mov dword ptr [esi + 0x770], edi
// 008929cc  89be74070000         mov dword ptr [esi + 0x774], edi
// 008929d2  89be78070000         mov dword ptr [esi + 0x778], edi
// 008929d8  89be7c070000         mov dword ptr [esi + 0x77c], edi
// 008929de  8bc6                 mov eax, esi
// 008929e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008929e4  64890d00000000       mov dword ptr fs:[0], ecx
// 008929eb  59                   pop ecx
// 008929ec  5f                   pop edi
// 008929ed  5e                   pop esi
// 008929ee  5b                   pop ebx
// 008929ef  83c410               add esp, 0x10
// 008929f2  c20400               ret 4
// copied from an identical function in another client (function ??0CXTColorPageCustom@@QAE@PAVCXTColorDialog@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp