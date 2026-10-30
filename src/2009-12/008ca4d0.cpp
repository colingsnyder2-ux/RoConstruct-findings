// roc 2009-12 008ca4d0  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ca4d0
//
// 008ca4d0  83ec10               sub esp, 0x10
// 008ca4d3  56                   push esi
// 008ca4d4  8bf1                 mov esi, ecx
// 008ca4d6  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008ca4d9  e8a235f8ff           call 0x84da80
// 008ca4de  50                   push eax
// 008ca4df  8d4c2408             lea ecx, [esp + 8]
// 008ca4e3  e8e80df8ff           call 0x84b2d0
// 008ca4e8  8b4674               mov eax, dword ptr [esi + 0x74]
// 008ca4eb  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008ca4ee  83c070               add eax, 0x70
// 008ca4f1  5e                   pop esi
// 008ca4f2  83f9ff               cmp ecx, -1
// 008ca4f5  7518                 jne 0x8ca50f
// 008ca4f7  8b4004               mov eax, dword ptr [eax + 4]
// 008ca4fa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ca4fe  50                   push eax
// 008ca4ff  8d442404             lea eax, [esp + 4]
// 008ca503  50                   push eax
// 008ca504  e8f5a0f2ff           call 0x7f45fe
// 008ca509  83c410               add esp, 0x10
// 008ca50c  c20400               ret 4
// 008ca50f  8bc1                 mov eax, ecx
// 008ca511  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ca515  50                   push eax
// 008ca516  8d442404             lea eax, [esp + 4]
// 008ca51a  50                   push eax
// 008ca51b  e8dea0f2ff           call 0x7f45fe
// 008ca520  83c410               add esp, 0x10
// 008ca523  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?FillPropertyGridView@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
