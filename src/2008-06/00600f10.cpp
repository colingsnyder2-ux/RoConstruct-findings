// roc 2008-06 00600f10  unit: RBX::VTool::?$BoundPropGetSet  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00600f10
//
// 00600f10  64a100000000         mov eax, dword ptr fs:[0]
// 00600f16  6aff                 push -1
// 00600f18  6868617c00           push 0x7c6168
// 00600f1d  50                   push eax
// 00600f1e  64892500000000       mov dword ptr fs:[0], esp
// 00600f25  56                   push esi
// 00600f26  51                   push ecx
// 00600f27  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00600f2b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00600f33  e8b899f5ff           call 0x55a8f0
// 00600f38  8b742418             mov esi, dword ptr [esp + 0x18]
// 00600f3c  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00600f44  85f6                 test esi, esi
// 00600f46  742a                 je 0x600f72
// 00600f48  8d4604               lea eax, [esi + 4]
// 00600f4b  83c9ff               or ecx, 0xffffffff
// 00600f4e  f00fc108             lock xadd dword ptr [eax], ecx
// 00600f52  751e                 jne 0x600f72
// 00600f54  8b16                 mov edx, dword ptr [esi]
// 00600f56  8b4204               mov eax, dword ptr [edx + 4]
// 00600f59  8bce                 mov ecx, esi
// 00600f5b  ffd0                 call eax
// 00600f5d  8d4e08               lea ecx, [esi + 8]
// 00600f60  83caff               or edx, 0xffffffff
// 00600f63  f00fc111             lock xadd dword ptr [ecx], edx
// 00600f67  7509                 jne 0x600f72
// 00600f69  8b06                 mov eax, dword ptr [esi]
// 00600f6b  8b5008               mov edx, dword ptr [eax + 8]
// 00600f6e  8bce                 mov ecx, esi
// 00600f70  ffd2                 call edx
// 00600f72  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00600f76  64890d00000000       mov dword ptr fs:[0], ecx
// 00600f7d  5e                   pop esi
// 00600f7e  83c40c               add esp, 0xc
// 00600f81  c20800               ret 8
// library rbxgs/roc_arrowpanel_native_attachment_b778e4bd41285e74.cpp (function ?addGuiItem@GuiItem@RBX@@QAEXV?$shared_ptr@VGuiItem@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_arrowpanel_native_attachment_b778e4bd41285e74.cpp
