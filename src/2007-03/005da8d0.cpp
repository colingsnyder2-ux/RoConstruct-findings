// roc 2007-03 005da8d0  unit: seg_005d0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005da8d0
//
// 005da8d0  51                   push ecx
// 005da8d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005da8d5  56                   push esi
// 005da8d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 005da8da  57                   push edi
// 005da8db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005da8df  c644240800           mov byte ptr [esp + 8], 0
// 005da8e4  8b442408             mov eax, dword ptr [esp + 8]
// 005da8e8  50                   push eax
// 005da8e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005da8ed  52                   push edx
// 005da8ee  51                   push ecx
// 005da8ef  50                   push eax
// 005da8f0  56                   push esi
// 005da8f1  57                   push edi
// 005da8f2  e819daf9ff           call 0x578310
// 005da8f7  83c418               add esp, 0x18
// 005da8fa  8d04b7               lea eax, [edi + esi*4]
// 005da8fd  5f                   pop edi
// 005da8fe  5e                   pop esi
// 005da8ff  59                   pop ecx
// 005da900  c20c00               ret 0xc
// library rbxgs/v8datamodel\BrickColor.cpp (function ?_Ufill@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEPAVBrickColor@RBX@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
