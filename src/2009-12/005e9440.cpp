// roc 2009-12 005e9440  unit: seg_005e0000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9440
//
// 005e9440  6aff                 push -1
// 005e9442  6809ea9300           push 0x93ea09
// 005e9447  64a100000000         mov eax, dword ptr fs:[0]
// 005e944d  50                   push eax
// 005e944e  64892500000000       mov dword ptr fs:[0], esp
// 005e9455  51                   push ecx
// 005e9456  f6055831b80001       test byte ptr [0xb83158], 1
// 005e945d  7542                 jne 0x5e94a1
// 005e945f  830d5831b80001       or dword ptr [0xb83158], 1
// 005e9466  6a18                 push 0x18
// 005e9468  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e9470  e8eba32000           call 0x7f3860
// 005e9475  83c404               add esp, 4
// 005e9478  890424               mov dword ptr [esp], eax
// 005e947b  c644240c01           mov byte ptr [esp + 0xc], 1
// 005e9480  85c0                 test eax, eax
// 005e9482  7409                 je 0x5e948d
// 005e9484  8bc8                 mov ecx, eax
// 005e9486  e855ad3200           call 0x9141e0
// 005e948b  eb02                 jmp 0x5e948f
// 005e948d  33c0                 xor eax, eax
// 005e948f  68600e9800           push 0x980e60
// 005e9494  a35431b800           mov dword ptr [0xb83154], eax
// 005e9499  e88bb42000           call 0x7f4929
// 005e949e  83c404               add esp, 4
// 005e94a1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e94a5  a15431b800           mov eax, dword ptr [0xb83154]
// 005e94aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005e94b1  83c410               add esp, 0x10
// 005e94b4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
