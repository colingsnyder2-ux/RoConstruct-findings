// roc 2011-06 00893b60  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00893b60
//
// 00893b60  83ec10               sub esp, 0x10
// 00893b63  837c242800           cmp dword ptr [esp + 0x28], 0
// 00893b68  7408                 je 0x893b72
// 00893b6a  81c1dc040000         add ecx, 0x4dc
// 00893b70  eb06                 jmp 0x893b78
// 00893b72  81c17c040000         add ecx, 0x47c
// 00893b78  8b442418             mov eax, dword ptr [esp + 0x18]
// 00893b7c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00893b80  890424               mov dword ptr [esp], eax
// 00893b83  03c2                 add eax, edx
// 00893b85  8b542424             mov edx, dword ptr [esp + 0x24]
// 00893b89  89442408             mov dword ptr [esp + 8], eax
// 00893b8d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00893b91  6a00                 push 0
// 00893b93  89442408             mov dword ptr [esp + 8], eax
// 00893b97  03c2                 add eax, edx
// 00893b99  6a01                 push 1
// 00893b9b  51                   push ecx
// 00893b9c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00893ba0  89442418             mov dword ptr [esp + 0x18], eax
// 00893ba4  8d44240c             lea eax, [esp + 0xc]
// 00893ba8  50                   push eax
// 00893ba9  51                   push ecx
// 00893baa  e8d1b1fcff           call 0x85ed80
// 00893baf  8bc8                 mov ecx, eax
// 00893bb1  e8eab4fcff           call 0x85f0a0
// 00893bb6  83c410               add esp, 0x10
// 00893bb9  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawPopupBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
