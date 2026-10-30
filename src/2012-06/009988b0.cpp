// from server: 100% by auto
// roc 2012-06 009988b0  unit: CXTPImageManagerResource::CBitmapDC  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009988b0
//
// 009988b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 009988b4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009988b8  50                   push eax
// 009988b9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009988bd  52                   push edx
// 009988be  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009988c2  50                   push eax
// 009988c3  8b4104               mov eax, dword ptr [ecx + 4]
// 009988c6  52                   push edx
// 009988c7  50                   push eax
// 009988c8  ff15203db200         call dword ptr [0xb23d20]
// 009988ce  c21000               ret 0x10
// library xtp-15.2.1/Source\CommandBars\XTPImageEditor.cpp (function ?ExtFloodFill@CDC@@QAEHHHKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPImageEditor.cpp
