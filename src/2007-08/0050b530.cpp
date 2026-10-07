// roc 2007-08 0050b530  unit: seg_00500000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b530
//
// 0050b530  8b442404             mov eax, dword ptr [esp + 4]
// 0050b534  83ec30               sub esp, 0x30
// 0050b537  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0050b53b  7205                 jb 0x50b542
// 0050b53d  8b4004               mov eax, dword ptr [eax + 4]
// 0050b540  eb03                 jmp 0x50b545
// 0050b542  83c004               add eax, 4
// 0050b545  8d0c24               lea ecx, [esp]
// 0050b548  51                   push ecx
// 0050b549  50                   push eax
// 0050b54a  ff15a4e87700         call dword ptr [0x77e8a4]
// 0050b550  83c408               add esp, 8
// 0050b553  83f8ff               cmp eax, -1
// 0050b556  7509                 jne 0x50b561
// 0050b558  0bc0                 or eax, eax
// 0050b55a  83caff               or edx, 0xffffffff
// 0050b55d  83c430               add esp, 0x30
// 0050b560  c3                   ret 
// 0050b561  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050b565  99                   cdq 
// 0050b566  83c430               add esp, 0x30
// 0050b569  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileLength@G3D@@YA_JABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
