// roc 2007-08 005e39f0  unit: RBX::Unlocked  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e39f0
//
// 005e39f0  8b442404             mov eax, dword ptr [esp + 4]
// 005e39f4  50                   push eax
// 005e39f5  e886170400           call 0x625180
// 005e39fa  83c404               add esp, 4
// 005e39fd  f6d8                 neg al
// 005e39ff  1bc0                 sbb eax, eax
// 005e3a01  83e002               and eax, 2
// 005e3a04  c20400               ret 4
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?filterResult@Unlocked@RBX@@UBE?AW4Result@HitTestFilter@2@PBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
