// roc 2007-03 005d8780  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8780
//
// 005d8780  8b442404             mov eax, dword ptr [esp + 4]
// 005d8784  50                   push eax
// 005d8785  e8966f0300           call 0x60f720
// 005d878a  83c404               add esp, 4
// 005d878d  f6d8                 neg al
// 005d878f  1bc0                 sbb eax, eax
// 005d8791  83e002               and eax, 2
// 005d8794  c20400               ret 4
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?filterResult@Unlocked@RBX@@UBE?AW4Result@HitTestFilter@2@PBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
