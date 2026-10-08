// roc 2007-03 005917d0  unit: seg_00590000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005917d0
//
// 005917d0  6aff                 push -1
// 005917d2  68f98a7500           push 0x758af9
// 005917d7  64a100000000         mov eax, dword ptr fs:[0]
// 005917dd  50                   push eax
// 005917de  64892500000000       mov dword ptr fs:[0], esp
// 005917e5  51                   push ecx
// 005917e6  56                   push esi
// 005917e7  57                   push edi
// 005917e8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005917ec  8bf1                 mov esi, ecx
// 005917ee  57                   push edi
// 005917ef  8974240c             mov dword ptr [esp + 0xc], esi
// 005917f3  ff157ce77700         call dword ptr [0x77e77c]
// 005917f9  8d471c               lea eax, [edi + 0x1c]
// 005917fc  50                   push eax
// 005917fd  8d4e1c               lea ecx, [esi + 0x1c]
// 00591800  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00591808  ff157ce77700         call dword ptr [0x77e77c]
// 0059180e  0fb64f38             movzx ecx, byte ptr [edi + 0x38]
// 00591812  884e38               mov byte ptr [esi + 0x38], cl
// 00591815  8a5739               mov dl, byte ptr [edi + 0x39]
// 00591818  885639               mov byte ptr [esi + 0x39], dl
// 0059181b  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0059181e  89463c               mov dword ptr [esi + 0x3c], eax
// 00591821  0fb64f40             movzx ecx, byte ptr [edi + 0x40]
// 00591825  884e40               mov byte ptr [esi + 0x40], cl
// 00591828  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059182c  5f                   pop edi
// 0059182d  8bc6                 mov eax, esi
// 0059182f  5e                   pop esi
// 00591830  64890d00000000       mov dword ptr fs:[0], ecx
// 00591837  83c410               add esp, 0x10
// 0059183a  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$char_separator@DU?$char_traits@D@std@@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
