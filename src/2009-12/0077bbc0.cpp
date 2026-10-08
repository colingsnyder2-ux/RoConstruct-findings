// roc 2009-12 0077bbc0  unit: RBX::BallBallContact  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077bbc0
//
// 0077bbc0  8b442404             mov eax, dword ptr [esp + 4]
// 0077bbc4  55                   push ebp
// 0077bbc5  8b6904               mov ebp, dword ptr [ecx + 4]
// 0077bbc8  ba01000000           mov edx, 1
// 0077bbcd  56                   push esi
// 0077bbce  894104               mov dword ptr [ecx + 4], eax
// 0077bbd1  57                   push edi
// 0077bbd2  8415ec87b900         test byte ptr [0xb987ec], dl
// 0077bbd8  7513                 jne 0x77bbed
// 0077bbda  0915ec87b900         or dword ptr [0xb987ec], edx
// 0077bbe0  bf0a000000           mov edi, 0xa
// 0077bbe5  893de887b900         mov dword ptr [0xb987e8], edi
// 0077bbeb  eb06                 jmp 0x77bbf3
// 0077bbed  8b3de887b900         mov edi, dword ptr [0xb987e8]
// 0077bbf3  8b5108               mov edx, dword ptr [ecx + 8]
// 0077bbf6  8b7104               mov esi, dword ptr [ecx + 4]
// 0077bbf9  3bf2                 cmp esi, edx
// 0077bbfb  0f8e83000000         jle 0x77bc84
// 0077bc01  85d2                 test edx, edx
// 0077bc03  750f                 jne 0x77bc14
// 0077bc05  55                   push ebp
// 0077bc06  894108               mov dword ptr [ecx + 8], eax
// 0077bc09  e842a4f1ff           call 0x696050
// 0077bc0e  5f                   pop edi
// 0077bc0f  5e                   pop esi
// 0077bc10  5d                   pop ebp
// 0077bc11  c20800               ret 8
// 0077bc14  3bf7                 cmp esi, edi
// 0077bc16  7d0f                 jge 0x77bc27
// 0077bc18  55                   push ebp
// 0077bc19  897908               mov dword ptr [ecx + 8], edi
// 0077bc1c  e82fa4f1ff           call 0x696050
// 0077bc21  5f                   pop edi
// 0077bc22  5e                   pop esi
// 0077bc23  5d                   pop ebp
// 0077bc24  c20800               ret 8
// 0077bc27  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0077bc2f  8bc2                 mov eax, edx
// 0077bc31  03c0                 add eax, eax
// 0077bc33  03c0                 add eax, eax
// 0077bc35  3d801a0600           cmp eax, 0x61a80
// 0077bc3a  760a                 jbe 0x77bc46
// 0077bc3c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 0077bc44  eb0f                 jmp 0x77bc55
// 0077bc46  3d00fa0000           cmp eax, 0xfa00
// 0077bc4b  7608                 jbe 0x77bc55
// 0077bc4d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 0077bc55  8bc2                 mov eax, edx
// 0077bc57  f30f2ac8             cvtsi2ss xmm1, eax
// 0077bc5b  f30f59c8             mulss xmm1, xmm0
// 0077bc5f  f30f2cd1             cvttss2si edx, xmm1
// 0077bc63  2bd0                 sub edx, eax
// 0077bc65  8d0432               lea eax, [edx + esi]
// 0077bc68  894108               mov dword ptr [ecx + 8], eax
// 0077bc6b  8b15e887b900         mov edx, dword ptr [0xb987e8]
// 0077bc71  3bc2                 cmp eax, edx
// 0077bc73  7d03                 jge 0x77bc78
// 0077bc75  895108               mov dword ptr [ecx + 8], edx
// 0077bc78  55                   push ebp
// 0077bc79  e8d2a3f1ff           call 0x696050
// 0077bc7e  5f                   pop edi
// 0077bc7f  5e                   pop esi
// 0077bc80  5d                   pop ebp
// 0077bc81  c20800               ret 8
// 0077bc84  b856555555           mov eax, 0x55555556
// 0077bc89  f7ea                 imul edx
// 0077bc8b  8bc2                 mov eax, edx
// 0077bc8d  c1e81f               shr eax, 0x1f
// 0077bc90  03c2                 add eax, edx
// 0077bc92  3bf0                 cmp esi, eax
// 0077bc94  7f17                 jg 0x77bcad
// 0077bc96  807c241400           cmp byte ptr [esp + 0x14], 0
// 0077bc9b  7410                 je 0x77bcad
// 0077bc9d  3bf7                 cmp esi, edi
// 0077bc9f  7e0c                 jle 0x77bcad
// 0077bca1  3bf5                 cmp esi, ebp
// 0077bca3  7c02                 jl 0x77bca7
// 0077bca5  8bf5                 mov esi, ebp
// 0077bca7  56                   push esi
// 0077bca8  e8a3a3f1ff           call 0x696050
// 0077bcad  5f                   pop edi
// 0077bcae  5e                   pop esi
// 0077bcaf  5d                   pop ebp
// 0077bcb0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
