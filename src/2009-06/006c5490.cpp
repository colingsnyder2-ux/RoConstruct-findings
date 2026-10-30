// roc 2009-06 006c5490  unit: lua_exception  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5490
//
// 006c5490  56                   push esi
// 006c5491  57                   push edi
// 006c5492  53                   push ebx
// 006c5493  8bf0                 mov esi, eax
// 006c5495  ff15f0e88900         call dword ptr [0x89e8f0]
// 006c549b  83c09f               add eax, -0x61
// 006c549e  83c404               add esp, 4
// 006c54a1  83f819               cmp eax, 0x19
// 006c54a4  0f87b0000000         ja 0x6c555a
// 006c54aa  0fb68090556c00       movzx eax, byte ptr [eax + 0x6c5590]
// 006c54b1  8b3dbce78900         mov edi, dword ptr [0x89e7bc]
// 006c54b7  ff248564556c00       jmp dword ptr [eax*4 + 0x6c5564]
// 006c54be  56                   push esi
// 006c54bf  ff15cce88900         call dword ptr [0x89e8cc]
// 006c54c5  83c404               add esp, 4
// 006c54c8  8bf0                 mov esi, eax
// 006c54ca  eb75                 jmp 0x6c5541
// 006c54cc  56                   push esi
// 006c54cd  ff15c0e78900         call dword ptr [0x89e7c0]
// 006c54d3  83c404               add esp, 4
// 006c54d6  8bf0                 mov esi, eax
// 006c54d8  eb67                 jmp 0x6c5541
// 006c54da  56                   push esi
// 006c54db  ff1544e88900         call dword ptr [0x89e844]
// 006c54e1  83c404               add esp, 4
// 006c54e4  8bf0                 mov esi, eax
// 006c54e6  eb59                 jmp 0x6c5541
// 006c54e8  56                   push esi
// 006c54e9  ffd7                 call edi
// 006c54eb  83c404               add esp, 4
// 006c54ee  8bf0                 mov esi, eax
// 006c54f0  eb4f                 jmp 0x6c5541
// 006c54f2  56                   push esi
// 006c54f3  ff15f8e88900         call dword ptr [0x89e8f8]
// 006c54f9  83c404               add esp, 4
// 006c54fc  8bf0                 mov esi, eax
// 006c54fe  eb41                 jmp 0x6c5541
// 006c5500  56                   push esi
// 006c5501  ff15f4e88900         call dword ptr [0x89e8f4]
// 006c5507  83c404               add esp, 4
// 006c550a  8bf0                 mov esi, eax
// 006c550c  eb33                 jmp 0x6c5541
// 006c550e  56                   push esi
// 006c550f  ff15c4e78900         call dword ptr [0x89e7c4]
// 006c5515  83c404               add esp, 4
// 006c5518  8bf0                 mov esi, eax
// 006c551a  eb25                 jmp 0x6c5541
// 006c551c  56                   push esi
// 006c551d  ff15c8e78900         call dword ptr [0x89e7c8]
// 006c5523  83c404               add esp, 4
// 006c5526  8bf0                 mov esi, eax
// 006c5528  eb17                 jmp 0x6c5541
// 006c552a  56                   push esi
// 006c552b  ff15cce78900         call dword ptr [0x89e7cc]
// 006c5531  83c404               add esp, 4
// 006c5534  8bf0                 mov esi, eax
// 006c5536  eb09                 jmp 0x6c5541
// 006c5538  33c9                 xor ecx, ecx
// 006c553a  85f6                 test esi, esi
// 006c553c  0f94c1               sete cl
// 006c553f  8bf1                 mov esi, ecx
// 006c5541  53                   push ebx
// 006c5542  ffd7                 call edi
// 006c5544  83c404               add esp, 4
// 006c5547  85c0                 test eax, eax
// 006c5549  7405                 je 0x6c5550
// 006c554b  5f                   pop edi
// 006c554c  8bc6                 mov eax, esi
// 006c554e  5e                   pop esi
// 006c554f  c3                   ret 
// 006c5550  33c0                 xor eax, eax
// 006c5552  85f6                 test esi, esi
// 006c5554  5f                   pop edi
// 006c5555  0f94c0               sete al
// 006c5558  5e                   pop esi
// 006c5559  c3                   ret 
// 006c555a  33c0                 xor eax, eax
// 006c555c  3bde                 cmp ebx, esi
// 006c555e  5f                   pop edi
// 006c555f  0f94c0               sete al
// 006c5562  5e                   pop esi
// 006c5563  c3                   ret 
// 006c5564  be546c00cc           mov esi, 0xcc006c54
// 006c5569  54                   push esp
// 006c556a  6c                   insb byte ptr es:[edi], dx
// 006c556b  00da                 add dl, bl
// 006c556d  54                   push esp
// 006c556e  6c                   insb byte ptr es:[edi], dx
// 006c556f  00e8                 add al, ch
// 006c5571  54                   push esp
// 006c5572  6c                   insb byte ptr es:[edi], dx
// 006c5573  00f2                 add dl, dh
// 006c5575  54                   push esp
// 006c5576  6c                   insb byte ptr es:[edi], dx
// 006c5577  0000                 add byte ptr [eax], al
// 006c5579  55                   push ebp
// 006c557a  6c                   insb byte ptr es:[edi], dx
// 006c557b  000e                 add byte ptr [esi], cl
// 006c557d  55                   push ebp
// 006c557e  6c                   insb byte ptr es:[edi], dx
// 006c557f  001c556c002a55       add byte ptr [edx*2 + 0x552a006c], bl
// 006c5586  6c                   insb byte ptr es:[edi], dx
// 006c5587  0038                 add byte ptr [eax], bh
// 006c5589  55                   push ebp
// 006c558a  6c                   insb byte ptr es:[edi], dx
// 006c558b  005a55               add byte ptr [edx + 0x55], bl
// 006c558e  6c                   insb byte ptr es:[edi], dx
// 006c558f  0000                 add byte ptr [eax], al
// 006c5591  0a01                 or al, byte ptr [ecx]
// 006c5593  020a                 add cl, byte ptr [edx]
// 006c5595  0a0a                 or cl, byte ptr [edx]
// 006c5597  0a0a                 or cl, byte ptr [edx]
// 006c5599  0a0a                 or cl, byte ptr [edx]
// 006c559b  030a                 add ecx, dword ptr [edx]
// 006c559d  0a0a                 or cl, byte ptr [edx]
// 006c559f  040a                 add al, 0xa
// 006c55a1  0a050a060a07         or al, byte ptr [0x70a060a]
// 006c55a7  080a                 or byte ptr [edx], cl
// copied from an identical function in another client (function _match_class)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lang: c
// roc-lib: lua-5.1.4-dll lstrlib.c