// roc 2011-06 007f2020  unit: RBX::AdvLuaDragTool  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2020
//
// 007f2020  56                   push esi
// 007f2021  57                   push edi
// 007f2022  83faff               cmp edx, -1
// 007f2025  7449                 je 0x7f2070
// 007f2027  8b08                 mov ecx, dword ptr [eax]
// 007f2029  8b790c               mov edi, dword ptr [ecx + 0xc]
// 007f202c  8d642400             lea esp, [esp]
// 007f2030  83fa01               cmp edx, 1
// 007f2033  8d0497               lea eax, [edi + edx*4]
// 007f2036  7c14                 jl 0x7f204c
// 007f2038  8b70fc               mov esi, dword ptr [eax - 4]
// 007f203b  8d48fc               lea ecx, [eax - 4]
// 007f203e  83e63f               and esi, 0x3f
// 007f2041  f686bce0ab0080       test byte ptr [esi + 0xabe0bc], 0x80
// 007f2048  8bf1                 mov esi, ecx
// 007f204a  7502                 jne 0x7f204e
// 007f204c  8bf0                 mov esi, eax
// 007f204e  8b0e                 mov ecx, dword ptr [esi]
// 007f2050  83e13f               and ecx, 0x3f
// 007f2053  80f91b               cmp cl, 0x1b
// 007f2056  751d                 jne 0x7f2075
// 007f2058  8b00                 mov eax, dword ptr [eax]
// 007f205a  c1e80e               shr eax, 0xe
// 007f205d  2dffff0100           sub eax, 0x1ffff
// 007f2062  83f8ff               cmp eax, -1
// 007f2065  7409                 je 0x7f2070
// 007f2067  8d540201             lea edx, [edx + eax + 1]
// 007f206b  83faff               cmp edx, -1
// 007f206e  75c0                 jne 0x7f2030
// 007f2070  5f                   pop edi
// 007f2071  33c0                 xor eax, eax
// 007f2073  5e                   pop esi
// 007f2074  c3                   ret 
// 007f2075  5f                   pop edi
// 007f2076  b801000000           mov eax, 1
// 007f207b  5e                   pop esi
// 007f207c  c3                   ret 
// library lua-5.1.4/lcode.c (function _need_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
