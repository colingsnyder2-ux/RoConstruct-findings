// roc 2007-03 004aa530  unit: seg_004a0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa530
//
// 004aa530  8b442404             mov eax, dword ptr [esp + 4]
// 004aa534  50                   push eax
// 004aa535  6844927800           push 0x789244
// 004aa53a  e805511700           call 0x61f644
// 004aa53f  83c408               add esp, 8
// 004aa542  c20400               ret 4
// library rbxgs-raknet/PacketLogger.cpp (function ?WriteLog@PacketLogger@@UAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet PacketLogger.cpp
