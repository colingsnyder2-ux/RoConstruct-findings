// roc 2009-06 004aa0c0  unit: G3D::Win32Window  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aa0c0
//
// 004aa0c0  8b442404             mov eax, dword ptr [esp + 4]
// 004aa0c4  53                   push ebx
// 004aa0c5  55                   push ebp
// 004aa0c6  56                   push esi
// 004aa0c7  8bf1                 mov esi, ecx
// 004aa0c9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004aa0cc  b901000000           mov ecx, 1
// 004aa0d1  894604               mov dword ptr [esi + 4], eax
// 004aa0d4  57                   push edi
// 004aa0d5  840d08d1a300         test byte ptr [0xa3d108], cl
// 004aa0db  7513                 jne 0x4aa0f0
// 004aa0dd  090d08d1a300         or dword ptr [0xa3d108], ecx
// 004aa0e3  bb0a000000           mov ebx, 0xa
// 004aa0e8  891d04d1a300         mov dword ptr [0xa3d104], ebx
// 004aa0ee  eb06                 jmp 0x4aa0f6
// 004aa0f0  8b1d04d1a300         mov ebx, dword ptr [0xa3d104]
// 004aa0f6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004aa0f9  8b7e04               mov edi, dword ptr [esi + 4]
// 004aa0fc  3bf9                 cmp edi, ecx
// 004aa0fe  0f8e8a000000         jle 0x4aa18e
// 004aa104  85c9                 test ecx, ecx
// 004aa106  7512                 jne 0x4aa11a
// 004aa108  55                   push ebp
// 004aa109  8bce                 mov ecx, esi
// 004aa10b  894608               mov dword ptr [esi + 8], eax
// 004aa10e  e88dbc1c00           call 0x675da0
// 004aa113  5f                   pop edi
// 004aa114  5e                   pop esi
// 004aa115  5d                   pop ebp
// 004aa116  5b                   pop ebx
// 004aa117  c20800               ret 8
// 004aa11a  3bfb                 cmp edi, ebx
// 004aa11c  7d12                 jge 0x4aa130
// 004aa11e  55                   push ebp
// 004aa11f  8bce                 mov ecx, esi
// 004aa121  895e08               mov dword ptr [esi + 8], ebx
// 004aa124  e877bc1c00           call 0x675da0
// 004aa129  5f                   pop edi
// 004aa12a  5e                   pop esi
// 004aa12b  5d                   pop ebp
// 004aa12c  5b                   pop ebx
// 004aa12d  c20800               ret 8
// 004aa130  d90548e88b00         fld dword ptr [0x8be848]
// 004aa136  8bc1                 mov eax, ecx
// 004aa138  03c0                 add eax, eax
// 004aa13a  03c0                 add eax, eax
// 004aa13c  3d801a0600           cmp eax, 0x61a80
// 004aa141  760a                 jbe 0x4aa14d
// 004aa143  ddd8                 fstp st(0)
// 004aa145  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004aa14b  eb0f                 jmp 0x4aa15c
// 004aa14d  3d00fa0000           cmp eax, 0xfa00
// 004aa152  7608                 jbe 0x4aa15c
// 004aa154  ddd8                 fstp st(0)
// 004aa156  d90544d08b00         fld dword ptr [0x8bd044]
// 004aa15c  8bd9                 mov ebx, ecx
// 004aa15e  895c2418             mov dword ptr [esp + 0x18], ebx
// 004aa162  da4c2418             fimul dword ptr [esp + 0x18]
// 004aa166  e855fd2600           call 0x719ec0
// 004aa16b  2bc3                 sub eax, ebx
// 004aa16d  03c7                 add eax, edi
// 004aa16f  894608               mov dword ptr [esi + 8], eax
// 004aa172  8b0d04d1a300         mov ecx, dword ptr [0xa3d104]
// 004aa178  3bc1                 cmp eax, ecx
// 004aa17a  7d03                 jge 0x4aa17f
// 004aa17c  894e08               mov dword ptr [esi + 8], ecx
// 004aa17f  55                   push ebp
// 004aa180  8bce                 mov ecx, esi
// 004aa182  e819bc1c00           call 0x675da0
// 004aa187  5f                   pop edi
// 004aa188  5e                   pop esi
// 004aa189  5d                   pop ebp
// 004aa18a  5b                   pop ebx
// 004aa18b  c20800               ret 8
// 004aa18e  b856555555           mov eax, 0x55555556
// 004aa193  f7e9                 imul ecx
// 004aa195  8bc2                 mov eax, edx
// 004aa197  c1e81f               shr eax, 0x1f
// 004aa19a  03c2                 add eax, edx
// 004aa19c  3bf8                 cmp edi, eax
// 004aa19e  7f19                 jg 0x4aa1b9
// 004aa1a0  807c241800           cmp byte ptr [esp + 0x18], 0
// 004aa1a5  7412                 je 0x4aa1b9
// 004aa1a7  3bfb                 cmp edi, ebx
// 004aa1a9  7e0e                 jle 0x4aa1b9
// 004aa1ab  3bfd                 cmp edi, ebp
// 004aa1ad  7c02                 jl 0x4aa1b1
// 004aa1af  8bfd                 mov edi, ebp
// 004aa1b1  57                   push edi
// 004aa1b2  8bce                 mov ecx, esi
// 004aa1b4  e8e7bb1c00           call 0x675da0
// 004aa1b9  5f                   pop edi
// 004aa1ba  5e                   pop esi
// 004aa1bb  5d                   pop ebp
// 004aa1bc  5b                   pop ebx
// 004aa1bd  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
