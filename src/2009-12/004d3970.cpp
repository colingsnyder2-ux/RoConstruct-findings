// roc 2009-12 004d3970  unit: G3D::TextureManager::TextureArgs  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d3970
//
// 004d3970  64a100000000         mov eax, dword ptr fs:[0]
// 004d3976  6aff                 push -1
// 004d3978  68a9e59200           push 0x92e5a9
// 004d397d  50                   push eax
// 004d397e  64892500000000       mov dword ptr fs:[0], esp
// 004d3985  83ec1c               sub esp, 0x1c
// 004d3988  68031f0000           push 0x1f03
// 004d398d  ff150cbc9800         call dword ptr [0x98bc0c]
// 004d3993  685c669b00           push 0x9b665c
// 004d3998  50                   push eax
// 004d3999  ff1514b89800         call dword ptr [0x98b814]
// 004d399f  83c408               add esp, 8
// 004d39a2  85c0                 test eax, eax
// 004d39a4  741b                 je 0x4d39c1
// 004d39a6  833dfcd9b70000       cmp dword ptr [0xb7d9fc], 0
// 004d39ad  7412                 je 0x4d39c1
// 004d39af  833d04dab70000       cmp dword ptr [0xb7da04], 0
// 004d39b6  7409                 je 0x4d39c1
// 004d39b8  833df8d9b70000       cmp dword ptr [0xb7d9f8], 0
// 004d39bf  7516                 jne 0x4d39d7
// 004d39c1  c605b7d0b70000       mov byte ptr [0xb7d0b7], 0
// 004d39c8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d39cc  64890d00000000       mov dword ptr fs:[0], ecx
// 004d39d3  83c428               add esp, 0x28
// 004d39d6  c3                   ret 
// 004d39d7  56                   push esi
// 004d39d8  e883feffff           call 0x4d3860
// 004d39dd  6800f39a00           push 0x9af300
// 004d39e2  8d4c2408             lea ecx, [esp + 8]
// 004d39e6  8bf0                 mov esi, eax
// 004d39e8  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d39ee  8d442404             lea eax, [esp + 4]
// 004d39f2  50                   push eax
// 004d39f3  56                   push esi
// 004d39f4  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004d39fc  e8affa1100           call 0x5f34b0
// 004d3a01  83c408               add esp, 8
// 004d3a04  8d4c2404             lea ecx, [esp + 4]
// 004d3a08  a2b7d0b700           mov byte ptr [0xb7d0b7], al
// 004d3a0d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004d3a15  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d3a1b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d3a1f  5e                   pop esi
// 004d3a20  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3a27  83c428               add esp, 0x28
// 004d3a2a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_slowVBO@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
