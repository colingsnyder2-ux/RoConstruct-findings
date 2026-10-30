// roc 2007-08 005ca0c0  unit: seg_005c0000  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca0c0
//
// 005ca0c0  56                   push esi
// 005ca0c1  57                   push edi
// 005ca0c2  53                   push ebx
// 005ca0c3  8bf0                 mov esi, eax
// 005ca0c5  ff1540e97700         call dword ptr [0x77e940]
// 005ca0cb  83c09f               add eax, -0x61
// 005ca0ce  83c404               add esp, 4
// 005ca0d1  83f819               cmp eax, 0x19
// 005ca0d4  0f87b0000000         ja 0x5ca18a
// 005ca0da  0fb680c0a15c00       movzx eax, byte ptr [eax + 0x5ca1c0]
// 005ca0e1  8b3df4e77700         mov edi, dword ptr [0x77e7f4]
// 005ca0e7  ff248594a15c00       jmp dword ptr [eax*4 + 0x5ca194]
// 005ca0ee  56                   push esi
// 005ca0ef  ff15c0e67700         call dword ptr [0x77e6c0]
// 005ca0f5  83c404               add esp, 4
// 005ca0f8  8bf0                 mov esi, eax
// 005ca0fa  eb75                 jmp 0x5ca171
// 005ca0fc  56                   push esi
// 005ca0fd  ff15f8e77700         call dword ptr [0x77e7f8]
// 005ca103  83c404               add esp, 4
// 005ca106  8bf0                 mov esi, eax
// 005ca108  eb67                 jmp 0x5ca171
// 005ca10a  56                   push esi
// 005ca10b  ff159ce87700         call dword ptr [0x77e89c]
// 005ca111  83c404               add esp, 4
// 005ca114  8bf0                 mov esi, eax
// 005ca116  eb59                 jmp 0x5ca171
// 005ca118  56                   push esi
// 005ca119  ffd7                 call edi
// 005ca11b  83c404               add esp, 4
// 005ca11e  8bf0                 mov esi, eax
// 005ca120  eb4f                 jmp 0x5ca171
// 005ca122  56                   push esi
// 005ca123  ff154ce87700         call dword ptr [0x77e84c]
// 005ca129  83c404               add esp, 4
// 005ca12c  8bf0                 mov esi, eax
// 005ca12e  eb41                 jmp 0x5ca171
// 005ca130  56                   push esi
// 005ca131  ff159ce97700         call dword ptr [0x77e99c]
// 005ca137  83c404               add esp, 4
// 005ca13a  8bf0                 mov esi, eax
// 005ca13c  eb33                 jmp 0x5ca171
// 005ca13e  56                   push esi
// 005ca13f  ff15fce77700         call dword ptr [0x77e7fc]
// 005ca145  83c404               add esp, 4
// 005ca148  8bf0                 mov esi, eax
// 005ca14a  eb25                 jmp 0x5ca171
// 005ca14c  56                   push esi
// 005ca14d  ff1500e87700         call dword ptr [0x77e800]
// 005ca153  83c404               add esp, 4
// 005ca156  8bf0                 mov esi, eax
// 005ca158  eb17                 jmp 0x5ca171
// 005ca15a  56                   push esi
// 005ca15b  ff1504e87700         call dword ptr [0x77e804]
// 005ca161  83c404               add esp, 4
// 005ca164  8bf0                 mov esi, eax
// 005ca166  eb09                 jmp 0x5ca171
// 005ca168  33c9                 xor ecx, ecx
// 005ca16a  85f6                 test esi, esi
// 005ca16c  0f94c1               sete cl
// 005ca16f  8bf1                 mov esi, ecx
// 005ca171  53                   push ebx
// 005ca172  ffd7                 call edi
// 005ca174  83c404               add esp, 4
// 005ca177  85c0                 test eax, eax
// 005ca179  7405                 je 0x5ca180
// 005ca17b  5f                   pop edi
// 005ca17c  8bc6                 mov eax, esi
// 005ca17e  5e                   pop esi
// 005ca17f  c3                   ret 
// 005ca180  33c0                 xor eax, eax
// 005ca182  85f6                 test esi, esi
// 005ca184  5f                   pop edi
// 005ca185  0f94c0               sete al
// 005ca188  5e                   pop esi
// 005ca189  c3                   ret 
// 005ca18a  33c0                 xor eax, eax
// 005ca18c  3bde                 cmp ebx, esi
// 005ca18e  5f                   pop edi
// 005ca18f  0f94c0               sete al
// 005ca192  5e                   pop esi
// 005ca193  c3                   ret 
// 005ca194  ee                   out dx, al
// 005ca195  a05c00fca0           mov al, byte ptr [0xa0fc005c]
// 005ca19a  5c                   pop esp
// 005ca19b  000a                 add byte ptr [edx], cl
// 005ca19d  a15c0018a1           mov eax, dword ptr [0xa118005c]
// 005ca1a2  5c                   pop esp
// 005ca1a3  0022                 add byte ptr [edx], ah
// 005ca1a5  a15c0030a1           mov eax, dword ptr [0xa130005c]
// 005ca1aa  5c                   pop esp
// 005ca1ab  003e                 add byte ptr [esi], bh
// 005ca1ad  a15c004ca1           mov eax, dword ptr [0xa14c005c]
// 005ca1b2  5c                   pop esp
// 005ca1b3  005aa1               add byte ptr [edx - 0x5f], bl
// 005ca1b6  5c                   pop esp
// 005ca1b7  0068a1               add byte ptr [eax - 0x5f], ch
// 005ca1ba  5c                   pop esp
// 005ca1bb  008aa15c0000         add byte ptr [edx + 0x5ca1], cl
// 005ca1c1  0a01                 or al, byte ptr [ecx]
// 005ca1c3  020a                 add cl, byte ptr [edx]
// 005ca1c5  0a0a                 or cl, byte ptr [edx]
// 005ca1c7  0a0a                 or cl, byte ptr [edx]
// 005ca1c9  0a0a                 or cl, byte ptr [edx]
// 005ca1cb  030a                 add ecx, dword ptr [edx]
// 005ca1cd  0a0a                 or cl, byte ptr [edx]
// 005ca1cf  040a                 add al, 0xa
// 005ca1d1  0a050a060a07         or al, byte ptr [0x70a060a]
// 005ca1d7  080a                 or byte ptr [edx], cl
// copied from an identical function in another client (function _match_class)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lang: c
// roc-lib: lua-5.1.4-dll lstrlib.c