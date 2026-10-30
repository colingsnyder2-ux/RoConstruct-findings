// roc 2011-06 008e2330  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e2330
//
// 008e2330  83ec10               sub esp, 0x10
// 008e2333  56                   push esi
// 008e2334  8bf1                 mov esi, ecx
// 008e2336  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e2339  e8726ef8ff           call 0x8691b0
// 008e233e  50                   push eax
// 008e233f  8d4c2408             lea ecx, [esp + 8]
// 008e2343  e848aaf7ff           call 0x85cd90
// 008e2348  8b4674               mov eax, dword ptr [esi + 0x74]
// 008e234b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008e234e  83c070               add eax, 0x70
// 008e2351  5e                   pop esi
// 008e2352  83f9ff               cmp ecx, -1
// 008e2355  7518                 jne 0x8e236f
// 008e2357  8b4004               mov eax, dword ptr [eax + 4]
// 008e235a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e235e  50                   push eax
// 008e235f  8d442404             lea eax, [esp + 4]
// 008e2363  50                   push eax
// 008e2364  e8b78af2ff           call 0x80ae20
// 008e2369  83c410               add esp, 0x10
// 008e236c  c20400               ret 4
// 008e236f  8bc1                 mov eax, ecx
// 008e2371  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e2375  50                   push eax
// 008e2376  8d442404             lea eax, [esp + 4]
// 008e237a  50                   push eax
// 008e237b  e8a08af2ff           call 0x80ae20
// 008e2380  83c410               add esp, 0x10
// 008e2383  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?FillPropertyGridView@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
