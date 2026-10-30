// roc 2009-06 00773c50  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00773c50
//
// 00773c50  56                   push esi
// 00773c51  8bf1                 mov esi, ecx
// 00773c53  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00773c56  8d44240c             lea eax, [esp + 0xc]
// 00773c5a  50                   push eax
// 00773c5b  51                   push ecx
// 00773c5c  ff1510ee8900         call dword ptr [0x89ee10]
// 00773c62  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00773c68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00773c6c  83c020               add eax, 0x20
// 00773c6f  85c9                 test ecx, ecx
// 00773c71  7c2c                 jl 0x773c9f
// 00773c73  3b4808               cmp ecx, dword ptr [eax + 8]
// 00773c76  7d27                 jge 0x773c9f
// 00773c78  8b5004               mov edx, dword ptr [eax + 4]
// 00773c7b  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00773c7e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00773c82  89483c               mov dword ptr [eax + 0x3c], ecx
// 00773c85  8b542410             mov edx, dword ptr [esp + 0x10]
// 00773c89  895040               mov dword ptr [eax + 0x40], edx
// 00773c8c  8b16                 mov edx, dword ptr [esi]
// 00773c8e  50                   push eax
// 00773c8f  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00773c95  6a0a                 push 0xa
// 00773c97  8bce                 mov ecx, esi
// 00773c99  ffd0                 call eax
// 00773c9b  5e                   pop esi
// 00773c9c  c20c00               ret 0xc
// 00773c9f  e84050faff           call 0x718ce4
// copied from an identical function in another client (function ?OnVerbClick@CXTPPropertyGrid@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp