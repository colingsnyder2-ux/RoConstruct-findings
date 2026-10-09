// roc 2009-12 008835d0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008835d0
//
// 008835d0  83ec10               sub esp, 0x10
// 008835d3  837c242800           cmp dword ptr [esp + 0x28], 0
// 008835d8  7408                 je 0x8835e2
// 008835da  81c1dc040000         add ecx, 0x4dc
// 008835e0  eb06                 jmp 0x8835e8
// 008835e2  81c17c040000         add ecx, 0x47c
// 008835e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008835ec  8b542420             mov edx, dword ptr [esp + 0x20]
// 008835f0  890424               mov dword ptr [esp], eax
// 008835f3  03c2                 add eax, edx
// 008835f5  8b542424             mov edx, dword ptr [esp + 0x24]
// 008835f9  89442408             mov dword ptr [esp + 8], eax
// 008835fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00883601  6a00                 push 0
// 00883603  89442408             mov dword ptr [esp + 8], eax
// 00883607  03c2                 add eax, edx
// 00883609  6a01                 push 1
// 0088360b  51                   push ecx
// 0088360c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00883610  89442418             mov dword ptr [esp + 0x18], eax
// 00883614  8d44240c             lea eax, [esp + 0xc]
// 00883618  50                   push eax
// 00883619  51                   push ecx
// 0088361a  e8819cfcff           call 0x84d2a0
// 0088361f  8bc8                 mov ecx, eax
// 00883621  e89a9ffcff           call 0x84d5c0
// 00883626  83c410               add esp, 0x10
// 00883629  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawPopupBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
