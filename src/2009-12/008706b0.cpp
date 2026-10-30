// roc 2009-12 008706b0  unit: CXTPHookManagerHookAble  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008706b0
//
// 008706b0  8bc1                 mov eax, ecx
// 008706b2  33c9                 xor ecx, ecx
// 008706b4  c700800da000         mov dword ptr [eax], 0xa00d80
// 008706ba  894804               mov dword ptr [eax + 4], ecx
// 008706bd  894810               mov dword ptr [eax + 0x10], ecx
// 008706c0  89480c               mov dword ptr [eax + 0xc], ecx
// 008706c3  894808               mov dword ptr [eax + 8], ecx
// 008706c6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
