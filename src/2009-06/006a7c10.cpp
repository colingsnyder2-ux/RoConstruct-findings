// roc 2009-06 006a7c10  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a7c10
//
// 006a7c10  8b442404             mov eax, dword ptr [esp + 4]
// 006a7c14  53                   push ebx
// 006a7c15  55                   push ebp
// 006a7c16  56                   push esi
// 006a7c17  8bf1                 mov esi, ecx
// 006a7c19  8b6e04               mov ebp, dword ptr [esi + 4]
// 006a7c1c  b901000000           mov ecx, 1
// 006a7c21  894604               mov dword ptr [esi + 4], eax
// 006a7c24  57                   push edi
// 006a7c25  840d24fca400         test byte ptr [0xa4fc24], cl
// 006a7c2b  7513                 jne 0x6a7c40
// 006a7c2d  090d24fca400         or dword ptr [0xa4fc24], ecx
// 006a7c33  bb0a000000           mov ebx, 0xa
// 006a7c38  891d20fca400         mov dword ptr [0xa4fc20], ebx
// 006a7c3e  eb06                 jmp 0x6a7c46
// 006a7c40  8b1d20fca400         mov ebx, dword ptr [0xa4fc20]
// 006a7c46  8b4e08               mov ecx, dword ptr [esi + 8]
// 006a7c49  8b7e04               mov edi, dword ptr [esi + 4]
// 006a7c4c  3bf9                 cmp edi, ecx
// 006a7c4e  0f8e8a000000         jle 0x6a7cde
// 006a7c54  85c9                 test ecx, ecx
// 006a7c56  7512                 jne 0x6a7c6a
// 006a7c58  55                   push ebp
// 006a7c59  8bce                 mov ecx, esi
// 006a7c5b  894608               mov dword ptr [esi + 8], eax
// 006a7c5e  e83de1fcff           call 0x675da0
// 006a7c63  5f                   pop edi
// 006a7c64  5e                   pop esi
// 006a7c65  5d                   pop ebp
// 006a7c66  5b                   pop ebx
// 006a7c67  c20800               ret 8
// 006a7c6a  3bfb                 cmp edi, ebx
// 006a7c6c  7d12                 jge 0x6a7c80
// 006a7c6e  55                   push ebp
// 006a7c6f  8bce                 mov ecx, esi
// 006a7c71  895e08               mov dword ptr [esi + 8], ebx
// 006a7c74  e827e1fcff           call 0x675da0
// 006a7c79  5f                   pop edi
// 006a7c7a  5e                   pop esi
// 006a7c7b  5d                   pop ebp
// 006a7c7c  5b                   pop ebx
// 006a7c7d  c20800               ret 8
// 006a7c80  d90548e88b00         fld dword ptr [0x8be848]
// 006a7c86  8bc1                 mov eax, ecx
// 006a7c88  03c0                 add eax, eax
// 006a7c8a  03c0                 add eax, eax
// 006a7c8c  3d801a0600           cmp eax, 0x61a80
// 006a7c91  760a                 jbe 0x6a7c9d
// 006a7c93  ddd8                 fstp st(0)
// 006a7c95  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006a7c9b  eb0f                 jmp 0x6a7cac
// 006a7c9d  3d00fa0000           cmp eax, 0xfa00
// 006a7ca2  7608                 jbe 0x6a7cac
// 006a7ca4  ddd8                 fstp st(0)
// 006a7ca6  d90544d08b00         fld dword ptr [0x8bd044]
// 006a7cac  8bd9                 mov ebx, ecx
// 006a7cae  895c2418             mov dword ptr [esp + 0x18], ebx
// 006a7cb2  da4c2418             fimul dword ptr [esp + 0x18]
// 006a7cb6  e805220700           call 0x719ec0
// 006a7cbb  2bc3                 sub eax, ebx
// 006a7cbd  03c7                 add eax, edi
// 006a7cbf  894608               mov dword ptr [esi + 8], eax
// 006a7cc2  8b0d20fca400         mov ecx, dword ptr [0xa4fc20]
// 006a7cc8  3bc1                 cmp eax, ecx
// 006a7cca  7d03                 jge 0x6a7ccf
// 006a7ccc  894e08               mov dword ptr [esi + 8], ecx
// 006a7ccf  55                   push ebp
// 006a7cd0  8bce                 mov ecx, esi
// 006a7cd2  e8c9e0fcff           call 0x675da0
// 006a7cd7  5f                   pop edi
// 006a7cd8  5e                   pop esi
// 006a7cd9  5d                   pop ebp
// 006a7cda  5b                   pop ebx
// 006a7cdb  c20800               ret 8
// 006a7cde  b856555555           mov eax, 0x55555556
// 006a7ce3  f7e9                 imul ecx
// 006a7ce5  8bc2                 mov eax, edx
// 006a7ce7  c1e81f               shr eax, 0x1f
// 006a7cea  03c2                 add eax, edx
// 006a7cec  3bf8                 cmp edi, eax
// 006a7cee  7f19                 jg 0x6a7d09
// 006a7cf0  807c241800           cmp byte ptr [esp + 0x18], 0
// 006a7cf5  7412                 je 0x6a7d09
// 006a7cf7  3bfb                 cmp edi, ebx
// 006a7cf9  7e0e                 jle 0x6a7d09
// 006a7cfb  3bfd                 cmp edi, ebp
// 006a7cfd  7c02                 jl 0x6a7d01
// 006a7cff  8bfd                 mov edi, ebp
// 006a7d01  57                   push edi
// 006a7d02  8bce                 mov ecx, esi
// 006a7d04  e897e0fcff           call 0x675da0
// 006a7d09  5f                   pop edi
// 006a7d0a  5e                   pop esi
// 006a7d0b  5d                   pop ebp
// 006a7d0c  5b                   pop ebx
// 006a7d0d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
