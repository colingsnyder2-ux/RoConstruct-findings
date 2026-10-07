// roc 2010-06 006021d0  unit: RBX::Workspace  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006021d0
//
// 006021d0  8b442404             mov eax, dword ptr [esp + 4]
// 006021d4  55                   push ebp
// 006021d5  8b6904               mov ebp, dword ptr [ecx + 4]
// 006021d8  ba01000000           mov edx, 1
// 006021dd  56                   push esi
// 006021de  894104               mov dword ptr [ecx + 4], eax
// 006021e1  57                   push edi
// 006021e2  8415c89dc100         test byte ptr [0xc19dc8], dl
// 006021e8  7513                 jne 0x6021fd
// 006021ea  0915c89dc100         or dword ptr [0xc19dc8], edx
// 006021f0  bf0a000000           mov edi, 0xa
// 006021f5  893dc49dc100         mov dword ptr [0xc19dc4], edi
// 006021fb  eb06                 jmp 0x602203
// 006021fd  8b3dc49dc100         mov edi, dword ptr [0xc19dc4]
// 00602203  8b5108               mov edx, dword ptr [ecx + 8]
// 00602206  8b7104               mov esi, dword ptr [ecx + 4]
// 00602209  3bf2                 cmp esi, edx
// 0060220b  0f8e83000000         jle 0x602294
// 00602211  85d2                 test edx, edx
// 00602213  750f                 jne 0x602224
// 00602215  55                   push ebp
// 00602216  894108               mov dword ptr [ecx + 8], eax
// 00602219  e80262e8ff           call 0x488420
// 0060221e  5f                   pop edi
// 0060221f  5e                   pop esi
// 00602220  5d                   pop ebp
// 00602221  c20800               ret 8
// 00602224  3bf7                 cmp esi, edi
// 00602226  7d0f                 jge 0x602237
// 00602228  55                   push ebp
// 00602229  897908               mov dword ptr [ecx + 8], edi
// 0060222c  e8ef61e8ff           call 0x488420
// 00602231  5f                   pop edi
// 00602232  5e                   pop esi
// 00602233  5d                   pop ebp
// 00602234  c20800               ret 8
// 00602237  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0060223f  8bc2                 mov eax, edx
// 00602241  03c0                 add eax, eax
// 00602243  03c0                 add eax, eax
// 00602245  3d801a0600           cmp eax, 0x61a80
// 0060224a  760a                 jbe 0x602256
// 0060224c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00602254  eb0f                 jmp 0x602265
// 00602256  3d00fa0000           cmp eax, 0xfa00
// 0060225b  7608                 jbe 0x602265
// 0060225d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00602265  8bc2                 mov eax, edx
// 00602267  f30f2ac8             cvtsi2ss xmm1, eax
// 0060226b  f30f59c8             mulss xmm1, xmm0
// 0060226f  f30f2cd1             cvttss2si edx, xmm1
// 00602273  2bd0                 sub edx, eax
// 00602275  8d0432               lea eax, [edx + esi]
// 00602278  894108               mov dword ptr [ecx + 8], eax
// 0060227b  8b15c49dc100         mov edx, dword ptr [0xc19dc4]
// 00602281  3bc2                 cmp eax, edx
// 00602283  7d03                 jge 0x602288
// 00602285  895108               mov dword ptr [ecx + 8], edx
// 00602288  55                   push ebp
// 00602289  e89261e8ff           call 0x488420
// 0060228e  5f                   pop edi
// 0060228f  5e                   pop esi
// 00602290  5d                   pop ebp
// 00602291  c20800               ret 8
// 00602294  b856555555           mov eax, 0x55555556
// 00602299  f7ea                 imul edx
// 0060229b  8bc2                 mov eax, edx
// 0060229d  c1e81f               shr eax, 0x1f
// 006022a0  03c2                 add eax, edx
// 006022a2  3bf0                 cmp esi, eax
// 006022a4  7f17                 jg 0x6022bd
// 006022a6  807c241400           cmp byte ptr [esp + 0x14], 0
// 006022ab  7410                 je 0x6022bd
// 006022ad  3bf7                 cmp esi, edi
// 006022af  7e0c                 jle 0x6022bd
// 006022b1  3bf5                 cmp esi, ebp
// 006022b3  7c02                 jl 0x6022b7
// 006022b5  8bf5                 mov esi, ebp
// 006022b7  56                   push esi
// 006022b8  e86361e8ff           call 0x488420
// 006022bd  5f                   pop edi
// 006022be  5e                   pop esi
// 006022bf  5d                   pop ebp
// 006022c0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
