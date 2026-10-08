// roc 2009-12 00774f00  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774f00
//
// 00774f00  8b442404             mov eax, dword ptr [esp + 4]
// 00774f04  55                   push ebp
// 00774f05  8b6904               mov ebp, dword ptr [ecx + 4]
// 00774f08  ba01000000           mov edx, 1
// 00774f0d  56                   push esi
// 00774f0e  894104               mov dword ptr [ecx + 4], eax
// 00774f11  57                   push edi
// 00774f12  8415c887b900         test byte ptr [0xb987c8], dl
// 00774f18  7513                 jne 0x774f2d
// 00774f1a  0915c887b900         or dword ptr [0xb987c8], edx
// 00774f20  bf0a000000           mov edi, 0xa
// 00774f25  893dc487b900         mov dword ptr [0xb987c4], edi
// 00774f2b  eb06                 jmp 0x774f33
// 00774f2d  8b3dc487b900         mov edi, dword ptr [0xb987c4]
// 00774f33  8b5108               mov edx, dword ptr [ecx + 8]
// 00774f36  8b7104               mov esi, dword ptr [ecx + 4]
// 00774f39  3bf2                 cmp esi, edx
// 00774f3b  0f8e83000000         jle 0x774fc4
// 00774f41  85d2                 test edx, edx
// 00774f43  750f                 jne 0x774f54
// 00774f45  55                   push ebp
// 00774f46  894108               mov dword ptr [ecx + 8], eax
// 00774f49  e80211f2ff           call 0x696050
// 00774f4e  5f                   pop edi
// 00774f4f  5e                   pop esi
// 00774f50  5d                   pop ebp
// 00774f51  c20800               ret 8
// 00774f54  3bf7                 cmp esi, edi
// 00774f56  7d0f                 jge 0x774f67
// 00774f58  55                   push ebp
// 00774f59  897908               mov dword ptr [ecx + 8], edi
// 00774f5c  e8ef10f2ff           call 0x696050
// 00774f61  5f                   pop edi
// 00774f62  5e                   pop esi
// 00774f63  5d                   pop ebp
// 00774f64  c20800               ret 8
// 00774f67  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 00774f6f  8bc2                 mov eax, edx
// 00774f71  03c0                 add eax, eax
// 00774f73  03c0                 add eax, eax
// 00774f75  3d801a0600           cmp eax, 0x61a80
// 00774f7a  760a                 jbe 0x774f86
// 00774f7c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00774f84  eb0f                 jmp 0x774f95
// 00774f86  3d00fa0000           cmp eax, 0xfa00
// 00774f8b  7608                 jbe 0x774f95
// 00774f8d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00774f95  8bc2                 mov eax, edx
// 00774f97  f30f2ac8             cvtsi2ss xmm1, eax
// 00774f9b  f30f59c8             mulss xmm1, xmm0
// 00774f9f  f30f2cd1             cvttss2si edx, xmm1
// 00774fa3  2bd0                 sub edx, eax
// 00774fa5  8d0432               lea eax, [edx + esi]
// 00774fa8  894108               mov dword ptr [ecx + 8], eax
// 00774fab  8b15c487b900         mov edx, dword ptr [0xb987c4]
// 00774fb1  3bc2                 cmp eax, edx
// 00774fb3  7d03                 jge 0x774fb8
// 00774fb5  895108               mov dword ptr [ecx + 8], edx
// 00774fb8  55                   push ebp
// 00774fb9  e89210f2ff           call 0x696050
// 00774fbe  5f                   pop edi
// 00774fbf  5e                   pop esi
// 00774fc0  5d                   pop ebp
// 00774fc1  c20800               ret 8
// 00774fc4  b856555555           mov eax, 0x55555556
// 00774fc9  f7ea                 imul edx
// 00774fcb  8bc2                 mov eax, edx
// 00774fcd  c1e81f               shr eax, 0x1f
// 00774fd0  03c2                 add eax, edx
// 00774fd2  3bf0                 cmp esi, eax
// 00774fd4  7f17                 jg 0x774fed
// 00774fd6  807c241400           cmp byte ptr [esp + 0x14], 0
// 00774fdb  7410                 je 0x774fed
// 00774fdd  3bf7                 cmp esi, edi
// 00774fdf  7e0c                 jle 0x774fed
// 00774fe1  3bf5                 cmp esi, ebp
// 00774fe3  7c02                 jl 0x774fe7
// 00774fe5  8bf5                 mov esi, ebp
// 00774fe7  56                   push esi
// 00774fe8  e86310f2ff           call 0x696050
// 00774fed  5f                   pop edi
// 00774fee  5e                   pop esi
// 00774fef  5d                   pop ebp
// 00774ff0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
