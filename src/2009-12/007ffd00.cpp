// roc 2009-12 007ffd00  unit: CXTPPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ffd00
//
// 007ffd00  81ecd0010000         sub esp, 0x1d0
// 007ffd06  a10052b600           mov eax, dword ptr [0xb65200]
// 007ffd0b  33c4                 xor eax, esp
// 007ffd0d  898424cc010000       mov dword ptr [esp + 0x1cc], eax
// 007ffd14  53                   push ebx
// 007ffd15  56                   push esi
// 007ffd16  57                   push edi
// 007ffd17  8bf9                 mov edi, ecx
// 007ffd19  8d8c2484000000       lea ecx, [esp + 0x84]
// 007ffd20  e8abd8ffff           call 0x7fd5d0
// 007ffd25  837f7400             cmp dword ptr [edi + 0x74], 0
// 007ffd29  740d                 je 0x7ffd38
// 007ffd2b  e870eb0600           call 0x86e8a0
// 007ffd30  8b400c               mov eax, dword ptr [eax + 0xc]
// 007ffd33  8a5818               mov bl, byte ptr [eax + 0x18]
// 007ffd36  eb07                 jmp 0x7ffd3f
// 007ffd38  8a9c243b010000       mov bl, byte ptr [esp + 0x13b]
// 007ffd3f  83bf2001000000       cmp dword ptr [edi + 0x120], 0
// 007ffd46  0f848b000000         je 0x7ffdd7
// 007ffd4c  8d4c240c             lea ecx, [esp + 0xc]
// 007ffd50  e85bd8ffff           call 0x7fd5b0
// 007ffd55  8b842424010000       mov eax, dword ptr [esp + 0x124]
// 007ffd5c  85c0                 test eax, eax
// 007ffd5e  7d0d                 jge 0x7ffd6d
// 007ffd60  83f8f5               cmp eax, -0xb
// 007ffd63  c744240cf5ffffff     mov dword ptr [esp + 0xc], 0xfffffff5
// 007ffd6b  7f04                 jg 0x7ffd71
// 007ffd6d  8944240c             mov dword ptr [esp + 0xc], eax
// 007ffd71  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 007ffd78  8a942438010000       mov dl, byte ptr [esp + 0x138]
// 007ffd7f  8a84243e010000       mov al, byte ptr [esp + 0x13e]
// 007ffd86  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007ffd8a  8d8c2440010000       lea ecx, [esp + 0x140]
// 007ffd91  51                   push ecx
// 007ffd92  88542424             mov byte ptr [esp + 0x24], dl
// 007ffd96  8d54242c             lea edx, [esp + 0x2c]
// 007ffd9a  6a20                 push 0x20
// 007ffd9c  52                   push edx
// 007ffd9d  885c242f             mov byte ptr [esp + 0x2f], bl
// 007ffda1  88442432             mov byte ptr [esp + 0x32], al
// 007ffda5  ff15c8b79800         call dword ptr [0x98b7c8]
// 007ffdab  83c40c               add esp, 0xc
// 007ffdae  837f7000             cmp dword ptr [edi + 0x70], 0
// 007ffdb2  7415                 je 0x7ffdc9
// 007ffdb4  e867b90300           call 0x83b720
// 007ffdb9  8bc8                 mov ecx, eax
// 007ffdbb  e8a0c20300           call 0x83c060
// 007ffdc0  85c0                 test eax, eax
// 007ffdc2  7405                 je 0x7ffdc9
// 007ffdc4  c644242605           mov byte ptr [esp + 0x26], 5
// 007ffdc9  6a01                 push 1
// 007ffdcb  8d442410             lea eax, [esp + 0x10]
// 007ffdcf  50                   push eax
// 007ffdd0  8bcf                 mov ecx, edi
// 007ffdd2  e819fdffff           call 0x7ffaf0
// 007ffdd7  6a00                 push 0
// 007ffdd9  8d4c244c             lea ecx, [esp + 0x4c]
// 007ffddd  51                   push ecx
// 007ffdde  6a3c                 push 0x3c
// 007ffde0  6a1f                 push 0x1f
// 007ffde2  ff1500cc9800         call dword ptr [0x98cc00]
// 007ffde8  837f7000             cmp dword ptr [edi + 0x70], 0
// 007ffdec  7425                 je 0x7ffe13
// 007ffdee  e82db90300           call 0x83b720
// 007ffdf3  8bc8                 mov ecx, eax
// 007ffdf5  e866c20300           call 0x83c060
// 007ffdfa  85c0                 test eax, eax
// 007ffdfc  7415                 je 0x7ffe13
// 007ffdfe  c644246205           mov byte ptr [esp + 0x62], 5
// 007ffe03  c68424fa00000005     mov byte ptr [esp + 0xfa], 5
// 007ffe0b  c684247a01000005     mov byte ptr [esp + 0x17a], 5
// 007ffe13  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007ffe1a  8db798000000         lea esi, [edi + 0x98]
// 007ffe20  885c245f             mov byte ptr [esp + 0x5f], bl
// 007ffe24  889c24f7000000       mov byte ptr [esp + 0xf7], bl
// 007ffe2b  889c2477010000       mov byte ptr [esp + 0x177], bl
// 007ffe32  8b1d28b19800         mov ebx, dword ptr [0x98b128]
// 007ffe38  7506                 jne 0x7ffe40
// 007ffe3a  837e0400             cmp dword ptr [esi + 4], 0
// 007ffe3e  7519                 jne 0x7ffe59
// 007ffe40  8bce                 mov ecx, esi
// 007ffe42  e8d73fffff           call 0x7f3e1e
// 007ffe47  8d9424e0000000       lea edx, [esp + 0xe0]
// 007ffe4e  52                   push edx
// 007ffe4f  ffd3                 call ebx
// 007ffe51  50                   push eax
// 007ffe52  8bce                 mov ecx, esi
// 007ffe54  e8d13fffff           call 0x7f3e2a
// 007ffe59  83bfac00000000       cmp dword ptr [edi + 0xac], 0
// 007ffe60  8db7a4000000         lea esi, [edi + 0xa4]
// 007ffe66  7506                 jne 0x7ffe6e
// 007ffe68  837e0400             cmp dword ptr [esi + 4], 0
// 007ffe6c  7516                 jne 0x7ffe84
// 007ffe6e  8bce                 mov ecx, esi
// 007ffe70  e8a93fffff           call 0x7f3e1e
// 007ffe75  8d442448             lea eax, [esp + 0x48]
// 007ffe79  50                   push eax
// 007ffe7a  ffd3                 call ebx
// 007ffe7c  50                   push eax
// 007ffe7d  8bce                 mov ecx, esi
// 007ffe7f  e8a63fffff           call 0x7f3e2a
// 007ffe84  83bfb800000000       cmp dword ptr [edi + 0xb8], 0
// 007ffe8b  8db7b0000000         lea esi, [edi + 0xb0]
// 007ffe91  c7442458bc020000     mov dword ptr [esp + 0x58], 0x2bc
// 007ffe99  7506                 jne 0x7ffea1
// 007ffe9b  837e0400             cmp dword ptr [esi + 4], 0
// 007ffe9f  7516                 jne 0x7ffeb7
// 007ffea1  8bce                 mov ecx, esi
// 007ffea3  e8763fffff           call 0x7f3e1e
// 007ffea8  8d4c2448             lea ecx, [esp + 0x48]
// 007ffeac  51                   push ecx
// 007ffead  ffd3                 call ebx
// 007ffeaf  50                   push eax
// 007ffeb0  8bce                 mov ecx, esi
// 007ffeb2  e8733fffff           call 0x7f3e2a
// 007ffeb7  83bfc400000000       cmp dword ptr [edi + 0xc4], 0
// 007ffebe  8db7bc000000         lea esi, [edi + 0xbc]
// 007ffec4  7506                 jne 0x7ffecc
// 007ffec6  837e0400             cmp dword ptr [esi + 4], 0
// 007ffeca  7519                 jne 0x7ffee5
// 007ffecc  8bce                 mov ecx, esi
// 007ffece  e84b3fffff           call 0x7f3e1e
// 007ffed3  8d942460010000       lea edx, [esp + 0x160]
// 007ffeda  52                   push edx
// 007ffedb  ffd3                 call ebx
// 007ffedd  50                   push eax
// 007ffede  8bce                 mov ecx, esi
// 007ffee0  e8453fffff           call 0x7f3e2a
// 007ffee5  8b8c24d8010000       mov ecx, dword ptr [esp + 0x1d8]
// 007ffeec  5f                   pop edi
// 007ffeed  5e                   pop esi
// 007ffeee  5b                   pop ebx
// 007ffeef  33cc                 xor ecx, esp
// 007ffef1  e8a454ffff           call 0x7f539a
// 007ffef6  81c4d0010000         add esp, 0x1d0
// 007ffefc  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp