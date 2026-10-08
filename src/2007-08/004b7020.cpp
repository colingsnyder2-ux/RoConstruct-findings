// roc 2007-08 004b7020  unit: Exposer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7020
//
// 004b7020  8b542404             mov edx, dword ptr [esp + 4]
// 004b7024  52                   push edx
// 004b7025  e816fdffff           call 0x4b6d40
// 004b702a  83c404               add esp, 4
// 004b702d  85c0                 test eax, eax
// 004b702f  750b                 jne 0x4b703c
// 004b7031  8b01                 mov eax, dword ptr [ecx]
// 004b7033  89542404             mov dword ptr [esp + 4], edx
// 004b7037  8b5048               mov edx, dword ptr [eax + 0x48]
// 004b703a  ffe2                 jmp edx
// 004b703c  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?IDTOString@PacketLogger@@IAEPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
