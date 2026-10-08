// from server: 100% by auto
// roc 2010-06 00785fd0  unit: RBX::HUMAN::GettingUp  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785fd0
//
// 00785fd0  8b442404             mov eax, dword ptr [esp + 4]
// 00785fd4  55                   push ebp
// 00785fd5  8b6904               mov ebp, dword ptr [ecx + 4]
// 00785fd8  ba01000000           mov edx, 1
// 00785fdd  56                   push esi
// 00785fde  894104               mov dword ptr [ecx + 4], eax
// 00785fe1  57                   push edi
// 00785fe2  84152836c200         test byte ptr [0xc23628], dl
// 00785fe8  7513                 jne 0x785ffd
// 00785fea  09152836c200         or dword ptr [0xc23628], edx
// 00785ff0  bf0a000000           mov edi, 0xa
// 00785ff5  893d2436c200         mov dword ptr [0xc23624], edi
// 00785ffb  eb06                 jmp 0x786003
// 00785ffd  8b3d2436c200         mov edi, dword ptr [0xc23624]
// 00786003  8b5108               mov edx, dword ptr [ecx + 8]
// 00786006  8b7104               mov esi, dword ptr [ecx + 4]
// 00786009  3bf2                 cmp esi, edx
// 0078600b  0f8e83000000         jle 0x786094
// 00786011  85d2                 test edx, edx
// 00786013  750f                 jne 0x786024
// 00786015  55                   push ebp
// 00786016  894108               mov dword ptr [ecx + 8], eax
// 00786019  e80224d0ff           call 0x488420
// 0078601e  5f                   pop edi
// 0078601f  5e                   pop esi
// 00786020  5d                   pop ebp
// 00786021  c20800               ret 8
// 00786024  3bf7                 cmp esi, edi
// 00786026  7d0f                 jge 0x786037
// 00786028  55                   push ebp
// 00786029  897908               mov dword ptr [ecx + 8], edi
// 0078602c  e8ef23d0ff           call 0x488420
// 00786031  5f                   pop edi
// 00786032  5e                   pop esi
// 00786033  5d                   pop ebp
// 00786034  c20800               ret 8
// 00786037  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0078603f  8bc2                 mov eax, edx
// 00786041  03c0                 add eax, eax
// 00786043  03c0                 add eax, eax
// 00786045  3d801a0600           cmp eax, 0x61a80
// 0078604a  760a                 jbe 0x786056
// 0078604c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00786054  eb0f                 jmp 0x786065
// 00786056  3d00fa0000           cmp eax, 0xfa00
// 0078605b  7608                 jbe 0x786065
// 0078605d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00786065  8bc2                 mov eax, edx
// 00786067  f30f2ac8             cvtsi2ss xmm1, eax
// 0078606b  f30f59c8             mulss xmm1, xmm0
// 0078606f  f30f2cd1             cvttss2si edx, xmm1
// 00786073  2bd0                 sub edx, eax
// 00786075  8d0432               lea eax, [edx + esi]
// 00786078  894108               mov dword ptr [ecx + 8], eax
// 0078607b  8b152436c200         mov edx, dword ptr [0xc23624]
// 00786081  3bc2                 cmp eax, edx
// 00786083  7d03                 jge 0x786088
// 00786085  895108               mov dword ptr [ecx + 8], edx
// 00786088  55                   push ebp
// 00786089  e89223d0ff           call 0x488420
// 0078608e  5f                   pop edi
// 0078608f  5e                   pop esi
// 00786090  5d                   pop ebp
// 00786091  c20800               ret 8
// 00786094  b856555555           mov eax, 0x55555556
// 00786099  f7ea                 imul edx
// 0078609b  8bc2                 mov eax, edx
// 0078609d  c1e81f               shr eax, 0x1f
// 007860a0  03c2                 add eax, edx
// 007860a2  3bf0                 cmp esi, eax
// 007860a4  7f17                 jg 0x7860bd
// 007860a6  807c241400           cmp byte ptr [esp + 0x14], 0
// 007860ab  7410                 je 0x7860bd
// 007860ad  3bf7                 cmp esi, edi
// 007860af  7e0c                 jle 0x7860bd
// 007860b1  3bf5                 cmp esi, ebp
// 007860b3  7c02                 jl 0x7860b7
// 007860b5  8bf5                 mov esi, ebp
// 007860b7  56                   push esi
// 007860b8  e86323d0ff           call 0x488420
// 007860bd  5f                   pop edi
// 007860be  5e                   pop esi
// 007860bf  5d                   pop ebp
// 007860c0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
