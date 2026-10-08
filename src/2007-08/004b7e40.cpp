// roc 2007-08 004b7e40  unit: Exposer  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7e40
//
// 004b7e40  83ec10               sub esp, 0x10
// 004b7e43  803de0eb8b0000       cmp byte ptr [0x8bebe0], 0
// 004b7e4a  7512                 jne 0x4b7e5e
// 004b7e4c  68d8eb8b00           push 0x8bebd8
// 004b7e51  ff1524d27700         call dword ptr [0x77d224]
// 004b7e57  c605e0eb8b0001       mov byte ptr [0x8bebe0], 1
// 004b7e5e  53                   push ebx
// 004b7e5f  55                   push ebp
// 004b7e60  56                   push esi
// 004b7e61  57                   push edi
// 004b7e62  8d442410             lea eax, [esp + 0x10]
// 004b7e66  50                   push eax
// 004b7e67  ff1528d27700         call dword ptr [0x77d228]
// 004b7e6d  8b35dceb8b00         mov esi, dword ptr [0x8bebdc]
// 004b7e73  8b3dd8eb8b00         mov edi, dword ptr [0x8bebd8]
// 004b7e79  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b7e7d  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b7e81  56                   push esi
// 004b7e82  57                   push edi
// 004b7e83  51                   push ecx
// 004b7e84  52                   push edx
// 004b7e85  e8d6931700           call 0x631260
// 004b7e8a  6a00                 push 0
// 004b7e8c  6840420f00           push 0xf4240
// 004b7e91  53                   push ebx
// 004b7e92  51                   push ecx
// 004b7e93  8be8                 mov ebp, eax
// 004b7e95  8954242c             mov dword ptr [esp + 0x2c], edx
// 004b7e99  e8b28d1700           call 0x630c50
// 004b7e9e  56                   push esi
// 004b7e9f  57                   push edi
// 004b7ea0  52                   push edx
// 004b7ea1  50                   push eax
// 004b7ea2  e809931700           call 0x6311b0
// 004b7ea7  6a00                 push 0
// 004b7ea9  8bf0                 mov esi, eax
// 004b7eab  8b442420             mov eax, dword ptr [esp + 0x20]
// 004b7eaf  6840420f00           push 0xf4240
// 004b7eb4  50                   push eax
// 004b7eb5  55                   push ebp
// 004b7eb6  8bfa                 mov edi, edx
// 004b7eb8  e8938d1700           call 0x630c50
// 004b7ebd  8b0deceb8b00         mov ecx, dword ptr [0x8bebec]
// 004b7ec3  03f0                 add esi, eax
// 004b7ec5  a1e8eb8b00           mov eax, dword ptr [0x8bebe8]
// 004b7eca  13fa                 adc edi, edx
// 004b7ecc  8bd0                 mov edx, eax
// 004b7ece  0bd1                 or edx, ecx
// 004b7ed0  0f8481000000         je 0x4b7f57
// 004b7ed6  3bf9                 cmp edi, ecx
// 004b7ed8  7c1e                 jl 0x4b7ef8
// 004b7eda  7f04                 jg 0x4b7ee0
// 004b7edc  3bf0                 cmp esi, eax
// 004b7ede  7218                 jb 0x4b7ef8
// 004b7ee0  8bd6                 mov edx, esi
// 004b7ee2  2bd0                 sub edx, eax
// 004b7ee4  8bc7                 mov eax, edi
// 004b7ee6  1bc1                 sbb eax, ecx
// 004b7ee8  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b7eec  7869                 js 0x4b7f57
// 004b7eee  7f08                 jg 0x4b7ef8
// 004b7ef0  81fa00879303         cmp edx, 0x3938700
// 004b7ef6  765f                 jbe 0x4b7f57
// 004b7ef8  8d4c2418             lea ecx, [esp + 0x18]
// 004b7efc  51                   push ecx
// 004b7efd  ff1528d27700         call dword ptr [0x77d228]
// 004b7f03  8b35dceb8b00         mov esi, dword ptr [0x8bebdc]
// 004b7f09  8b3dd8eb8b00         mov edi, dword ptr [0x8bebd8]
// 004b7f0f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b7f13  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b7f17  56                   push esi
// 004b7f18  57                   push edi
// 004b7f19  52                   push edx
// 004b7f1a  50                   push eax
// 004b7f1b  e840931700           call 0x631260
// 004b7f20  6a00                 push 0
// 004b7f22  6840420f00           push 0xf4240
// 004b7f27  53                   push ebx
// 004b7f28  51                   push ecx
// 004b7f29  8be8                 mov ebp, eax
// 004b7f2b  8954242c             mov dword ptr [esp + 0x2c], edx
// 004b7f2f  e81c8d1700           call 0x630c50
// 004b7f34  56                   push esi
// 004b7f35  57                   push edi
// 004b7f36  52                   push edx
// 004b7f37  50                   push eax
// 004b7f38  e873921700           call 0x6311b0
// 004b7f3d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b7f41  6a00                 push 0
// 004b7f43  6840420f00           push 0xf4240
// 004b7f48  51                   push ecx
// 004b7f49  55                   push ebp
// 004b7f4a  8bf0                 mov esi, eax
// 004b7f4c  8bfa                 mov edi, edx
// 004b7f4e  e8fd8c1700           call 0x630c50
// 004b7f53  03f0                 add esi, eax
// 004b7f55  13fa                 adc edi, edx
// 004b7f57  893deceb8b00         mov dword ptr [0x8bebec], edi
// 004b7f5d  8bd7                 mov edx, edi
// 004b7f5f  5f                   pop edi
// 004b7f60  8935e8eb8b00         mov dword ptr [0x8bebe8], esi
// 004b7f66  8bc6                 mov eax, esi
// 004b7f68  5e                   pop esi
// 004b7f69  5d                   pop ebp
// 004b7f6a  5b                   pop ebx
// 004b7f6b  83c410               add esp, 0x10
// 004b7f6e  c3                   ret 
// library rbxgs-raknet/GetTime.cpp (function ?GetTimeNS@RakNet@@YA_JXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet GetTime.cpp
