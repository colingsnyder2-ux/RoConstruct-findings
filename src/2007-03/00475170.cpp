// roc 2007-03 00475170  unit: seg_00470000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00475170
//
// 00475170  56                   push esi
// 00475171  8bf1                 mov esi, ecx
// 00475173  e898aa0800           call 0x4ffc10
// 00475178  50                   push eax
// 00475179  8bce                 mov ecx, esi
// 0047517b  e800980800           call 0x4fe980
// 00475180  b801000000           mov eax, 1
// 00475185  840500788b00         test byte ptr [0x8b7800], al
// 0047518b  751a                 jne 0x4751a7
// 0047518d  d9ee                 fldz 
// 0047518f  090500788b00         or dword ptr [0x8b7800], eax
// 00475195  d915f4778b00         fst dword ptr [0x8b77f4]
// 0047519b  d915f8778b00         fst dword ptr [0x8b77f8]
// 004751a1  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 004751a7  d905f4778b00         fld dword ptr [0x8b77f4]
// 004751ad  8bc6                 mov eax, esi
// 004751af  d95e24               fstp dword ptr [esi + 0x24]
// 004751b2  d905f8778b00         fld dword ptr [0x8b77f8]
// 004751b8  d95e28               fstp dword ptr [esi + 0x28]
// 004751bb  d905fc778b00         fld dword ptr [0x8b77fc]
// 004751c1  d95e2c               fstp dword ptr [esi + 0x2c]
// 004751c4  5e                   pop esi
// 004751c5  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??0CoordinateFrame@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
