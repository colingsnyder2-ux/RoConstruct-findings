// roc 2009-06 007201e0  unit: CXTPControl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007201e0
//
// 007201e0  83ec08               sub esp, 8
// 007201e3  56                   push esi
// 007201e4  8d442404             lea eax, [esp + 4]
// 007201e8  50                   push eax
// 007201e9  8bf1                 mov esi, ecx
// 007201eb  ff152cee8900         call dword ptr [0x89ee2c]
// 007201f1  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007201f7  8b4220               mov eax, dword ptr [edx + 0x20]
// 007201fa  8d4c2404             lea ecx, [esp + 4]
// 007201fe  51                   push ecx
// 007201ff  50                   push eax
// 00720200  ff1530ee8900         call dword ptr [0x89ee30]
// 00720206  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072020a  8b542404             mov edx, dword ptr [esp + 4]
// 0072020e  51                   push ecx
// 0072020f  52                   push edx
// 00720210  81c6c0000000         add esi, 0xc0
// 00720216  56                   push esi
// 00720217  ff15c0ed8900         call dword ptr [0x89edc0]
// 0072021d  5e                   pop esi
// 0072021e  83c408               add esp, 8
// 00720221  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?IsCursorOver@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
