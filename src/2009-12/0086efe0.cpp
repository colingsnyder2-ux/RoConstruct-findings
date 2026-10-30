// roc 2009-12 0086efe0  unit: CXTPResourceManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086efe0
//
// 0086efe0  8bc1                 mov eax, ecx
// 0086efe2  33c9                 xor ecx, ecx
// 0086efe4  c700600ba000         mov dword ptr [eax], 0xa00b60
// 0086efea  894804               mov dword ptr [eax + 4], ecx
// 0086efed  894810               mov dword ptr [eax + 0x10], ecx
// 0086eff0  89480c               mov dword ptr [eax + 0xc], ecx
// 0086eff3  894808               mov dword ptr [eax + 8], ecx
// 0086eff6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
