// roc 2010-06 004e6930  unit: RBX::Network::Replicator  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6930
//
// 004e6930  8b442404             mov eax, dword ptr [esp + 4]
// 004e6934  55                   push ebp
// 004e6935  8b6904               mov ebp, dword ptr [ecx + 4]
// 004e6938  ba01000000           mov edx, 1
// 004e693d  56                   push esi
// 004e693e  894104               mov dword ptr [ecx + 4], eax
// 004e6941  57                   push edi
// 004e6942  84156466c000         test byte ptr [0xc06664], dl
// 004e6948  7513                 jne 0x4e695d
// 004e694a  09156466c000         or dword ptr [0xc06664], edx
// 004e6950  bf0a000000           mov edi, 0xa
// 004e6955  893d6066c000         mov dword ptr [0xc06660], edi
// 004e695b  eb06                 jmp 0x4e6963
// 004e695d  8b3d6066c000         mov edi, dword ptr [0xc06660]
// 004e6963  8b5108               mov edx, dword ptr [ecx + 8]
// 004e6966  8b7104               mov esi, dword ptr [ecx + 4]
// 004e6969  3bf2                 cmp esi, edx
// 004e696b  0f8e83000000         jle 0x4e69f4
// 004e6971  85d2                 test edx, edx
// 004e6973  750f                 jne 0x4e6984
// 004e6975  55                   push ebp
// 004e6976  894108               mov dword ptr [ecx + 8], eax
// 004e6979  e8a21afaff           call 0x488420
// 004e697e  5f                   pop edi
// 004e697f  5e                   pop esi
// 004e6980  5d                   pop ebp
// 004e6981  c20800               ret 8
// 004e6984  3bf7                 cmp esi, edi
// 004e6986  7d0f                 jge 0x4e6997
// 004e6988  55                   push ebp
// 004e6989  897908               mov dword ptr [ecx + 8], edi
// 004e698c  e88f1afaff           call 0x488420
// 004e6991  5f                   pop edi
// 004e6992  5e                   pop esi
// 004e6993  5d                   pop ebp
// 004e6994  c20800               ret 8
// 004e6997  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 004e699f  8bc2                 mov eax, edx
// 004e69a1  03c0                 add eax, eax
// 004e69a3  03c0                 add eax, eax
// 004e69a5  3d801a0600           cmp eax, 0x61a80
// 004e69aa  760a                 jbe 0x4e69b6
// 004e69ac  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 004e69b4  eb0f                 jmp 0x4e69c5
// 004e69b6  3d00fa0000           cmp eax, 0xfa00
// 004e69bb  7608                 jbe 0x4e69c5
// 004e69bd  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 004e69c5  8bc2                 mov eax, edx
// 004e69c7  f30f2ac8             cvtsi2ss xmm1, eax
// 004e69cb  f30f59c8             mulss xmm1, xmm0
// 004e69cf  f30f2cd1             cvttss2si edx, xmm1
// 004e69d3  2bd0                 sub edx, eax
// 004e69d5  8d0432               lea eax, [edx + esi]
// 004e69d8  894108               mov dword ptr [ecx + 8], eax
// 004e69db  8b156066c000         mov edx, dword ptr [0xc06660]
// 004e69e1  3bc2                 cmp eax, edx
// 004e69e3  7d03                 jge 0x4e69e8
// 004e69e5  895108               mov dword ptr [ecx + 8], edx
// 004e69e8  55                   push ebp
// 004e69e9  e8321afaff           call 0x488420
// 004e69ee  5f                   pop edi
// 004e69ef  5e                   pop esi
// 004e69f0  5d                   pop ebp
// 004e69f1  c20800               ret 8
// 004e69f4  b856555555           mov eax, 0x55555556
// 004e69f9  f7ea                 imul edx
// 004e69fb  8bc2                 mov eax, edx
// 004e69fd  c1e81f               shr eax, 0x1f
// 004e6a00  03c2                 add eax, edx
// 004e6a02  3bf0                 cmp esi, eax
// 004e6a04  7f17                 jg 0x4e6a1d
// 004e6a06  807c241400           cmp byte ptr [esp + 0x14], 0
// 004e6a0b  7410                 je 0x4e6a1d
// 004e6a0d  3bf7                 cmp esi, edi
// 004e6a0f  7e0c                 jle 0x4e6a1d
// 004e6a11  3bf5                 cmp esi, ebp
// 004e6a13  7c02                 jl 0x4e6a17
// 004e6a15  8bf5                 mov esi, ebp
// 004e6a17  56                   push esi
// 004e6a18  e8031afaff           call 0x488420
// 004e6a1d  5f                   pop edi
// 004e6a1e  5e                   pop esi
// 004e6a1f  5d                   pop ebp
// 004e6a20  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
