// roc 2009-12 005e0a50  unit: RBX::RbxG3D::RenderScene  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0a50
//
// 005e0a50  6aff                 push -1
// 005e0a52  6849e09300           push 0x93e049
// 005e0a57  64a100000000         mov eax, dword ptr fs:[0]
// 005e0a5d  50                   push eax
// 005e0a5e  64892500000000       mov dword ptr fs:[0], esp
// 005e0a65  51                   push ecx
// 005e0a66  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e0a6a  55                   push ebp
// 005e0a6b  56                   push esi
// 005e0a6c  8bf1                 mov esi, ecx
// 005e0a6e  57                   push edi
// 005e0a6f  8b7e04               mov edi, dword ptr [esi + 4]
// 005e0a72  894604               mov dword ptr [esi + 4], eax
// 005e0a75  f6054c30b80001       test byte ptr [0xb8304c], 1
// 005e0a7c  8974240c             mov dword ptr [esp + 0xc], esi
// 005e0a80  7514                 jne 0x5e0a96
// 005e0a82  830d4c30b80001       or dword ptr [0xb8304c], 1
// 005e0a89  bd0a000000           mov ebp, 0xa
// 005e0a8e  892d4830b800         mov dword ptr [0xb83048], ebp
// 005e0a94  eb06                 jmp 0x5e0a9c
// 005e0a96  8b2d4830b800         mov ebp, dword ptr [0xb83048]
// 005e0a9c  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e0a9f  8b5608               mov edx, dword ptr [esi + 8]
// 005e0aa2  3bca                 cmp ecx, edx
// 005e0aa4  7e6d                 jle 0x5e0b13
// 005e0aa6  85d2                 test edx, edx
// 005e0aa8  7509                 jne 0x5e0ab3
// 005e0aaa  894608               mov dword ptr [esi + 8], eax
// 005e0aad  57                   push edi
// 005e0aae  e984000000           jmp 0x5e0b37
// 005e0ab3  3bcd                 cmp ecx, ebp
// 005e0ab5  7d06                 jge 0x5e0abd
// 005e0ab7  896e08               mov dword ptr [esi + 8], ebp
// 005e0aba  57                   push edi
// 005e0abb  eb7a                 jmp 0x5e0b37
// 005e0abd  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005e0ac5  8bc2                 mov eax, edx
// 005e0ac7  8d0480               lea eax, [eax + eax*4]
// 005e0aca  c1e004               shl eax, 4
// 005e0acd  3d801a0600           cmp eax, 0x61a80
// 005e0ad2  760a                 jbe 0x5e0ade
// 005e0ad4  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 005e0adc  eb0f                 jmp 0x5e0aed
// 005e0ade  3d00fa0000           cmp eax, 0xfa00
// 005e0ae3  7608                 jbe 0x5e0aed
// 005e0ae5  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005e0aed  8bc2                 mov eax, edx
// 005e0aef  f30f2ac8             cvtsi2ss xmm1, eax
// 005e0af3  f30f59c8             mulss xmm1, xmm0
// 005e0af7  f30f2cd1             cvttss2si edx, xmm1
// 005e0afb  2bd0                 sub edx, eax
// 005e0afd  8d040a               lea eax, [edx + ecx]
// 005e0b00  894608               mov dword ptr [esi + 8], eax
// 005e0b03  8b0d4830b800         mov ecx, dword ptr [0xb83048]
// 005e0b09  3bc1                 cmp eax, ecx
// 005e0b0b  7d03                 jge 0x5e0b10
// 005e0b0d  894e08               mov dword ptr [esi + 8], ecx
// 005e0b10  57                   push edi
// 005e0b11  eb24                 jmp 0x5e0b37
// 005e0b13  b856555555           mov eax, 0x55555556
// 005e0b18  f7ea                 imul edx
// 005e0b1a  8bc2                 mov eax, edx
// 005e0b1c  c1e81f               shr eax, 0x1f
// 005e0b1f  03c2                 add eax, edx
// 005e0b21  3bc8                 cmp ecx, eax
// 005e0b23  7f19                 jg 0x5e0b3e
// 005e0b25  807c242400           cmp byte ptr [esp + 0x24], 0
// 005e0b2a  7412                 je 0x5e0b3e
// 005e0b2c  3bcd                 cmp ecx, ebp
// 005e0b2e  7e0e                 jle 0x5e0b3e
// 005e0b30  3bcf                 cmp ecx, edi
// 005e0b32  7c02                 jl 0x5e0b36
// 005e0b34  8bcf                 mov ecx, edi
// 005e0b36  51                   push ecx
// 005e0b37  8bce                 mov ecx, esi
// 005e0b39  e872f9ffff           call 0x5e04b0
// 005e0b3e  3b7e04               cmp edi, dword ptr [esi + 4]
// 005e0b41  897c2424             mov dword ptr [esp + 0x24], edi
// 005e0b45  7d32                 jge 0x5e0b79
// 005e0b47  83cdff               or ebp, 0xffffffff
// 005e0b4a  8d9b00000000         lea ebx, [ebx]
// 005e0b50  8d0cbf               lea ecx, [edi + edi*4]
// 005e0b53  c1e104               shl ecx, 4
// 005e0b56  030e                 add ecx, dword ptr [esi]
// 005e0b58  894c2420             mov dword ptr [esp + 0x20], ecx
// 005e0b5c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e0b64  7405                 je 0x5e0b6b
// 005e0b66  e8058e0100           call 0x5f9970
// 005e0b6b  47                   inc edi
// 005e0b6c  3b7e04               cmp edi, dword ptr [esi + 4]
// 005e0b6f  896c2418             mov dword ptr [esp + 0x18], ebp
// 005e0b73  897c2424             mov dword ptr [esp + 0x24], edi
// 005e0b77  7cd7                 jl 0x5e0b50
// 005e0b79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e0b7d  5f                   pop edi
// 005e0b7e  5e                   pop esi
// 005e0b7f  5d                   pop ebp
// 005e0b80  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0b87  83c410               add esp, 0x10
// 005e0b8a  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resize@?$Array@VGLight@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
