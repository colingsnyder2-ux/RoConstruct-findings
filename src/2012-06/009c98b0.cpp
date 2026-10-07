// roc 2012-06 009c98b0  unit: CXTPAccessible::XAccessible  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c98b0
//
// 009c98b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c98b4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c98b8  8b542408             mov edx, dword ptr [esp + 8]
// 009c98bc  83c1fc               add ecx, -4
// 009c98bf  50                   push eax
// 009c98c0  8b01                 mov eax, dword ptr [ecx]
// 009c98c2  52                   push edx
// 009c98c3  8b5058               mov edx, dword ptr [eax + 0x58]
// 009c98c6  ffd2                 call edx
// 009c98c8  8bc8                 mov ecx, eax
// 009c98ca  e80190fbff           call 0x9828d0
// 009c98cf  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?QueryInterface@XAccessible@CXTPAccessible@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
