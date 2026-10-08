// from server: 100% by auto
// roc 2010-06 004891a0  unit: G3D::Win32Window  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004891a0
//
// 004891a0  8b442404             mov eax, dword ptr [esp + 4]
// 004891a4  55                   push ebp
// 004891a5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004891a8  ba01000000           mov edx, 1
// 004891ad  56                   push esi
// 004891ae  894104               mov dword ptr [ecx + 4], eax
// 004891b1  57                   push edi
// 004891b2  84157c38c000         test byte ptr [0xc0387c], dl
// 004891b8  7513                 jne 0x4891cd
// 004891ba  09157c38c000         or dword ptr [0xc0387c], edx
// 004891c0  bf0a000000           mov edi, 0xa
// 004891c5  893d7838c000         mov dword ptr [0xc03878], edi
// 004891cb  eb06                 jmp 0x4891d3
// 004891cd  8b3d7838c000         mov edi, dword ptr [0xc03878]
// 004891d3  8b5108               mov edx, dword ptr [ecx + 8]
// 004891d6  8b7104               mov esi, dword ptr [ecx + 4]
// 004891d9  3bf2                 cmp esi, edx
// 004891db  0f8e83000000         jle 0x489264
// 004891e1  85d2                 test edx, edx
// 004891e3  750f                 jne 0x4891f4
// 004891e5  55                   push ebp
// 004891e6  894108               mov dword ptr [ecx + 8], eax
// 004891e9  e832f2ffff           call 0x488420
// 004891ee  5f                   pop edi
// 004891ef  5e                   pop esi
// 004891f0  5d                   pop ebp
// 004891f1  c20800               ret 8
// 004891f4  3bf7                 cmp esi, edi
// 004891f6  7d0f                 jge 0x489207
// 004891f8  55                   push ebp
// 004891f9  897908               mov dword ptr [ecx + 8], edi
// 004891fc  e81ff2ffff           call 0x488420
// 00489201  5f                   pop edi
// 00489202  5e                   pop esi
// 00489203  5d                   pop ebp
// 00489204  c20800               ret 8
// 00489207  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0048920f  8bc2                 mov eax, edx
// 00489211  03c0                 add eax, eax
// 00489213  03c0                 add eax, eax
// 00489215  3d801a0600           cmp eax, 0x61a80
// 0048921a  760a                 jbe 0x489226
// 0048921c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00489224  eb0f                 jmp 0x489235
// 00489226  3d00fa0000           cmp eax, 0xfa00
// 0048922b  7608                 jbe 0x489235
// 0048922d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00489235  8bc2                 mov eax, edx
// 00489237  f30f2ac8             cvtsi2ss xmm1, eax
// 0048923b  f30f59c8             mulss xmm1, xmm0
// 0048923f  f30f2cd1             cvttss2si edx, xmm1
// 00489243  2bd0                 sub edx, eax
// 00489245  8d0432               lea eax, [edx + esi]
// 00489248  894108               mov dword ptr [ecx + 8], eax
// 0048924b  8b157838c000         mov edx, dword ptr [0xc03878]
// 00489251  3bc2                 cmp eax, edx
// 00489253  7d03                 jge 0x489258
// 00489255  895108               mov dword ptr [ecx + 8], edx
// 00489258  55                   push ebp
// 00489259  e8c2f1ffff           call 0x488420
// 0048925e  5f                   pop edi
// 0048925f  5e                   pop esi
// 00489260  5d                   pop ebp
// 00489261  c20800               ret 8
// 00489264  b856555555           mov eax, 0x55555556
// 00489269  f7ea                 imul edx
// 0048926b  8bc2                 mov eax, edx
// 0048926d  c1e81f               shr eax, 0x1f
// 00489270  03c2                 add eax, edx
// 00489272  3bf0                 cmp esi, eax
// 00489274  7f17                 jg 0x48928d
// 00489276  807c241400           cmp byte ptr [esp + 0x14], 0
// 0048927b  7410                 je 0x48928d
// 0048927d  3bf7                 cmp esi, edi
// 0048927f  7e0c                 jle 0x48928d
// 00489281  3bf5                 cmp esi, ebp
// 00489283  7c02                 jl 0x489287
// 00489285  8bf5                 mov esi, ebp
// 00489287  56                   push esi
// 00489288  e893f1ffff           call 0x488420
// 0048928d  5f                   pop edi
// 0048928e  5e                   pop esi
// 0048928f  5d                   pop ebp
// 00489290  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
