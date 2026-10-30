// roc 2012-06 00a5a690  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5a690
//
// 00a5a690  83ec10               sub esp, 0x10
// 00a5a693  56                   push esi
// 00a5a694  8bf1                 mov esi, ecx
// 00a5a696  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a5a699  e88270f8ff           call 0x9e1720
// 00a5a69e  50                   push eax
// 00a5a69f  8d4c2408             lea ecx, [esp + 8]
// 00a5a6a3  e8f8aaf7ff           call 0x9d51a0
// 00a5a6a8  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a5a6ab  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00a5a6ae  83c070               add eax, 0x70
// 00a5a6b1  5e                   pop esi
// 00a5a6b2  83f9ff               cmp ecx, -1
// 00a5a6b5  7518                 jne 0xa5a6cf
// 00a5a6b7  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a6ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5a6be  50                   push eax
// 00a5a6bf  8d442404             lea eax, [esp + 4]
// 00a5a6c3  50                   push eax
// 00a5a6c4  e8e387f2ff           call 0x982eac
// 00a5a6c9  83c410               add esp, 0x10
// 00a5a6cc  c20400               ret 4
// 00a5a6cf  8bc1                 mov eax, ecx
// 00a5a6d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5a6d5  50                   push eax
// 00a5a6d6  8d442404             lea eax, [esp + 4]
// 00a5a6da  50                   push eax
// 00a5a6db  e8cc87f2ff           call 0x982eac
// 00a5a6e0  83c410               add esp, 0x10
// 00a5a6e3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?FillPropertyGridView@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
