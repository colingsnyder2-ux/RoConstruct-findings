// roc 2008-06 00565dd0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565dd0
//
// 00565dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00565dd4  3b8134010000         cmp eax, dword ptr [ecx + 0x134]
// 00565dda  7413                 je 0x565def
// 00565ddc  898134010000         mov dword ptr [ecx + 0x134], eax
// 00565de2  c74424046c479700     mov dword ptr [esp + 4], 0x97476c
// 00565dea  e9117deaff           jmp 0x40db00
// 00565def  c20400               ret 4
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ?setErrorReporting@DebugSettings@RBX@@QAEXW4ErrorReporting@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
