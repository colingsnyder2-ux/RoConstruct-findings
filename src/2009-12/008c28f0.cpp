// roc 2009-12 008c28f0  unit: CXTPImageEditorDlg  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c28f0
//
// 008c28f0  6aff                 push -1
// 008c28f2  684c409600           push 0x96404c
// 008c28f7  64a100000000         mov eax, dword ptr fs:[0]
// 008c28fd  50                   push eax
// 008c28fe  81ec08010000         sub esp, 0x108
// 008c2904  a10052b600           mov eax, dword ptr [0xb65200]
// 008c2909  33c4                 xor eax, esp
// 008c290b  89842404010000       mov dword ptr [esp + 0x104], eax
// 008c2912  53                   push ebx
// 008c2913  56                   push esi
// 008c2914  57                   push edi
// 008c2915  a10052b600           mov eax, dword ptr [0xb65200]
// 008c291a  33c4                 xor eax, esp
// 008c291c  50                   push eax
// 008c291d  8d842418010000       lea eax, [esp + 0x118]
// 008c2924  64a300000000         mov dword ptr fs:[0], eax
// 008c292a  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 008c2931  8b9c2430010000       mov ebx, dword ptr [esp + 0x130]
// 008c2938  8d4c2410             lea ecx, [esp + 0x10]
// 008c293c  ff1574de9800         call dword ptr [0x98de74]
// 008c2942  8b4704               mov eax, dword ptr [edi + 4]
// 008c2945  c784242001000000000000 mov dword ptr [esp + 0x120], 0
// 008c2950  85c0                 test eax, eax
// 008c2952  7438                 je 0x8c298c
// 008c2954  6800010000           push 0x100
// 008c2959  8d4c2418             lea ecx, [esp + 0x18]
// 008c295d  51                   push ecx
// 008c295e  50                   push eax
// 008c295f  e8b4430600           call 0x926d18
// 008c2964  85c0                 test eax, eax
// 008c2966  7511                 jne 0x8c2979
// 008c2968  8d4c2410             lea ecx, [esp + 0x10]
// 008c296c  ff15c0de9800         call dword ptr [0x98dec0]
// 008c2972  33c0                 xor eax, eax
// 008c2974  e99d000000           jmp 0x8c2a16
// 008c2979  6a0a                 push 0xa
// 008c297b  6a01                 push 1
// 008c297d  8d54241c             lea edx, [esp + 0x1c]
// 008c2981  52                   push edx
// 008c2982  8d44241c             lea eax, [esp + 0x1c]
// 008c2986  50                   push eax
// 008c2987  e8923a0600           call 0x92641e
// 008c298c  817f08f8fdffff       cmp dword ptr [edi + 8], 0xfffffdf8
// 008c2993  8d4c2410             lea ecx, [esp + 0x10]
// 008c2997  7515                 jne 0x8c29ae
// 008c2999  6a50                 push 0x50
// 008c299b  ff1580de9800         call dword ptr [0x98de80]
// 008c29a1  50                   push eax
// 008c29a2  8d4f10               lea ecx, [edi + 0x10]
// 008c29a5  51                   push ecx
// 008c29a6  ff1528b39800         call dword ptr [0x98b328]
// 008c29ac  eb3b                 jmp 0x8c29e9
// 008c29ae  ff1580de9800         call dword ptr [0x98de80]
// 008c29b4  6a50                 push 0x50
// 008c29b6  8d7710               lea esi, [edi + 0x10]
// 008c29b9  56                   push esi
// 008c29ba  6aff                 push -1
// 008c29bc  50                   push eax
// 008c29bd  6a00                 push 0
// 008c29bf  6a03                 push 3
// 008c29c1  ff1540b29800         call dword ptr [0x98b240]
// 008c29c7  85f6                 test esi, esi
// 008c29c9  740f                 je 0x8c29da
// 008c29cb  83f850               cmp eax, 0x50
// 008c29ce  7e0a                 jle 0x8c29da
// 008c29d0  6805400080           push 0x80004005
// 008c29d5  e8a601b4ff           call 0x402b80
// 008c29da  85c0                 test eax, eax
// 008c29dc  7e0b                 jle 0x8c29e9
// 008c29de  85f6                 test esi, esi
// 008c29e0  7407                 je 0x8c29e9
// 008c29e2  33d2                 xor edx, edx
// 008c29e4  66895446fe           mov word ptr [esi + eax*2 - 2], dx
// 008c29e9  6813020000           push 0x213
// 008c29ee  6a00                 push 0
// 008c29f0  6a00                 push 0
// 008c29f2  6a00                 push 0
// 008c29f4  6a00                 push 0
// 008c29f6  c70300000000         mov dword ptr [ebx], 0
// 008c29fc  8b07                 mov eax, dword ptr [edi]
// 008c29fe  6a00                 push 0
// 008c2a00  50                   push eax
// 008c2a01  ff15e0c99800         call dword ptr [0x98c9e0]
// 008c2a07  8d4c2410             lea ecx, [esp + 0x10]
// 008c2a0b  ff15c0de9800         call dword ptr [0x98dec0]
// 008c2a11  b801000000           mov eax, 1
// 008c2a16  8b8c2418010000       mov ecx, dword ptr [esp + 0x118]
// 008c2a1d  64890d00000000       mov dword ptr fs:[0], ecx
// 008c2a24  59                   pop ecx
// 008c2a25  5f                   pop edi
// 008c2a26  5e                   pop esi
// 008c2a27  5b                   pop ebx
// 008c2a28  8b8c2404010000       mov ecx, dword ptr [esp + 0x104]
// 008c2a2f  33cc                 xor ecx, esp
// 008c2a31  e86429f3ff           call 0x7f539a
// 008c2a36  81c414010000         add esp, 0x114
// 008c2a3c  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolTipText@CXTPImageEditorDlg@@IAEHIPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPImageEditor.cpp