// roc 2012-06 00989f10  unit: CXTPPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00989f10
//
// 00989f10  81ecd0010000         sub esp, 0x1d0
// 00989f16  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00989f1b  33c4                 xor eax, esp
// 00989f1d  898424cc010000       mov dword ptr [esp + 0x1cc], eax
// 00989f24  53                   push ebx
// 00989f25  56                   push esi
// 00989f26  57                   push edi
// 00989f27  8bf9                 mov edi, ecx
// 00989f29  8d8c2484000000       lea ecx, [esp + 0x84]
// 00989f30  e84b350600           call 0x9ed480
// 00989f35  837f7400             cmp dword ptr [edi + 0x74], 0
// 00989f39  740d                 je 0x989f48
// 00989f3b  e8b0e50600           call 0x9f84f0
// 00989f40  8b400c               mov eax, dword ptr [eax + 0xc]
// 00989f43  8a5818               mov bl, byte ptr [eax + 0x18]
// 00989f46  eb07                 jmp 0x989f4f
// 00989f48  8a9c243b010000       mov bl, byte ptr [esp + 0x13b]
// 00989f4f  83bf2001000000       cmp dword ptr [edi + 0x120], 0
// 00989f56  0f848b000000         je 0x989fe7
// 00989f5c  8d4c240c             lea ecx, [esp + 0xc]
// 00989f60  e8cbd8ffff           call 0x987830
// 00989f65  8b842424010000       mov eax, dword ptr [esp + 0x124]
// 00989f6c  85c0                 test eax, eax
// 00989f6e  7d0d                 jge 0x989f7d
// 00989f70  83f8f5               cmp eax, -0xb
// 00989f73  c744240cf5ffffff     mov dword ptr [esp + 0xc], 0xfffffff5
// 00989f7b  7f04                 jg 0x989f81
// 00989f7d  8944240c             mov dword ptr [esp + 0xc], eax
// 00989f81  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00989f88  8a942438010000       mov dl, byte ptr [esp + 0x138]
// 00989f8f  8a84243e010000       mov al, byte ptr [esp + 0x13e]
// 00989f96  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00989f9a  8d8c2440010000       lea ecx, [esp + 0x140]
// 00989fa1  51                   push ecx
// 00989fa2  88542424             mov byte ptr [esp + 0x24], dl
// 00989fa6  8d54242c             lea edx, [esp + 0x2c]
// 00989faa  6a20                 push 0x20
// 00989fac  52                   push edx
// 00989fad  885c242f             mov byte ptr [esp + 0x2f], bl
// 00989fb1  88442432             mov byte ptr [esp + 0x32], al
// 00989fb5  ff15d82ab200         call dword ptr [0xb22ad8]
// 00989fbb  83c40c               add esp, 0xc
// 00989fbe  837f7000             cmp dword ptr [edi + 0x70], 0
// 00989fc2  7415                 je 0x989fd9
// 00989fc4  e8c7f50300           call 0x9c9590
// 00989fc9  8bc8                 mov ecx, eax
// 00989fcb  e8f0fe0300           call 0x9c9ec0
// 00989fd0  85c0                 test eax, eax
// 00989fd2  7405                 je 0x989fd9
// 00989fd4  c644242605           mov byte ptr [esp + 0x26], 5
// 00989fd9  6a01                 push 1
// 00989fdb  8d442410             lea eax, [esp + 0x10]
// 00989fdf  50                   push eax
// 00989fe0  8bcf                 mov ecx, edi
// 00989fe2  e819fdffff           call 0x989d00
// 00989fe7  6a00                 push 0
// 00989fe9  8d4c244c             lea ecx, [esp + 0x4c]
// 00989fed  51                   push ecx
// 00989fee  6a3c                 push 0x3c
// 00989ff0  6a1f                 push 0x1f
// 00989ff2  ff15543ab200         call dword ptr [0xb23a54]
// 00989ff8  837f7000             cmp dword ptr [edi + 0x70], 0
// 00989ffc  7425                 je 0x98a023
// 00989ffe  e88df50300           call 0x9c9590
// 0098a003  8bc8                 mov ecx, eax
// 0098a005  e8b6fe0300           call 0x9c9ec0
// 0098a00a  85c0                 test eax, eax
// 0098a00c  7415                 je 0x98a023
// 0098a00e  c644246205           mov byte ptr [esp + 0x62], 5
// 0098a013  c68424fa00000005     mov byte ptr [esp + 0xfa], 5
// 0098a01b  c684247a01000005     mov byte ptr [esp + 0x17a], 5
// 0098a023  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 0098a02a  8db798000000         lea esi, [edi + 0x98]
// 0098a030  885c245f             mov byte ptr [esp + 0x5f], bl
// 0098a034  889c24f7000000       mov byte ptr [esp + 0xf7], bl
// 0098a03b  889c2477010000       mov byte ptr [esp + 0x177], bl
// 0098a042  8b1da820b200         mov ebx, dword ptr [0xb220a8]
// 0098a048  7506                 jne 0x98a050
// 0098a04a  837e0400             cmp dword ptr [esi + 4], 0
// 0098a04e  7519                 jne 0x98a069
// 0098a050  8bce                 mov ecx, esi
// 0098a052  e87586ffff           call 0x9826cc
// 0098a057  8d9424e0000000       lea edx, [esp + 0xe0]
// 0098a05e  52                   push edx
// 0098a05f  ffd3                 call ebx
// 0098a061  50                   push eax
// 0098a062  8bce                 mov ecx, esi
// 0098a064  e86f86ffff           call 0x9826d8
// 0098a069  83bfac00000000       cmp dword ptr [edi + 0xac], 0
// 0098a070  8db7a4000000         lea esi, [edi + 0xa4]
// 0098a076  7506                 jne 0x98a07e
// 0098a078  837e0400             cmp dword ptr [esi + 4], 0
// 0098a07c  7516                 jne 0x98a094
// 0098a07e  8bce                 mov ecx, esi
// 0098a080  e84786ffff           call 0x9826cc
// 0098a085  8d442448             lea eax, [esp + 0x48]
// 0098a089  50                   push eax
// 0098a08a  ffd3                 call ebx
// 0098a08c  50                   push eax
// 0098a08d  8bce                 mov ecx, esi
// 0098a08f  e84486ffff           call 0x9826d8
// 0098a094  83bfb800000000       cmp dword ptr [edi + 0xb8], 0
// 0098a09b  8db7b0000000         lea esi, [edi + 0xb0]
// 0098a0a1  c7442458bc020000     mov dword ptr [esp + 0x58], 0x2bc
// 0098a0a9  7506                 jne 0x98a0b1
// 0098a0ab  837e0400             cmp dword ptr [esi + 4], 0
// 0098a0af  7516                 jne 0x98a0c7
// 0098a0b1  8bce                 mov ecx, esi
// 0098a0b3  e81486ffff           call 0x9826cc
// 0098a0b8  8d4c2448             lea ecx, [esp + 0x48]
// 0098a0bc  51                   push ecx
// 0098a0bd  ffd3                 call ebx
// 0098a0bf  50                   push eax
// 0098a0c0  8bce                 mov ecx, esi
// 0098a0c2  e81186ffff           call 0x9826d8
// 0098a0c7  83bfc400000000       cmp dword ptr [edi + 0xc4], 0
// 0098a0ce  8db7bc000000         lea esi, [edi + 0xbc]
// 0098a0d4  7506                 jne 0x98a0dc
// 0098a0d6  837e0400             cmp dword ptr [esi + 4], 0
// 0098a0da  7519                 jne 0x98a0f5
// 0098a0dc  8bce                 mov ecx, esi
// 0098a0de  e8e985ffff           call 0x9826cc
// 0098a0e3  8d942460010000       lea edx, [esp + 0x160]
// 0098a0ea  52                   push edx
// 0098a0eb  ffd3                 call ebx
// 0098a0ed  50                   push eax
// 0098a0ee  8bce                 mov ecx, esi
// 0098a0f0  e8e385ffff           call 0x9826d8
// 0098a0f5  8b8c24d8010000       mov ecx, dword ptr [esp + 0x1d8]
// 0098a0fc  5f                   pop edi
// 0098a0fd  5e                   pop esi
// 0098a0fe  5b                   pop ebx
// 0098a0ff  33cc                 xor ecx, esp
// 0098a101  e83199ffff           call 0x983a37
// 0098a106  81c4d0010000         add esp, 0x1d0
// 0098a10c  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp