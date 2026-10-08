// roc 2007-03 0046d6a0  unit: seg_00460000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d6a0
//
// 0046d6a0  6aff                 push -1
// 0046d6a2  68891f7400           push 0x741f89
// 0046d6a7  64a100000000         mov eax, dword ptr fs:[0]
// 0046d6ad  50                   push eax
// 0046d6ae  83ec1c               sub esp, 0x1c
// 0046d6b1  56                   push esi
// 0046d6b2  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d6b7  33c4                 xor eax, esp
// 0046d6b9  50                   push eax
// 0046d6ba  8d442424             lea eax, [esp + 0x24]
// 0046d6be  64a300000000         mov dword ptr fs:[0], eax
// 0046d6c4  68031f0000           push 0x1f03
// 0046d6c9  ff1518eb7700         call dword ptr [0x77eb18]
// 0046d6cf  689c5a7900           push 0x795a9c
// 0046d6d4  50                   push eax
// 0046d6d5  ff15f4e97700         call dword ptr [0x77e9f4]
// 0046d6db  83c408               add esp, 8
// 0046d6de  85c0                 test eax, eax
// 0046d6e0  741b                 je 0x46d6fd
// 0046d6e2  833d90808b0000       cmp dword ptr [0x8b8090], 0
// 0046d6e9  7412                 je 0x46d6fd
// 0046d6eb  833d98808b0000       cmp dword ptr [0x8b8098], 0
// 0046d6f2  7409                 je 0x46d6fd
// 0046d6f4  833d8c808b0000       cmp dword ptr [0x8b808c], 0
// 0046d6fb  7518                 jne 0x46d715
// 0046d6fd  c60523768b0000       mov byte ptr [0x8b7623], 0
// 0046d704  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046d708  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d70f  59                   pop ecx
// 0046d710  5e                   pop esi
// 0046d711  83c428               add esp, 0x28
// 0046d714  c3                   ret 
// 0046d715  e866feffff           call 0x46d580
// 0046d71a  6880237900           push 0x792380
// 0046d71f  8d4c240c             lea ecx, [esp + 0xc]
// 0046d723  8bf0                 mov esi, eax
// 0046d725  ff1578e77700         call dword ptr [0x77e778]
// 0046d72b  8d442408             lea eax, [esp + 8]
// 0046d72f  50                   push eax
// 0046d730  56                   push esi
// 0046d731  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0046d739  e822fe0800           call 0x4fd560
// 0046d73e  83c408               add esp, 8
// 0046d741  8d4c2408             lea ecx, [esp + 8]
// 0046d745  a223768b00           mov byte ptr [0x8b7623], al
// 0046d74a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0046d752  ff158ce77700         call dword ptr [0x77e78c]
// 0046d758  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046d75c  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d763  59                   pop ecx
// 0046d764  5e                   pop esi
// 0046d765  83c428               add esp, 0x28
// 0046d768  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_slowVBO@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
