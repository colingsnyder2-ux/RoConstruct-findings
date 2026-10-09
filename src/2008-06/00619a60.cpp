// roc 2008-06 00619a60  unit: RBX::Flag  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619a60
//
// 00619a60  8b442404             mov eax, dword ptr [esp + 4]
// 00619a64  6820bf9700           push 0x97bf20
// 00619a69  89818c020000         mov dword ptr [ecx + 0x28c], eax
// 00619a6f  e88c40dfff           call 0x40db00
// 00619a74  c20400               ret 4
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?setTeamColor@Flag@RBX@@QAEXVBrickColor@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp
