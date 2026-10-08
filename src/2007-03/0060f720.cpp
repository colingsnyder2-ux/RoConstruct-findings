// roc 2007-03 0060f720  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060f720
//
// 0060f720  8b442404             mov eax, dword ptr [esp + 4]
// 0060f724  50                   push eax
// 0060f725  e82630f6ff           call 0x572750
// 0060f72a  33c9                 xor ecx, ecx
// 0060f72c  83c404               add esp, 4
// 0060f72f  3888a8010000         cmp byte ptr [eax + 0x1a8], cl
// 0060f735  0f94c1               sete cl
// 0060f738  8ac1                 mov al, cl
// 0060f73a  c3                   ret 
// library rbxgs/v8datamodel\Filters.cpp (function ?unlocked@Unlocked@RBX@@SA_NPBVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Filters.cpp
