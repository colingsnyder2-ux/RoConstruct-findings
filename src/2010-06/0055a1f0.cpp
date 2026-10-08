// from server: 100% by auto
// roc 2010-06 0055a1f0  unit: G3D::BinaryInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a1f0
//
// 0055a1f0  83ec30               sub esp, 0x30
// 0055a1f3  56                   push esi
// 0055a1f4  8b742438             mov esi, dword ptr [esp + 0x38]
// 0055a1f8  68fe08a000           push 0xa008fe
// 0055a1fd  56                   push esi
// 0055a1fe  ff1558a49e00         call dword ptr [0x9ea458]
// 0055a204  83c408               add esp, 8
// 0055a207  84c0                 test al, al
// 0055a209  7407                 je 0x55a212
// 0055a20b  b001                 mov al, 1
// 0055a20d  5e                   pop esi
// 0055a20e  83c430               add esp, 0x30
// 0055a211  c3                   ret 
// 0055a212  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0055a216  7205                 jb 0x55a21d
// 0055a218  8b7604               mov esi, dword ptr [esi + 4]
// 0055a21b  eb03                 jmp 0x55a220
// 0055a21d  83c604               add esi, 4
// 0055a220  8d442404             lea eax, [esp + 4]
// 0055a224  50                   push eax
// 0055a225  56                   push esi
// 0055a226  ff15b8a79e00         call dword ptr [0x9ea7b8]
// 0055a22c  83c408               add esp, 8
// 0055a22f  33c9                 xor ecx, ecx
// 0055a231  83f8ff               cmp eax, -1
// 0055a234  0f95c1               setne cl
// 0055a237  8ac1                 mov al, cl
// 0055a239  5e                   pop esi
// 0055a23a  83c430               add esp, 0x30
// 0055a23d  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileExists@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
