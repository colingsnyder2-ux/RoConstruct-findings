// roc 2007-08 0040fde0  unit: CopyVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040fde0
//
// 0040fde0  56                   push esi
// 0040fde1  8b742408             mov esi, dword ptr [esp + 8]
// 0040fde5  57                   push edi
// 0040fde6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040fdea  3bf7                 cmp esi, edi
// 0040fdec  7411                 je 0x40fdff
// 0040fdee  8bff                 mov edi, edi
// 0040fdf0  8bce                 mov ecx, esi
// 0040fdf2  ff15ace67700         call dword ptr [0x77e6ac]
// 0040fdf8  83c624               add esi, 0x24
// 0040fdfb  3bf7                 cmp esi, edi
// 0040fdfd  75f1                 jne 0x40fdf0
// 0040fdff  5f                   pop edi
// 0040fe00  5e                   pop esi
// 0040fe01  c20800               ret 8
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Destroy@?$vector@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@V?$allocator@UStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@@std@@@std@@IAEXPAUStateEntry@?$StateStack@VXmlState@RBX@@@RBX@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
