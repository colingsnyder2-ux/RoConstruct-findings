// roc 2009-06 007a8710  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a8710
//
// 007a8710  83ec10               sub esp, 0x10
// 007a8713  837c242800           cmp dword ptr [esp + 0x28], 0
// 007a8718  7408                 je 0x7a8722
// 007a871a  81c1dc040000         add ecx, 0x4dc
// 007a8720  eb06                 jmp 0x7a8728
// 007a8722  81c17c040000         add ecx, 0x47c
// 007a8728  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a872c  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a8730  890424               mov dword ptr [esp], eax
// 007a8733  03c2                 add eax, edx
// 007a8735  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a8739  89442408             mov dword ptr [esp + 8], eax
// 007a873d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a8741  6a00                 push 0
// 007a8743  89442408             mov dword ptr [esp + 8], eax
// 007a8747  03c2                 add eax, edx
// 007a8749  6a01                 push 1
// 007a874b  51                   push ecx
// 007a874c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a8750  89442418             mov dword ptr [esp + 0x18], eax
// 007a8754  8d44240c             lea eax, [esp + 0xc]
// 007a8758  50                   push eax
// 007a8759  51                   push ecx
// 007a875a  e8119efcff           call 0x772570
// 007a875f  8bc8                 mov ecx, eax
// 007a8761  e82aa1fcff           call 0x772890
// 007a8766  83c410               add esp, 0x10
// 007a8769  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawPopupBarGripper@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
