// roc 2009-06 0069d7d0  unit: RBX::VGeometryService::?$FactoryProduct  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069d7d0
//
// 0069d7d0  8b442404             mov eax, dword ptr [esp + 4]
// 0069d7d4  53                   push ebx
// 0069d7d5  55                   push ebp
// 0069d7d6  56                   push esi
// 0069d7d7  8bf1                 mov esi, ecx
// 0069d7d9  8b6e04               mov ebp, dword ptr [esi + 4]
// 0069d7dc  b901000000           mov ecx, 1
// 0069d7e1  894604               mov dword ptr [esi + 4], eax
// 0069d7e4  57                   push edi
// 0069d7e5  840d38f7a400         test byte ptr [0xa4f738], cl
// 0069d7eb  7513                 jne 0x69d800
// 0069d7ed  090d38f7a400         or dword ptr [0xa4f738], ecx
// 0069d7f3  bb0a000000           mov ebx, 0xa
// 0069d7f8  891d34f7a400         mov dword ptr [0xa4f734], ebx
// 0069d7fe  eb06                 jmp 0x69d806
// 0069d800  8b1d34f7a400         mov ebx, dword ptr [0xa4f734]
// 0069d806  8b4e08               mov ecx, dword ptr [esi + 8]
// 0069d809  8b7e04               mov edi, dword ptr [esi + 4]
// 0069d80c  3bf9                 cmp edi, ecx
// 0069d80e  0f8e8a000000         jle 0x69d89e
// 0069d814  85c9                 test ecx, ecx
// 0069d816  7512                 jne 0x69d82a
// 0069d818  55                   push ebp
// 0069d819  8bce                 mov ecx, esi
// 0069d81b  894608               mov dword ptr [esi + 8], eax
// 0069d81e  e87d85fdff           call 0x675da0
// 0069d823  5f                   pop edi
// 0069d824  5e                   pop esi
// 0069d825  5d                   pop ebp
// 0069d826  5b                   pop ebx
// 0069d827  c20800               ret 8
// 0069d82a  3bfb                 cmp edi, ebx
// 0069d82c  7d12                 jge 0x69d840
// 0069d82e  55                   push ebp
// 0069d82f  8bce                 mov ecx, esi
// 0069d831  895e08               mov dword ptr [esi + 8], ebx
// 0069d834  e86785fdff           call 0x675da0
// 0069d839  5f                   pop edi
// 0069d83a  5e                   pop esi
// 0069d83b  5d                   pop ebp
// 0069d83c  5b                   pop ebx
// 0069d83d  c20800               ret 8
// 0069d840  d90548e88b00         fld dword ptr [0x8be848]
// 0069d846  8bc1                 mov eax, ecx
// 0069d848  03c0                 add eax, eax
// 0069d84a  03c0                 add eax, eax
// 0069d84c  3d801a0600           cmp eax, 0x61a80
// 0069d851  760a                 jbe 0x69d85d
// 0069d853  ddd8                 fstp st(0)
// 0069d855  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0069d85b  eb0f                 jmp 0x69d86c
// 0069d85d  3d00fa0000           cmp eax, 0xfa00
// 0069d862  7608                 jbe 0x69d86c
// 0069d864  ddd8                 fstp st(0)
// 0069d866  d90544d08b00         fld dword ptr [0x8bd044]
// 0069d86c  8bd9                 mov ebx, ecx
// 0069d86e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0069d872  da4c2418             fimul dword ptr [esp + 0x18]
// 0069d876  e845c60700           call 0x719ec0
// 0069d87b  2bc3                 sub eax, ebx
// 0069d87d  03c7                 add eax, edi
// 0069d87f  894608               mov dword ptr [esi + 8], eax
// 0069d882  8b0d34f7a400         mov ecx, dword ptr [0xa4f734]
// 0069d888  3bc1                 cmp eax, ecx
// 0069d88a  7d03                 jge 0x69d88f
// 0069d88c  894e08               mov dword ptr [esi + 8], ecx
// 0069d88f  55                   push ebp
// 0069d890  8bce                 mov ecx, esi
// 0069d892  e80985fdff           call 0x675da0
// 0069d897  5f                   pop edi
// 0069d898  5e                   pop esi
// 0069d899  5d                   pop ebp
// 0069d89a  5b                   pop ebx
// 0069d89b  c20800               ret 8
// 0069d89e  b856555555           mov eax, 0x55555556
// 0069d8a3  f7e9                 imul ecx
// 0069d8a5  8bc2                 mov eax, edx
// 0069d8a7  c1e81f               shr eax, 0x1f
// 0069d8aa  03c2                 add eax, edx
// 0069d8ac  3bf8                 cmp edi, eax
// 0069d8ae  7f19                 jg 0x69d8c9
// 0069d8b0  807c241800           cmp byte ptr [esp + 0x18], 0
// 0069d8b5  7412                 je 0x69d8c9
// 0069d8b7  3bfb                 cmp edi, ebx
// 0069d8b9  7e0e                 jle 0x69d8c9
// 0069d8bb  3bfd                 cmp edi, ebp
// 0069d8bd  7c02                 jl 0x69d8c1
// 0069d8bf  8bfd                 mov edi, ebp
// 0069d8c1  57                   push edi
// 0069d8c2  8bce                 mov ecx, esi
// 0069d8c4  e8d784fdff           call 0x675da0
// 0069d8c9  5f                   pop edi
// 0069d8ca  5e                   pop esi
// 0069d8cb  5d                   pop ebp
// 0069d8cc  5b                   pop ebx
// 0069d8cd  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
