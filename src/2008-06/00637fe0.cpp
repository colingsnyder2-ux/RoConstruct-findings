// roc 2008-06 00637fe0  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637fe0
//
// 00637fe0  6aff                 push -1
// 00637fe2  68b8a27d00           push 0x7da2b8
// 00637fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00637fed  50                   push eax
// 00637fee  64892500000000       mov dword ptr fs:[0], esp
// 00637ff5  51                   push ecx
// 00637ff6  56                   push esi
// 00637ff7  8bf1                 mov esi, ecx
// 00637ff9  89742404             mov dword ptr [esp + 4], esi
// 00637ffd  e82edfffff           call 0x635f30
// 00638002  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063800a  e841f0ffff           call 0x637050
// 0063800f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00638013  89461c               mov dword ptr [esi + 0x1c], eax
// 00638016  c7065c918400         mov dword ptr [esi], 0x84915c
// 0063801c  c7461050918400       mov dword ptr [esi + 0x10], 0x849150
// 00638023  c7461448918400       mov dword ptr [esi + 0x14], 0x849148
// 0063802a  c7462040918400       mov dword ptr [esi + 0x20], 0x849140
// 00638031  c7462430918400       mov dword ptr [esi + 0x24], 0x849130
// 00638038  c7464420918400       mov dword ptr [esi + 0x44], 0x849120
// 0063803f  c7466410918400       mov dword ptr [esi + 0x64], 0x849110
// 00638046  c7868400000000918400 mov dword ptr [esi + 0x84], 0x849100
// 00638050  c786a4000000f0908400 mov dword ptr [esi + 0xa4], 0x8490f0
// 0063805a  c786c4000000e0908400 mov dword ptr [esi + 0xc4], 0x8490e0
// 00638064  8bc6                 mov eax, esi
// 00638066  5e                   pop esi
// 00638067  64890d00000000       mov dword ptr fs:[0], ecx
// 0063806e  83c410               add esp, 0x10
// 00638071  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
