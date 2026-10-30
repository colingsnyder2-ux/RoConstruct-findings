// roc 2007-03 00680640  unit: seg_00680000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00680640
//
// 00680640  8b442404             mov eax, dword ptr [esp + 4]
// 00680644  8d90bff9ffff         lea edx, [eax - 0x641]
// 0068064a  83fa1e               cmp edx, 0x1e
// 0068064d  770d                 ja 0x68065c
// 0068064f  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 00680652  8b848134e7ffff       mov eax, dword ptr [ecx + eax*4 - 0x18cc]
// 00680659  c20400               ret 4
// 0068065c  83c8ff               or eax, 0xffffffff
// 0068065f  c20400               ret 4
// library xtp-11.2.2/Source\SkinFramework\XTPSkinManager.cpp (function ?GetThemeSysColor@CXTPSkinManager@@QAEKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/SkinFramework/XTPSkinManager.cpp
