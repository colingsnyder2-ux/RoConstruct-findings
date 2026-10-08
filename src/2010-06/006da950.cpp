// from server: 100% by auto
// roc 2010-06 006da950  unit: RBX::VPartInstance::?$ActionStation  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006da950
//
// 006da950  8b442404             mov eax, dword ptr [esp + 4]
// 006da954  55                   push ebp
// 006da955  8b6904               mov ebp, dword ptr [ecx + 4]
// 006da958  ba01000000           mov edx, 1
// 006da95d  56                   push esi
// 006da95e  894104               mov dword ptr [ecx + 4], eax
// 006da961  57                   push edi
// 006da962  8415340cc200         test byte ptr [0xc20c34], dl
// 006da968  7513                 jne 0x6da97d
// 006da96a  0915340cc200         or dword ptr [0xc20c34], edx
// 006da970  bf0a000000           mov edi, 0xa
// 006da975  893d300cc200         mov dword ptr [0xc20c30], edi
// 006da97b  eb06                 jmp 0x6da983
// 006da97d  8b3d300cc200         mov edi, dword ptr [0xc20c30]
// 006da983  8b5108               mov edx, dword ptr [ecx + 8]
// 006da986  8b7104               mov esi, dword ptr [ecx + 4]
// 006da989  3bf2                 cmp esi, edx
// 006da98b  0f8e83000000         jle 0x6daa14
// 006da991  85d2                 test edx, edx
// 006da993  750f                 jne 0x6da9a4
// 006da995  55                   push ebp
// 006da996  894108               mov dword ptr [ecx + 8], eax
// 006da999  e882dadaff           call 0x488420
// 006da99e  5f                   pop edi
// 006da99f  5e                   pop esi
// 006da9a0  5d                   pop ebp
// 006da9a1  c20800               ret 8
// 006da9a4  3bf7                 cmp esi, edi
// 006da9a6  7d0f                 jge 0x6da9b7
// 006da9a8  55                   push ebp
// 006da9a9  897908               mov dword ptr [ecx + 8], edi
// 006da9ac  e86fdadaff           call 0x488420
// 006da9b1  5f                   pop edi
// 006da9b2  5e                   pop esi
// 006da9b3  5d                   pop ebp
// 006da9b4  c20800               ret 8
// 006da9b7  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 006da9bf  8bc2                 mov eax, edx
// 006da9c1  03c0                 add eax, eax
// 006da9c3  03c0                 add eax, eax
// 006da9c5  3d801a0600           cmp eax, 0x61a80
// 006da9ca  760a                 jbe 0x6da9d6
// 006da9cc  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 006da9d4  eb0f                 jmp 0x6da9e5
// 006da9d6  3d00fa0000           cmp eax, 0xfa00
// 006da9db  7608                 jbe 0x6da9e5
// 006da9dd  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 006da9e5  8bc2                 mov eax, edx
// 006da9e7  f30f2ac8             cvtsi2ss xmm1, eax
// 006da9eb  f30f59c8             mulss xmm1, xmm0
// 006da9ef  f30f2cd1             cvttss2si edx, xmm1
// 006da9f3  2bd0                 sub edx, eax
// 006da9f5  8d0432               lea eax, [edx + esi]
// 006da9f8  894108               mov dword ptr [ecx + 8], eax
// 006da9fb  8b15300cc200         mov edx, dword ptr [0xc20c30]
// 006daa01  3bc2                 cmp eax, edx
// 006daa03  7d03                 jge 0x6daa08
// 006daa05  895108               mov dword ptr [ecx + 8], edx
// 006daa08  55                   push ebp
// 006daa09  e812dadaff           call 0x488420
// 006daa0e  5f                   pop edi
// 006daa0f  5e                   pop esi
// 006daa10  5d                   pop ebp
// 006daa11  c20800               ret 8
// 006daa14  b856555555           mov eax, 0x55555556
// 006daa19  f7ea                 imul edx
// 006daa1b  8bc2                 mov eax, edx
// 006daa1d  c1e81f               shr eax, 0x1f
// 006daa20  03c2                 add eax, edx
// 006daa22  3bf0                 cmp esi, eax
// 006daa24  7f17                 jg 0x6daa3d
// 006daa26  807c241400           cmp byte ptr [esp + 0x14], 0
// 006daa2b  7410                 je 0x6daa3d
// 006daa2d  3bf7                 cmp esi, edi
// 006daa2f  7e0c                 jle 0x6daa3d
// 006daa31  3bf5                 cmp esi, ebp
// 006daa33  7c02                 jl 0x6daa37
// 006daa35  8bf5                 mov esi, ebp
// 006daa37  56                   push esi
// 006daa38  e8e3d9daff           call 0x488420
// 006daa3d  5f                   pop edi
// 006daa3e  5e                   pop esi
// 006daa3f  5d                   pop ebp
// 006daa40  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
