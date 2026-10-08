// roc 2008-06 007b7bf0  unit: RBX::Render::Material  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b7bf0
//
// 007b7bf0  6aff                 push -1
// 007b7bf2  6848e47e00           push 0x7ee448
// 007b7bf7  64a100000000         mov eax, dword ptr fs:[0]
// 007b7bfd  50                   push eax
// 007b7bfe  64892500000000       mov dword ptr fs:[0], esp
// 007b7c05  51                   push ecx
// 007b7c06  56                   push esi
// 007b7c07  8bf1                 mov esi, ecx
// 007b7c09  89742404             mov dword ptr [esp + 4], esi
// 007b7c0d  c706c45b8700         mov dword ptr [esi], 0x875bc4
// 007b7c13  8d4e0c               lea ecx, [esi + 0xc]
// 007b7c16  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007b7c1e  e81df9ffff           call 0x7b7540
// 007b7c23  f644241801           test byte ptr [esp + 0x18], 1
// 007b7c28  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 007b7c2e  7409                 je 0x7b7c39
// 007b7c30  56                   push esi
// 007b7c31  e8448aeeff           call 0x6a067a
// 007b7c36  83c404               add esp, 4
// 007b7c39  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b7c3d  8bc6                 mov eax, esi
// 007b7c3f  5e                   pop esi
// 007b7c40  64890d00000000       mov dword ptr fs:[0], ecx
// 007b7c47  83c410               add esp, 0x10
// 007b7c4a  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??_GMaterial@Render@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
