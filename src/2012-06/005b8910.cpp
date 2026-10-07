// roc 2012-06 005b8910  unit: RBX::Network::InterpolatingPhysicsReceiver::Job  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005b8910
//
// 005b8910  83ec10               sub esp, 0x10
// 005b8913  803db45de20000       cmp byte ptr [0xe25db4], 0
// 005b891a  7529                 jne 0x5b8945
// 005b891c  c605b45de20001       mov byte ptr [0xe25db4], 1
// 005b8923  ff159422b200         call dword ptr [0xb22294]
// 005b8929  68b05de200           push 0xe25db0
// 005b892e  68ac5de200           push 0xe25dac
// 005b8933  50                   push eax
// 005b8934  ff159023b200         call dword ptr [0xb22390]
// 005b893a  ff153423b200         call dword ptr [0xb22334]
// 005b8940  a3a85de200           mov dword ptr [0xe25da8], eax
// 005b8945  53                   push ebx
// 005b8946  55                   push ebp
// 005b8947  56                   push esi
// 005b8948  57                   push edi
// 005b8949  8d442410             lea eax, [esp + 0x10]
// 005b894d  50                   push eax
// 005b894e  ff154823b200         call dword ptr [0xb22348]
// 005b8954  8d4c2418             lea ecx, [esp + 0x18]
// 005b8958  51                   push ecx
// 005b8959  ff154423b200         call dword ptr [0xb22344]
// 005b895f  8b742414             mov esi, dword ptr [esp + 0x14]
// 005b8963  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b8967  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005b896b  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b896f  56                   push esi
// 005b8970  57                   push edi
// 005b8971  52                   push edx
// 005b8972  50                   push eax
// 005b8973  e8d8b03c00           call 0x983a50
// 005b8978  6a00                 push 0
// 005b897a  6840420f00           push 0xf4240
// 005b897f  53                   push ebx
// 005b8980  51                   push ecx
// 005b8981  8be8                 mov ebp, eax
// 005b8983  8954242c             mov dword ptr [esp + 0x2c], edx
// 005b8987  e8b4a93c00           call 0x983340
// 005b898c  56                   push esi
// 005b898d  57                   push edi
// 005b898e  52                   push edx
// 005b898f  50                   push eax
// 005b8990  e84baa3c00           call 0x9833e0
// 005b8995  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b8999  6a00                 push 0
// 005b899b  6840420f00           push 0xf4240
// 005b89a0  51                   push ecx
// 005b89a1  55                   push ebp
// 005b89a2  8bf0                 mov esi, eax
// 005b89a4  8bfa                 mov edi, edx
// 005b89a6  e895a93c00           call 0x983340
// 005b89ab  03f0                 add esi, eax
// 005b89ad  13fa                 adc edi, edx
// 005b89af  8bd7                 mov edx, edi
// 005b89b1  5f                   pop edi
// 005b89b2  8bc6                 mov eax, esi
// 005b89b4  5e                   pop esi
// 005b89b5  5d                   pop ebp
// 005b89b6  5b                   pop ebx
// 005b89b7  83c410               add esp, 0x10
// 005b89ba  c3                   ret 
// library rbx2016-raknet/GetTime.cpp (function ?GetTimeUS_Windows@@YA_KXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet GetTime.cpp
