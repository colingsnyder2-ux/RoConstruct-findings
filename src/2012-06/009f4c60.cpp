// roc 2012-06 009f4c60  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4c60
//
// 009f4c60  8b442404             mov eax, dword ptr [esp + 4]
// 009f4c64  898110010000         mov dword ptr [ecx + 0x110], eax
// 009f4c6a  85c0                 test eax, eax
// 009f4c6c  7408                 je 0x9f4c76
// 009f4c6e  8b890c010000         mov ecx, dword ptr [ecx + 0x10c]
// 009f4c74  8908                 mov dword ptr [eax], ecx
// 009f4c76  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?BindToBool@CXTPPropertyGridItemBool@@UAEXPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
