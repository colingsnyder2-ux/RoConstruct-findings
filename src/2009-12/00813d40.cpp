// roc 2009-12 00813d40  unit: CXTPToolBar  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00813d40
//
// 00813d40  53                   push ebx
// 00813d41  56                   push esi
// 00813d42  57                   push edi
// 00813d43  8bf1                 mov esi, ecx
// 00813d45  e828271100           call 0x926472
// 00813d4a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00813d4e  a900010000           test eax, 0x100
// 00813d53  740c                 je 0x813d61
// 00813d55  f6c340               test bl, 0x40
// 00813d58  7407                 je 0x813d61
// 00813d5a  bf01000000           mov edi, 1
// 00813d5f  eb02                 jmp 0x813d63
// 00813d61  33ff                 xor edi, edi
// 00813d63  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 00813d6a  0f85cc000000         jne 0x813e3c
// 00813d70  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 00813d77  0f84bf000000         je 0x813e3c
// 00813d7d  8bce                 mov ecx, esi
// 00813d7f  e84c07ffff           call 0x8044d0
// 00813d84  85c0                 test eax, eax
// 00813d86  7409                 je 0x813d91
// 00813d88  8b4074               mov eax, dword ptr [eax + 0x74]
// 00813d8b  83783400             cmp dword ptr [eax + 0x34], 0
// 00813d8f  746c                 je 0x813dfd
// 00813d91  f6c308               test bl, 8
// 00813d94  741c                 je 0x813db2
// 00813d96  8bce                 mov ecx, esi
// 00813d98  e81f281100           call 0x9265bc
// 00813d9d  85c0                 test eax, eax
// 00813d9f  7511                 jne 0x813db2
// 00813da1  6897000000           push 0x97
// 00813da6  50                   push eax
// 00813da7  50                   push eax
// 00813da8  50                   push eax
// 00813da9  50                   push eax
// 00813daa  50                   push eax
// 00813dab  8bce                 mov ecx, esi
// 00813dad  e87afefdff           call 0x7f3c2c
// 00813db2  f6c304               test bl, 4
// 00813db5  7446                 je 0x813dfd
// 00813db7  8bce                 mov ecx, esi
// 00813db9  e872f1ffff           call 0x812f30
// 00813dbe  85c0                 test eax, eax
// 00813dc0  753b                 jne 0x813dfd
// 00813dc2  8bce                 mov ecx, esi
// 00813dc4  e8f3271100           call 0x9265bc
// 00813dc9  85c0                 test eax, eax
// 00813dcb  7430                 je 0x813dfd
// 00813dcd  6af0                 push -0x10
// 00813dcf  ff15cccb9800         call dword ptr [0x98cbcc]
// 00813dd5  50                   push eax
// 00813dd6  ff15d8c99800         call dword ptr [0x98c9d8]
// 00813ddc  a900000010           test eax, 0x10000000
// 00813de1  741a                 je 0x813dfd
// 00813de3  a900000020           test eax, 0x20000000
// 00813de8  7513                 jne 0x813dfd
// 00813dea  6a57                 push 0x57
// 00813dec  6a00                 push 0
// 00813dee  6a00                 push 0
// 00813df0  6a00                 push 0
// 00813df2  6a00                 push 0
// 00813df4  6a00                 push 0
// 00813df6  8bce                 mov ecx, esi
// 00813df8  e82ffefdff           call 0x7f3c2c
// 00813dfd  f6c303               test bl, 3
// 00813e00  7427                 je 0x813e29
// 00813e02  8bcb                 mov ecx, ebx
// 00813e04  80e101               and cl, 1
// 00813e07  0fb6d1               movzx edx, cl
// 00813e0a  f7da                 neg edx
// 00813e0c  1bd2                 sbb edx, edx
// 00813e0e  83e2c0               and edx, 0xffffffc0
// 00813e11  83ea80               sub edx, -0x80
// 00813e14  83ca17               or edx, 0x17
// 00813e17  52                   push edx
// 00813e18  6a00                 push 0
// 00813e1a  6a00                 push 0
// 00813e1c  6a00                 push 0
// 00813e1e  6a00                 push 0
// 00813e20  6a00                 push 0
// 00813e22  8bce                 mov ecx, esi
// 00813e24  e803fefdff           call 0x7f3c2c
// 00813e29  f6c330               test bl, 0x30
// 00813e2c  740e                 je 0x813e3c
// 00813e2e  c1eb04               shr ebx, 4
// 00813e31  83e301               and ebx, 1
// 00813e34  53                   push ebx
// 00813e35  8bce                 mov ecx, esi
// 00813e37  e8a200feff           call 0x7f3ede
// 00813e3c  8bc7                 mov eax, edi
// 00813e3e  5f                   pop edi
// 00813e3f  5e                   pop esi
// 00813e40  5b                   pop ebx
// 00813e41  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnFloatStatus@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
