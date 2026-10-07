// roc 2007-08 00684510  unit: CXTPPropertyGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684510
//
// 00684510  8b4138               mov eax, dword ptr [ecx + 0x38]
// 00684513  85c0                 test eax, eax
// 00684515  750a                 jne 0x684521
// 00684517  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0068451a  50                   push eax
// 0068451b  ff15f8eb7700         call dword ptr [0x77ebf8]
// 00684521  50                   push eax
// 00684522  e899bcfaff           call 0x6301c0
// 00684527  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068452b  8b542404             mov edx, dword ptr [esp + 4]
// 0068452f  8b4020               mov eax, dword ptr [eax + 0x20]
// 00684532  51                   push ecx
// 00684533  52                   push edx
// 00684534  68df2a0000           push 0x2adf
// 00684539  50                   push eax
// 0068453a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00684540  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SendNotifyMessageA@CXTPPropertyGrid@@UAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
