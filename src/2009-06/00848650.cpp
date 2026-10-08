// roc 2009-06 00848650  unit: RBX::RbxG3D::Material  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00848650
//
// 00848650  6aff                 push -1
// 00848652  68b8f08500           push 0x85f0b8
// 00848657  64a100000000         mov eax, dword ptr fs:[0]
// 0084865d  50                   push eax
// 0084865e  64892500000000       mov dword ptr fs:[0], esp
// 00848665  51                   push ecx
// 00848666  56                   push esi
// 00848667  8bf1                 mov esi, ecx
// 00848669  89742404             mov dword ptr [esp + 4], esi
// 0084866d  c706504b9200         mov dword ptr [esi], 0x924b50
// 00848673  8d4e0c               lea ecx, [esi + 0xc]
// 00848676  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084867e  e87df7ffff           call 0x847e00
// 00848683  f644241801           test byte ptr [esp + 0x18], 1
// 00848688  c706a8fc8b00         mov dword ptr [esi], 0x8bfca8
// 0084868e  7409                 je 0x848699
// 00848690  56                   push esi
// 00848691  e89c03edff           call 0x718a32
// 00848696  83c404               add esp, 4
// 00848699  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084869d  8bc6                 mov eax, esi
// 0084869f  5e                   pop esi
// 008486a0  64890d00000000       mov dword ptr fs:[0], ecx
// 008486a7  83c410               add esp, 0x10
// 008486aa  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??_GMaterial@Render@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
