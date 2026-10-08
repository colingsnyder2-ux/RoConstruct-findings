// roc 2009-12 005751e0  unit: RBX::ViewRbxGfx  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005751e0
//
// 005751e0  51                   push ecx
// 005751e1  53                   push ebx
// 005751e2  55                   push ebp
// 005751e3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005751e7  56                   push esi
// 005751e8  57                   push edi
// 005751e9  8bf9                 mov edi, ecx
// 005751eb  8b7704               mov esi, dword ptr [edi + 4]
// 005751ee  3bee                 cmp ebp, esi
// 005751f0  89742410             mov dword ptr [esp + 0x10], esi
// 005751f4  896f04               mov dword ptr [edi + 4], ebp
// 005751f7  7d61                 jge 0x57525a
// 005751f9  8da42400000000       lea esp, [esp]
// 00575200  8b07                 mov eax, dword ptr [edi]
// 00575202  8d1ca8               lea ebx, [eax + ebp*4]
// 00575205  8b03                 mov eax, dword ptr [ebx]
// 00575207  85c0                 test eax, eax
// 00575209  744a                 je 0x575255
// 0057520b  83c004               add eax, 4
// 0057520e  50                   push eax
// 0057520f  ff1508b29800         call dword ptr [0x98b208]
// 00575215  85c0                 test eax, eax
// 00575217  7536                 jne 0x57524f
// 00575219  8b0b                 mov ecx, dword ptr [ebx]
// 0057521b  8b7108               mov esi, dword ptr [ecx + 8]
// 0057521e  85f6                 test esi, esi
// 00575220  741b                 je 0x57523d
// 00575222  8b0e                 mov ecx, dword ptr [esi]
// 00575224  8b11                 mov edx, dword ptr [ecx]
// 00575226  8b4204               mov eax, dword ptr [edx + 4]
// 00575229  ffd0                 call eax
// 0057522b  8bc6                 mov eax, esi
// 0057522d  8b7604               mov esi, dword ptr [esi + 4]
// 00575230  50                   push eax
// 00575231  e824e62700           call 0x7f385a
// 00575236  83c404               add esp, 4
// 00575239  85f6                 test esi, esi
// 0057523b  75e5                 jne 0x575222
// 0057523d  8b0b                 mov ecx, dword ptr [ebx]
// 0057523f  85c9                 test ecx, ecx
// 00575241  7408                 je 0x57524b
// 00575243  8b11                 mov edx, dword ptr [ecx]
// 00575245  8b02                 mov eax, dword ptr [edx]
// 00575247  6a01                 push 1
// 00575249  ffd0                 call eax
// 0057524b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057524f  c70300000000         mov dword ptr [ebx], 0
// 00575255  45                   inc ebp
// 00575256  3bee                 cmp ebp, esi
// 00575258  7ca6                 jl 0x575200
// 0057525a  f6053827b80001       test byte ptr [0xb82738], 1
// 00575261  7514                 jne 0x575277
// 00575263  830d3827b80001       or dword ptr [0xb82738], 1
// 0057526a  bb0a000000           mov ebx, 0xa
// 0057526f  891d3427b800         mov dword ptr [0xb82734], ebx
// 00575275  eb06                 jmp 0x57527d
// 00575277  8b1d3427b800         mov ebx, dword ptr [0xb82734]
// 0057527d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00575280  8b5708               mov edx, dword ptr [edi + 8]
// 00575283  3bca                 cmp ecx, edx
// 00575285  7e6f                 jle 0x5752f6
// 00575287  85d2                 test edx, edx
// 00575289  750d                 jne 0x575298
// 0057528b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057528f  894f08               mov dword ptr [edi + 8], ecx
// 00575292  56                   push esi
// 00575293  e982000000           jmp 0x57531a
// 00575298  3bcb                 cmp ecx, ebx
// 0057529a  7d06                 jge 0x5752a2
// 0057529c  895f08               mov dword ptr [edi + 8], ebx
// 0057529f  56                   push esi
// 005752a0  eb78                 jmp 0x57531a
// 005752a2  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005752aa  8bc2                 mov eax, edx
// 005752ac  03c0                 add eax, eax
// 005752ae  03c0                 add eax, eax
// 005752b0  3d801a0600           cmp eax, 0x61a80
// 005752b5  760a                 jbe 0x5752c1
// 005752b7  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 005752bf  eb0f                 jmp 0x5752d0
// 005752c1  3d00fa0000           cmp eax, 0xfa00
// 005752c6  7608                 jbe 0x5752d0
// 005752c8  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005752d0  8bc2                 mov eax, edx
// 005752d2  f30f2ac8             cvtsi2ss xmm1, eax
// 005752d6  f30f59c8             mulss xmm1, xmm0
// 005752da  f30f2cd1             cvttss2si edx, xmm1
// 005752de  2bd0                 sub edx, eax
// 005752e0  8d040a               lea eax, [edx + ecx]
// 005752e3  894708               mov dword ptr [edi + 8], eax
// 005752e6  8b0d3427b800         mov ecx, dword ptr [0xb82734]
// 005752ec  3bc1                 cmp eax, ecx
// 005752ee  7d03                 jge 0x5752f3
// 005752f0  894f08               mov dword ptr [edi + 8], ecx
// 005752f3  56                   push esi
// 005752f4  eb24                 jmp 0x57531a
// 005752f6  b856555555           mov eax, 0x55555556
// 005752fb  f7ea                 imul edx
// 005752fd  8bc2                 mov eax, edx
// 005752ff  c1e81f               shr eax, 0x1f
// 00575302  03c2                 add eax, edx
// 00575304  3bc8                 cmp ecx, eax
// 00575306  7f19                 jg 0x575321
// 00575308  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0057530d  7412                 je 0x575321
// 0057530f  3bcb                 cmp ecx, ebx
// 00575311  7e0e                 jle 0x575321
// 00575313  3bce                 cmp ecx, esi
// 00575315  7c02                 jl 0x575319
// 00575317  8bce                 mov ecx, esi
// 00575319  51                   push ecx
// 0057531a  8bcf                 mov ecx, edi
// 0057531c  e85f47f5ff           call 0x4c9a80
// 00575321  3b7704               cmp esi, dword ptr [edi + 4]
// 00575324  8bc6                 mov eax, esi
// 00575326  7d15                 jge 0x57533d
// 00575328  8b0f                 mov ecx, dword ptr [edi]
// 0057532a  8d0c81               lea ecx, [ecx + eax*4]
// 0057532d  85c9                 test ecx, ecx
// 0057532f  7406                 je 0x575337
// 00575331  c70100000000         mov dword ptr [ecx], 0
// 00575337  40                   inc eax
// 00575338  3b4704               cmp eax, dword ptr [edi + 4]
// 0057533b  7ceb                 jl 0x575328
// 0057533d  5f                   pop edi
// 0057533e  5e                   pop esi
// 0057533f  5d                   pop ebp
// 00575340  5b                   pop ebx
// 00575341  59                   pop ecx
// 00575342  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
