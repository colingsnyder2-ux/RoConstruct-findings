// from server: 100% by colin
// roc 2008-06 0052a4a0  unit: seg_00520000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a4a0
//
// 0052a4a0  57                   push edi
// 0052a4a1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0052a4a5  85ff                 test edi, edi
// 0052a4a7  7447                 je 0x52a4f0
// 0052a4a9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052a4ad  85c9                 test ecx, ecx
// 0052a4af  743f                 je 0x52a4f0
// 0052a4b1  8b8748020000         mov eax, dword ptr [edi + 0x248]
// 0052a4b7  56                   push esi
// 0052a4b8  51                   push ecx
// 0052a4b9  85c0                 test eax, eax
// 0052a4bb  7408                 je 0x52a4c5
// 0052a4bd  57                   push edi
// 0052a4be  ffd0                 call eax
// 0052a4c0  83c408               add esp, 8
// 0052a4c3  eb09                 jmp 0x52a4ce
// 0052a4c5  ff15b0288000         call dword ptr [0x8028b0]
// 0052a4cb  83c404               add esp, 4
// 0052a4ce  8bf0                 mov esi, eax
// 0052a4d0  85f6                 test esi, esi
// 0052a4d2  7517                 jne 0x52a4eb
// 0052a4d4  f7476c00001000       test dword ptr [edi + 0x6c], 0x100000
// 0052a4db  750e                 jne 0x52a4eb
// 0052a4dd  6844bb8200           push 0x82bb44
// 0052a4e2  57                   push edi
// 0052a4e3  e8c8f4ffff           call 0x5299b0
// 0052a4e8  83c408               add esp, 8
// 0052a4eb  8bc6                 mov eax, esi
// 0052a4ed  5e                   pop esi
// 0052a4ee  5f                   pop edi
// 0052a4ef  c3                   ret 
// 0052a4f0  33c0                 xor eax, eax
// 0052a4f2  5f                   pop edi
// 0052a4f3  c3                   ret 
// library g3d-6.09-png-dll/pngmem.c (function _png_malloc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngmem.c
