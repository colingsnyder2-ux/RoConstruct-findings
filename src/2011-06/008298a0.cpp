// roc 2011-06 008298a0  unit: CXTPToolBar  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008298a0
//
// 008298a0  53                   push ebx
// 008298a1  56                   push esi
// 008298a2  57                   push edi
// 008298a3  8bf1                 mov esi, ecx
// 008298a5  e86e2d1a00           call 0x9cc618
// 008298aa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008298ae  a900010000           test eax, 0x100
// 008298b3  740c                 je 0x8298c1
// 008298b5  f6c340               test bl, 0x40
// 008298b8  7407                 je 0x8298c1
// 008298ba  bf01000000           mov edi, 1
// 008298bf  eb02                 jmp 0x8298c3
// 008298c1  33ff                 xor edi, edi
// 008298c3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 008298ca  0f85cc000000         jne 0x82999c
// 008298d0  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 008298d7  0f84bf000000         je 0x82999c
// 008298dd  8bce                 mov ecx, esi
// 008298df  e8ac11ffff           call 0x81aa90
// 008298e4  85c0                 test eax, eax
// 008298e6  7409                 je 0x8298f1
// 008298e8  8b4074               mov eax, dword ptr [eax + 0x74]
// 008298eb  83783400             cmp dword ptr [eax + 0x34], 0
// 008298ef  746c                 je 0x82995d
// 008298f1  f6c308               test bl, 8
// 008298f4  741c                 je 0x829912
// 008298f6  8bce                 mov ecx, esi
// 008298f8  e81d2e1a00           call 0x9cc71a
// 008298fd  85c0                 test eax, eax
// 008298ff  7511                 jne 0x829912
// 00829901  6897000000           push 0x97
// 00829906  50                   push eax
// 00829907  50                   push eax
// 00829908  50                   push eax
// 00829909  50                   push eax
// 0082990a  50                   push eax
// 0082990b  8bce                 mov ecx, esi
// 0082990d  e8180bfeff           call 0x80a42a
// 00829912  f6c304               test bl, 4
// 00829915  7446                 je 0x82995d
// 00829917  8bce                 mov ecx, esi
// 00829919  e872f1ffff           call 0x828a90
// 0082991e  85c0                 test eax, eax
// 00829920  753b                 jne 0x82995d
// 00829922  8bce                 mov ecx, esi
// 00829924  e8f12d1a00           call 0x9cc71a
// 00829929  85c0                 test eax, eax
// 0082992b  7430                 je 0x82995d
// 0082992d  6af0                 push -0x10
// 0082992f  ff15cc19a400         call dword ptr [0xa419cc]
// 00829935  50                   push eax
// 00829936  ff15981ca400         call dword ptr [0xa41c98]
// 0082993c  a900000010           test eax, 0x10000000
// 00829941  741a                 je 0x82995d
// 00829943  a900000020           test eax, 0x20000000
// 00829948  7513                 jne 0x82995d
// 0082994a  6a57                 push 0x57
// 0082994c  6a00                 push 0
// 0082994e  6a00                 push 0
// 00829950  6a00                 push 0
// 00829952  6a00                 push 0
// 00829954  6a00                 push 0
// 00829956  8bce                 mov ecx, esi
// 00829958  e8cd0afeff           call 0x80a42a
// 0082995d  f6c303               test bl, 3
// 00829960  7427                 je 0x829989
// 00829962  8bcb                 mov ecx, ebx
// 00829964  80e101               and cl, 1
// 00829967  0fb6d1               movzx edx, cl
// 0082996a  f7da                 neg edx
// 0082996c  1bd2                 sbb edx, edx
// 0082996e  83e2c0               and edx, 0xffffffc0
// 00829971  83ea80               sub edx, -0x80
// 00829974  83ca17               or edx, 0x17
// 00829977  52                   push edx
// 00829978  6a00                 push 0
// 0082997a  6a00                 push 0
// 0082997c  6a00                 push 0
// 0082997e  6a00                 push 0
// 00829980  6a00                 push 0
// 00829982  8bce                 mov ecx, esi
// 00829984  e8a10afeff           call 0x80a42a
// 00829989  f6c330               test bl, 0x30
// 0082998c  740e                 je 0x82999c
// 0082998e  c1eb04               shr ebx, 4
// 00829991  83e301               and ebx, 1
// 00829994  53                   push ebx
// 00829995  8bce                 mov ecx, esi
// 00829997  e8400dfeff           call 0x80a6dc
// 0082999c  8bc7                 mov eax, edi
// 0082999e  5f                   pop edi
// 0082999f  5e                   pop esi
// 008299a0  5b                   pop ebx
// 008299a1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnFloatStatus@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
