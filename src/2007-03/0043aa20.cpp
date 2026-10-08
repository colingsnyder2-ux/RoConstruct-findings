// roc 2007-03 0043aa20  unit: seg_00430000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043aa20
//
// 0043aa20  51                   push ecx
// 0043aa21  8b4108               mov eax, dword ptr [ecx + 8]
// 0043aa24  85c0                 test eax, eax
// 0043aa26  56                   push esi
// 0043aa27  8d7104               lea esi, [ecx + 4]
// 0043aa2a  741c                 je 0x43aa48
// 0043aa2c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043aa30  8b5608               mov edx, dword ptr [esi + 8]
// 0043aa33  51                   push ecx
// 0043aa34  56                   push esi
// 0043aa35  52                   push edx
// 0043aa36  50                   push eax
// 0043aa37  e8b44f0600           call 0x49f9f0
// 0043aa3c  8b4604               mov eax, dword ptr [esi + 4]
// 0043aa3f  50                   push eax
// 0043aa40  e8ab361e00           call 0x61e0f0
// 0043aa45  83c414               add esp, 0x14
// 0043aa48  c7460400000000       mov dword ptr [esi + 4], 0
// 0043aa4f  c7460800000000       mov dword ptr [esi + 8], 0
// 0043aa56  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043aa5d  5e                   pop esi
// 0043aa5e  59                   pop ecx
// 0043aa5f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1YieldingThreads@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
