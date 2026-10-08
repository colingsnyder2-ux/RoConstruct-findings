// roc 2010-06 00836b30  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00836b30
//
// 00836b30  83ec10               sub esp, 0x10
// 00836b33  837c242800           cmp dword ptr [esp + 0x28], 0
// 00836b38  7408                 je 0x836b42
// 00836b3a  81c1dc040000         add ecx, 0x4dc
// 00836b40  eb06                 jmp 0x836b48
// 00836b42  81c17c040000         add ecx, 0x47c
// 00836b48  8b442418             mov eax, dword ptr [esp + 0x18]
// 00836b4c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00836b50  890424               mov dword ptr [esp], eax
// 00836b53  03c2                 add eax, edx
// 00836b55  8b542424             mov edx, dword ptr [esp + 0x24]
// 00836b59  89442408             mov dword ptr [esp + 8], eax
// 00836b5d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00836b61  6a00                 push 0
// 00836b63  89442408             mov dword ptr [esp + 8], eax
// 00836b67  03c2                 add eax, edx
// 00836b69  6a01                 push 1
// 00836b6b  51                   push ecx
// 00836b6c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00836b70  89442418             mov dword ptr [esp + 0x18], eax
// 00836b74  8d44240c             lea eax, [esp + 0xc]
// 00836b78  50                   push eax
// 00836b79  51                   push ecx
// 00836b7a  e881a7fcff           call 0x801300
// 00836b7f  8bc8                 mov ecx, eax
// 00836b81  e89aaafcff           call 0x801620
// 00836b86  83c410               add esp, 0x10
// 00836b89  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawPopupBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
