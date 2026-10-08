// roc 2010-06 00547400  unit: RBX::RbxG3D::Material  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00547400
//
// 00547400  6aff                 push -1
// 00547402  68085c9800           push 0x985c08
// 00547407  64a100000000         mov eax, dword ptr fs:[0]
// 0054740d  50                   push eax
// 0054740e  64892500000000       mov dword ptr fs:[0], esp
// 00547415  51                   push ecx
// 00547416  56                   push esi
// 00547417  8bf1                 mov esi, ecx
// 00547419  89742404             mov dword ptr [esp + 4], esi
// 0054741d  c706c4f3a100         mov dword ptr [esi], 0xa1f3c4
// 00547423  8d4e0c               lea ecx, [esi + 0xc]
// 00547426  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054742e  e85df8ffff           call 0x546c90
// 00547433  f644241801           test byte ptr [esp + 0x18], 1
// 00547438  c7065032a100         mov dword ptr [esi], 0xa13250
// 0054743e  7409                 je 0x547449
// 00547440  56                   push esi
// 00547441  e854052600           call 0x7a799a
// 00547446  83c404               add esp, 4
// 00547449  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054744d  8bc6                 mov eax, esi
// 0054744f  5e                   pop esi
// 00547450  64890d00000000       mov dword ptr fs:[0], ecx
// 00547457  83c410               add esp, 0x10
// 0054745a  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??_GMaterial@Render@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
