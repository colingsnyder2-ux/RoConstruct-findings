// from server: 100% by auto
// roc 2011-06 0086ae30  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ae30
//
// 0086ae30  8b4138               mov eax, dword ptr [ecx + 0x38]
// 0086ae33  85c0                 test eax, eax
// 0086ae35  750a                 jne 0x86ae41
// 0086ae37  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0086ae3a  50                   push eax
// 0086ae3b  ff15b819a400         call dword ptr [0xa419b8]
// 0086ae41  50                   push eax
// 0086ae42  e8e1f4f9ff           call 0x80a328
// 0086ae47  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086ae4b  8b542404             mov edx, dword ptr [esp + 4]
// 0086ae4f  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086ae52  51                   push ecx
// 0086ae53  52                   push edx
// 0086ae54  68df2a0000           push 0x2adf
// 0086ae59  50                   push eax
// 0086ae5a  ff15c019a400         call dword ptr [0xa419c0]
// 0086ae60  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SendNotifyMessageA@CXTPPropertyGrid@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
