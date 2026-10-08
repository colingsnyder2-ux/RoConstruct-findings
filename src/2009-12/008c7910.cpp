// roc 2009-12 008c7910  unit: VCEdit::?$CXTMaskEditT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7910
//
// 008c7910  8bc1                 mov eax, ecx
// 008c7912  33c9                 xor ecx, ecx
// 008c7914  c700989ea000         mov dword ptr [eax], 0xa09e98
// 008c791a  894804               mov dword ptr [eax + 4], ecx
// 008c791d  894810               mov dword ptr [eax + 0x10], ecx
// 008c7920  89480c               mov dword ptr [eax + 0xc], ecx
// 008c7923  894808               mov dword ptr [eax + 8], ecx
// 008c7926  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
