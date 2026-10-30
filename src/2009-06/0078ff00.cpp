// roc 2009-06 0078ff00  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ff00
//
// 0078ff00  8b442404             mov eax, dword ptr [esp + 4]
// 0078ff04  898110010000         mov dword ptr [ecx + 0x110], eax
// 0078ff0a  85c0                 test eax, eax
// 0078ff0c  7408                 je 0x78ff16
// 0078ff0e  8b890c010000         mov ecx, dword ptr [ecx + 0x10c]
// 0078ff14  8908                 mov dword ptr [eax], ecx
// 0078ff16  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?BindToBool@CXTPPropertyGridItemBool@@UAEXPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
