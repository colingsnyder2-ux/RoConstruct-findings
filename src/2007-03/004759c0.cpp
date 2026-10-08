// roc 2007-03 004759c0  unit: seg_00470000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004759c0
//
// 004759c0  56                   push esi
// 004759c1  8bf1                 mov esi, ecx
// 004759c3  8b06                 mov eax, dword ptr [esi]
// 004759c5  85c0                 test eax, eax
// 004759c7  7429                 je 0x4759f2
// 004759c9  83c004               add eax, 4
// 004759cc  50                   push eax
// 004759cd  ff15a8d27700         call dword ptr [0x77d2a8]
// 004759d3  85c0                 test eax, eax
// 004759d5  7515                 jne 0x4759ec
// 004759d7  8b0e                 mov ecx, dword ptr [esi]
// 004759d9  e8e2d9feff           call 0x4633c0
// 004759de  8b0e                 mov ecx, dword ptr [esi]
// 004759e0  85c9                 test ecx, ecx
// 004759e2  7408                 je 0x4759ec
// 004759e4  8b01                 mov eax, dword ptr [ecx]
// 004759e6  8b10                 mov edx, dword ptr [eax]
// 004759e8  6a01                 push 1
// 004759ea  ffd2                 call edx
// 004759ec  c70600000000         mov dword ptr [esi], 0
// 004759f2  5e                   pop esi
// 004759f3  c3                   ret 
// library rbxgs/gui\GuiDraw.cpp (function ?zeroPointer@?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
