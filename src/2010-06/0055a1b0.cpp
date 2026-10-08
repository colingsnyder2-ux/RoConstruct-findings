// from server: 100% by auto
// roc 2010-06 0055a1b0  unit: G3D::BinaryInput  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a1b0
//
// 0055a1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0055a1b4  83ec30               sub esp, 0x30
// 0055a1b7  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0055a1bb  7205                 jb 0x55a1c2
// 0055a1bd  8b4004               mov eax, dword ptr [eax + 4]
// 0055a1c0  eb03                 jmp 0x55a1c5
// 0055a1c2  83c004               add eax, 4
// 0055a1c5  8d0c24               lea ecx, [esp]
// 0055a1c8  51                   push ecx
// 0055a1c9  50                   push eax
// 0055a1ca  ff15b8a79e00         call dword ptr [0x9ea7b8]
// 0055a1d0  83c408               add esp, 8
// 0055a1d3  83f8ff               cmp eax, -1
// 0055a1d6  7509                 jne 0x55a1e1
// 0055a1d8  0bc0                 or eax, eax
// 0055a1da  83caff               or edx, 0xffffffff
// 0055a1dd  83c430               add esp, 0x30
// 0055a1e0  c3                   ret 
// 0055a1e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055a1e5  99                   cdq 
// 0055a1e6  83c430               add esp, 0x30
// 0055a1e9  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileLength@G3D@@YA_JABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
