// roc 2012-06 00998800  unit: CXTPImageManagerResource::CBitmapDC  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998800
//
// 00998800  8b442410             mov eax, dword ptr [esp + 0x10]
// 00998804  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00998808  50                   push eax
// 00998809  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0099880d  52                   push edx
// 0099880e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00998812  50                   push eax
// 00998813  8b4104               mov eax, dword ptr [ecx + 4]
// 00998816  52                   push edx
// 00998817  50                   push eax
// 00998818  ff15e420b200         call dword ptr [0xb220e4]
// 0099881e  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?ExtFloodFill@CDC@@QAEHHHKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
