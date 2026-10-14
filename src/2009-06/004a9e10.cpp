// roc 2009-06 004a9e10  unit: G3D::Win32Window  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9e10
//
// 004a9e10  8b442404             mov eax, dword ptr [esp + 4]
// 004a9e14  53                   push ebx
// 004a9e15  55                   push ebp
// 004a9e16  56                   push esi
// 004a9e17  8bf1                 mov esi, ecx
// 004a9e19  8b6e04               mov ebp, dword ptr [esi + 4]
// 004a9e1c  b901000000           mov ecx, 1
// 004a9e21  894604               mov dword ptr [esi + 4], eax
// 004a9e24  57                   push edi
// 004a9e25  840df8d0a300         test byte ptr [0xa3d0f8], cl
// 004a9e2b  7513                 jne 0x4a9e40
// 004a9e2d  090df8d0a300         or dword ptr [0xa3d0f8], ecx
// 004a9e33  bb0a000000           mov ebx, 0xa
// 004a9e38  891df4d0a300         mov dword ptr [0xa3d0f4], ebx
// 004a9e3e  eb06                 jmp 0x4a9e46
// 004a9e40  8b1df4d0a300         mov ebx, dword ptr [0xa3d0f4]
// 004a9e46  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a9e49  8b7e04               mov edi, dword ptr [esi + 4]
// 004a9e4c  3bf9                 cmp edi, ecx
// 004a9e4e  0f8e8a000000         jle 0x4a9ede
// 004a9e54  85c9                 test ecx, ecx
// 004a9e56  7512                 jne 0x4a9e6a
// 004a9e58  55                   push ebp
// 004a9e59  8bce                 mov ecx, esi
// 004a9e5b  894608               mov dword ptr [esi + 8], eax
// 004a9e5e  e8fdf8ffff           call 0x4a9760
// 004a9e63  5f                   pop edi
// 004a9e64  5e                   pop esi
// 004a9e65  5d                   pop ebp
// 004a9e66  5b                   pop ebx
// 004a9e67  c20800               ret 8
// 004a9e6a  3bfb                 cmp edi, ebx
// 004a9e6c  7d12                 jge 0x4a9e80
// 004a9e6e  55                   push ebp
// 004a9e6f  8bce                 mov ecx, esi
// 004a9e71  895e08               mov dword ptr [esi + 8], ebx
// 004a9e74  e8e7f8ffff           call 0x4a9760
// 004a9e79  5f                   pop edi
// 004a9e7a  5e                   pop esi
// 004a9e7b  5d                   pop ebp
// 004a9e7c  5b                   pop ebx
// 004a9e7d  c20800               ret 8
// 004a9e80  d90548e88b00         fld dword ptr [0x8be848]
// 004a9e86  8bc1                 mov eax, ecx
// 004a9e88  03c0                 add eax, eax
// 004a9e8a  03c0                 add eax, eax
// 004a9e8c  3d801a0600           cmp eax, 0x61a80
// 004a9e91  760a                 jbe 0x4a9e9d
// 004a9e93  ddd8                 fstp st(0)
// 004a9e95  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004a9e9b  eb0f                 jmp 0x4a9eac
// 004a9e9d  3d00fa0000           cmp eax, 0xfa00
// 004a9ea2  7608                 jbe 0x4a9eac
// 004a9ea4  ddd8                 fstp st(0)
// 004a9ea6  d90544d08b00         fld dword ptr [0x8bd044]
// 004a9eac  8bd9                 mov ebx, ecx
// 004a9eae  895c2418             mov dword ptr [esp + 0x18], ebx
// 004a9eb2  da4c2418             fimul dword ptr [esp + 0x18]
// 004a9eb6  e805002700           call 0x719ec0
// 004a9ebb  2bc3                 sub eax, ebx
// 004a9ebd  03c7                 add eax, edi
// 004a9ebf  894608               mov dword ptr [esi + 8], eax
// 004a9ec2  8b0df4d0a300         mov ecx, dword ptr [0xa3d0f4]
// 004a9ec8  3bc1                 cmp eax, ecx
// 004a9eca  7d03                 jge 0x4a9ecf
// 004a9ecc  894e08               mov dword ptr [esi + 8], ecx
// 004a9ecf  55                   push ebp
// 004a9ed0  8bce                 mov ecx, esi
// 004a9ed2  e889f8ffff           call 0x4a9760
// 004a9ed7  5f                   pop edi
// 004a9ed8  5e                   pop esi
// 004a9ed9  5d                   pop ebp
// 004a9eda  5b                   pop ebx
// 004a9edb  c20800               ret 8
// 004a9ede  b856555555           mov eax, 0x55555556
// 004a9ee3  f7e9                 imul ecx
// 004a9ee5  8bc2                 mov eax, edx
// 004a9ee7  c1e81f               shr eax, 0x1f
// 004a9eea  03c2                 add eax, edx
// 004a9eec  3bf8                 cmp edi, eax
// 004a9eee  7f19                 jg 0x4a9f09
// 004a9ef0  807c241800           cmp byte ptr [esp + 0x18], 0
// 004a9ef5  7412                 je 0x4a9f09
// 004a9ef7  3bfb                 cmp edi, ebx
// 004a9ef9  7e0e                 jle 0x4a9f09
// 004a9efb  3bfd                 cmp edi, ebp
// 004a9efd  7c02                 jl 0x4a9f01
// 004a9eff  8bfd                 mov edi, ebp
// 004a9f01  57                   push edi
// 004a9f02  8bce                 mov ecx, esi
// 004a9f04  e857f8ffff           call 0x4a9760
// 004a9f09  5f                   pop edi
// 004a9f0a  5e                   pop esi
// 004a9f0b  5d                   pop ebp
// 004a9f0c  5b                   pop ebx
// 004a9f0d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
