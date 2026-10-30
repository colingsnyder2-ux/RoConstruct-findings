// roc 2012-06 00a0c140  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0c140
//
// 00a0c140  83ec10               sub esp, 0x10
// 00a0c143  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a0c148  7408                 je 0xa0c152
// 00a0c14a  81c1dc040000         add ecx, 0x4dc
// 00a0c150  eb06                 jmp 0xa0c158
// 00a0c152  81c17c040000         add ecx, 0x47c
// 00a0c158  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a0c15c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a0c160  890424               mov dword ptr [esp], eax
// 00a0c163  03c2                 add eax, edx
// 00a0c165  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a0c169  89442408             mov dword ptr [esp + 8], eax
// 00a0c16d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a0c171  6a00                 push 0
// 00a0c173  89442408             mov dword ptr [esp + 8], eax
// 00a0c177  03c2                 add eax, edx
// 00a0c179  6a01                 push 1
// 00a0c17b  51                   push ecx
// 00a0c17c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0c180  89442418             mov dword ptr [esp + 0x18], eax
// 00a0c184  8d44240c             lea eax, [esp + 0xc]
// 00a0c188  50                   push eax
// 00a0c189  51                   push ecx
// 00a0c18a  e801b0fcff           call 0x9d7190
// 00a0c18f  8bc8                 mov ecx, eax
// 00a0c191  e81ab3fcff           call 0x9d74b0
// 00a0c196  83c410               add esp, 0x10
// 00a0c199  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawPopupBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
