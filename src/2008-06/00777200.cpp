// from server: 100% by auto
// roc 2008-06 00777200  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00777200
//
// 00777200  83ec10               sub esp, 0x10
// 00777203  56                   push esi
// 00777204  8bf1                 mov esi, ecx
// 00777206  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00777209  e8a231f8ff           call 0x6fa3b0
// 0077720e  50                   push eax
// 0077720f  8d4c2408             lea ecx, [esp + 8]
// 00777213  e81809f8ff           call 0x6f7b30
// 00777218  8b4674               mov eax, dword ptr [esi + 0x74]
// 0077721b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0077721e  83c070               add eax, 0x70
// 00777221  5e                   pop esi
// 00777222  83f9ff               cmp ecx, -1
// 00777225  7518                 jne 0x77723f
// 00777227  8b4004               mov eax, dword ptr [eax + 4]
// 0077722a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0077722e  50                   push eax
// 0077722f  8d442404             lea eax, [esp + 4]
// 00777233  50                   push eax
// 00777234  e825a1f2ff           call 0x6a135e
// 00777239  83c410               add esp, 0x10
// 0077723c  c20400               ret 4
// 0077723f  8bc1                 mov eax, ecx
// 00777241  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00777245  50                   push eax
// 00777246  8d442404             lea eax, [esp + 4]
// 0077724a  50                   push eax
// 0077724b  e80ea1f2ff           call 0x6a135e
// 00777250  83c410               add esp, 0x10
// 00777253  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?FillPropertyGridView@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
