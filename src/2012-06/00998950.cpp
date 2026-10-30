// from server: 100% by auto
// roc 2012-06 00998950  unit: CXTPImageManagerResource::CBitmapDC  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998950
//
// 00998950  8b442410             mov eax, dword ptr [esp + 0x10]
// 00998954  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00998958  50                   push eax
// 00998959  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0099895d  52                   push edx
// 0099895e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00998962  50                   push eax
// 00998963  8b4104               mov eax, dword ptr [ecx + 4]
// 00998966  52                   push edx
// 00998967  50                   push eax
// 00998968  ff15e820b200         call dword ptr [0xb220e8]
// 0099896e  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?ExtFloodFill@CDC@@QAEHHHKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
