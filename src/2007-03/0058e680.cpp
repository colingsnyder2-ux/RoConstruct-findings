// roc 2007-03 0058e680  unit: seg_00580000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058e680
//
// 0058e680  b801000000           mov eax, 1
// 0058e685  398198010000         cmp dword ptr [ecx + 0x198], eax
// 0058e68b  7418                 je 0x58e6a5
// 0058e68d  898198010000         mov dword ptr [ecx + 0x198], eax
// 0058e693  e888fbffff           call 0x58e220
// 0058e698  85c0                 test eax, eax
// 0058e69a  7409                 je 0x58e6a5
// 0058e69c  8b10                 mov edx, dword ptr [eax]
// 0058e69e  8bc8                 mov ecx, eax
// 0058e6a0  8b420c               mov eax, dword ptr [edx + 0xc]
// 0058e6a3  ffe0                 jmp eax
// 0058e6a5  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?autoMode@Camera@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
