// roc 2008-06 00514d50  unit: seg_00510000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514d50
//
// 00514d50  8b442404             mov eax, dword ptr [esp + 4]
// 00514d54  83ec30               sub esp, 0x30
// 00514d57  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00514d5b  7205                 jb 0x514d62
// 00514d5d  8b4004               mov eax, dword ptr [eax + 4]
// 00514d60  eb03                 jmp 0x514d65
// 00514d62  83c004               add eax, 4
// 00514d65  8d0c24               lea ecx, [esp]
// 00514d68  51                   push ecx
// 00514d69  50                   push eax
// 00514d6a  ff1570278000         call dword ptr [0x802770]
// 00514d70  83c408               add esp, 8
// 00514d73  83f8ff               cmp eax, -1
// 00514d76  7509                 jne 0x514d81
// 00514d78  0bc0                 or eax, eax
// 00514d7a  83caff               or edx, 0xffffffff
// 00514d7d  83c430               add esp, 0x30
// 00514d80  c3                   ret 
// 00514d81  8b442414             mov eax, dword ptr [esp + 0x14]
// 00514d85  99                   cdq 
// 00514d86  83c430               add esp, 0x30
// 00514d89  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileLength@G3D@@YA_JABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
