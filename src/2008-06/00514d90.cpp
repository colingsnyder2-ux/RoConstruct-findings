// roc 2008-06 00514d90  unit: seg_00510000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514d90
//
// 00514d90  83ec30               sub esp, 0x30
// 00514d93  56                   push esi
// 00514d94  8b742438             mov esi, dword ptr [esp + 0x38]
// 00514d98  6816b78000           push 0x80b716
// 00514d9d  56                   push esi
// 00514d9e  ff156c238000         call dword ptr [0x80236c]
// 00514da4  83c408               add esp, 8
// 00514da7  84c0                 test al, al
// 00514da9  7407                 je 0x514db2
// 00514dab  b001                 mov al, 1
// 00514dad  5e                   pop esi
// 00514dae  83c430               add esp, 0x30
// 00514db1  c3                   ret 
// 00514db2  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00514db6  7205                 jb 0x514dbd
// 00514db8  8b7604               mov esi, dword ptr [esi + 4]
// 00514dbb  eb03                 jmp 0x514dc0
// 00514dbd  83c604               add esi, 4
// 00514dc0  8d442404             lea eax, [esp + 4]
// 00514dc4  50                   push eax
// 00514dc5  56                   push esi
// 00514dc6  ff1570278000         call dword ptr [0x802770]
// 00514dcc  83c408               add esp, 8
// 00514dcf  33c9                 xor ecx, ecx
// 00514dd1  83f8ff               cmp eax, -1
// 00514dd4  0f95c1               setne cl
// 00514dd7  8ac1                 mov al, cl
// 00514dd9  5e                   pop esi
// 00514dda  83c430               add esp, 0x30
// 00514ddd  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileExists@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
