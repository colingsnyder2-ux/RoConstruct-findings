// from server: 100% by auto
// roc 2012-06 009e3390  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3390
//
// 009e3390  8b4138               mov eax, dword ptr [ecx + 0x38]
// 009e3393  85c0                 test eax, eax
// 009e3395  750a                 jne 0x9e33a1
// 009e3397  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009e339a  50                   push eax
// 009e339b  ff15503ab200         call dword ptr [0xb23a50]
// 009e33a1  50                   push eax
// 009e33a2  e8bff2f9ff           call 0x982666
// 009e33a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e33ab  8b542404             mov edx, dword ptr [esp + 4]
// 009e33af  8b4020               mov eax, dword ptr [eax + 0x20]
// 009e33b2  51                   push ecx
// 009e33b3  52                   push edx
// 009e33b4  68df2a0000           push 0x2adf
// 009e33b9  50                   push eax
// 009e33ba  ff15043cb200         call dword ptr [0xb23c04]
// 009e33c0  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SendNotifyMessageA@CXTPPropertyGrid@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
