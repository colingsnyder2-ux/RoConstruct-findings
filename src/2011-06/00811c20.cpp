// roc 2011-06 00811c20  unit: CXTPPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00811c20
//
// 00811c20  81ecd0010000         sub esp, 0x1d0
// 00811c26  a12058c900           mov eax, dword ptr [0xc95820]
// 00811c2b  33c4                 xor eax, esp
// 00811c2d  898424cc010000       mov dword ptr [esp + 0x1cc], eax
// 00811c34  53                   push ebx
// 00811c35  56                   push esi
// 00811c36  57                   push edi
// 00811c37  8bf9                 mov edi, ecx
// 00811c39  8d8c2484000000       lea ecx, [esp + 0x84]
// 00811c40  e8fbd8ffff           call 0x80f540
// 00811c45  837f7400             cmp dword ptr [edi + 0x74], 0
// 00811c49  740d                 je 0x811c58
// 00811c4b  e8f0e20600           call 0x87ff40
// 00811c50  8b400c               mov eax, dword ptr [eax + 0xc]
// 00811c53  8a5818               mov bl, byte ptr [eax + 0x18]
// 00811c56  eb07                 jmp 0x811c5f
// 00811c58  8a9c243b010000       mov bl, byte ptr [esp + 0x13b]
// 00811c5f  83bf2001000000       cmp dword ptr [edi + 0x120], 0
// 00811c66  0f848b000000         je 0x811cf7
// 00811c6c  8d4c240c             lea ecx, [esp + 0xc]
// 00811c70  e8abd8ffff           call 0x80f520
// 00811c75  8b842424010000       mov eax, dword ptr [esp + 0x124]
// 00811c7c  85c0                 test eax, eax
// 00811c7e  7d0d                 jge 0x811c8d
// 00811c80  83f8f5               cmp eax, -0xb
// 00811c83  c744240cf5ffffff     mov dword ptr [esp + 0xc], 0xfffffff5
// 00811c8b  7f04                 jg 0x811c91
// 00811c8d  8944240c             mov dword ptr [esp + 0xc], eax
// 00811c91  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00811c98  8a942438010000       mov dl, byte ptr [esp + 0x138]
// 00811c9f  8a84243e010000       mov al, byte ptr [esp + 0x13e]
// 00811ca6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00811caa  8d8c2440010000       lea ecx, [esp + 0x140]
// 00811cb1  51                   push ecx
// 00811cb2  88542424             mov byte ptr [esp + 0x24], dl
// 00811cb6  8d54242c             lea edx, [esp + 0x2c]
// 00811cba  6a20                 push 0x20
// 00811cbc  52                   push edx
// 00811cbd  885c242f             mov byte ptr [esp + 0x2f], bl
// 00811cc1  88442432             mov byte ptr [esp + 0x32], al
// 00811cc5  ff15dc09a400         call dword ptr [0xa409dc]
// 00811ccb  83c40c               add esp, 0xc
// 00811cce  837f7000             cmp dword ptr [edi + 0x70], 0
// 00811cd2  7415                 je 0x811ce9
// 00811cd4  e8e7f30300           call 0x8510c0
// 00811cd9  8bc8                 mov ecx, eax
// 00811cdb  e820fd0300           call 0x851a00
// 00811ce0  85c0                 test eax, eax
// 00811ce2  7405                 je 0x811ce9
// 00811ce4  c644242605           mov byte ptr [esp + 0x26], 5
// 00811ce9  6a01                 push 1
// 00811ceb  8d442410             lea eax, [esp + 0x10]
// 00811cef  50                   push eax
// 00811cf0  8bcf                 mov ecx, edi
// 00811cf2  e819fdffff           call 0x811a10
// 00811cf7  6a00                 push 0
// 00811cf9  8d4c244c             lea ecx, [esp + 0x4c]
// 00811cfd  51                   push ecx
// 00811cfe  6a3c                 push 0x3c
// 00811d00  6a1f                 push 0x1f
// 00811d02  ff155c1ba400         call dword ptr [0xa41b5c]
// 00811d08  837f7000             cmp dword ptr [edi + 0x70], 0
// 00811d0c  7425                 je 0x811d33
// 00811d0e  e8adf30300           call 0x8510c0
// 00811d13  8bc8                 mov ecx, eax
// 00811d15  e8e6fc0300           call 0x851a00
// 00811d1a  85c0                 test eax, eax
// 00811d1c  7415                 je 0x811d33
// 00811d1e  c644246205           mov byte ptr [esp + 0x62], 5
// 00811d23  c68424fa00000005     mov byte ptr [esp + 0xfa], 5
// 00811d2b  c684247a01000005     mov byte ptr [esp + 0x17a], 5
// 00811d33  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00811d3a  8db798000000         lea esi, [edi + 0x98]
// 00811d40  885c245f             mov byte ptr [esp + 0x5f], bl
// 00811d44  889c24f7000000       mov byte ptr [esp + 0xf7], bl
// 00811d4b  889c2477010000       mov byte ptr [esp + 0x177], bl
// 00811d52  8b1d2001a400         mov ebx, dword ptr [0xa40120]
// 00811d58  7506                 jne 0x811d60
// 00811d5a  837e0400             cmp dword ptr [esi + 4], 0
// 00811d5e  7519                 jne 0x811d79
// 00811d60  8bce                 mov ecx, esi
// 00811d62  e8b588ffff           call 0x80a61c
// 00811d67  8d9424e0000000       lea edx, [esp + 0xe0]
// 00811d6e  52                   push edx
// 00811d6f  ffd3                 call ebx
// 00811d71  50                   push eax
// 00811d72  8bce                 mov ecx, esi
// 00811d74  e8af88ffff           call 0x80a628
// 00811d79  83bfac00000000       cmp dword ptr [edi + 0xac], 0
// 00811d80  8db7a4000000         lea esi, [edi + 0xa4]
// 00811d86  7506                 jne 0x811d8e
// 00811d88  837e0400             cmp dword ptr [esi + 4], 0
// 00811d8c  7516                 jne 0x811da4
// 00811d8e  8bce                 mov ecx, esi
// 00811d90  e88788ffff           call 0x80a61c
// 00811d95  8d442448             lea eax, [esp + 0x48]
// 00811d99  50                   push eax
// 00811d9a  ffd3                 call ebx
// 00811d9c  50                   push eax
// 00811d9d  8bce                 mov ecx, esi
// 00811d9f  e88488ffff           call 0x80a628
// 00811da4  83bfb800000000       cmp dword ptr [edi + 0xb8], 0
// 00811dab  8db7b0000000         lea esi, [edi + 0xb0]
// 00811db1  c7442458bc020000     mov dword ptr [esp + 0x58], 0x2bc
// 00811db9  7506                 jne 0x811dc1
// 00811dbb  837e0400             cmp dword ptr [esi + 4], 0
// 00811dbf  7516                 jne 0x811dd7
// 00811dc1  8bce                 mov ecx, esi
// 00811dc3  e85488ffff           call 0x80a61c
// 00811dc8  8d4c2448             lea ecx, [esp + 0x48]
// 00811dcc  51                   push ecx
// 00811dcd  ffd3                 call ebx
// 00811dcf  50                   push eax
// 00811dd0  8bce                 mov ecx, esi
// 00811dd2  e85188ffff           call 0x80a628
// 00811dd7  83bfc400000000       cmp dword ptr [edi + 0xc4], 0
// 00811dde  8db7bc000000         lea esi, [edi + 0xbc]
// 00811de4  7506                 jne 0x811dec
// 00811de6  837e0400             cmp dword ptr [esi + 4], 0
// 00811dea  7519                 jne 0x811e05
// 00811dec  8bce                 mov ecx, esi
// 00811dee  e82988ffff           call 0x80a61c
// 00811df3  8d942460010000       lea edx, [esp + 0x160]
// 00811dfa  52                   push edx
// 00811dfb  ffd3                 call ebx
// 00811dfd  50                   push eax
// 00811dfe  8bce                 mov ecx, esi
// 00811e00  e82388ffff           call 0x80a628
// 00811e05  8b8c24d8010000       mov ecx, dword ptr [esp + 0x1d8]
// 00811e0c  5f                   pop edi
// 00811e0d  5e                   pop esi
// 00811e0e  5b                   pop ebx
// 00811e0f  33cc                 xor ecx, esp
// 00811e11  e8e19affff           call 0x80b8f7
// 00811e16  81c4d0010000         add esp, 0x1d0
// 00811e1c  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp