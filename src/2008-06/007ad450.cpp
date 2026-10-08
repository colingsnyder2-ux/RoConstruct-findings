// roc 2008-06 007ad450  unit: RBX::RenderNew::Material  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad450
//
// 007ad450  6aff                 push -1
// 007ad452  6848e47e00           push 0x7ee448
// 007ad457  64a100000000         mov eax, dword ptr fs:[0]
// 007ad45d  50                   push eax
// 007ad45e  64892500000000       mov dword ptr fs:[0], esp
// 007ad465  51                   push ecx
// 007ad466  56                   push esi
// 007ad467  8bf1                 mov esi, ecx
// 007ad469  89742404             mov dword ptr [esp + 4], esi
// 007ad46d  c706c04a8700         mov dword ptr [esi], 0x874ac0
// 007ad473  8d4e0c               lea ecx, [esi + 0xc]
// 007ad476  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007ad47e  e89df8ffff           call 0x7acd20
// 007ad483  f644241801           test byte ptr [esp + 0x18], 1
// 007ad488  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 007ad48e  7409                 je 0x7ad499
// 007ad490  56                   push esi
// 007ad491  e8e431efff           call 0x6a067a
// 007ad496  83c404               add esp, 4
// 007ad499  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007ad49d  8bc6                 mov eax, esi
// 007ad49f  5e                   pop esi
// 007ad4a0  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad4a7  83c410               add esp, 0x10
// 007ad4aa  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??_GMaterial@Render@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
