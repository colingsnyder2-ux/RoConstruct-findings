// roc 2009-06 0056a300  unit: RBX::RbxG3D::RenderScene  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a300
//
// 0056a300  6aff                 push -1
// 0056a302  68d9fa8500           push 0x85fad9
// 0056a307  64a100000000         mov eax, dword ptr fs:[0]
// 0056a30d  50                   push eax
// 0056a30e  64892500000000       mov dword ptr fs:[0], esp
// 0056a315  51                   push ecx
// 0056a316  f605e81ca40001       test byte ptr [0xa41ce8], 1
// 0056a31d  7542                 jne 0x56a361
// 0056a31f  830de81ca40001       or dword ptr [0xa41ce8], 1
// 0056a326  6a18                 push 0x18
// 0056a328  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056a330  e803e71a00           call 0x718a38
// 0056a335  83c404               add esp, 4
// 0056a338  890424               mov dword ptr [esp], eax
// 0056a33b  c644240c01           mov byte ptr [esp + 0xc], 1
// 0056a340  85c0                 test eax, eax
// 0056a342  7409                 je 0x56a34d
// 0056a344  8bc8                 mov ecx, eax
// 0056a346  e8258f2d00           call 0x843270
// 0056a34b  eb02                 jmp 0x56a34f
// 0056a34d  33c0                 xor eax, eax
// 0056a34f  68206a8900           push 0x896a20
// 0056a354  a3e41ca400           mov dword ptr [0xa41ce4], eax
// 0056a359  e89df71a00           call 0x719afb
// 0056a35e  83c404               add esp, 4
// 0056a361  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056a365  a1e41ca400           mov eax, dword ptr [0xa41ce4]
// 0056a36a  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a371  83c410               add esp, 0x10
// 0056a374  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getToneMap@EffectSettings@Render@RBX@@SAPAVToneMap@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
