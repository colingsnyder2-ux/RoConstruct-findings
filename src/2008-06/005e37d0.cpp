// roc 2008-06 005e37d0  unit: RBX::JointInstance  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e37d0
//
// 005e37d0  6aff                 push -1
// 005e37d2  68c8d37b00           push 0x7bd3c8
// 005e37d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e37dd  50                   push eax
// 005e37de  64892500000000       mov dword ptr fs:[0], esp
// 005e37e5  51                   push ecx
// 005e37e6  56                   push esi
// 005e37e7  8bf1                 mov esi, ecx
// 005e37e9  89742404             mov dword ptr [esp + 4], esi
// 005e37ed  e8eeefffff           call 0x5e27e0
// 005e37f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e37fa  e8d1d0fdff           call 0x5c08d0
// 005e37ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e3803  89461c               mov dword ptr [esi + 0x1c], eax
// 005e3806  c706acea8300         mov dword ptr [esi], 0x83eaac
// 005e380c  c746109cea8300       mov dword ptr [esi + 0x10], 0x83ea9c
// 005e3813  c7461494ea8300       mov dword ptr [esi + 0x14], 0x83ea94
// 005e381a  c746208cea8300       mov dword ptr [esi + 0x20], 0x83ea8c
// 005e3821  c746247cea8300       mov dword ptr [esi + 0x24], 0x83ea7c
// 005e3828  c746446cea8300       mov dword ptr [esi + 0x44], 0x83ea6c
// 005e382f  c746645cea8300       mov dword ptr [esi + 0x64], 0x83ea5c
// 005e3836  c786840000004cea8300 mov dword ptr [esi + 0x84], 0x83ea4c
// 005e3840  c786a40000003cea8300 mov dword ptr [esi + 0xa4], 0x83ea3c
// 005e384a  c786c40000002cea8300 mov dword ptr [esi + 0xc4], 0x83ea2c
// 005e3854  8bc6                 mov eax, esi
// 005e3856  5e                   pop esi
// 005e3857  64890d00000000       mov dword ptr fs:[0], ecx
// 005e385e  83c410               add esp, 0x10
// 005e3861  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
