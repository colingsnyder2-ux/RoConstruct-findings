// roc 2009-06 00676070  unit: RBX::Assembly  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00676070
//
// 00676070  8b442404             mov eax, dword ptr [esp + 4]
// 00676074  53                   push ebx
// 00676075  55                   push ebp
// 00676076  56                   push esi
// 00676077  8bf1                 mov esi, ecx
// 00676079  8b6e04               mov ebp, dword ptr [esi + 4]
// 0067607c  b901000000           mov ecx, 1
// 00676081  894604               mov dword ptr [esi + 4], eax
// 00676084  57                   push edi
// 00676085  840dc0dfa400         test byte ptr [0xa4dfc0], cl
// 0067608b  7513                 jne 0x6760a0
// 0067608d  090dc0dfa400         or dword ptr [0xa4dfc0], ecx
// 00676093  bb0a000000           mov ebx, 0xa
// 00676098  891dbcdfa400         mov dword ptr [0xa4dfbc], ebx
// 0067609e  eb06                 jmp 0x6760a6
// 006760a0  8b1dbcdfa400         mov ebx, dword ptr [0xa4dfbc]
// 006760a6  8b4e08               mov ecx, dword ptr [esi + 8]
// 006760a9  8b7e04               mov edi, dword ptr [esi + 4]
// 006760ac  3bf9                 cmp edi, ecx
// 006760ae  0f8e8a000000         jle 0x67613e
// 006760b4  85c9                 test ecx, ecx
// 006760b6  7512                 jne 0x6760ca
// 006760b8  55                   push ebp
// 006760b9  8bce                 mov ecx, esi
// 006760bb  894608               mov dword ptr [esi + 8], eax
// 006760be  e8ddfcffff           call 0x675da0
// 006760c3  5f                   pop edi
// 006760c4  5e                   pop esi
// 006760c5  5d                   pop ebp
// 006760c6  5b                   pop ebx
// 006760c7  c20800               ret 8
// 006760ca  3bfb                 cmp edi, ebx
// 006760cc  7d12                 jge 0x6760e0
// 006760ce  55                   push ebp
// 006760cf  8bce                 mov ecx, esi
// 006760d1  895e08               mov dword ptr [esi + 8], ebx
// 006760d4  e8c7fcffff           call 0x675da0
// 006760d9  5f                   pop edi
// 006760da  5e                   pop esi
// 006760db  5d                   pop ebp
// 006760dc  5b                   pop ebx
// 006760dd  c20800               ret 8
// 006760e0  d90548e88b00         fld dword ptr [0x8be848]
// 006760e6  8bc1                 mov eax, ecx
// 006760e8  03c0                 add eax, eax
// 006760ea  03c0                 add eax, eax
// 006760ec  3d801a0600           cmp eax, 0x61a80
// 006760f1  760a                 jbe 0x6760fd
// 006760f3  ddd8                 fstp st(0)
// 006760f5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006760fb  eb0f                 jmp 0x67610c
// 006760fd  3d00fa0000           cmp eax, 0xfa00
// 00676102  7608                 jbe 0x67610c
// 00676104  ddd8                 fstp st(0)
// 00676106  d90544d08b00         fld dword ptr [0x8bd044]
// 0067610c  8bd9                 mov ebx, ecx
// 0067610e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00676112  da4c2418             fimul dword ptr [esp + 0x18]
// 00676116  e8a53d0a00           call 0x719ec0
// 0067611b  2bc3                 sub eax, ebx
// 0067611d  03c7                 add eax, edi
// 0067611f  894608               mov dword ptr [esi + 8], eax
// 00676122  8b0dbcdfa400         mov ecx, dword ptr [0xa4dfbc]
// 00676128  3bc1                 cmp eax, ecx
// 0067612a  7d03                 jge 0x67612f
// 0067612c  894e08               mov dword ptr [esi + 8], ecx
// 0067612f  55                   push ebp
// 00676130  8bce                 mov ecx, esi
// 00676132  e869fcffff           call 0x675da0
// 00676137  5f                   pop edi
// 00676138  5e                   pop esi
// 00676139  5d                   pop ebp
// 0067613a  5b                   pop ebx
// 0067613b  c20800               ret 8
// 0067613e  b856555555           mov eax, 0x55555556
// 00676143  f7e9                 imul ecx
// 00676145  8bc2                 mov eax, edx
// 00676147  c1e81f               shr eax, 0x1f
// 0067614a  03c2                 add eax, edx
// 0067614c  3bf8                 cmp edi, eax
// 0067614e  7f19                 jg 0x676169
// 00676150  807c241800           cmp byte ptr [esp + 0x18], 0
// 00676155  7412                 je 0x676169
// 00676157  3bfb                 cmp edi, ebx
// 00676159  7e0e                 jle 0x676169
// 0067615b  3bfd                 cmp edi, ebp
// 0067615d  7c02                 jl 0x676161
// 0067615f  8bfd                 mov edi, ebp
// 00676161  57                   push edi
// 00676162  8bce                 mov ecx, esi
// 00676164  e837fcffff           call 0x675da0
// 00676169  5f                   pop edi
// 0067616a  5e                   pop esi
// 0067616b  5d                   pop ebp
// 0067616c  5b                   pop ebx
// 0067616d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
