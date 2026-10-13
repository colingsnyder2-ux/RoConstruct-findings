// from server: 100% by colin
// roc 2008-06 0052a340  unit: seg_00520000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a340
//
// 0052a340  8b442404             mov eax, dword ptr [esp + 4]
// 0052a344  81ec6c020000         sub esp, 0x26c
// 0052a34a  56                   push esi
// 0052a34b  83f802               cmp eax, 2
// 0052a34e  7507                 jne 0x52a357
// 0052a350  be20010000           mov esi, 0x120
// 0052a355  eb0a                 jmp 0x52a361
// 0052a357  83f801               cmp eax, 1
// 0052a35a  7552                 jne 0x52a3ae
// 0052a35c  be6c020000           mov esi, 0x26c
// 0052a361  8b842478020000       mov eax, dword ptr [esp + 0x278]
// 0052a368  57                   push edi
// 0052a369  56                   push esi
// 0052a36a  85c0                 test eax, eax
// 0052a36c  741a                 je 0x52a388
// 0052a36e  8b8c2484020000       mov ecx, dword ptr [esp + 0x284]
// 0052a375  8d54240c             lea edx, [esp + 0xc]
// 0052a379  52                   push edx
// 0052a37a  898c2454020000       mov dword ptr [esp + 0x254], ecx
// 0052a381  ffd0                 call eax
// 0052a383  83c408               add esp, 8
// 0052a386  eb09                 jmp 0x52a391
// 0052a388  ff15b0288000         call dword ptr [0x8028b0]
// 0052a38e  83c404               add esp, 4
// 0052a391  8bf8                 mov edi, eax
// 0052a393  85ff                 test edi, edi
// 0052a395  740c                 je 0x52a3a3
// 0052a397  56                   push esi
// 0052a398  6a00                 push 0
// 0052a39a  57                   push edi
// 0052a39b  e864731700           call 0x6a1704
// 0052a3a0  83c40c               add esp, 0xc
// 0052a3a3  8bc7                 mov eax, edi
// 0052a3a5  5f                   pop edi
// 0052a3a6  5e                   pop esi
// 0052a3a7  81c46c020000         add esp, 0x26c
// 0052a3ad  c3                   ret 
// 0052a3ae  33c0                 xor eax, eax
// 0052a3b0  5e                   pop esi
// 0052a3b1  81c46c020000         add esp, 0x26c
// 0052a3b7  c3                   ret 
// library g3d-6.09-png-dll/pngmem.c (function _png_create_struct_2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngmem.c
