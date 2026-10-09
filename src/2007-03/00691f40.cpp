// roc 2007-03 00691f40  unit: seg_00690000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00691f40
//
// 00691f40  83ec20               sub esp, 0x20
// 00691f43  53                   push ebx
// 00691f44  55                   push ebp
// 00691f45  33ed                 xor ebp, ebp
// 00691f47  396c2444             cmp dword ptr [esp + 0x44], ebp
// 00691f4b  56                   push esi
// 00691f4c  57                   push edi
// 00691f4d  0f84a0000000         je 0x691ff3
// 00691f53  6864097d00           push 0x7d0964
// 00691f58  e8d3420100           call 0x6a6230
// 00691f5d  8bf0                 mov esi, eax
// 00691f5f  3bf5                 cmp esi, ebp
// 00691f61  0f848c000000         je 0x691ff3
// 00691f67  33c0                 xor eax, eax
// 00691f69  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 00691f6d  7507                 jne 0x691f76
// 00691f6f  b803000000           mov eax, 3
// 00691f74  eb12                 jmp 0x691f88
// 00691f76  396c2450             cmp dword ptr [esp + 0x50], ebp
// 00691f7a  740c                 je 0x691f88
// 00691f7c  33c0                 xor eax, eax
// 00691f7e  396c2454             cmp dword ptr [esp + 0x54], ebp
// 00691f82  0f95c0               setne al
// 00691f85  83c001               add eax, 1
// 00691f88  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00691f8c  83f901               cmp ecx, 1
// 00691f8f  7505                 jne 0x691f96
// 00691f91  83c004               add eax, 4
// 00691f94  eb08                 jmp 0x691f9e
// 00691f96  83f902               cmp ecx, 2
// 00691f99  7503                 jne 0x691f9e
// 00691f9b  83c008               add eax, 8
// 00691f9e  6a0c                 push 0xc
// 00691fa0  50                   push eax
// 00691fa1  8d442428             lea eax, [esp + 0x28]
// 00691fa5  50                   push eax
// 00691fa6  8bce                 mov ecx, esi
// 00691fa8  33ff                 xor edi, edi
// 00691faa  33db                 xor ebx, ebx
// 00691fac  896c2428             mov dword ptr [esp + 0x28], ebp
// 00691fb0  e8ab0f0600           call 0x6f2f60
// 00691fb5  83ec10               sub esp, 0x10
// 00691fb8  8bcc                 mov ecx, esp
// 00691fba  8939                 mov dword ptr [ecx], edi
// 00691fbc  895904               mov dword ptr [ecx + 4], ebx
// 00691fbf  896908               mov dword ptr [ecx + 8], ebp
// 00691fc2  83ec10               sub esp, 0x10
// 00691fc5  8bd5                 mov edx, ebp
// 00691fc7  89510c               mov dword ptr [ecx + 0xc], edx
// 00691fca  8b10                 mov edx, dword ptr [eax]
// 00691fcc  8bcc                 mov ecx, esp
// 00691fce  8911                 mov dword ptr [ecx], edx
// 00691fd0  8b5004               mov edx, dword ptr [eax + 4]
// 00691fd3  895104               mov dword ptr [ecx + 4], edx
// 00691fd6  8b5008               mov edx, dword ptr [eax + 8]
// 00691fd9  8b400c               mov eax, dword ptr [eax + 0xc]
// 00691fdc  895108               mov dword ptr [ecx + 8], edx
// 00691fdf  8b542458             mov edx, dword ptr [esp + 0x58]
// 00691fe3  89410c               mov dword ptr [ecx + 0xc], eax
// 00691fe6  8d4c245c             lea ecx, [esp + 0x5c]
// 00691fea  51                   push ecx
// 00691feb  52                   push edx
// 00691fec  8bce                 mov ecx, esi
// 00691fee  e82d080600           call 0x6f2820
// 00691ff3  8b442434             mov eax, dword ptr [esp + 0x34]
// 00691ff7  5f                   pop edi
// 00691ff8  5e                   pop esi
// 00691ff9  5d                   pop ebp
// 00691ffa  c7000d000000         mov dword ptr [eax], 0xd
// 00692000  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00692007  5b                   pop ebx
// 00692008  83c420               add esp, 0x20
// 0069200b  c22c00               ret 0x2c
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlCheckBoxMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
