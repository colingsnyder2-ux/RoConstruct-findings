// roc 2008-06 0040d950  unit: VAuthoringSettings::?$FactoryProduct::Creator  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d950
//
// 0040d950  6aff                 push -1
// 0040d952  68e8d37b00           push 0x7bd3e8
// 0040d957  64a100000000         mov eax, dword ptr fs:[0]
// 0040d95d  50                   push eax
// 0040d95e  64892500000000       mov dword ptr fs:[0], esp
// 0040d965  51                   push ecx
// 0040d966  56                   push esi
// 0040d967  8bf1                 mov esi, ecx
// 0040d969  89742404             mov dword ptr [esp + 4], esi
// 0040d96d  e83ef8ffff           call 0x40d1b0
// 0040d972  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040d97a  e861e1ffff           call 0x40bae0
// 0040d97f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040d983  89461c               mov dword ptr [esi + 0x1c], eax
// 0040d986  c70624cc8000         mov dword ptr [esi], 0x80cc24
// 0040d98c  c7461018cc8000       mov dword ptr [esi + 0x10], 0x80cc18
// 0040d993  c7461410cc8000       mov dword ptr [esi + 0x14], 0x80cc10
// 0040d99a  c7462008cc8000       mov dword ptr [esi + 0x20], 0x80cc08
// 0040d9a1  c74624f8cb8000       mov dword ptr [esi + 0x24], 0x80cbf8
// 0040d9a8  c74644e8cb8000       mov dword ptr [esi + 0x44], 0x80cbe8
// 0040d9af  c74664d8cb8000       mov dword ptr [esi + 0x64], 0x80cbd8
// 0040d9b6  c78684000000c8cb8000 mov dword ptr [esi + 0x84], 0x80cbc8
// 0040d9c0  c786a4000000b8cb8000 mov dword ptr [esi + 0xa4], 0x80cbb8
// 0040d9ca  c786c4000000a8cb8000 mov dword ptr [esi + 0xc4], 0x80cba8
// 0040d9d4  8bc6                 mov eax, esi
// 0040d9d6  5e                   pop esi
// 0040d9d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0040d9de  83c410               add esp, 0x10
// 0040d9e1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
