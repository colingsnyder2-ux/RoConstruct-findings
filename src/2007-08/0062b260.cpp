// roc 2007-08 0062b260  unit: RBX::GroupDragTool  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b260
//
// 0062b260  6aff                 push -1
// 0062b262  6888d57500           push 0x75d588
// 0062b267  64a100000000         mov eax, dword ptr fs:[0]
// 0062b26d  50                   push eax
// 0062b26e  64892500000000       mov dword ptr fs:[0], esp
// 0062b275  51                   push ecx
// 0062b276  56                   push esi
// 0062b277  8bf1                 mov esi, ecx
// 0062b279  89742404             mov dword ptr [esp + 4], esi
// 0062b27d  c7464404067a00       mov dword ptr [esi + 0x44], 0x7a0604
// 0062b284  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0062b287  85c9                 test ecx, ecx
// 0062b289  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062b291  7413                 je 0x62b2a6
// 0062b293  8d4108               lea eax, [ecx + 8]
// 0062b296  83caff               or edx, 0xffffffff
// 0062b299  f00fc110             lock xadd dword ptr [eax], edx
// 0062b29d  7507                 jne 0x62b2a6
// 0062b29f  8b01                 mov eax, dword ptr [ecx]
// 0062b2a1  8b5008               mov edx, dword ptr [eax + 8]
// 0062b2a4  ffd2                 call edx
// 0062b2a6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062b2a9  85c9                 test ecx, ecx
// 0062b2ab  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062b2b3  5e                   pop esi
// 0062b2b4  7413                 je 0x62b2c9
// 0062b2b6  8d4108               lea eax, [ecx + 8]
// 0062b2b9  83caff               or edx, 0xffffffff
// 0062b2bc  f00fc110             lock xadd dword ptr [eax], edx
// 0062b2c0  7507                 jne 0x62b2c9
// 0062b2c2  8b01                 mov eax, dword ptr [ecx]
// 0062b2c4  8b5008               mov edx, dword ptr [eax + 8]
// 0062b2c7  ffd2                 call edx
// 0062b2c9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b2cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b2d4  83c410               add esp, 0x10
// 0062b2d7  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??1RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
