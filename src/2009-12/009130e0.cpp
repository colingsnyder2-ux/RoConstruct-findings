// roc 2009-12 009130e0  unit: Ogre::RbxMeshLoader  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009130e0
//
// 009130e0  6aff                 push -1
// 009130e2  6831709600           push 0x967031
// 009130e7  64a100000000         mov eax, dword ptr fs:[0]
// 009130ed  50                   push eax
// 009130ee  64892500000000       mov dword ptr fs:[0], esp
// 009130f5  83ec28               sub esp, 0x28
// 009130f8  53                   push ebx
// 009130f9  55                   push ebp
// 009130fa  8be9                 mov ebp, ecx
// 009130fc  68330c0000           push 0xc33
// 00913101  896c2414             mov dword ptr [esp + 0x14], ebp
// 00913105  e8c673bcff           call 0x4da4d0
// 0091310a  83c404               add esp, 4
// 0091310d  84c0                 test al, al
// 0091310f  0f95c0               setne al
// 00913112  33db                 xor ebx, ebx
// 00913114  33c9                 xor ecx, ecx
// 00913116  3ac3                 cmp al, bl
// 00913118  0f95c1               setne cl
// 0091311b  884504               mov byte ptr [ebp + 4], al
// 0091311e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00913122  41                   inc ecx
// 00913123  85c9                 test ecx, ecx
// 00913125  0f8e3c010000         jle 0x913267
// 0091312b  56                   push esi
// 0091312c  83c508               add ebp, 8
// 0091312f  57                   push edi
// 00913130  68083da200           push 0xa23d08
// 00913135  8d4c2420             lea ecx, [esp + 0x20]
// 00913139  ff15f4b69800         call dword ptr [0x98b6f4]
// 0091313f  d9e8                 fld1 
// 00913141  8b15c0dbb700         mov edx, dword ptr [0xb7dbc0]
// 00913147  51                   push ecx
// 00913148  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0091314c  d91c24               fstp dword ptr [esp]
// 0091314f  53                   push ebx
// 00913150  6a06                 push 6
// 00913152  6a02                 push 2
// 00913154  53                   push ebx
// 00913155  52                   push edx
// 00913156  8b542460             mov edx, dword ptr [esp + 0x60]
// 0091315a  8d442434             lea eax, [esp + 0x34]
// 0091315e  50                   push eax
// 0091315f  51                   push ecx
// 00913160  52                   push edx
// 00913161  8d442434             lea eax, [esp + 0x34]
// 00913165  50                   push eax
// 00913166  895c2468             mov dword ptr [esp + 0x68], ebx
// 0091316a  e82158bbff           call 0x4c8990
// 0091316f  83c428               add esp, 0x28
// 00913172  8b38                 mov edi, dword ptr [eax]
// 00913174  8b4500               mov eax, dword ptr [ebp]
// 00913177  c644244001           mov byte ptr [esp + 0x40], 1
// 0091317c  3bf8                 cmp edi, eax
// 0091317e  745e                 je 0x9131de
// 00913180  3bc3                 cmp eax, ebx
// 00913182  7449                 je 0x9131cd
// 00913184  83c004               add eax, 4
// 00913187  50                   push eax
// 00913188  ff1508b29800         call dword ptr [0x98b208]
// 0091318e  85c0                 test eax, eax
// 00913190  7538                 jne 0x9131ca
// 00913192  8b4500               mov eax, dword ptr [ebp]
// 00913195  8b7008               mov esi, dword ptr [eax + 8]
// 00913198  3bf3                 cmp esi, ebx
// 0091319a  741f                 je 0x9131bb
// 0091319c  8d642400             lea esp, [esp]
// 009131a0  8b0e                 mov ecx, dword ptr [esi]
// 009131a2  8b11                 mov edx, dword ptr [ecx]
// 009131a4  8b4204               mov eax, dword ptr [edx + 4]
// 009131a7  ffd0                 call eax
// 009131a9  8bc6                 mov eax, esi
// 009131ab  8b7604               mov esi, dword ptr [esi + 4]
// 009131ae  50                   push eax
// 009131af  e8a606eeff           call 0x7f385a
// 009131b4  83c404               add esp, 4
// 009131b7  3bf3                 cmp esi, ebx
// 009131b9  75e5                 jne 0x9131a0
// 009131bb  8b4d00               mov ecx, dword ptr [ebp]
// 009131be  3bcb                 cmp ecx, ebx
// 009131c0  7408                 je 0x9131ca
// 009131c2  8b11                 mov edx, dword ptr [ecx]
// 009131c4  8b02                 mov eax, dword ptr [edx]
// 009131c6  6a01                 push 1
// 009131c8  ffd0                 call eax
// 009131ca  895d00               mov dword ptr [ebp], ebx
// 009131cd  3bfb                 cmp edi, ebx
// 009131cf  740d                 je 0x9131de
// 009131d1  8d4704               lea eax, [edi + 4]
// 009131d4  50                   push eax
// 009131d5  897d00               mov dword ptr [ebp], edi
// 009131d8  ff150cb29800         call dword ptr [0x98b20c]
// 009131de  8b442410             mov eax, dword ptr [esp + 0x10]
// 009131e2  885c2440             mov byte ptr [esp + 0x40], bl
// 009131e6  3bc3                 cmp eax, ebx
// 009131e8  7448                 je 0x913232
// 009131ea  83c004               add eax, 4
// 009131ed  50                   push eax
// 009131ee  ff1508b29800         call dword ptr [0x98b208]
// 009131f4  85c0                 test eax, eax
// 009131f6  7536                 jne 0x91322e
// 009131f8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009131fc  8b7108               mov esi, dword ptr [ecx + 8]
// 009131ff  3bf3                 cmp esi, ebx
// 00913201  741f                 je 0x913222
// 00913203  8b0e                 mov ecx, dword ptr [esi]
// 00913205  8b11                 mov edx, dword ptr [ecx]
// 00913207  8b4204               mov eax, dword ptr [edx + 4]
// 0091320a  ffd0                 call eax
// 0091320c  8bc6                 mov eax, esi
// 0091320e  8b7604               mov esi, dword ptr [esi + 4]
// 00913211  50                   push eax
// 00913212  e84306eeff           call 0x7f385a
// 00913217  83c404               add esp, 4
// 0091321a  3bf3                 cmp esi, ebx
// 0091321c  75e5                 jne 0x913203
// 0091321e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00913222  3bcb                 cmp ecx, ebx
// 00913224  7408                 je 0x91322e
// 00913226  8b11                 mov edx, dword ptr [ecx]
// 00913228  8b02                 mov eax, dword ptr [edx]
// 0091322a  6a01                 push 1
// 0091322c  ffd0                 call eax
// 0091322e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00913232  8d4c241c             lea ecx, [esp + 0x1c]
// 00913236  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0091323e  ff15e4b69800         call dword ptr [0x98b6e4]
// 00913244  8b442414             mov eax, dword ptr [esp + 0x14]
// 00913248  8b542418             mov edx, dword ptr [esp + 0x18]
// 0091324c  40                   inc eax
// 0091324d  33c9                 xor ecx, ecx
// 0091324f  83c504               add ebp, 4
// 00913252  385a04               cmp byte ptr [edx + 4], bl
// 00913255  89442414             mov dword ptr [esp + 0x14], eax
// 00913259  0f95c1               setne cl
// 0091325c  41                   inc ecx
// 0091325d  3bc1                 cmp eax, ecx
// 0091325f  0f8ccbfeffff         jl 0x913130
// 00913265  5f                   pop edi
// 00913266  5e                   pop esi
// 00913267  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0091326b  5d                   pop ebp
// 0091326c  5b                   pop ebx
// 0091326d  64890d00000000       mov dword ptr fs:[0], ecx
// 00913274  83c434               add esp, 0x34
// 00913277  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resizeBloomMap@ToneMap@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
