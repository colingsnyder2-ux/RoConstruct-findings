// roc 2012-06 009a1ec0  unit: CXTPToolBar  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a1ec0
//
// 009a1ec0  53                   push ebx
// 009a1ec1  56                   push esi
// 009a1ec2  57                   push edi
// 009a1ec3  8bf1                 mov esi, ecx
// 009a1ec5  e808770f00           call 0xa995d2
// 009a1eca  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 009a1ece  a900010000           test eax, 0x100
// 009a1ed3  740c                 je 0x9a1ee1
// 009a1ed5  f6c340               test bl, 0x40
// 009a1ed8  7407                 je 0x9a1ee1
// 009a1eda  bf01000000           mov edi, 1
// 009a1edf  eb02                 jmp 0x9a1ee3
// 009a1ee1  33ff                 xor edi, edi
// 009a1ee3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 009a1eea  0f85cc000000         jne 0x9a1fbc
// 009a1ef0  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 009a1ef7  0f84bf000000         je 0x9a1fbc
// 009a1efd  8bce                 mov ecx, esi
// 009a1eff  e8ec0dffff           call 0x992cf0
// 009a1f04  85c0                 test eax, eax
// 009a1f06  7409                 je 0x9a1f11
// 009a1f08  8b4074               mov eax, dword ptr [eax + 0x74]
// 009a1f0b  83783400             cmp dword ptr [eax + 0x34], 0
// 009a1f0f  746c                 je 0x9a1f7d
// 009a1f11  f6c308               test bl, 8
// 009a1f14  741c                 je 0x9a1f32
// 009a1f16  8bce                 mov ecx, esi
// 009a1f18  e8b7770f00           call 0xa996d4
// 009a1f1d  85c0                 test eax, eax
// 009a1f1f  7511                 jne 0x9a1f32
// 009a1f21  6897000000           push 0x97
// 009a1f26  50                   push eax
// 009a1f27  50                   push eax
// 009a1f28  50                   push eax
// 009a1f29  50                   push eax
// 009a1f2a  50                   push eax
// 009a1f2b  8bce                 mov ecx, esi
// 009a1f2d  e8a205feff           call 0x9824d4
// 009a1f32  f6c304               test bl, 4
// 009a1f35  7446                 je 0x9a1f7d
// 009a1f37  8bce                 mov ecx, esi
// 009a1f39  e872f1ffff           call 0x9a10b0
// 009a1f3e  85c0                 test eax, eax
// 009a1f40  753b                 jne 0x9a1f7d
// 009a1f42  8bce                 mov ecx, esi
// 009a1f44  e88b770f00           call 0xa996d4
// 009a1f49  85c0                 test eax, eax
// 009a1f4b  7430                 je 0x9a1f7d
// 009a1f4d  6af0                 push -0x10
// 009a1f4f  ff150c3cb200         call dword ptr [0xb23c0c]
// 009a1f55  50                   push eax
// 009a1f56  ff15bc3ab200         call dword ptr [0xb23abc]
// 009a1f5c  a900000010           test eax, 0x10000000
// 009a1f61  741a                 je 0x9a1f7d
// 009a1f63  a900000020           test eax, 0x20000000
// 009a1f68  7513                 jne 0x9a1f7d
// 009a1f6a  6a57                 push 0x57
// 009a1f6c  6a00                 push 0
// 009a1f6e  6a00                 push 0
// 009a1f70  6a00                 push 0
// 009a1f72  6a00                 push 0
// 009a1f74  6a00                 push 0
// 009a1f76  8bce                 mov ecx, esi
// 009a1f78  e85705feff           call 0x9824d4
// 009a1f7d  f6c303               test bl, 3
// 009a1f80  7427                 je 0x9a1fa9
// 009a1f82  8bcb                 mov ecx, ebx
// 009a1f84  80e101               and cl, 1
// 009a1f87  0fb6d1               movzx edx, cl
// 009a1f8a  f7da                 neg edx
// 009a1f8c  1bd2                 sbb edx, edx
// 009a1f8e  83e2c0               and edx, 0xffffffc0
// 009a1f91  83ea80               sub edx, -0x80
// 009a1f94  83ca17               or edx, 0x17
// 009a1f97  52                   push edx
// 009a1f98  6a00                 push 0
// 009a1f9a  6a00                 push 0
// 009a1f9c  6a00                 push 0
// 009a1f9e  6a00                 push 0
// 009a1fa0  6a00                 push 0
// 009a1fa2  8bce                 mov ecx, esi
// 009a1fa4  e82b05feff           call 0x9824d4
// 009a1fa9  f6c330               test bl, 0x30
// 009a1fac  740e                 je 0x9a1fbc
// 009a1fae  c1eb04               shr ebx, 4
// 009a1fb1  83e301               and ebx, 1
// 009a1fb4  53                   push ebx
// 009a1fb5  8bce                 mov ecx, esi
// 009a1fb7  e8a007feff           call 0x98275c
// 009a1fbc  8bc7                 mov eax, edi
// 009a1fbe  5f                   pop edi
// 009a1fbf  5e                   pop esi
// 009a1fc0  5b                   pop ebx
// 009a1fc1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnFloatStatus@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
