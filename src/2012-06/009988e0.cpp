// from server: 100% by auto
// roc 2012-06 009988e0  unit: CXTPImageManagerResource::CBitmapDC  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009988e0
//
// 009988e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 009988e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 009988e8  8b4904               mov ecx, dword ptr [ecx + 4]
// 009988eb  50                   push eax
// 009988ec  8b442410             mov eax, dword ptr [esp + 0x10]
// 009988f0  52                   push edx
// 009988f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 009988f5  50                   push eax
// 009988f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 009988fa  52                   push edx
// 009988fb  50                   push eax
// 009988fc  51                   push ecx
// 009988fd  ff15243db200         call dword ptr [0xb23d24]
// 00998903  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?PatBlt@CDC@@QAEHHHHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDefaultTheme.cpp
