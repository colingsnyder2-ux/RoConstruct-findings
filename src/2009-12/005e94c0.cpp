// roc 2009-12 005e94c0  unit: seg_005e0000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e94c0
//
// 005e94c0  6aff                 push -1
// 005e94c2  6839ea9300           push 0x93ea39
// 005e94c7  64a100000000         mov eax, dword ptr fs:[0]
// 005e94cd  50                   push eax
// 005e94ce  64892500000000       mov dword ptr fs:[0], esp
// 005e94d5  51                   push ecx
// 005e94d6  f6056031b80001       test byte ptr [0xb83160], 1
// 005e94dd  7542                 jne 0x5e9521
// 005e94df  830d6031b80001       or dword ptr [0xb83160], 1
// 005e94e6  6a0c                 push 0xc
// 005e94e8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e94f0  e86ba32000           call 0x7f3860
// 005e94f5  83c404               add esp, 4
// 005e94f8  890424               mov dword ptr [esp], eax
// 005e94fb  c644240c01           mov byte ptr [esp + 0xc], 1
// 005e9500  85c0                 test eax, eax
// 005e9502  7409                 je 0x5e950d
// 005e9504  8bc8                 mov ecx, eax
// 005e9506  e8d50a0000           call 0x5e9fe0
// 005e950b  eb02                 jmp 0x5e950f
// 005e950d  33c0                 xor eax, eax
// 005e950f  68800e9800           push 0x980e80
// 005e9514  a35c31b800           mov dword ptr [0xb8315c], eax
// 005e9519  e80bb42000           call 0x7f4929
// 005e951e  83c404               add esp, 4
// 005e9521  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e9525  a15c31b800           mov eax, dword ptr [0xb8315c]
// 005e952a  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9531  83c410               add esp, 0x10
// 005e9534  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getDepthBlur@EffectSettings@Render@RBX@@SAPAVDepthBlur@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
