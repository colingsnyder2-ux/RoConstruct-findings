// roc 2008-06 004badc0  unit: Exposer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004badc0
//
// 004badc0  8b542404             mov edx, dword ptr [esp + 4]
// 004badc4  52                   push edx
// 004badc5  e8e6fcffff           call 0x4baab0
// 004badca  83c404               add esp, 4
// 004badcd  85c0                 test eax, eax
// 004badcf  750b                 jne 0x4baddc
// 004badd1  8b01                 mov eax, dword ptr [ecx]
// 004badd3  89542404             mov dword ptr [esp + 4], edx
// 004badd7  8b5048               mov edx, dword ptr [eax + 0x48]
// 004badda  ffe2                 jmp edx
// 004baddc  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?IDTOString@PacketLogger@@IAEPADE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
