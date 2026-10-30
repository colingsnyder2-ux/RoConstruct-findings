// roc 2009-12 008bc280  unit: CXTPDockingPaneContextStickerWnd  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc280
//
// 008bc280  6aff                 push -1
// 008bc282  68f8399600           push 0x9639f8
// 008bc287  64a100000000         mov eax, dword ptr fs:[0]
// 008bc28d  50                   push eax
// 008bc28e  83ec08               sub esp, 8
// 008bc291  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc296  33c4                 xor eax, esp
// 008bc298  50                   push eax
// 008bc299  8d44240c             lea eax, [esp + 0xc]
// 008bc29d  64a300000000         mov dword ptr fs:[0], eax
// 008bc2a3  8d4c2404             lea ecx, [esp + 4]
// 008bc2a7  e8647df3ff           call 0x7f4010
// 008bc2ac  8b442424             mov eax, dword ptr [esp + 0x24]
// 008bc2b0  8b4804               mov ecx, dword ptr [eax + 4]
// 008bc2b3  8b10                 mov edx, dword ptr [eax]
// 008bc2b5  6a01                 push 1
// 008bc2b7  6a00                 push 0
// 008bc2b9  6a19                 push 0x19
// 008bc2bb  51                   push ecx
// 008bc2bc  52                   push edx
// 008bc2bd  8d4c2418             lea ecx, [esp + 0x18]
// 008bc2c1  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008bc2c9  e83c7df3ff           call 0x7f400a
// 008bc2ce  8b442428             mov eax, dword ptr [esp + 0x28]
// 008bc2d2  85c0                 test eax, eax
// 008bc2d4  7403                 je 0x8bc2d9
// 008bc2d6  8b4004               mov eax, dword ptr [eax + 4]
// 008bc2d9  6800ff0000           push 0xff00
// 008bc2de  50                   push eax
// 008bc2df  8b442410             mov eax, dword ptr [esp + 0x10]
// 008bc2e3  50                   push eax
// 008bc2e4  e83578f3ff           call 0x7f3b1e
// 008bc2e9  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 008bc2ef  8b09                 mov ecx, dword ptr [ecx]
// 008bc2f1  e82a6eb5ff           call 0x413120
// 008bc2f6  8b442420             mov eax, dword ptr [esp + 0x20]
// 008bc2fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bc2fe  8b10                 mov edx, dword ptr [eax]
// 008bc300  8b4004               mov eax, dword ptr [eax + 4]
// 008bc303  85c9                 test ecx, ecx
// 008bc305  7403                 je 0x8bc30a
// 008bc307  8b4904               mov ecx, dword ptr [ecx + 4]
// 008bc30a  6a00                 push 0
// 008bc30c  50                   push eax
// 008bc30d  52                   push edx
// 008bc30e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008bc312  51                   push ecx
// 008bc313  6a00                 push 0
// 008bc315  52                   push edx
// 008bc316  e80378f3ff           call 0x7f3b1e
// 008bc31b  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 008bc321  8b08                 mov ecx, dword ptr [eax]
// 008bc323  e8c8b9f5ff           call 0x817cf0
// 008bc328  8d4c2404             lea ecx, [esp + 4]
// 008bc32c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008bc334  e8b97cf3ff           call 0x7f3ff2
// 008bc339  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008bc33d  64890d00000000       mov dword ptr fs:[0], ecx
// 008bc344  59                   pop ecx
// 008bc345  83c414               add esp, 0x14
// 008bc348  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawTransparent@CXTPDockingPaneContextStickerWnd@@IAEXPAVCDC@@ABVCPoint@@ABVCSize@@PAVCBitmap@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp