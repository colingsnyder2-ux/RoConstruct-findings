// roc 2010-06 0081f1b0  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081f1b0
//
// 0081f1b0  8b442404             mov eax, dword ptr [esp + 4]
// 0081f1b4  898110010000         mov dword ptr [ecx + 0x110], eax
// 0081f1ba  85c0                 test eax, eax
// 0081f1bc  7408                 je 0x81f1c6
// 0081f1be  8b890c010000         mov ecx, dword ptr [ecx + 0x10c]
// 0081f1c4  8908                 mov dword ptr [eax], ecx
// 0081f1c6  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?BindToBool@CXTPPropertyGridItemBool@@UAEXPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
