// roc 2012-06 004957c0  unit: CRobloxView  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004957c0
//
// 004957c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004957c4  8b542404             mov edx, dword ptr [esp + 4]
// 004957c8  56                   push esi
// 004957c9  50                   push eax
// 004957ca  8b4204               mov eax, dword ptr [edx + 4]
// 004957cd  8bf1                 mov esi, ecx
// 004957cf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004957d3  51                   push ecx
// 004957d4  50                   push eax
// 004957d5  ff155c21b200         call dword ptr [0xb2215c]
// 004957db  50                   push eax
// 004957dc  8bce                 mov ecx, esi
// 004957de  e8f5ce4e00           call 0x9826d8
// 004957e3  5e                   pop esi
// 004957e4  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ?CreateCompatibleBitmap@CBitmap@@QAEHPAVCDC@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
