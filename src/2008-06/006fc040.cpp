// roc 2008-06 006fc040  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc040
//
// 006fc040  8b4138               mov eax, dword ptr [ecx + 0x38]
// 006fc043  85c0                 test eax, eax
// 006fc045  750a                 jne 0x6fc051
// 006fc047  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006fc04a  50                   push eax
// 006fc04b  ff15f82d8000         call dword ptr [0x802df8]
// 006fc051  50                   push eax
// 006fc052  e8874bfaff           call 0x6a0bde
// 006fc057  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006fc05b  8b542404             mov edx, dword ptr [esp + 4]
// 006fc05f  8b4020               mov eax, dword ptr [eax + 0x20]
// 006fc062  51                   push ecx
// 006fc063  52                   push edx
// 006fc064  68df2a0000           push 0x2adf
// 006fc069  50                   push eax
// 006fc06a  ff15142e8000         call dword ptr [0x802e14]
// 006fc070  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SendNotifyMessageA@CXTPPropertyGrid@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
