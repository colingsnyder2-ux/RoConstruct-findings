// roc 2009-06 00419ab0  unit: CInsertObjectDialog  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419ab0
//
// 00419ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00419ab4  8b10                 mov edx, dword ptr [eax]
// 00419ab6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00419aba  3b11                 cmp edx, dword ptr [ecx]
// 00419abc  7d02                 jge 0x419ac0
// 00419abe  8bc1                 mov eax, ecx
// 00419ac0  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??$max@H@std@@YAABHABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
