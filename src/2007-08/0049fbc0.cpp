// roc 2007-08 0049fbc0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fbc0
//
// 0049fbc0  56                   push esi
// 0049fbc1  8bf1                 mov esi, ecx
// 0049fbc3  8b06                 mov eax, dword ptr [esi]
// 0049fbc5  83c007               add eax, 7
// 0049fbc8  c1f803               sar eax, 3
// 0049fbcb  50                   push eax
// 0049fbcc  e825031900           call 0x62fef6
// 0049fbd1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049fbd5  8901                 mov dword ptr [ecx], eax
// 0049fbd7  8b16                 mov edx, dword ptr [esi]
// 0049fbd9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fbdc  83c207               add edx, 7
// 0049fbdf  c1fa03               sar edx, 3
// 0049fbe2  52                   push edx
// 0049fbe3  51                   push ecx
// 0049fbe4  50                   push eax
// 0049fbe5  e862111900           call 0x630d4c
// 0049fbea  8b06                 mov eax, dword ptr [esi]
// 0049fbec  83c410               add esp, 0x10
// 0049fbef  5e                   pop esi
// 0049fbf0  c20400               ret 4
// library rbxgs-raknet/BitStream.cpp (function ?CopyData@BitStream@RakNet@@QBEHPAPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
