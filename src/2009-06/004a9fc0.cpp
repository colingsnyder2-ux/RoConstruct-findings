// roc 2009-06 004a9fc0  unit: G3D::Win32Window  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9fc0
//
// 004a9fc0  8b442404             mov eax, dword ptr [esp + 4]
// 004a9fc4  53                   push ebx
// 004a9fc5  55                   push ebp
// 004a9fc6  56                   push esi
// 004a9fc7  8bf1                 mov esi, ecx
// 004a9fc9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004a9fcc  b901000000           mov ecx, 1
// 004a9fd1  894604               mov dword ptr [esi + 4], eax
// 004a9fd4  57                   push edi
// 004a9fd5  840d00d1a300         test byte ptr [0xa3d100], cl
// 004a9fdb  7513                 jne 0x4a9ff0
// 004a9fdd  090d00d1a300         or dword ptr [0xa3d100], ecx
// 004a9fe3  bb20000000           mov ebx, 0x20
// 004a9fe8  891dfcd0a300         mov dword ptr [0xa3d0fc], ebx
// 004a9fee  eb06                 jmp 0x4a9ff6
// 004a9ff0  8b1dfcd0a300         mov ebx, dword ptr [0xa3d0fc]
// 004a9ff6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a9ff9  8b7e04               mov edi, dword ptr [esi + 4]
// 004a9ffc  3bf9                 cmp edi, ecx
// 004a9ffe  0f8e86000000         jle 0x4aa08a
// 004aa004  85c9                 test ecx, ecx
// 004aa006  7512                 jne 0x4aa01a
// 004aa008  55                   push ebp
// 004aa009  8bce                 mov ecx, esi
// 004aa00b  894608               mov dword ptr [esi + 8], eax
// 004aa00e  e8cdf80c00           call 0x5798e0
// 004aa013  5f                   pop edi
// 004aa014  5e                   pop esi
// 004aa015  5d                   pop ebp
// 004aa016  5b                   pop ebx
// 004aa017  c20800               ret 8
// 004aa01a  3bfb                 cmp edi, ebx
// 004aa01c  7d12                 jge 0x4aa030
// 004aa01e  55                   push ebp
// 004aa01f  8bce                 mov ecx, esi
// 004aa021  895e08               mov dword ptr [esi + 8], ebx
// 004aa024  e8b7f80c00           call 0x5798e0
// 004aa029  5f                   pop edi
// 004aa02a  5e                   pop esi
// 004aa02b  5d                   pop ebp
// 004aa02c  5b                   pop ebx
// 004aa02d  c20800               ret 8
// 004aa030  d90548e88b00         fld dword ptr [0x8be848]
// 004aa036  8bc1                 mov eax, ecx
// 004aa038  3d801a0600           cmp eax, 0x61a80
// 004aa03d  760a                 jbe 0x4aa049
// 004aa03f  ddd8                 fstp st(0)
// 004aa041  d905a0ef8b00         fld dword ptr [0x8befa0]
// 004aa047  eb0f                 jmp 0x4aa058
// 004aa049  3d00fa0000           cmp eax, 0xfa00
// 004aa04e  7608                 jbe 0x4aa058
// 004aa050  ddd8                 fstp st(0)
// 004aa052  d90544d08b00         fld dword ptr [0x8bd044]
// 004aa058  8bd8                 mov ebx, eax
// 004aa05a  895c2418             mov dword ptr [esp + 0x18], ebx
// 004aa05e  da4c2418             fimul dword ptr [esp + 0x18]
// 004aa062  e859fe2600           call 0x719ec0
// 004aa067  2bc3                 sub eax, ebx
// 004aa069  03c7                 add eax, edi
// 004aa06b  894608               mov dword ptr [esi + 8], eax
// 004aa06e  8b0dfcd0a300         mov ecx, dword ptr [0xa3d0fc]
// 004aa074  3bc1                 cmp eax, ecx
// 004aa076  7d03                 jge 0x4aa07b
// 004aa078  894e08               mov dword ptr [esi + 8], ecx
// 004aa07b  55                   push ebp
// 004aa07c  8bce                 mov ecx, esi
// 004aa07e  e85df80c00           call 0x5798e0
// 004aa083  5f                   pop edi
// 004aa084  5e                   pop esi
// 004aa085  5d                   pop ebp
// 004aa086  5b                   pop ebx
// 004aa087  c20800               ret 8
// 004aa08a  b856555555           mov eax, 0x55555556
// 004aa08f  f7e9                 imul ecx
// 004aa091  8bc2                 mov eax, edx
// 004aa093  c1e81f               shr eax, 0x1f
// 004aa096  03c2                 add eax, edx
// 004aa098  3bf8                 cmp edi, eax
// 004aa09a  7f19                 jg 0x4aa0b5
// 004aa09c  807c241800           cmp byte ptr [esp + 0x18], 0
// 004aa0a1  7412                 je 0x4aa0b5
// 004aa0a3  3bfb                 cmp edi, ebx
// 004aa0a5  7e0e                 jle 0x4aa0b5
// 004aa0a7  3bfd                 cmp edi, ebp
// 004aa0a9  7c02                 jl 0x4aa0ad
// 004aa0ab  8bfd                 mov edi, ebp
// 004aa0ad  57                   push edi
// 004aa0ae  8bce                 mov ecx, esi
// 004aa0b0  e82bf80c00           call 0x5798e0
// 004aa0b5  5f                   pop edi
// 004aa0b6  5e                   pop esi
// 004aa0b7  5d                   pop ebp
// 004aa0b8  5b                   pop ebx
// 004aa0b9  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
