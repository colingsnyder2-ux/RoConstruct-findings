// roc 2009-12 00836b40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00836b40
//
// 00836b40  8bc1                 mov eax, ecx
// 00836b42  33c9                 xor ecx, ecx
// 00836b44  c7006c7d9f00         mov dword ptr [eax], 0x9f7d6c
// 00836b4a  894804               mov dword ptr [eax + 4], ecx
// 00836b4d  894810               mov dword ptr [eax + 0x10], ecx
// 00836b50  89480c               mov dword ptr [eax + 0xc], ecx
// 00836b53  894808               mov dword ptr [eax + 8], ecx
// 00836b56  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
