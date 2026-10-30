// roc 2011-06 0086a0c0  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a0c0
//
// 0086a0c0  56                   push esi
// 0086a0c1  8bf1                 mov esi, ecx
// 0086a0c3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086a0c6  8d44240c             lea eax, [esp + 0xc]
// 0086a0ca  50                   push eax
// 0086a0cb  51                   push ecx
// 0086a0cc  ff15781ca400         call dword ptr [0xa41c78]
// 0086a0d2  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0086a0d8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086a0dc  83c020               add eax, 0x20
// 0086a0df  85c9                 test ecx, ecx
// 0086a0e1  7c2c                 jl 0x86a10f
// 0086a0e3  3b4808               cmp ecx, dword ptr [eax + 8]
// 0086a0e6  7d27                 jge 0x86a10f
// 0086a0e8  8b5004               mov edx, dword ptr [eax + 4]
// 0086a0eb  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0086a0ee  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086a0f2  89483c               mov dword ptr [eax + 0x3c], ecx
// 0086a0f5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086a0f9  895040               mov dword ptr [eax + 0x40], edx
// 0086a0fc  8b16                 mov edx, dword ptr [esi]
// 0086a0fe  50                   push eax
// 0086a0ff  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0086a105  6a0a                 push 0xa
// 0086a107  8bce                 mov ecx, esi
// 0086a109  ffd0                 call eax
// 0086a10b  5e                   pop esi
// 0086a10c  c20c00               ret 0xc
// 0086a10f  e8f601faff           call 0x80a30a
// copied from an identical function in another client (function ?OnVerbClick@CXTPPropertyGrid@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp