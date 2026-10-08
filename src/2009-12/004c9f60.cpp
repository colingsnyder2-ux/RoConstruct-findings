// roc 2009-12 004c9f60  unit: G3D::Texture  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c9f60
//
// 004c9f60  51                   push ecx
// 004c9f61  53                   push ebx
// 004c9f62  55                   push ebp
// 004c9f63  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004c9f67  56                   push esi
// 004c9f68  57                   push edi
// 004c9f69  8bf9                 mov edi, ecx
// 004c9f6b  8b7704               mov esi, dword ptr [edi + 4]
// 004c9f6e  3bee                 cmp ebp, esi
// 004c9f70  89742410             mov dword ptr [esp + 0x10], esi
// 004c9f74  896f04               mov dword ptr [edi + 4], ebp
// 004c9f77  7d61                 jge 0x4c9fda
// 004c9f79  8da42400000000       lea esp, [esp]
// 004c9f80  8b07                 mov eax, dword ptr [edi]
// 004c9f82  8d1ca8               lea ebx, [eax + ebp*4]
// 004c9f85  8b03                 mov eax, dword ptr [ebx]
// 004c9f87  85c0                 test eax, eax
// 004c9f89  744a                 je 0x4c9fd5
// 004c9f8b  83c004               add eax, 4
// 004c9f8e  50                   push eax
// 004c9f8f  ff1508b29800         call dword ptr [0x98b208]
// 004c9f95  85c0                 test eax, eax
// 004c9f97  7536                 jne 0x4c9fcf
// 004c9f99  8b0b                 mov ecx, dword ptr [ebx]
// 004c9f9b  8b7108               mov esi, dword ptr [ecx + 8]
// 004c9f9e  85f6                 test esi, esi
// 004c9fa0  741b                 je 0x4c9fbd
// 004c9fa2  8b0e                 mov ecx, dword ptr [esi]
// 004c9fa4  8b11                 mov edx, dword ptr [ecx]
// 004c9fa6  8b4204               mov eax, dword ptr [edx + 4]
// 004c9fa9  ffd0                 call eax
// 004c9fab  8bc6                 mov eax, esi
// 004c9fad  8b7604               mov esi, dword ptr [esi + 4]
// 004c9fb0  50                   push eax
// 004c9fb1  e8a4983200           call 0x7f385a
// 004c9fb6  83c404               add esp, 4
// 004c9fb9  85f6                 test esi, esi
// 004c9fbb  75e5                 jne 0x4c9fa2
// 004c9fbd  8b0b                 mov ecx, dword ptr [ebx]
// 004c9fbf  85c9                 test ecx, ecx
// 004c9fc1  7408                 je 0x4c9fcb
// 004c9fc3  8b11                 mov edx, dword ptr [ecx]
// 004c9fc5  8b02                 mov eax, dword ptr [edx]
// 004c9fc7  6a01                 push 1
// 004c9fc9  ffd0                 call eax
// 004c9fcb  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c9fcf  c70300000000         mov dword ptr [ebx], 0
// 004c9fd5  45                   inc ebp
// 004c9fd6  3bee                 cmp ebp, esi
// 004c9fd8  7ca6                 jl 0x4c9f80
// 004c9fda  f60544d0b70001       test byte ptr [0xb7d044], 1
// 004c9fe1  7514                 jne 0x4c9ff7
// 004c9fe3  830d44d0b70001       or dword ptr [0xb7d044], 1
// 004c9fea  bb0a000000           mov ebx, 0xa
// 004c9fef  891d40d0b700         mov dword ptr [0xb7d040], ebx
// 004c9ff5  eb06                 jmp 0x4c9ffd
// 004c9ff7  8b1d40d0b700         mov ebx, dword ptr [0xb7d040]
// 004c9ffd  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ca000  8b5708               mov edx, dword ptr [edi + 8]
// 004ca003  3bca                 cmp ecx, edx
// 004ca005  7e6f                 jle 0x4ca076
// 004ca007  85d2                 test edx, edx
// 004ca009  750d                 jne 0x4ca018
// 004ca00b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ca00f  894f08               mov dword ptr [edi + 8], ecx
// 004ca012  56                   push esi
// 004ca013  e982000000           jmp 0x4ca09a
// 004ca018  3bcb                 cmp ecx, ebx
// 004ca01a  7d06                 jge 0x4ca022
// 004ca01c  895f08               mov dword ptr [edi + 8], ebx
// 004ca01f  56                   push esi
// 004ca020  eb78                 jmp 0x4ca09a
// 004ca022  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004ca02a  8bc2                 mov eax, edx
// 004ca02c  03c0                 add eax, eax
// 004ca02e  03c0                 add eax, eax
// 004ca030  3d801a0600           cmp eax, 0x61a80
// 004ca035  760a                 jbe 0x4ca041
// 004ca037  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004ca03f  eb0f                 jmp 0x4ca050
// 004ca041  3d00fa0000           cmp eax, 0xfa00
// 004ca046  7608                 jbe 0x4ca050
// 004ca048  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004ca050  8bc2                 mov eax, edx
// 004ca052  f30f2ac8             cvtsi2ss xmm1, eax
// 004ca056  f30f59c8             mulss xmm1, xmm0
// 004ca05a  f30f2cd1             cvttss2si edx, xmm1
// 004ca05e  2bd0                 sub edx, eax
// 004ca060  8d040a               lea eax, [edx + ecx]
// 004ca063  894708               mov dword ptr [edi + 8], eax
// 004ca066  8b0d40d0b700         mov ecx, dword ptr [0xb7d040]
// 004ca06c  3bc1                 cmp eax, ecx
// 004ca06e  7d03                 jge 0x4ca073
// 004ca070  894f08               mov dword ptr [edi + 8], ecx
// 004ca073  56                   push esi
// 004ca074  eb24                 jmp 0x4ca09a
// 004ca076  b856555555           mov eax, 0x55555556
// 004ca07b  f7ea                 imul edx
// 004ca07d  8bc2                 mov eax, edx
// 004ca07f  c1e81f               shr eax, 0x1f
// 004ca082  03c2                 add eax, edx
// 004ca084  3bc8                 cmp ecx, eax
// 004ca086  7f19                 jg 0x4ca0a1
// 004ca088  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004ca08d  7412                 je 0x4ca0a1
// 004ca08f  3bcb                 cmp ecx, ebx
// 004ca091  7e0e                 jle 0x4ca0a1
// 004ca093  3bce                 cmp ecx, esi
// 004ca095  7c02                 jl 0x4ca099
// 004ca097  8bce                 mov ecx, esi
// 004ca099  51                   push ecx
// 004ca09a  8bcf                 mov ecx, edi
// 004ca09c  e8dff9ffff           call 0x4c9a80
// 004ca0a1  3b7704               cmp esi, dword ptr [edi + 4]
// 004ca0a4  8bc6                 mov eax, esi
// 004ca0a6  7d15                 jge 0x4ca0bd
// 004ca0a8  8b0f                 mov ecx, dword ptr [edi]
// 004ca0aa  8d0c81               lea ecx, [ecx + eax*4]
// 004ca0ad  85c9                 test ecx, ecx
// 004ca0af  7406                 je 0x4ca0b7
// 004ca0b1  c70100000000         mov dword ptr [ecx], 0
// 004ca0b7  40                   inc eax
// 004ca0b8  3b4704               cmp eax, dword ptr [edi + 4]
// 004ca0bb  7ceb                 jl 0x4ca0a8
// 004ca0bd  5f                   pop edi
// 004ca0be  5e                   pop esi
// 004ca0bf  5d                   pop ebp
// 004ca0c0  5b                   pop ebx
// 004ca0c1  59                   pop ecx
// 004ca0c2  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
