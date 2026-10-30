// roc 2007-03 00715760  unit: seg_00710000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715760
//
// 00715760  8b442404             mov eax, dword ptr [esp + 4]
// 00715764  8b15b8288c00         mov edx, dword ptr [0x8c28b8]
// 0071576a  01500c               add dword ptr [eax + 0xc], edx
// 0071576d  8b15b4288c00         mov edx, dword ptr [0x8c28b4]
// 00715773  015008               add dword ptr [eax + 8], edx
// 00715776  89442404             mov dword ptr [esp + 4], eax
// 0071577a  e9319d0000           jmp 0x71f4b0
// library xtp-11.2.2/Source\SkinFramework\XTPSkinObjectMenu.cpp (function ?OnWindowPosChanging@CXTPSkinObjectMenu@@IAEXPAUtagWINDOWPOS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinObjectMenu.cpp
