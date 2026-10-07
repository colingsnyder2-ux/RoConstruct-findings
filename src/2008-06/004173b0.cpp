// roc 2008-06 004173b0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004173b0
//
// 004173b0  6aff                 push -1
// 004173b2  6838077d00           push 0x7d0738
// 004173b7  64a100000000         mov eax, dword ptr fs:[0]
// 004173bd  50                   push eax
// 004173be  64892500000000       mov dword ptr fs:[0], esp
// 004173c5  51                   push ecx
// 004173c6  56                   push esi
// 004173c7  8bf1                 mov esi, ecx
// 004173c9  89742404             mov dword ptr [esp + 4], esi
// 004173cd  8d4e08               lea ecx, [esi + 8]
// 004173d0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004173d8  e893d01700           call 0x594470
// 004173dd  8b7604               mov esi, dword ptr [esi + 4]
// 004173e0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004173e8  85f6                 test esi, esi
// 004173ea  742a                 je 0x417416
// 004173ec  8d4604               lea eax, [esi + 4]
// 004173ef  83c9ff               or ecx, 0xffffffff
// 004173f2  f00fc108             lock xadd dword ptr [eax], ecx
// 004173f6  751e                 jne 0x417416
// 004173f8  8b16                 mov edx, dword ptr [esi]
// 004173fa  8b4204               mov eax, dword ptr [edx + 4]
// 004173fd  8bce                 mov ecx, esi
// 004173ff  ffd0                 call eax
// 00417401  8d4e08               lea ecx, [esi + 8]
// 00417404  83caff               or edx, 0xffffffff
// 00417407  f00fc111             lock xadd dword ptr [ecx], edx
// 0041740b  7509                 jne 0x417416
// 0041740d  8b06                 mov eax, dword ptr [esi]
// 0041740f  8b5008               mov edx, dword ptr [eax + 8]
// 00417412  8bce                 mov ecx, esi
// 00417414  ffd2                 call edx
// 00417416  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041741a  5e                   pop esi
// 0041741b  64890d00000000       mov dword ptr fs:[0], ecx
// 00417422  83c410               add esp, 0x10
// 00417425  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
