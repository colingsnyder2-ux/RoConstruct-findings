// roc 2008-06 006e8360  unit: CXTPAccessible::XAccessible  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8360
//
// 006e8360  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e8364  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e8368  8b542408             mov edx, dword ptr [esp + 8]
// 006e836c  83c1fc               add ecx, -4
// 006e836f  50                   push eax
// 006e8370  8b01                 mov eax, dword ptr [ecx]
// 006e8372  52                   push edx
// 006e8373  8b5058               mov edx, dword ptr [eax + 0x58]
// 006e8376  ffd2                 call edx
// 006e8378  8bc8                 mov ecx, eax
// 006e837a  e833400d00           call 0x7bc3b2
// 006e837f  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?QueryInterface@XAccessible@CXTPAccessible@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
