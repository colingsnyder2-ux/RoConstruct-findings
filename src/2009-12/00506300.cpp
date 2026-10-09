// roc 2009-12 00506300  unit: rbx::signals::Z::$$A6AXN::?$signal::slot  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00506300
//
// 00506300  6aff                 push -1
// 00506302  68583d9500           push 0x953d58
// 00506307  64a100000000         mov eax, dword ptr fs:[0]
// 0050630d  50                   push eax
// 0050630e  64892500000000       mov dword ptr fs:[0], esp
// 00506315  51                   push ecx
// 00506316  56                   push esi
// 00506317  8bf1                 mov esi, ecx
// 00506319  89742404             mov dword ptr [esp + 4], esi
// 0050631d  8d4e08               lea ecx, [esi + 8]
// 00506320  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00506328  e88379ffff           call 0x4fdcb0
// 0050632d  8b7604               mov esi, dword ptr [esi + 4]
// 00506330  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00506338  85f6                 test esi, esi
// 0050633a  742a                 je 0x506366
// 0050633c  8d4604               lea eax, [esi + 4]
// 0050633f  83c9ff               or ecx, 0xffffffff
// 00506342  f00fc108             lock xadd dword ptr [eax], ecx
// 00506346  751e                 jne 0x506366
// 00506348  8b16                 mov edx, dword ptr [esi]
// 0050634a  8b4204               mov eax, dword ptr [edx + 4]
// 0050634d  8bce                 mov ecx, esi
// 0050634f  ffd0                 call eax
// 00506351  8d4e08               lea ecx, [esi + 8]
// 00506354  83caff               or edx, 0xffffffff
// 00506357  f00fc111             lock xadd dword ptr [ecx], edx
// 0050635b  7509                 jne 0x506366
// 0050635d  8b06                 mov eax, dword ptr [esi]
// 0050635f  8b5008               mov edx, dword ptr [eax + 8]
// 00506362  8bce                 mov ecx, esi
// 00506364  ffd2                 call edx
// 00506366  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0050636a  5e                   pop esi
// 0050636b  64890d00000000       mov dword ptr fs:[0], ecx
// 00506372  83c410               add esp, 0x10
// 00506375  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
