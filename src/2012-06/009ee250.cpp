// roc 2012-06 009ee250  unit: CXTAuxData  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee250
//
// 009ee250  6aff                 push -1
// 009ee252  685e19ae00           push 0xae195e
// 009ee257  64a100000000         mov eax, dword ptr fs:[0]
// 009ee25d  50                   push eax
// 009ee25e  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ee263  33c4                 xor eax, esp
// 009ee265  50                   push eax
// 009ee266  8d442404             lea eax, [esp + 4]
// 009ee26a  64a300000000         mov dword ptr fs:[0], eax
// 009ee270  b801000000           mov eax, 1
// 009ee275  84055c9de500         test byte ptr [0xe59d5c], al
// 009ee27b  7525                 jne 0x9ee2a2
// 009ee27d  09055c9de500         or dword ptr [0xe59d5c], eax
// 009ee283  b9089ce500           mov ecx, 0xe59c08
// 009ee288  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 009ee290  e8ebfdffff           call 0x9ee080
// 009ee295  687017b200           push 0xb21770
// 009ee29a  e8564ff9ff           call 0x9831f5
// 009ee29f  83c404               add esp, 4
// 009ee2a2  b8089ce500           mov eax, 0xe59c08
// 009ee2a7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009ee2ab  64890d00000000       mov dword ptr fs:[0], ecx
// 009ee2b2  59                   pop ecx
// 009ee2b3  83c40c               add esp, 0xc
// 009ee2b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
