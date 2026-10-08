// roc 2007-08 00622ac0  unit: RBX::HealthHud  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00622ac0
//
// 00622ac0  6aff                 push -1
// 00622ac2  68c8307500           push 0x7530c8
// 00622ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00622acd  50                   push eax
// 00622ace  64892500000000       mov dword ptr fs:[0], esp
// 00622ad5  51                   push ecx
// 00622ad6  56                   push esi
// 00622ad7  57                   push edi
// 00622ad8  8bf9                 mov edi, ecx
// 00622ada  897c2408             mov dword ptr [esp + 8], edi
// 00622ade  8bb700010000         mov esi, dword ptr [edi + 0x100]
// 00622ae4  85f6                 test esi, esi
// 00622ae6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00622aee  742a                 je 0x622b1a
// 00622af0  8d4604               lea eax, [esi + 4]
// 00622af3  83c9ff               or ecx, 0xffffffff
// 00622af6  f00fc108             lock xadd dword ptr [eax], ecx
// 00622afa  751e                 jne 0x622b1a
// 00622afc  8b16                 mov edx, dword ptr [esi]
// 00622afe  8b4204               mov eax, dword ptr [edx + 4]
// 00622b01  8bce                 mov ecx, esi
// 00622b03  ffd0                 call eax
// 00622b05  8d4e08               lea ecx, [esi + 8]
// 00622b08  83caff               or edx, 0xffffffff
// 00622b0b  f00fc111             lock xadd dword ptr [ecx], edx
// 00622b0f  7509                 jne 0x622b1a
// 00622b11  8b06                 mov eax, dword ptr [esi]
// 00622b13  8b5008               mov edx, dword ptr [eax + 8]
// 00622b16  8bce                 mov ecx, esi
// 00622b18  ffd2                 call edx
// 00622b1a  8bcf                 mov ecx, edi
// 00622b1c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00622b24  e837a4deff           call 0x40cf60
// 00622b29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622b2d  5f                   pop edi
// 00622b2e  5e                   pop esi
// 00622b2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00622b36  83c410               add esp, 0x10
// 00622b39  c3                   ret 
// library openrbx-client/App\gui\GUI.cpp (function ??1GuiItem@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
