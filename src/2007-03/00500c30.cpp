// roc 2007-03 00500c30  unit: seg_00500000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500c30
//
// 00500c30  8b442404             mov eax, dword ptr [esp + 4]
// 00500c34  83ec30               sub esp, 0x30
// 00500c37  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00500c3b  7205                 jb 0x500c42
// 00500c3d  8b4004               mov eax, dword ptr [eax + 4]
// 00500c40  eb03                 jmp 0x500c45
// 00500c42  83c004               add eax, 4
// 00500c45  8d0c24               lea ecx, [esp]
// 00500c48  51                   push ecx
// 00500c49  50                   push eax
// 00500c4a  ff15cce87700         call dword ptr [0x77e8cc]
// 00500c50  83c408               add esp, 8
// 00500c53  83f8ff               cmp eax, -1
// 00500c56  7509                 jne 0x500c61
// 00500c58  0bc0                 or eax, eax
// 00500c5a  83caff               or edx, 0xffffffff
// 00500c5d  83c430               add esp, 0x30
// 00500c60  c3                   ret 
// 00500c61  8b442414             mov eax, dword ptr [esp + 0x14]
// 00500c65  99                   cdq 
// 00500c66  83c430               add esp, 0x30
// 00500c69  c3                   ret 
// library rbxgs-g3d/G3Dcpp\fileutils.cpp (function ?fileLength@G3D@@YA_JABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/fileutils.cpp
