// roc 2009-12 00746e60  unit: RBX::VGeometryService::?$FactoryProduct  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00746e60
//
// 00746e60  8b442404             mov eax, dword ptr [esp + 4]
// 00746e64  55                   push ebp
// 00746e65  8b6904               mov ebp, dword ptr [ecx + 4]
// 00746e68  ba01000000           mov edx, 1
// 00746e6d  56                   push esi
// 00746e6e  894104               mov dword ptr [ecx + 4], eax
// 00746e71  57                   push edi
// 00746e72  8415d46eb900         test byte ptr [0xb96ed4], dl
// 00746e78  7513                 jne 0x746e8d
// 00746e7a  0915d46eb900         or dword ptr [0xb96ed4], edx
// 00746e80  bf0a000000           mov edi, 0xa
// 00746e85  893dd06eb900         mov dword ptr [0xb96ed0], edi
// 00746e8b  eb06                 jmp 0x746e93
// 00746e8d  8b3dd06eb900         mov edi, dword ptr [0xb96ed0]
// 00746e93  8b5108               mov edx, dword ptr [ecx + 8]
// 00746e96  8b7104               mov esi, dword ptr [ecx + 4]
// 00746e99  3bf2                 cmp esi, edx
// 00746e9b  0f8e83000000         jle 0x746f24
// 00746ea1  85d2                 test edx, edx
// 00746ea3  750f                 jne 0x746eb4
// 00746ea5  55                   push ebp
// 00746ea6  894108               mov dword ptr [ecx + 8], eax
// 00746ea9  e8a2f1f4ff           call 0x696050
// 00746eae  5f                   pop edi
// 00746eaf  5e                   pop esi
// 00746eb0  5d                   pop ebp
// 00746eb1  c20800               ret 8
// 00746eb4  3bf7                 cmp esi, edi
// 00746eb6  7d0f                 jge 0x746ec7
// 00746eb8  55                   push ebp
// 00746eb9  897908               mov dword ptr [ecx + 8], edi
// 00746ebc  e88ff1f4ff           call 0x696050
// 00746ec1  5f                   pop edi
// 00746ec2  5e                   pop esi
// 00746ec3  5d                   pop ebp
// 00746ec4  c20800               ret 8
// 00746ec7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 00746ecf  8bc2                 mov eax, edx
// 00746ed1  03c0                 add eax, eax
// 00746ed3  03c0                 add eax, eax
// 00746ed5  3d801a0600           cmp eax, 0x61a80
// 00746eda  760a                 jbe 0x746ee6
// 00746edc  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00746ee4  eb0f                 jmp 0x746ef5
// 00746ee6  3d00fa0000           cmp eax, 0xfa00
// 00746eeb  7608                 jbe 0x746ef5
// 00746eed  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00746ef5  8bc2                 mov eax, edx
// 00746ef7  f30f2ac8             cvtsi2ss xmm1, eax
// 00746efb  f30f59c8             mulss xmm1, xmm0
// 00746eff  f30f2cd1             cvttss2si edx, xmm1
// 00746f03  2bd0                 sub edx, eax
// 00746f05  8d0432               lea eax, [edx + esi]
// 00746f08  894108               mov dword ptr [ecx + 8], eax
// 00746f0b  8b15d06eb900         mov edx, dword ptr [0xb96ed0]
// 00746f11  3bc2                 cmp eax, edx
// 00746f13  7d03                 jge 0x746f18
// 00746f15  895108               mov dword ptr [ecx + 8], edx
// 00746f18  55                   push ebp
// 00746f19  e832f1f4ff           call 0x696050
// 00746f1e  5f                   pop edi
// 00746f1f  5e                   pop esi
// 00746f20  5d                   pop ebp
// 00746f21  c20800               ret 8
// 00746f24  b856555555           mov eax, 0x55555556
// 00746f29  f7ea                 imul edx
// 00746f2b  8bc2                 mov eax, edx
// 00746f2d  c1e81f               shr eax, 0x1f
// 00746f30  03c2                 add eax, edx
// 00746f32  3bf0                 cmp esi, eax
// 00746f34  7f17                 jg 0x746f4d
// 00746f36  807c241400           cmp byte ptr [esp + 0x14], 0
// 00746f3b  7410                 je 0x746f4d
// 00746f3d  3bf7                 cmp esi, edi
// 00746f3f  7e0c                 jle 0x746f4d
// 00746f41  3bf5                 cmp esi, ebp
// 00746f43  7c02                 jl 0x746f47
// 00746f45  8bf5                 mov esi, ebp
// 00746f47  56                   push esi
// 00746f48  e803f1f4ff           call 0x696050
// 00746f4d  5f                   pop edi
// 00746f4e  5e                   pop esi
// 00746f4f  5d                   pop ebp
// 00746f50  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
