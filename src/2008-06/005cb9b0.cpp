// roc 2008-06 005cb9b0  unit: RBX::VControllerService::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb9b0
//
// 005cb9b0  8b442404             mov eax, dword ptr [esp + 4]
// 005cb9b4  56                   push esi
// 005cb9b5  50                   push eax
// 005cb9b6  8bf1                 mov esi, ecx
// 005cb9b8  e863feffff           call 0x5cb820
// 005cb9bd  c70624a28300         mov dword ptr [esi], 0x83a224
// 005cb9c3  c7460c18a28300       mov dword ptr [esi + 0xc], 0x83a218
// 005cb9ca  8bc6                 mov eax, esi
// 005cb9cc  5e                   pop esi
// 005cb9cd  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIChaseController@RBX@@QAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
