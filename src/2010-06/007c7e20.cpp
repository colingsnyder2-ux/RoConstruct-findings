// roc 2010-06 007c7e20  unit: CXTPToolBar  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c7e20
//
// 007c7e20  53                   push ebx
// 007c7e21  56                   push esi
// 007c7e22  57                   push edi
// 007c7e23  8bf1                 mov esi, ecx
// 007c7e25  e8b44f1b00           call 0x97cdde
// 007c7e2a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007c7e2e  a900010000           test eax, 0x100
// 007c7e33  740c                 je 0x7c7e41
// 007c7e35  f6c340               test bl, 0x40
// 007c7e38  7407                 je 0x7c7e41
// 007c7e3a  bf01000000           mov edi, 1
// 007c7e3f  eb02                 jmp 0x7c7e43
// 007c7e41  33ff                 xor edi, edi
// 007c7e43  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 007c7e4a  0f85cc000000         jne 0x7c7f1c
// 007c7e50  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 007c7e57  0f84bf000000         je 0x7c7f1c
// 007c7e5d  8bce                 mov ecx, esi
// 007c7e5f  e86c07ffff           call 0x7b85d0
// 007c7e64  85c0                 test eax, eax
// 007c7e66  7409                 je 0x7c7e71
// 007c7e68  8b4074               mov eax, dword ptr [eax + 0x74]
// 007c7e6b  83783400             cmp dword ptr [eax + 0x34], 0
// 007c7e6f  746c                 je 0x7c7edd
// 007c7e71  f6c308               test bl, 8
// 007c7e74  741c                 je 0x7c7e92
// 007c7e76  8bce                 mov ecx, esi
// 007c7e78  e87b501b00           call 0x97cef8
// 007c7e7d  85c0                 test eax, eax
// 007c7e7f  7511                 jne 0x7c7e92
// 007c7e81  6897000000           push 0x97
// 007c7e86  50                   push eax
// 007c7e87  50                   push eax
// 007c7e88  50                   push eax
// 007c7e89  50                   push eax
// 007c7e8a  50                   push eax
// 007c7e8b  8bce                 mov ecx, esi
// 007c7e8d  e8dafefdff           call 0x7a7d6c
// 007c7e92  f6c304               test bl, 4
// 007c7e95  7446                 je 0x7c7edd
// 007c7e97  8bce                 mov ecx, esi
// 007c7e99  e872f1ffff           call 0x7c7010
// 007c7e9e  85c0                 test eax, eax
// 007c7ea0  753b                 jne 0x7c7edd
// 007c7ea2  8bce                 mov ecx, esi
// 007c7ea4  e84f501b00           call 0x97cef8
// 007c7ea9  85c0                 test eax, eax
// 007c7eab  7430                 je 0x7c7edd
// 007c7ead  6af0                 push -0x10
// 007c7eaf  ff155cba9e00         call dword ptr [0x9eba5c]
// 007c7eb5  50                   push eax
// 007c7eb6  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 007c7ebc  a900000010           test eax, 0x10000000
// 007c7ec1  741a                 je 0x7c7edd
// 007c7ec3  a900000020           test eax, 0x20000000
// 007c7ec8  7513                 jne 0x7c7edd
// 007c7eca  6a57                 push 0x57
// 007c7ecc  6a00                 push 0
// 007c7ece  6a00                 push 0
// 007c7ed0  6a00                 push 0
// 007c7ed2  6a00                 push 0
// 007c7ed4  6a00                 push 0
// 007c7ed6  8bce                 mov ecx, esi
// 007c7ed8  e88ffefdff           call 0x7a7d6c
// 007c7edd  f6c303               test bl, 3
// 007c7ee0  7427                 je 0x7c7f09
// 007c7ee2  8bcb                 mov ecx, ebx
// 007c7ee4  80e101               and cl, 1
// 007c7ee7  0fb6d1               movzx edx, cl
// 007c7eea  f7da                 neg edx
// 007c7eec  1bd2                 sbb edx, edx
// 007c7eee  83e2c0               and edx, 0xffffffc0
// 007c7ef1  83ea80               sub edx, -0x80
// 007c7ef4  83ca17               or edx, 0x17
// 007c7ef7  52                   push edx
// 007c7ef8  6a00                 push 0
// 007c7efa  6a00                 push 0
// 007c7efc  6a00                 push 0
// 007c7efe  6a00                 push 0
// 007c7f00  6a00                 push 0
// 007c7f02  8bce                 mov ecx, esi
// 007c7f04  e863fefdff           call 0x7a7d6c
// 007c7f09  f6c330               test bl, 0x30
// 007c7f0c  740e                 je 0x7c7f1c
// 007c7f0e  c1eb04               shr ebx, 4
// 007c7f11  83e301               and ebx, 1
// 007c7f14  53                   push ebx
// 007c7f15  8bce                 mov ecx, esi
// 007c7f17  e80201feff           call 0x7a801e
// 007c7f1c  8bc7                 mov eax, edi
// 007c7f1e  5f                   pop edi
// 007c7f1f  5e                   pop esi
// 007c7f20  5b                   pop ebx
// 007c7f21  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnFloatStatus@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
