// roc 2008-06 00448040  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448040
//
// 00448040  6aff                 push -1
// 00448042  68480f7c00           push 0x7c0f48
// 00448047  64a100000000         mov eax, dword ptr fs:[0]
// 0044804d  50                   push eax
// 0044804e  64892500000000       mov dword ptr fs:[0], esp
// 00448055  51                   push ecx
// 00448056  56                   push esi
// 00448057  8bf1                 mov esi, ecx
// 00448059  89742404             mov dword ptr [esp + 4], esi
// 0044805d  e86ed4ffff           call 0x4454d0
// 00448062  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044806a  e811f9ffff           call 0x447980
// 0044806f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00448073  89461c               mov dword ptr [esi + 0x1c], eax
// 00448076  c706b4608100         mov dword ptr [esi], 0x8160b4
// 0044807c  c74610a4608100       mov dword ptr [esi + 0x10], 0x8160a4
// 00448083  c746149c608100       mov dword ptr [esi + 0x14], 0x81609c
// 0044808a  c7462094608100       mov dword ptr [esi + 0x20], 0x816094
// 00448091  c7462484608100       mov dword ptr [esi + 0x24], 0x816084
// 00448098  c7464474608100       mov dword ptr [esi + 0x44], 0x816074
// 0044809f  c7466464608100       mov dword ptr [esi + 0x64], 0x816064
// 004480a6  c7868400000054608100 mov dword ptr [esi + 0x84], 0x816054
// 004480b0  c786a400000044608100 mov dword ptr [esi + 0xa4], 0x816044
// 004480ba  c786c400000034608100 mov dword ptr [esi + 0xc4], 0x816034
// 004480c4  8bc6                 mov eax, esi
// 004480c6  5e                   pop esi
// 004480c7  64890d00000000       mov dword ptr fs:[0], ecx
// 004480ce  83c410               add esp, 0x10
// 004480d1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
