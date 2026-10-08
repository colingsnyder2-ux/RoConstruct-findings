// from server: 100% by auto
// roc 2009-06 00575940  unit: G3D::BinaryInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575940
//
// 00575940  83ec30               sub esp, 0x30
// 00575943  56                   push esi
// 00575944  8b742438             mov esi, dword ptr [esp + 0x38]
// 00575948  6816d28a00           push 0x8ad216
// 0057594d  56                   push esi
// 0057594e  ff1574e48900         call dword ptr [0x89e474]
// 00575954  83c408               add esp, 8
// 00575957  84c0                 test al, al
// 00575959  7407                 je 0x575962
// 0057595b  b001                 mov al, 1
// 0057595d  5e                   pop esi
// 0057595e  83c430               add esp, 0x30
// 00575961  c3                   ret 
// 00575962  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00575966  7205                 jb 0x57596d
// 00575968  8b7604               mov esi, dword ptr [esi + 4]
// 0057596b  eb03                 jmp 0x575970
// 0057596d  83c604               add esi, 4
// 00575970  8d442404             lea eax, [esp + 4]
// 00575974  50                   push eax
// 00575975  56                   push esi
// 00575976  ff15d0e88900         call dword ptr [0x89e8d0]
// 0057597c  83c408               add esp, 8
// 0057597f  33c9                 xor ecx, ecx
// 00575981  83f8ff               cmp eax, -1
// 00575984  0f95c1               setne cl
// 00575987  8ac1                 mov al, cl
// 00575989  5e                   pop esi
// 0057598a  83c430               add esp, 0x30
// 0057598d  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileExists@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
