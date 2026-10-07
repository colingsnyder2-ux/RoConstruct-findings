// roc 2008-06 006df520  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df520
//
// 006df520  8b442404             mov eax, dword ptr [esp + 4]
// 006df524  83f83e               cmp eax, 0x3e
// 006df527  7718                 ja 0x6df541
// 006df529  8b948168020000       mov edx, dword ptr [ecx + eax*4 + 0x268]
// 006df530  83faff               cmp edx, -1
// 006df533  750a                 jne 0x6df53f
// 006df535  8b84816c010000       mov eax, dword ptr [ecx + eax*4 + 0x16c]
// 006df53c  c20400               ret 4
// 006df53f  8bc2                 mov eax, edx
// 006df541  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?GetColor@CXTPColorManager@@QBEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
