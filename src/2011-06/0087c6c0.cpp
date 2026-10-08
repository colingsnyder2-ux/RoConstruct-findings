// roc 2011-06 0087c6c0  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c6c0
//
// 0087c6c0  8b442404             mov eax, dword ptr [esp + 4]
// 0087c6c4  898110010000         mov dword ptr [ecx + 0x110], eax
// 0087c6ca  85c0                 test eax, eax
// 0087c6cc  7408                 je 0x87c6d6
// 0087c6ce  8b890c010000         mov ecx, dword ptr [ecx + 0x10c]
// 0087c6d4  8908                 mov dword ptr [eax], ecx
// 0087c6d6  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?BindToBool@CXTPPropertyGridItemBool@@UAEXPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
