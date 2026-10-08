// roc 2008-06 005cb990  unit: RBX::VControllerService::?$FactoryProduct  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb990
//
// 005cb990  8b442404             mov eax, dword ptr [esp + 4]
// 005cb994  56                   push esi
// 005cb995  50                   push eax
// 005cb996  8bf1                 mov esi, ecx
// 005cb998  e883feffff           call 0x5cb820
// 005cb99d  c706fca18300         mov dword ptr [esi], 0x83a1fc
// 005cb9a3  c7460cf0a18300       mov dword ptr [esi + 0xc], 0x83a1f0
// 005cb9aa  8bc6                 mov eax, esi
// 005cb9ac  5e                   pop esi
// 005cb9ad  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ??0AIChaseController@RBX@@QAE@PBVPVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
