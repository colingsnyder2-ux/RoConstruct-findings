// roc 2010-06 0087bbf0  unit: CXTPPropertyGridInplaceEdit  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bbf0
//
// 0087bbf0  8b442404             mov eax, dword ptr [esp + 4]
// 0087bbf4  85c0                 test eax, eax
// 0087bbf6  7c0e                 jl 0x87bc06
// 0087bbf8  3b4108               cmp eax, dword ptr [ecx + 8]
// 0087bbfb  7d09                 jge 0x87bc06
// 0087bbfd  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087bc00  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0087bc03  c20400               ret 4
// 0087bc06  e841c0f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetAt@CPtrArray@@QBEPAXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxbasetabctrl.cpp