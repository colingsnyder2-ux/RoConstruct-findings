// roc 2009-12 00774d00  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774d00
//
// 00774d00  8b442404             mov eax, dword ptr [esp + 4]
// 00774d04  55                   push ebp
// 00774d05  8b6904               mov ebp, dword ptr [ecx + 4]
// 00774d08  ba01000000           mov edx, 1
// 00774d0d  56                   push esi
// 00774d0e  894104               mov dword ptr [ecx + 4], eax
// 00774d11  57                   push edi
// 00774d12  8415b887b900         test byte ptr [0xb987b8], dl
// 00774d18  7513                 jne 0x774d2d
// 00774d1a  0915b887b900         or dword ptr [0xb987b8], edx
// 00774d20  bf0a000000           mov edi, 0xa
// 00774d25  893db487b900         mov dword ptr [0xb987b4], edi
// 00774d2b  eb06                 jmp 0x774d33
// 00774d2d  8b3db487b900         mov edi, dword ptr [0xb987b4]
// 00774d33  8b5108               mov edx, dword ptr [ecx + 8]
// 00774d36  8b7104               mov esi, dword ptr [ecx + 4]
// 00774d39  3bf2                 cmp esi, edx
// 00774d3b  0f8e83000000         jle 0x774dc4
// 00774d41  85d2                 test edx, edx
// 00774d43  750f                 jne 0x774d54
// 00774d45  55                   push ebp
// 00774d46  894108               mov dword ptr [ecx + 8], eax
// 00774d49  e80213f2ff           call 0x696050
// 00774d4e  5f                   pop edi
// 00774d4f  5e                   pop esi
// 00774d50  5d                   pop ebp
// 00774d51  c20800               ret 8
// 00774d54  3bf7                 cmp esi, edi
// 00774d56  7d0f                 jge 0x774d67
// 00774d58  55                   push ebp
// 00774d59  897908               mov dword ptr [ecx + 8], edi
// 00774d5c  e8ef12f2ff           call 0x696050
// 00774d61  5f                   pop edi
// 00774d62  5e                   pop esi
// 00774d63  5d                   pop ebp
// 00774d64  c20800               ret 8
// 00774d67  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 00774d6f  8bc2                 mov eax, edx
// 00774d71  03c0                 add eax, eax
// 00774d73  03c0                 add eax, eax
// 00774d75  3d801a0600           cmp eax, 0x61a80
// 00774d7a  760a                 jbe 0x774d86
// 00774d7c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00774d84  eb0f                 jmp 0x774d95
// 00774d86  3d00fa0000           cmp eax, 0xfa00
// 00774d8b  7608                 jbe 0x774d95
// 00774d8d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00774d95  8bc2                 mov eax, edx
// 00774d97  f30f2ac8             cvtsi2ss xmm1, eax
// 00774d9b  f30f59c8             mulss xmm1, xmm0
// 00774d9f  f30f2cd1             cvttss2si edx, xmm1
// 00774da3  2bd0                 sub edx, eax
// 00774da5  8d0432               lea eax, [edx + esi]
// 00774da8  894108               mov dword ptr [ecx + 8], eax
// 00774dab  8b15b487b900         mov edx, dword ptr [0xb987b4]
// 00774db1  3bc2                 cmp eax, edx
// 00774db3  7d03                 jge 0x774db8
// 00774db5  895108               mov dword ptr [ecx + 8], edx
// 00774db8  55                   push ebp
// 00774db9  e89212f2ff           call 0x696050
// 00774dbe  5f                   pop edi
// 00774dbf  5e                   pop esi
// 00774dc0  5d                   pop ebp
// 00774dc1  c20800               ret 8
// 00774dc4  b856555555           mov eax, 0x55555556
// 00774dc9  f7ea                 imul edx
// 00774dcb  8bc2                 mov eax, edx
// 00774dcd  c1e81f               shr eax, 0x1f
// 00774dd0  03c2                 add eax, edx
// 00774dd2  3bf0                 cmp esi, eax
// 00774dd4  7f17                 jg 0x774ded
// 00774dd6  807c241400           cmp byte ptr [esp + 0x14], 0
// 00774ddb  7410                 je 0x774ded
// 00774ddd  3bf7                 cmp esi, edi
// 00774ddf  7e0c                 jle 0x774ded
// 00774de1  3bf5                 cmp esi, ebp
// 00774de3  7c02                 jl 0x774de7
// 00774de5  8bf5                 mov esi, ebp
// 00774de7  56                   push esi
// 00774de8  e86312f2ff           call 0x696050
// 00774ded  5f                   pop edi
// 00774dee  5e                   pop esi
// 00774def  5d                   pop ebp
// 00774df0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
