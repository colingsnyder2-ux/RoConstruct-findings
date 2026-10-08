// from server: 100% by auto
// roc 2010-06 0053fda0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fda0
//
// 0053fda0  51                   push ecx
// 0053fda1  53                   push ebx
// 0053fda2  55                   push ebp
// 0053fda3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053fda7  56                   push esi
// 0053fda8  57                   push edi
// 0053fda9  8bf9                 mov edi, ecx
// 0053fdab  8b7704               mov esi, dword ptr [edi + 4]
// 0053fdae  3bee                 cmp ebp, esi
// 0053fdb0  89742410             mov dword ptr [esp + 0x10], esi
// 0053fdb4  896f04               mov dword ptr [edi + 4], ebp
// 0053fdb7  7d61                 jge 0x53fe1a
// 0053fdb9  8da42400000000       lea esp, [esp]
// 0053fdc0  8b07                 mov eax, dword ptr [edi]
// 0053fdc2  8d1ca8               lea ebx, [eax + ebp*4]
// 0053fdc5  8b03                 mov eax, dword ptr [ebx]
// 0053fdc7  85c0                 test eax, eax
// 0053fdc9  744a                 je 0x53fe15
// 0053fdcb  83c004               add eax, 4
// 0053fdce  50                   push eax
// 0053fdcf  ff157ca39e00         call dword ptr [0x9ea37c]
// 0053fdd5  85c0                 test eax, eax
// 0053fdd7  7536                 jne 0x53fe0f
// 0053fdd9  8b0b                 mov ecx, dword ptr [ebx]
// 0053fddb  8b7108               mov esi, dword ptr [ecx + 8]
// 0053fdde  85f6                 test esi, esi
// 0053fde0  741b                 je 0x53fdfd
// 0053fde2  8b0e                 mov ecx, dword ptr [esi]
// 0053fde4  8b11                 mov edx, dword ptr [ecx]
// 0053fde6  8b4204               mov eax, dword ptr [edx + 4]
// 0053fde9  ffd0                 call eax
// 0053fdeb  8bc6                 mov eax, esi
// 0053fded  8b7604               mov esi, dword ptr [esi + 4]
// 0053fdf0  50                   push eax
// 0053fdf1  e8a47b2600           call 0x7a799a
// 0053fdf6  83c404               add esp, 4
// 0053fdf9  85f6                 test esi, esi
// 0053fdfb  75e5                 jne 0x53fde2
// 0053fdfd  8b0b                 mov ecx, dword ptr [ebx]
// 0053fdff  85c9                 test ecx, ecx
// 0053fe01  7408                 je 0x53fe0b
// 0053fe03  8b11                 mov edx, dword ptr [ecx]
// 0053fe05  8b02                 mov eax, dword ptr [edx]
// 0053fe07  6a01                 push 1
// 0053fe09  ffd0                 call eax
// 0053fe0b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053fe0f  c70300000000         mov dword ptr [ebx], 0
// 0053fe15  45                   inc ebp
// 0053fe16  3bee                 cmp ebp, esi
// 0053fe18  7ca6                 jl 0x53fdc0
// 0053fe1a  f605dc90c00001       test byte ptr [0xc090dc], 1
// 0053fe21  7514                 jne 0x53fe37
// 0053fe23  830ddc90c00001       or dword ptr [0xc090dc], 1
// 0053fe2a  bb0a000000           mov ebx, 0xa
// 0053fe2f  891dd890c000         mov dword ptr [0xc090d8], ebx
// 0053fe35  eb06                 jmp 0x53fe3d
// 0053fe37  8b1dd890c000         mov ebx, dword ptr [0xc090d8]
// 0053fe3d  8b4f04               mov ecx, dword ptr [edi + 4]
// 0053fe40  8b5708               mov edx, dword ptr [edi + 8]
// 0053fe43  3bca                 cmp ecx, edx
// 0053fe45  7e6f                 jle 0x53feb6
// 0053fe47  85d2                 test edx, edx
// 0053fe49  750d                 jne 0x53fe58
// 0053fe4b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053fe4f  894f08               mov dword ptr [edi + 8], ecx
// 0053fe52  56                   push esi
// 0053fe53  e982000000           jmp 0x53feda
// 0053fe58  3bcb                 cmp ecx, ebx
// 0053fe5a  7d06                 jge 0x53fe62
// 0053fe5c  895f08               mov dword ptr [edi + 8], ebx
// 0053fe5f  56                   push esi
// 0053fe60  eb78                 jmp 0x53feda
// 0053fe62  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0053fe6a  8bc2                 mov eax, edx
// 0053fe6c  03c0                 add eax, eax
// 0053fe6e  03c0                 add eax, eax
// 0053fe70  3d801a0600           cmp eax, 0x61a80
// 0053fe75  760a                 jbe 0x53fe81
// 0053fe77  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 0053fe7f  eb0f                 jmp 0x53fe90
// 0053fe81  3d00fa0000           cmp eax, 0xfa00
// 0053fe86  7608                 jbe 0x53fe90
// 0053fe88  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 0053fe90  8bc2                 mov eax, edx
// 0053fe92  f30f2ac8             cvtsi2ss xmm1, eax
// 0053fe96  f30f59c8             mulss xmm1, xmm0
// 0053fe9a  f30f2cd1             cvttss2si edx, xmm1
// 0053fe9e  2bd0                 sub edx, eax
// 0053fea0  8d040a               lea eax, [edx + ecx]
// 0053fea3  894708               mov dword ptr [edi + 8], eax
// 0053fea6  8b0dd890c000         mov ecx, dword ptr [0xc090d8]
// 0053feac  3bc1                 cmp eax, ecx
// 0053feae  7d03                 jge 0x53feb3
// 0053feb0  894f08               mov dword ptr [edi + 8], ecx
// 0053feb3  56                   push esi
// 0053feb4  eb24                 jmp 0x53feda
// 0053feb6  b856555555           mov eax, 0x55555556
// 0053febb  f7ea                 imul edx
// 0053febd  8bc2                 mov eax, edx
// 0053febf  c1e81f               shr eax, 0x1f
// 0053fec2  03c2                 add eax, edx
// 0053fec4  3bc8                 cmp ecx, eax
// 0053fec6  7f19                 jg 0x53fee1
// 0053fec8  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0053fecd  7412                 je 0x53fee1
// 0053fecf  3bcb                 cmp ecx, ebx
// 0053fed1  7e0e                 jle 0x53fee1
// 0053fed3  3bce                 cmp ecx, esi
// 0053fed5  7c02                 jl 0x53fed9
// 0053fed7  8bce                 mov ecx, esi
// 0053fed9  51                   push ecx
// 0053feda  8bcf                 mov ecx, edi
// 0053fedc  e8affbffff           call 0x53fa90
// 0053fee1  3b7704               cmp esi, dword ptr [edi + 4]
// 0053fee4  8bc6                 mov eax, esi
// 0053fee6  7d15                 jge 0x53fefd
// 0053fee8  8b0f                 mov ecx, dword ptr [edi]
// 0053feea  8d0c81               lea ecx, [ecx + eax*4]
// 0053feed  85c9                 test ecx, ecx
// 0053feef  7406                 je 0x53fef7
// 0053fef1  c70100000000         mov dword ptr [ecx], 0
// 0053fef7  40                   inc eax
// 0053fef8  3b4704               cmp eax, dword ptr [edi + 4]
// 0053fefb  7ceb                 jl 0x53fee8
// 0053fefd  5f                   pop edi
// 0053fefe  5e                   pop esi
// 0053feff  5d                   pop ebp
// 0053ff00  5b                   pop ebx
// 0053ff01  59                   pop ecx
// 0053ff02  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
