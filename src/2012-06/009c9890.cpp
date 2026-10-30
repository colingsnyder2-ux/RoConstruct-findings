// from server: 100% by auto
// roc 2012-06 009c9890  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9890
//
// 009c9890  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9894  8b41fc               mov eax, dword ptr [ecx - 4]
// 009c9897  8b5058               mov edx, dword ptr [eax + 0x58]
// 009c989a  83c1fc               add ecx, -4
// 009c989d  ffd2                 call edx
// 009c989f  8bc8                 mov ecx, eax
// 009c98a1  e82490fbff           call 0x9828ca
// 009c98a6  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
