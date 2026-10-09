// roc 2008-06 005d5b80  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5b80
//
// 005d5b80  c70194cd8300         mov dword ptr [ecx], 0x83cd94
// 005d5b86  c7411084cd8300       mov dword ptr [ecx + 0x10], 0x83cd84
// 005d5b8d  c741147ccd8300       mov dword ptr [ecx + 0x14], 0x83cd7c
// 005d5b94  c7412074cd8300       mov dword ptr [ecx + 0x20], 0x83cd74
// 005d5b9b  c7412464cd8300       mov dword ptr [ecx + 0x24], 0x83cd64
// 005d5ba2  c7414454cd8300       mov dword ptr [ecx + 0x44], 0x83cd54
// 005d5ba9  c7416444cd8300       mov dword ptr [ecx + 0x64], 0x83cd44
// 005d5bb0  c7818400000034cd8300 mov dword ptr [ecx + 0x84], 0x83cd34
// 005d5bba  c781a400000024cd8300 mov dword ptr [ecx + 0xa4], 0x83cd24
// 005d5bc4  c781c400000014cd8300 mov dword ptr [ecx + 0xc4], 0x83cd14
// 005d5bce  e96d49f8ff           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
