// roc 2008-06 004aadd0  unit: RBX::VNetworkSettings::?$GlobalSettingsItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aadd0
//
// 004aadd0  51                   push ecx
// 004aadd1  56                   push esi
// 004aadd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004aadd6  6a04                 push 4
// 004aadd8  56                   push esi
// 004aadd9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004aade1  e85ad60f00           call 0x5a8440
// 004aade6  8bc6                 mov eax, esi
// 004aade8  5e                   pop esi
// 004aade9  59                   pop ecx
// 004aadea  c20800               ret 8
// library rbxgs/util\Guid.cpp (function ?readableString@Guid@RBX@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Guid.cpp
