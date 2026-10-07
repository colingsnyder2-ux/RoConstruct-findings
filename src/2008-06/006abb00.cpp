// roc 2008-06 006abb00  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006abb00
//
// 006abb00  83ec08               sub esp, 8
// 006abb03  56                   push esi
// 006abb04  8d442404             lea eax, [esp + 4]
// 006abb08  50                   push eax
// 006abb09  8bf1                 mov esi, ecx
// 006abb0b  ff159c2d8000         call dword ptr [0x802d9c]
// 006abb11  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 006abb17  8b4220               mov eax, dword ptr [edx + 0x20]
// 006abb1a  8d4c2404             lea ecx, [esp + 4]
// 006abb1e  51                   push ecx
// 006abb1f  50                   push eax
// 006abb20  ff15a02d8000         call dword ptr [0x802da0]
// 006abb26  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006abb2a  8b542404             mov edx, dword ptr [esp + 4]
// 006abb2e  51                   push ecx
// 006abb2f  52                   push edx
// 006abb30  81c6c0000000         add esi, 0xc0
// 006abb36  56                   push esi
// 006abb37  ff152c2d8000         call dword ptr [0x802d2c]
// 006abb3d  5e                   pop esi
// 006abb3e  83c408               add esp, 8
// 006abb41  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCursorOver@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
