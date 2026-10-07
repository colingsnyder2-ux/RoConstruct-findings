// roc 2012-06 00638df0  unit: G3D::_internal::DialogTemplate  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00638df0
//
// 00638df0  8b442408             mov eax, dword ptr [esp + 8]
// 00638df4  2d10010000           sub eax, 0x110
// 00638df9  7430                 je 0x638e2b
// 00638dfb  83e801               sub eax, 1
// 00638dfe  0f85a0000000         jne 0x638ea4
// 00638e04  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00638e09  2dd0070000           sub eax, 0x7d0
// 00638e0e  83f809               cmp eax, 9
// 00638e11  0f878d000000         ja 0x638ea4
// 00638e17  50                   push eax
// 00638e18  8b442408             mov eax, dword ptr [esp + 8]
// 00638e1c  50                   push eax
// 00638e1d  ff152c3bb200         call dword ptr [0xb23b2c]
// 00638e23  b801000000           mov eax, 1
// 00638e28  c21000               ret 0x10
// 00638e2b  53                   push ebx
// 00638e2c  8b1d283bb200         mov ebx, dword ptr [0xb23b28]
// 00638e32  55                   push ebp
// 00638e33  56                   push esi
// 00638e34  8b742410             mov esi, dword ptr [esp + 0x10]
// 00638e38  57                   push edi
// 00638e39  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00638e3d  8b0f                 mov ecx, dword ptr [edi]
// 00638e3f  51                   push ecx
// 00638e40  68e8030000           push 0x3e8
// 00638e45  56                   push esi
// 00638e46  ffd3                 call ebx
// 00638e48  8b2d243bb200         mov ebp, dword ptr [0xb23b24]
// 00638e4e  50                   push eax
// 00638e4f  ffd5                 call ebp
// 00638e51  68d0070000           push 0x7d0
// 00638e56  56                   push esi
// 00638e57  ffd3                 call ebx
// 00638e59  50                   push eax
// 00638e5a  ff15143cb200         call dword ptr [0xb23c14]
// 00638e60  8b5704               mov edx, dword ptr [edi + 4]
// 00638e63  52                   push edx
// 00638e64  56                   push esi
// 00638e65  ffd5                 call ebp
// 00638e67  68904eb400           push 0xb44e90
// 00638e6c  6a31                 push 0x31
// 00638e6e  6a02                 push 2
// 00638e70  6a00                 push 0
// 00638e72  6a00                 push 0
// 00638e74  6a00                 push 0
// 00638e76  6a00                 push 0
// 00638e78  6a00                 push 0
// 00638e7a  6a00                 push 0
// 00638e7c  6890010000           push 0x190
// 00638e81  6a00                 push 0
// 00638e83  6a00                 push 0
// 00638e85  6a00                 push 0
// 00638e87  6a10                 push 0x10
// 00638e89  ff153421b200         call dword ptr [0xb22134]
// 00638e8f  6a01                 push 1
// 00638e91  50                   push eax
// 00638e92  6a30                 push 0x30
// 00638e94  68e8030000           push 0x3e8
// 00638e99  56                   push esi
// 00638e9a  ff15ac3bb200         call dword ptr [0xb23bac]
// 00638ea0  5f                   pop edi
// 00638ea1  5e                   pop esi
// 00638ea2  5d                   pop ebp
// 00638ea3  5b                   pop ebx
// 00638ea4  33c0                 xor eax, eax
// 00638ea6  c21000               ret 0x10
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
