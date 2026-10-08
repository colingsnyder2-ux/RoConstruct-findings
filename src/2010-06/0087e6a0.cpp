// roc 2010-06 0087e6a0  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087e6a0
//
// 0087e6a0  83ec10               sub esp, 0x10
// 0087e6a3  56                   push esi
// 0087e6a4  8bf1                 mov esi, ecx
// 0087e6a6  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0087e6a9  e83234f8ff           call 0x801ae0
// 0087e6ae  50                   push eax
// 0087e6af  8d4c2408             lea ecx, [esp + 8]
// 0087e6b3  e8580cf8ff           call 0x7ff310
// 0087e6b8  8b4674               mov eax, dword ptr [esi + 0x74]
// 0087e6bb  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0087e6be  83c070               add eax, 0x70
// 0087e6c1  5e                   pop esi
// 0087e6c2  83f9ff               cmp ecx, -1
// 0087e6c5  7518                 jne 0x87e6df
// 0087e6c7  8b4004               mov eax, dword ptr [eax + 4]
// 0087e6ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087e6ce  50                   push eax
// 0087e6cf  8d442404             lea eax, [esp + 4]
// 0087e6d3  50                   push eax
// 0087e6d4  e865a0f2ff           call 0x7a873e
// 0087e6d9  83c410               add esp, 0x10
// 0087e6dc  c20400               ret 4
// 0087e6df  8bc1                 mov eax, ecx
// 0087e6e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087e6e5  50                   push eax
// 0087e6e6  8d442404             lea eax, [esp + 4]
// 0087e6ea  50                   push eax
// 0087e6eb  e84ea0f2ff           call 0x7a873e
// 0087e6f0  83c410               add esp, 0x10
// 0087e6f3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?FillPropertyGridView@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
