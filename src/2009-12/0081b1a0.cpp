// roc 2009-12 0081b1a0  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b1a0
//
// 0081b1a0  8bc1                 mov eax, ecx
// 0081b1a2  33c9                 xor ecx, ecx
// 0081b1a4  c700a0499f00         mov dword ptr [eax], 0x9f49a0
// 0081b1aa  894804               mov dword ptr [eax + 4], ecx
// 0081b1ad  894810               mov dword ptr [eax + 0x10], ecx
// 0081b1b0  89480c               mov dword ptr [eax + 0xc], ecx
// 0081b1b3  894808               mov dword ptr [eax + 8], ecx
// 0081b1b6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
