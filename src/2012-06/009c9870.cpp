// roc 2012-06 009c9870  unit: CXTPAccessible::XAccessible  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9870
//
// 009c9870  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c9874  8b41fc               mov eax, dword ptr [ecx - 4]
// 009c9877  8b5058               mov edx, dword ptr [eax + 0x58]
// 009c987a  83c1fc               add ecx, -4
// 009c987d  ffd2                 call edx
// 009c987f  8bc8                 mov ecx, eax
// 009c9881  e83e90fbff           call 0x9828c4
// 009c9886  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?AddRef@XAccessible@CXTPAccessible@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
