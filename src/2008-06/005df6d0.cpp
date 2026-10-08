// roc 2008-06 005df6d0  unit: RBX::Lighting  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005df6d0
//
// 005df6d0  6aff                 push -1
// 005df6d2  68496b7c00           push 0x7c6b49
// 005df6d7  64a100000000         mov eax, dword ptr fs:[0]
// 005df6dd  50                   push eax
// 005df6de  64892500000000       mov dword ptr fs:[0], esp
// 005df6e5  51                   push ecx
// 005df6e6  56                   push esi
// 005df6e7  57                   push edi
// 005df6e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005df6ec  8bf1                 mov esi, ecx
// 005df6ee  57                   push edi
// 005df6ef  8974240c             mov dword ptr [esp + 0xc], esi
// 005df6f3  ff155c248000         call dword ptr [0x80245c]
// 005df6f9  8d471c               lea eax, [edi + 0x1c]
// 005df6fc  50                   push eax
// 005df6fd  8d4e1c               lea ecx, [esi + 0x1c]
// 005df700  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005df708  ff155c248000         call dword ptr [0x80245c]
// 005df70e  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 005df712  884e38               mov byte ptr [esi + 0x38], cl
// 005df715  8a5739               mov dl, byte ptr [edi + 0x39]
// 005df718  885639               mov byte ptr [esi + 0x39], dl
// 005df71b  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005df71e  89463c               mov dword ptr [esi + 0x3c], eax
// 005df721  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 005df725  884e40               mov byte ptr [esi + 0x40], cl
// 005df728  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005df72c  5f                   pop edi
// 005df72d  8bc6                 mov eax, esi
// 005df72f  5e                   pop esi
// 005df730  64890d00000000       mov dword ptr fs:[0], ecx
// 005df737  83c410               add esp, 0x10
// 005df73a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
