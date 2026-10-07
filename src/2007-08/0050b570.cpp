// roc 2007-08 0050b570  unit: seg_00500000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b570
//
// 0050b570  83ec30               sub esp, 0x30
// 0050b573  56                   push esi
// 0050b574  8b742438             mov esi, dword ptr [esp + 0x38]
// 0050b578  6854597800           push 0x785954
// 0050b57d  56                   push esi
// 0050b57e  ff15f8e57700         call dword ptr [0x77e5f8]
// 0050b584  83c408               add esp, 8
// 0050b587  84c0                 test al, al
// 0050b589  7407                 je 0x50b592
// 0050b58b  b001                 mov al, 1
// 0050b58d  5e                   pop esi
// 0050b58e  83c430               add esp, 0x30
// 0050b591  c3                   ret 
// 0050b592  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0050b596  7205                 jb 0x50b59d
// 0050b598  8b7604               mov esi, dword ptr [esi + 4]
// 0050b59b  eb03                 jmp 0x50b5a0
// 0050b59d  83c604               add esi, 4
// 0050b5a0  8d442404             lea eax, [esp + 4]
// 0050b5a4  50                   push eax
// 0050b5a5  56                   push esi
// 0050b5a6  ff15a4e87700         call dword ptr [0x77e8a4]
// 0050b5ac  83c408               add esp, 8
// 0050b5af  33c9                 xor ecx, ecx
// 0050b5b1  83f8ff               cmp eax, -1
// 0050b5b4  0f95c1               setne cl
// 0050b5b7  8ac1                 mov al, cl
// 0050b5b9  5e                   pop esi
// 0050b5ba  83c430               add esp, 0x30
// 0050b5bd  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?fileExists@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
