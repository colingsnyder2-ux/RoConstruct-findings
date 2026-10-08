// roc 2009-06 007ef950  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ef950
//
// 007ef950  83ec10               sub esp, 0x10
// 007ef953  56                   push esi
// 007ef954  8bf1                 mov esi, ecx
// 007ef956  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007ef959  e8f233f8ff           call 0x772d50
// 007ef95e  50                   push eax
// 007ef95f  8d4c2408             lea ecx, [esp + 8]
// 007ef963  e8680bf8ff           call 0x7704d0
// 007ef968  8b4674               mov eax, dword ptr [esi + 0x74]
// 007ef96b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007ef96e  83c070               add eax, 0x70
// 007ef971  5e                   pop esi
// 007ef972  83f9ff               cmp ecx, -1
// 007ef975  7518                 jne 0x7ef98f
// 007ef977  8b4004               mov eax, dword ptr [eax + 4]
// 007ef97a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ef97e  50                   push eax
// 007ef97f  8d442404             lea eax, [esp + 4]
// 007ef983  50                   push eax
// 007ef984  e8479ef2ff           call 0x7197d0
// 007ef989  83c410               add esp, 0x10
// 007ef98c  c20400               ret 4
// 007ef98f  8bc1                 mov eax, ecx
// 007ef991  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ef995  50                   push eax
// 007ef996  8d442404             lea eax, [esp + 4]
// 007ef99a  50                   push eax
// 007ef99b  e8309ef2ff           call 0x7197d0
// 007ef9a0  83c410               add esp, 0x10
// 007ef9a3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?FillPropertyGridView@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
