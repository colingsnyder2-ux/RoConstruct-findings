// roc 2008-06 0040c7d0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040c7d0
//
// 0040c7d0  6aff                 push -1
// 0040c7d2  68f8d27b00           push 0x7bd2f8
// 0040c7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0040c7dd  50                   push eax
// 0040c7de  64892500000000       mov dword ptr fs:[0], esp
// 0040c7e5  51                   push ecx
// 0040c7e6  56                   push esi
// 0040c7e7  8bf1                 mov esi, ecx
// 0040c7e9  89742404             mov dword ptr [esp + 4], esi
// 0040c7ed  e86ed9ffff           call 0x40a160
// 0040c7f2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040c7fa  e8f1e5ffff           call 0x40adf0
// 0040c7ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040c803  89461c               mov dword ptr [esi + 0x1c], eax
// 0040c806  c706c4c38000         mov dword ptr [esi], 0x80c3c4
// 0040c80c  c74610b4c38000       mov dword ptr [esi + 0x10], 0x80c3b4
// 0040c813  c74614acc38000       mov dword ptr [esi + 0x14], 0x80c3ac
// 0040c81a  c74620a4c38000       mov dword ptr [esi + 0x20], 0x80c3a4
// 0040c821  c7462494c38000       mov dword ptr [esi + 0x24], 0x80c394
// 0040c828  c7464484c38000       mov dword ptr [esi + 0x44], 0x80c384
// 0040c82f  c7466474c38000       mov dword ptr [esi + 0x64], 0x80c374
// 0040c836  c7868400000064c38000 mov dword ptr [esi + 0x84], 0x80c364
// 0040c840  c786a400000054c38000 mov dword ptr [esi + 0xa4], 0x80c354
// 0040c84a  c786c400000044c38000 mov dword ptr [esi + 0xc4], 0x80c344
// 0040c854  8bc6                 mov eax, esi
// 0040c856  5e                   pop esi
// 0040c857  64890d00000000       mov dword ptr fs:[0], ecx
// 0040c85e  83c410               add esp, 0x10
// 0040c861  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
