// roc 2010-06 007af810  unit: CXTPPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007af810
//
// 007af810  81ecd0010000         sub esp, 0x1d0
// 007af816  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007af81b  33c4                 xor eax, esp
// 007af81d  898424cc010000       mov dword ptr [esp + 0x1cc], eax
// 007af824  53                   push ebx
// 007af825  56                   push esi
// 007af826  57                   push edi
// 007af827  8bf9                 mov edi, ecx
// 007af829  8d8c2484000000       lea ecx, [esp + 0x84]
// 007af830  e8bb7e0600           call 0x8176f0
// 007af835  837f7400             cmp dword ptr [edi + 0x74], 0
// 007af839  740d                 je 0x7af848
// 007af83b  e870300700           call 0x8228b0
// 007af840  8b400c               mov eax, dword ptr [eax + 0xc]
// 007af843  8a5818               mov bl, byte ptr [eax + 0x18]
// 007af846  eb07                 jmp 0x7af84f
// 007af848  8a9c243b010000       mov bl, byte ptr [esp + 0x13b]
// 007af84f  83bf2001000000       cmp dword ptr [edi + 0x120], 0
// 007af856  0f848b000000         je 0x7af8e7
// 007af85c  8d4c240c             lea ecx, [esp + 0xc]
// 007af860  e84bd8ffff           call 0x7ad0b0
// 007af865  8b842424010000       mov eax, dword ptr [esp + 0x124]
// 007af86c  85c0                 test eax, eax
// 007af86e  7d0d                 jge 0x7af87d
// 007af870  83f8f5               cmp eax, -0xb
// 007af873  c744240cf5ffffff     mov dword ptr [esp + 0xc], 0xfffffff5
// 007af87b  7f04                 jg 0x7af881
// 007af87d  8944240c             mov dword ptr [esp + 0xc], eax
// 007af881  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 007af888  8a942438010000       mov dl, byte ptr [esp + 0x138]
// 007af88f  8a84243e010000       mov al, byte ptr [esp + 0x13e]
// 007af896  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007af89a  8d8c2440010000       lea ecx, [esp + 0x140]
// 007af8a1  51                   push ecx
// 007af8a2  88542424             mov byte ptr [esp + 0x24], dl
// 007af8a6  8d54242c             lea edx, [esp + 0x2c]
// 007af8aa  6a20                 push 0x20
// 007af8ac  52                   push edx
// 007af8ad  885c242f             mov byte ptr [esp + 0x2f], bl
// 007af8b1  88442432             mov byte ptr [esp + 0x32], al
// 007af8b5  ff1578a89e00         call dword ptr [0x9ea878]
// 007af8bb  83c40c               add esp, 0xc
// 007af8be  837f7000             cmp dword ptr [edi + 0x70], 0
// 007af8c2  7415                 je 0x7af8d9
// 007af8c4  e8a7ff0300           call 0x7ef870
// 007af8c9  8bc8                 mov ecx, eax
// 007af8cb  e8f0080400           call 0x7f01c0
// 007af8d0  85c0                 test eax, eax
// 007af8d2  7405                 je 0x7af8d9
// 007af8d4  c644242605           mov byte ptr [esp + 0x26], 5
// 007af8d9  6a01                 push 1
// 007af8db  8d442410             lea eax, [esp + 0x10]
// 007af8df  50                   push eax
// 007af8e0  8bcf                 mov ecx, edi
// 007af8e2  e819fdffff           call 0x7af600
// 007af8e7  6a00                 push 0
// 007af8e9  8d4c244c             lea ecx, [esp + 0x4c]
// 007af8ed  51                   push ecx
// 007af8ee  6a3c                 push 0x3c
// 007af8f0  6a1f                 push 0x1f
// 007af8f2  ff1594ba9e00         call dword ptr [0x9eba94]
// 007af8f8  837f7000             cmp dword ptr [edi + 0x70], 0
// 007af8fc  7425                 je 0x7af923
// 007af8fe  e86dff0300           call 0x7ef870
// 007af903  8bc8                 mov ecx, eax
// 007af905  e8b6080400           call 0x7f01c0
// 007af90a  85c0                 test eax, eax
// 007af90c  7415                 je 0x7af923
// 007af90e  c644246205           mov byte ptr [esp + 0x62], 5
// 007af913  c68424fa00000005     mov byte ptr [esp + 0xfa], 5
// 007af91b  c684247a01000005     mov byte ptr [esp + 0x17a], 5
// 007af923  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007af92a  8db798000000         lea esi, [edi + 0x98]
// 007af930  885c245f             mov byte ptr [esp + 0x5f], bl
// 007af934  889c24f7000000       mov byte ptr [esp + 0xf7], bl
// 007af93b  889c2477010000       mov byte ptr [esp + 0x177], bl
// 007af942  8b1d70a19e00         mov ebx, dword ptr [0x9ea170]
// 007af948  7506                 jne 0x7af950
// 007af94a  837e0400             cmp dword ptr [esi + 4], 0
// 007af94e  7519                 jne 0x7af969
// 007af950  8bce                 mov ecx, esi
// 007af952  e80786ffff           call 0x7a7f5e
// 007af957  8d9424e0000000       lea edx, [esp + 0xe0]
// 007af95e  52                   push edx
// 007af95f  ffd3                 call ebx
// 007af961  50                   push eax
// 007af962  8bce                 mov ecx, esi
// 007af964  e80186ffff           call 0x7a7f6a
// 007af969  83bfac00000000       cmp dword ptr [edi + 0xac], 0
// 007af970  8db7a4000000         lea esi, [edi + 0xa4]
// 007af976  7506                 jne 0x7af97e
// 007af978  837e0400             cmp dword ptr [esi + 4], 0
// 007af97c  7516                 jne 0x7af994
// 007af97e  8bce                 mov ecx, esi
// 007af980  e8d985ffff           call 0x7a7f5e
// 007af985  8d442448             lea eax, [esp + 0x48]
// 007af989  50                   push eax
// 007af98a  ffd3                 call ebx
// 007af98c  50                   push eax
// 007af98d  8bce                 mov ecx, esi
// 007af98f  e8d685ffff           call 0x7a7f6a
// 007af994  83bfb800000000       cmp dword ptr [edi + 0xb8], 0
// 007af99b  8db7b0000000         lea esi, [edi + 0xb0]
// 007af9a1  c7442458bc020000     mov dword ptr [esp + 0x58], 0x2bc
// 007af9a9  7506                 jne 0x7af9b1
// 007af9ab  837e0400             cmp dword ptr [esi + 4], 0
// 007af9af  7516                 jne 0x7af9c7
// 007af9b1  8bce                 mov ecx, esi
// 007af9b3  e8a685ffff           call 0x7a7f5e
// 007af9b8  8d4c2448             lea ecx, [esp + 0x48]
// 007af9bc  51                   push ecx
// 007af9bd  ffd3                 call ebx
// 007af9bf  50                   push eax
// 007af9c0  8bce                 mov ecx, esi
// 007af9c2  e8a385ffff           call 0x7a7f6a
// 007af9c7  83bfc400000000       cmp dword ptr [edi + 0xc4], 0
// 007af9ce  8db7bc000000         lea esi, [edi + 0xbc]
// 007af9d4  7506                 jne 0x7af9dc
// 007af9d6  837e0400             cmp dword ptr [esi + 4], 0
// 007af9da  7519                 jne 0x7af9f5
// 007af9dc  8bce                 mov ecx, esi
// 007af9de  e87b85ffff           call 0x7a7f5e
// 007af9e3  8d942460010000       lea edx, [esp + 0x160]
// 007af9ea  52                   push edx
// 007af9eb  ffd3                 call ebx
// 007af9ed  50                   push eax
// 007af9ee  8bce                 mov ecx, esi
// 007af9f0  e87585ffff           call 0x7a7f6a
// 007af9f5  8b8c24d8010000       mov ecx, dword ptr [esp + 0x1d8]
// 007af9fc  5f                   pop edi
// 007af9fd  5e                   pop esi
// 007af9fe  5b                   pop ebx
// 007af9ff  33cc                 xor ecx, esp
// 007afa01  e8ce9affff           call 0x7a94d4
// 007afa06  81c4d0010000         add esp, 0x1d0
// 007afa0c  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp