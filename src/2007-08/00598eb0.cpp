// roc 2007-08 00598eb0  unit: RBX::VControllerService::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598eb0
//
// 00598eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00598eb4  56                   push esi
// 00598eb5  50                   push eax
// 00598eb6  8bf1                 mov esi, ecx
// 00598eb8  e823ffffff           call 0x598de0
// 00598ebd  c70630147b00         mov dword ptr [esi], 0x7b1430
// 00598ec3  c7460c24147b00       mov dword ptr [esi + 0xc], 0x7b1424
// 00598eca  8bc6                 mov eax, esi
// 00598ecc  5e                   pop esi
// 00598ecd  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIChaseController@RBX@@QAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
