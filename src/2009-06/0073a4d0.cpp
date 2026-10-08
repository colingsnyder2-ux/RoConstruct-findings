// roc 2009-06 0073a4d0  unit: CXTPToolBar  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073a4d0
//
// 0073a4d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073a4d4  56                   push esi
// 0073a4d5  8bf1                 mov esi, ecx
// 0073a4d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073a4db  50                   push eax
// 0073a4dc  51                   push ecx
// 0073a4dd  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0073a4e3  e858030300           call 0x76a840
// 0073a4e8  85c0                 test eax, eax
// 0073a4ea  7515                 jne 0x73a501
// 0073a4ec  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0073a4f2  85c9                 test ecx, ecx
// 0073a4f4  740b                 je 0x73a501
// 0073a4f6  8b11                 mov edx, dword ptr [ecx]
// 0073a4f8  8b420c               mov eax, dword ptr [edx + 0xc]
// 0073a4fb  ffd0                 call eax
// 0073a4fd  5e                   pop esi
// 0073a4fe  c20c00               ret 0xc
// 0073a501  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073a505  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0073a509  8b442408             mov eax, dword ptr [esp + 8]
// 0073a50d  51                   push ecx
// 0073a50e  52                   push edx
// 0073a50f  50                   push eax
// 0073a510  8bce                 mov ecx, esi
// 0073a512  e83939ffff           call 0x72de50
// 0073a517  5e                   pop esi
// 0073a518  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnLButtonDblClk@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
