// from server: 100% by auto
// roc 2008-06 00717a20  unit: CPropertyGridItemBrickColor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717a20
//
// 00717a20  8b442404             mov eax, dword ptr [esp + 4]
// 00717a24  898110010000         mov dword ptr [ecx + 0x110], eax
// 00717a2a  85c0                 test eax, eax
// 00717a2c  7408                 je 0x717a36
// 00717a2e  8b890c010000         mov ecx, dword ptr [ecx + 0x10c]
// 00717a34  8908                 mov dword ptr [eax], ecx
// 00717a36  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?BindToBool@CXTPPropertyGridItemBool@@UAEXPAH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemBool.cpp
