// from server: 100% by auto
// roc 2009-06 00575900  unit: G3D::BinaryInput  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575900
//
// 00575900  8b442404             mov eax, dword ptr [esp + 4]
// 00575904  83ec30               sub esp, 0x30
// 00575907  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0057590b  7205                 jb 0x575912
// 0057590d  8b4004               mov eax, dword ptr [eax + 4]
// 00575910  eb03                 jmp 0x575915
// 00575912  83c004               add eax, 4
// 00575915  8d0c24               lea ecx, [esp]
// 00575918  51                   push ecx
// 00575919  50                   push eax
// 0057591a  ff15d0e88900         call dword ptr [0x89e8d0]
// 00575920  83c408               add esp, 8
// 00575923  83f8ff               cmp eax, -1
// 00575926  7509                 jne 0x575931
// 00575928  0bc0                 or eax, eax
// 0057592a  83caff               or edx, 0xffffffff
// 0057592d  83c430               add esp, 0x30
// 00575930  c3                   ret 
// 00575931  8b442414             mov eax, dword ptr [esp + 0x14]
// 00575935  99                   cdq 
// 00575936  83c430               add esp, 0x30
// 00575939  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileLength@G3D@@YA_JABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
