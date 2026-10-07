// roc 2008-06 00777fd0  unit: CXTPPropertyGridPaintManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00777fd0
//
// 00777fd0  8b442404             mov eax, dword ptr [esp + 4]
// 00777fd4  56                   push esi
// 00777fd5  50                   push eax
// 00777fd6  8bf1                 mov esi, ecx
// 00777fd8  e843e8ffff           call 0x776820
// 00777fdd  c7069c8c8600         mov dword ptr [esi], 0x868c9c
// 00777fe3  c7460401000000       mov dword ptr [esi + 4], 1
// 00777fea  8bc6                 mov eax, esi
// 00777fec  5e                   pop esi
// 00777fed  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ??0CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@QAE@PAVCXTPPropertyGrid@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
