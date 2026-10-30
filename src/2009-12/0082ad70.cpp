// roc 2009-12 0082ad70  unit: CInstanceRecord  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ad70
//
// 0082ad70  8bc1                 mov eax, ecx
// 0082ad72  33c9                 xor ecx, ecx
// 0082ad74  c70074599f00         mov dword ptr [eax], 0x9f5974
// 0082ad7a  894804               mov dword ptr [eax + 4], ecx
// 0082ad7d  894810               mov dword ptr [eax + 0x10], ecx
// 0082ad80  89480c               mov dword ptr [eax + 0xc], ecx
// 0082ad83  894808               mov dword ptr [eax + 8], ecx
// 0082ad86  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
