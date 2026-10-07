// roc 2007-08 006f5fd0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5fd0
//
// 006f5fd0  56                   push esi
// 006f5fd1  8bf1                 mov esi, ecx
// 006f5fd3  e862230400           call 0x73833a
// 006f5fd8  8d4e20               lea ecx, [esi + 0x20]
// 006f5fdb  c7060cc37d00         mov dword ptr [esi], 0x7dc30c
// 006f5fe1  e88affffff           call 0x6f5f70
// 006f5fe6  8b442408             mov eax, dword ptr [esp + 8]
// 006f5fea  894634               mov dword ptr [esi + 0x34], eax
// 006f5fed  8bc6                 mov eax, esi
// 006f5fef  5e                   pop esi
// 006f5ff0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControl.cpp (function ??0CXTPControlActions@@IAE@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp
