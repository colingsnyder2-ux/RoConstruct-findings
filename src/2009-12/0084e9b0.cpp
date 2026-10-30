// roc 2009-12 0084e9b0  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e9b0
//
// 0084e9b0  56                   push esi
// 0084e9b1  8bf1                 mov esi, ecx
// 0084e9b3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0084e9b6  8d44240c             lea eax, [esp + 0xc]
// 0084e9ba  50                   push eax
// 0084e9bb  51                   push ecx
// 0084e9bc  ff1554cc9800         call dword ptr [0x98cc54]
// 0084e9c2  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 0084e9c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084e9cc  83c020               add eax, 0x20
// 0084e9cf  85c9                 test ecx, ecx
// 0084e9d1  7c2c                 jl 0x84e9ff
// 0084e9d3  3b4808               cmp ecx, dword ptr [eax + 8]
// 0084e9d6  7d27                 jge 0x84e9ff
// 0084e9d8  8b5004               mov edx, dword ptr [eax + 4]
// 0084e9db  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0084e9de  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084e9e2  89483c               mov dword ptr [eax + 0x3c], ecx
// 0084e9e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0084e9e9  895040               mov dword ptr [eax + 0x40], edx
// 0084e9ec  8b16                 mov edx, dword ptr [esi]
// 0084e9ee  50                   push eax
// 0084e9ef  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0084e9f5  6a0a                 push 0xa
// 0084e9f7  8bce                 mov ecx, esi
// 0084e9f9  ffd0                 call eax
// 0084e9fb  5e                   pop esi
// 0084e9fc  c20c00               ret 0xc
// 0084e9ff  e80851faff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnVerbClick@CXTPPropertyGrid@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp