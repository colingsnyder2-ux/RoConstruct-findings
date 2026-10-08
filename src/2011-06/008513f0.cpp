// from server: 100% by auto
// roc 2011-06 008513f0  unit: CXTPAccessible::XAccessible  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008513f0
//
// 008513f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008513f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008513f8  8b542408             mov edx, dword ptr [esp + 8]
// 008513fc  83c1fc               add ecx, -4
// 008513ff  50                   push eax
// 00851400  8b01                 mov eax, dword ptr [ecx]
// 00851402  52                   push edx
// 00851403  8b5058               mov edx, dword ptr [eax + 0x58]
// 00851406  ffd2                 call edx
// 00851408  8bc8                 mov ecx, eax
// 0085140a  e84194fbff           call 0x80a850
// 0085140f  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?QueryInterface@XAccessible@CXTPAccessible@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
