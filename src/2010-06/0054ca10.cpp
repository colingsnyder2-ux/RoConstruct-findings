// roc 2010-06 0054ca10  unit: RBX::AggregateChunk  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054ca10
//
// 0054ca10  6aff                 push -1
// 0054ca12  6889079900           push 0x990789
// 0054ca17  64a100000000         mov eax, dword ptr fs:[0]
// 0054ca1d  50                   push eax
// 0054ca1e  64892500000000       mov dword ptr fs:[0], esp
// 0054ca25  51                   push ecx
// 0054ca26  f6052092c00001       test byte ptr [0xc09220], 1
// 0054ca2d  7542                 jne 0x54ca71
// 0054ca2f  830d2092c00001       or dword ptr [0xc09220], 1
// 0054ca36  6a18                 push 0x18
// 0054ca38  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054ca40  e85baf2500           call 0x7a79a0
// 0054ca45  83c404               add esp, 4
// 0054ca48  890424               mov dword ptr [esp], eax
// 0054ca4b  c644240c01           mov byte ptr [esp + 0xc], 1
// 0054ca50  85c0                 test eax, eax
// 0054ca52  7409                 je 0x54ca5d
// 0054ca54  8bc8                 mov ecx, eax
// 0054ca56  e8854e3c00           call 0x9118e0
// 0054ca5b  eb02                 jmp 0x54ca5f
// 0054ca5d  33c0                 xor eax, eax
// 0054ca5f  6860e09d00           push 0x9de060
// 0054ca64  a31c92c000           mov dword ptr [0xc0921c], eax
// 0054ca69  e8f5bf2500           call 0x7a8a63
// 0054ca6e  83c404               add esp, 4
// 0054ca71  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054ca75  a11c92c000           mov eax, dword ptr [0xc0921c]
// 0054ca7a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054ca81  83c410               add esp, 0x10
// 0054ca84  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
