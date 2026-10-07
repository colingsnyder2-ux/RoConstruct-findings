// roc 2008-06 0073a040  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073a040
//
// 0073a040  83ec10               sub esp, 0x10
// 0073a043  837c242800           cmp dword ptr [esp + 0x28], 0
// 0073a048  7408                 je 0x73a052
// 0073a04a  81c1dc040000         add ecx, 0x4dc
// 0073a050  eb06                 jmp 0x73a058
// 0073a052  81c17c040000         add ecx, 0x47c
// 0073a058  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073a05c  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073a060  890424               mov dword ptr [esp], eax
// 0073a063  03c2                 add eax, edx
// 0073a065  8b542424             mov edx, dword ptr [esp + 0x24]
// 0073a069  89442408             mov dword ptr [esp + 8], eax
// 0073a06d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073a071  6a00                 push 0
// 0073a073  89442408             mov dword ptr [esp + 8], eax
// 0073a077  03c2                 add eax, edx
// 0073a079  6a01                 push 1
// 0073a07b  51                   push ecx
// 0073a07c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073a080  89442418             mov dword ptr [esp + 0x18], eax
// 0073a084  8d44240c             lea eax, [esp + 0xc]
// 0073a088  50                   push eax
// 0073a089  51                   push ecx
// 0073a08a  e841fbfbff           call 0x6f9bd0
// 0073a08f  8bc8                 mov ecx, eax
// 0073a091  e85afefbff           call 0x6f9ef0
// 0073a096  83c410               add esp, 0x10
// 0073a099  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawPopupBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
