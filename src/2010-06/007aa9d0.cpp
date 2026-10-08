// roc 2010-06 007aa9d0  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007aa9d0
//
// 007aa9d0  83ec08               sub esp, 8
// 007aa9d3  56                   push esi
// 007aa9d4  8d442404             lea eax, [esp + 4]
// 007aa9d8  50                   push eax
// 007aa9d9  8bf1                 mov esi, ecx
// 007aa9db  ff1574bc9e00         call dword ptr [0x9ebc74]
// 007aa9e1  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007aa9e7  8b4220               mov eax, dword ptr [edx + 0x20]
// 007aa9ea  8d4c2404             lea ecx, [esp + 4]
// 007aa9ee  51                   push ecx
// 007aa9ef  50                   push eax
// 007aa9f0  ff1578bc9e00         call dword ptr [0x9ebc78]
// 007aa9f6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007aa9fa  8b542404             mov edx, dword ptr [esp + 4]
// 007aa9fe  51                   push ecx
// 007aa9ff  52                   push edx
// 007aaa00  81c6c0000000         add esi, 0xc0
// 007aaa06  56                   push esi
// 007aaa07  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 007aaa0d  5e                   pop esi
// 007aaa0e  83c408               add esp, 8
// 007aaa11  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCursorOver@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
