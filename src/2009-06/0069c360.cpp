// roc 2009-06 0069c360  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069c360
//
// 0069c360  8b442404             mov eax, dword ptr [esp + 4]
// 0069c364  683ccda400           push 0xa4cd3c
// 0069c369  898154020000         mov dword ptr [ecx + 0x254], eax
// 0069c36f  e85cffd6ff           call 0x40c2d0
// 0069c374  c20400               ret 4
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?setTeamColor@Flag@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp
