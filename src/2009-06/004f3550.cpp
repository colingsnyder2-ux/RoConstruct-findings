// roc 2009-06 004f3550  unit: RBX::Reflection::EventSource  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f3550
//
// 004f3550  6aff                 push -1
// 004f3552  68f89c8500           push 0x859cf8
// 004f3557  64a100000000         mov eax, dword ptr fs:[0]
// 004f355d  50                   push eax
// 004f355e  64892500000000       mov dword ptr fs:[0], esp
// 004f3565  51                   push ecx
// 004f3566  56                   push esi
// 004f3567  8bf1                 mov esi, ecx
// 004f3569  89742404             mov dword ptr [esp + 4], esi
// 004f356d  8d4e08               lea ecx, [esi + 8]
// 004f3570  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f3578  e8b3acfcff           call 0x4be230
// 004f357d  8b7604               mov esi, dword ptr [esi + 4]
// 004f3580  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004f3588  85f6                 test esi, esi
// 004f358a  742a                 je 0x4f35b6
// 004f358c  8d4604               lea eax, [esi + 4]
// 004f358f  83c9ff               or ecx, 0xffffffff
// 004f3592  f00fc108             lock xadd dword ptr [eax], ecx
// 004f3596  751e                 jne 0x4f35b6
// 004f3598  8b16                 mov edx, dword ptr [esi]
// 004f359a  8b4204               mov eax, dword ptr [edx + 4]
// 004f359d  8bce                 mov ecx, esi
// 004f359f  ffd0                 call eax
// 004f35a1  8d4e08               lea ecx, [esi + 8]
// 004f35a4  83caff               or edx, 0xffffffff
// 004f35a7  f00fc111             lock xadd dword ptr [ecx], edx
// 004f35ab  7509                 jne 0x4f35b6
// 004f35ad  8b06                 mov eax, dword ptr [esi]
// 004f35af  8b5008               mov edx, dword ptr [eax + 8]
// 004f35b2  8bce                 mov ecx, esi
// 004f35b4  ffd2                 call edx
// 004f35b6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f35ba  5e                   pop esi
// 004f35bb  64890d00000000       mov dword ptr fs:[0], ecx
// 004f35c2  83c410               add esp, 0x10
// 004f35c5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??1WaitScriptSlot@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
