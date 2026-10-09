// roc 2010-06 0054ca90  unit: RBX::AggregateChunk  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054ca90
//
// 0054ca90  6aff                 push -1
// 0054ca92  68b9079900           push 0x9907b9
// 0054ca97  64a100000000         mov eax, dword ptr fs:[0]
// 0054ca9d  50                   push eax
// 0054ca9e  64892500000000       mov dword ptr fs:[0], esp
// 0054caa5  51                   push ecx
// 0054caa6  f6052892c00001       test byte ptr [0xc09228], 1
// 0054caad  7542                 jne 0x54caf1
// 0054caaf  830d2892c00001       or dword ptr [0xc09228], 1
// 0054cab6  6a0c                 push 0xc
// 0054cab8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054cac0  e8dbae2500           call 0x7a79a0
// 0054cac5  83c404               add esp, 4
// 0054cac8  890424               mov dword ptr [esp], eax
// 0054cacb  c644240c01           mov byte ptr [esp + 0xc], 1
// 0054cad0  85c0                 test eax, eax
// 0054cad2  7409                 je 0x54cadd
// 0054cad4  8bc8                 mov ecx, eax
// 0054cad6  e8e50a0000           call 0x54d5c0
// 0054cadb  eb02                 jmp 0x54cadf
// 0054cadd  33c0                 xor eax, eax
// 0054cadf  6880e09d00           push 0x9de080
// 0054cae4  a32492c000           mov dword ptr [0xc09224], eax
// 0054cae9  e875bf2500           call 0x7a8a63
// 0054caee  83c404               add esp, 4
// 0054caf1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054caf5  a12492c000           mov eax, dword ptr [0xc09224]
// 0054cafa  64890d00000000       mov dword ptr fs:[0], ecx
// 0054cb01  83c410               add esp, 0x10
// 0054cb04  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ?getDepthBlur@EffectSettings@Render@RBX@@SAPAVDepthBlur@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
