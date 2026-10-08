// roc 2007-03 00410d60  unit: seg_00410000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00410d60
//
// 00410d60  56                   push esi
// 00410d61  8b742408             mov esi, dword ptr [esp + 8]
// 00410d65  57                   push edi
// 00410d66  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00410d6a  3bf7                 cmp esi, edi
// 00410d6c  7411                 je 0x410d7f
// 00410d6e  8bff                 mov edi, edi
// 00410d70  8bce                 mov ecx, esi
// 00410d72  ff158ce77700         call dword ptr [0x77e78c]
// 00410d78  83c624               add esi, 0x24
// 00410d7b  3bf7                 cmp esi, edi
// 00410d7d  75f1                 jne 0x410d70
// 00410d7f  5f                   pop edi
// 00410d80  5e                   pop esi
// 00410d81  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Destroy@?$vector@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@V?$allocator@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@@std@@@std@@IAEXPAUStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
