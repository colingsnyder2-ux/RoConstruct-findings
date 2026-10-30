// roc 2009-12 00861d90  unit: CXTPToolTipContext::CStandardToolTip  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861d90
//
// 00861d90  8bc1                 mov eax, ecx
// 00861d92  33c9                 xor ecx, ecx
// 00861d94  c7000ce09f00         mov dword ptr [eax], 0x9fe00c
// 00861d9a  894804               mov dword ptr [eax + 4], ecx
// 00861d9d  894810               mov dword ptr [eax + 0x10], ecx
// 00861da0  89480c               mov dword ptr [eax + 0xc], ecx
// 00861da3  894808               mov dword ptr [eax + 8], ecx
// 00861da6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
