// roc 2007-08 00598ed0  unit: RBX::VControllerService::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598ed0
//
// 00598ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00598ed4  56                   push esi
// 00598ed5  50                   push eax
// 00598ed6  8bf1                 mov esi, ecx
// 00598ed8  e803ffffff           call 0x598de0
// 00598edd  c70658147b00         mov dword ptr [esi], 0x7b1458
// 00598ee3  c7460c4c147b00       mov dword ptr [esi + 0xc], 0x7b144c
// 00598eea  8bc6                 mov eax, esi
// 00598eec  5e                   pop esi
// 00598eed  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIChaseController@RBX@@QAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
