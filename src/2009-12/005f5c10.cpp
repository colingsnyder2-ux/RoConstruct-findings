// roc 2009-12 005f5c10  unit: G3D::BinaryInput  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5c10
//
// 005f5c10  8b442404             mov eax, dword ptr [esp + 4]
// 005f5c14  83ec30               sub esp, 0x30
// 005f5c17  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005f5c1b  7205                 jb 0x5f5c22
// 005f5c1d  8b4004               mov eax, dword ptr [eax + 4]
// 005f5c20  eb03                 jmp 0x5f5c25
// 005f5c22  83c004               add eax, 4
// 005f5c25  8d0c24               lea ecx, [esp]
// 005f5c28  51                   push ecx
// 005f5c29  50                   push eax
// 005f5c2a  ff1548b89800         call dword ptr [0x98b848]
// 005f5c30  83c408               add esp, 8
// 005f5c33  83f8ff               cmp eax, -1
// 005f5c36  7509                 jne 0x5f5c41
// 005f5c38  0bc0                 or eax, eax
// 005f5c3a  83caff               or edx, 0xffffffff
// 005f5c3d  83c430               add esp, 0x30
// 005f5c40  c3                   ret 
// 005f5c41  8b442414             mov eax, dword ptr [esp + 0x14]
// 005f5c45  99                   cdq 
// 005f5c46  83c430               add esp, 0x30
// 005f5c49  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileLength@G3D@@YA_JABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
