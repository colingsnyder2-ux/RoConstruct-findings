// roc 2007-03 005f6ba0  unit: seg_005f0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6ba0
//
// 005f6ba0  d9ee                 fldz 
// 005f6ba2  56                   push esi
// 005f6ba3  8b742408             mov esi, dword ptr [esp + 8]
// 005f6ba7  d916                 fst dword ptr [esi]
// 005f6ba9  d95604               fst dword ptr [esi + 4]
// 005f6bac  8d5624               lea edx, [esi + 0x24]
// 005f6baf  d95608               fst dword ptr [esi + 8]
// 005f6bb2  8d460c               lea eax, [esi + 0xc]
// 005f6bb5  d910                 fst dword ptr [eax]
// 005f6bb7  8d4e18               lea ecx, [esi + 0x18]
// 005f6bba  d95004               fst dword ptr [eax + 4]
// 005f6bbd  52                   push edx
// 005f6bbe  d95008               fst dword ptr [eax + 8]
// 005f6bc1  51                   push ecx
// 005f6bc2  d911                 fst dword ptr [ecx]
// 005f6bc4  50                   push eax
// 005f6bc5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f6bc9  d95104               fst dword ptr [ecx + 4]
// 005f6bcc  d95108               fst dword ptr [ecx + 8]
// 005f6bcf  56                   push esi
// 005f6bd0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f6bd4  d912                 fst dword ptr [edx]
// 005f6bd6  d95204               fst dword ptr [edx + 4]
// 005f6bd9  50                   push eax
// 005f6bda  d95a08               fstp dword ptr [edx + 8]
// 005f6bdd  e86e08fcff           call 0x5b7450
// 005f6be2  8bc6                 mov eax, esi
// 005f6be4  5e                   pop esi
// 005f6be5  c3                   ret 
// library rbxgs/util\Face.cpp (function ?fromExtentsSide@Face@RBX@@SA?AV12@ABVExtents@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Face.cpp
