// from server: 100% by colin
// roc 2008-06 0052a3c0  unit: seg_00520000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a3c0
//
// 0052a3c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052a3c4  81ec6c020000         sub esp, 0x26c
// 0052a3ca  85c9                 test ecx, ecx
// 0052a3cc  7434                 je 0x52a402
// 0052a3ce  8b842474020000       mov eax, dword ptr [esp + 0x274]
// 0052a3d5  51                   push ecx
// 0052a3d6  85c0                 test eax, eax
// 0052a3d8  741f                 je 0x52a3f9
// 0052a3da  8b94247c020000       mov edx, dword ptr [esp + 0x27c]
// 0052a3e1  8d4c2404             lea ecx, [esp + 4]
// 0052a3e5  51                   push ecx
// 0052a3e6  8994244c020000       mov dword ptr [esp + 0x24c], edx
// 0052a3ed  ffd0                 call eax
// 0052a3ef  83c408               add esp, 8
// 0052a3f2  81c46c020000         add esp, 0x26c
// 0052a3f8  c3                   ret 
// 0052a3f9  ff15c0288000         call dword ptr [0x8028c0]
// 0052a3ff  83c404               add esp, 4
// 0052a402  81c46c020000         add esp, 0x26c
// 0052a408  c3                   ret 
// library g3d-6.09-png-dll/pngmem.c (function _png_destroy_struct_2)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngmem.c
