// roc 2009-12 0088ebb0  unit: CXTPShortcutManager::CKeyHelper  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ebb0
//
// 0088ebb0  8bc1                 mov eax, ecx
// 0088ebb2  33c9                 xor ecx, ecx
// 0088ebb4  c700ac31a000         mov dword ptr [eax], 0xa031ac
// 0088ebba  894804               mov dword ptr [eax + 4], ecx
// 0088ebbd  894810               mov dword ptr [eax + 0x10], ecx
// 0088ebc0  89480c               mov dword ptr [eax + 0xc], ecx
// 0088ebc3  894808               mov dword ptr [eax + 8], ecx
// 0088ebc6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
