// roc 2008-06 0040da00  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040da00
//
// 0040da00  6aff                 push -1
// 0040da02  6808d47b00           push 0x7bd408
// 0040da07  64a100000000         mov eax, dword ptr fs:[0]
// 0040da0d  50                   push eax
// 0040da0e  64892500000000       mov dword ptr fs:[0], esp
// 0040da15  51                   push ecx
// 0040da16  56                   push esi
// 0040da17  8bf1                 mov esi, ecx
// 0040da19  89742404             mov dword ptr [esp + 4], esi
// 0040da1d  e86efaffff           call 0x40d490
// 0040da22  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040da2a  e831edffff           call 0x40c760
// 0040da2f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040da33  89461c               mov dword ptr [esi + 0x1c], eax
// 0040da36  c706e4cc8000         mov dword ptr [esi], 0x80cce4
// 0040da3c  c74610d8cc8000       mov dword ptr [esi + 0x10], 0x80ccd8
// 0040da43  c74614d0cc8000       mov dword ptr [esi + 0x14], 0x80ccd0
// 0040da4a  c74620c8cc8000       mov dword ptr [esi + 0x20], 0x80ccc8
// 0040da51  c74624b8cc8000       mov dword ptr [esi + 0x24], 0x80ccb8
// 0040da58  c74644a8cc8000       mov dword ptr [esi + 0x44], 0x80cca8
// 0040da5f  c7466498cc8000       mov dword ptr [esi + 0x64], 0x80cc98
// 0040da66  c7868400000088cc8000 mov dword ptr [esi + 0x84], 0x80cc88
// 0040da70  c786a400000078cc8000 mov dword ptr [esi + 0xa4], 0x80cc78
// 0040da7a  c786c400000068cc8000 mov dword ptr [esi + 0xc4], 0x80cc68
// 0040da84  8bc6                 mov eax, esi
// 0040da86  5e                   pop esi
// 0040da87  64890d00000000       mov dword ptr fs:[0], ecx
// 0040da8e  83c410               add esp, 0x10
// 0040da91  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
