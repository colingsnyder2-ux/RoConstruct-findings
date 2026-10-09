// roc 2008-06 0045eb30  unit: CRobloxWnd  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045eb30
//
// 0045eb30  6aff                 push -1
// 0045eb32  68c8d37b00           push 0x7bd3c8
// 0045eb37  64a100000000         mov eax, dword ptr fs:[0]
// 0045eb3d  50                   push eax
// 0045eb3e  64892500000000       mov dword ptr fs:[0], esp
// 0045eb45  51                   push ecx
// 0045eb46  56                   push esi
// 0045eb47  8bf1                 mov esi, ecx
// 0045eb49  89742404             mov dword ptr [esp + 4], esi
// 0045eb4d  e8aec5ffff           call 0x45b100
// 0045eb52  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045eb5a  e811f1ffff           call 0x45dc70
// 0045eb5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045eb63  89461c               mov dword ptr [esi + 0x1c], eax
// 0045eb66  c706049f8100         mov dword ptr [esi], 0x819f04
// 0045eb6c  c74610f49e8100       mov dword ptr [esi + 0x10], 0x819ef4
// 0045eb73  c74614ec9e8100       mov dword ptr [esi + 0x14], 0x819eec
// 0045eb7a  c74620e49e8100       mov dword ptr [esi + 0x20], 0x819ee4
// 0045eb81  c74624d49e8100       mov dword ptr [esi + 0x24], 0x819ed4
// 0045eb88  c74644c49e8100       mov dword ptr [esi + 0x44], 0x819ec4
// 0045eb8f  c74664b49e8100       mov dword ptr [esi + 0x64], 0x819eb4
// 0045eb96  c78684000000a49e8100 mov dword ptr [esi + 0x84], 0x819ea4
// 0045eba0  c786a4000000949e8100 mov dword ptr [esi + 0xa4], 0x819e94
// 0045ebaa  c786c4000000849e8100 mov dword ptr [esi + 0xc4], 0x819e84
// 0045ebb4  8bc6                 mov eax, esi
// 0045ebb6  5e                   pop esi
// 0045ebb7  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ebbe  83c410               add esp, 0x10
// 0045ebc1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
