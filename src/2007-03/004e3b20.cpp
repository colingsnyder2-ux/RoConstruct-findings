// roc 2007-03 004e3b20  unit: seg_004e0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3b20
//
// 004e3b20  51                   push ecx
// 004e3b21  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e3b25  56                   push esi
// 004e3b26  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e3b2a  57                   push edi
// 004e3b2b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e3b2f  c644240800           mov byte ptr [esp + 8], 0
// 004e3b34  8b442408             mov eax, dword ptr [esp + 8]
// 004e3b38  50                   push eax
// 004e3b39  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e3b3d  52                   push edx
// 004e3b3e  51                   push ecx
// 004e3b3f  50                   push eax
// 004e3b40  56                   push esi
// 004e3b41  57                   push edi
// 004e3b42  e8e9fcffff           call 0x4e3830
// 004e3b47  83c418               add esp, 0x18
// 004e3b4a  8d04b7               lea eax, [edi + esi*4]
// 004e3b4d  5f                   pop edi
// 004e3b4e  5e                   pop esi
// 004e3b4f  59                   pop ecx
// 004e3b50  c20c00               ret 0xc
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Ufill@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEPAVBrickColor@RBX@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
