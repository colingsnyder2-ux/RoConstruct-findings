// roc 2009-06 0049b3f0  unit: G3D::GImage::Error  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049b3f0
//
// 0049b3f0  8b442404             mov eax, dword ptr [esp + 4]
// 0049b3f4  53                   push ebx
// 0049b3f5  55                   push ebp
// 0049b3f6  56                   push esi
// 0049b3f7  8bf1                 mov esi, ecx
// 0049b3f9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0049b3fc  b901000000           mov ecx, 1
// 0049b401  894604               mov dword ptr [esi + 4], eax
// 0049b404  57                   push edi
// 0049b405  840d50c8a300         test byte ptr [0xa3c850], cl
// 0049b40b  7513                 jne 0x49b420
// 0049b40d  090d50c8a300         or dword ptr [0xa3c850], ecx
// 0049b413  bb0a000000           mov ebx, 0xa
// 0049b418  891d4cc8a300         mov dword ptr [0xa3c84c], ebx
// 0049b41e  eb06                 jmp 0x49b426
// 0049b420  8b1d4cc8a300         mov ebx, dword ptr [0xa3c84c]
// 0049b426  8b4e08               mov ecx, dword ptr [esi + 8]
// 0049b429  8b7e04               mov edi, dword ptr [esi + 4]
// 0049b42c  3bf9                 cmp edi, ecx
// 0049b42e  0f8e8a000000         jle 0x49b4be
// 0049b434  85c9                 test ecx, ecx
// 0049b436  7512                 jne 0x49b44a
// 0049b438  55                   push ebp
// 0049b439  8bce                 mov ecx, esi
// 0049b43b  894608               mov dword ptr [esi + 8], eax
// 0049b43e  e85da91d00           call 0x675da0
// 0049b443  5f                   pop edi
// 0049b444  5e                   pop esi
// 0049b445  5d                   pop ebp
// 0049b446  5b                   pop ebx
// 0049b447  c20800               ret 8
// 0049b44a  3bfb                 cmp edi, ebx
// 0049b44c  7d12                 jge 0x49b460
// 0049b44e  55                   push ebp
// 0049b44f  8bce                 mov ecx, esi
// 0049b451  895e08               mov dword ptr [esi + 8], ebx
// 0049b454  e847a91d00           call 0x675da0
// 0049b459  5f                   pop edi
// 0049b45a  5e                   pop esi
// 0049b45b  5d                   pop ebp
// 0049b45c  5b                   pop ebx
// 0049b45d  c20800               ret 8
// 0049b460  d90548e88b00         fld dword ptr [0x8be848]
// 0049b466  8bc1                 mov eax, ecx
// 0049b468  03c0                 add eax, eax
// 0049b46a  03c0                 add eax, eax
// 0049b46c  3d801a0600           cmp eax, 0x61a80
// 0049b471  760a                 jbe 0x49b47d
// 0049b473  ddd8                 fstp st(0)
// 0049b475  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0049b47b  eb0f                 jmp 0x49b48c
// 0049b47d  3d00fa0000           cmp eax, 0xfa00
// 0049b482  7608                 jbe 0x49b48c
// 0049b484  ddd8                 fstp st(0)
// 0049b486  d90544d08b00         fld dword ptr [0x8bd044]
// 0049b48c  8bd9                 mov ebx, ecx
// 0049b48e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049b492  da4c2418             fimul dword ptr [esp + 0x18]
// 0049b496  e825ea2700           call 0x719ec0
// 0049b49b  2bc3                 sub eax, ebx
// 0049b49d  03c7                 add eax, edi
// 0049b49f  894608               mov dword ptr [esi + 8], eax
// 0049b4a2  8b0d4cc8a300         mov ecx, dword ptr [0xa3c84c]
// 0049b4a8  3bc1                 cmp eax, ecx
// 0049b4aa  7d03                 jge 0x49b4af
// 0049b4ac  894e08               mov dword ptr [esi + 8], ecx
// 0049b4af  55                   push ebp
// 0049b4b0  8bce                 mov ecx, esi
// 0049b4b2  e8e9a81d00           call 0x675da0
// 0049b4b7  5f                   pop edi
// 0049b4b8  5e                   pop esi
// 0049b4b9  5d                   pop ebp
// 0049b4ba  5b                   pop ebx
// 0049b4bb  c20800               ret 8
// 0049b4be  b856555555           mov eax, 0x55555556
// 0049b4c3  f7e9                 imul ecx
// 0049b4c5  8bc2                 mov eax, edx
// 0049b4c7  c1e81f               shr eax, 0x1f
// 0049b4ca  03c2                 add eax, edx
// 0049b4cc  3bf8                 cmp edi, eax
// 0049b4ce  7f19                 jg 0x49b4e9
// 0049b4d0  807c241800           cmp byte ptr [esp + 0x18], 0
// 0049b4d5  7412                 je 0x49b4e9
// 0049b4d7  3bfb                 cmp edi, ebx
// 0049b4d9  7e0e                 jle 0x49b4e9
// 0049b4db  3bfd                 cmp edi, ebp
// 0049b4dd  7c02                 jl 0x49b4e1
// 0049b4df  8bfd                 mov edi, ebp
// 0049b4e1  57                   push edi
// 0049b4e2  8bce                 mov ecx, esi
// 0049b4e4  e8b7a81d00           call 0x675da0
// 0049b4e9  5f                   pop edi
// 0049b4ea  5e                   pop esi
// 0049b4eb  5d                   pop ebp
// 0049b4ec  5b                   pop ebx
// 0049b4ed  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
