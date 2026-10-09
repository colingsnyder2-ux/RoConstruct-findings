// roc 2008-06 00444910  unit: RBX::MergeBinder  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00444910
//
// 00444910  6aff                 push -1
// 00444912  68a80d7c00           push 0x7c0da8
// 00444917  64a100000000         mov eax, dword ptr fs:[0]
// 0044491d  50                   push eax
// 0044491e  64892500000000       mov dword ptr fs:[0], esp
// 00444925  51                   push ecx
// 00444926  56                   push esi
// 00444927  8bf1                 mov esi, ecx
// 00444929  89742404             mov dword ptr [esp + 4], esi
// 0044492d  e87ee7ffff           call 0x4430b0
// 00444932  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044493a  e811fcffff           call 0x444550
// 0044493f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444943  89461c               mov dword ptr [esi + 0x1c], eax
// 00444946  c7063c5a8100         mov dword ptr [esi], 0x815a3c
// 0044494c  c746102c5a8100       mov dword ptr [esi + 0x10], 0x815a2c
// 00444953  c74614245a8100       mov dword ptr [esi + 0x14], 0x815a24
// 0044495a  c746201c5a8100       mov dword ptr [esi + 0x20], 0x815a1c
// 00444961  c746240c5a8100       mov dword ptr [esi + 0x24], 0x815a0c
// 00444968  c74644fc598100       mov dword ptr [esi + 0x44], 0x8159fc
// 0044496f  c74664ec598100       mov dword ptr [esi + 0x64], 0x8159ec
// 00444976  c78684000000dc598100 mov dword ptr [esi + 0x84], 0x8159dc
// 00444980  c786a4000000cc598100 mov dword ptr [esi + 0xa4], 0x8159cc
// 0044498a  c786c4000000bc598100 mov dword ptr [esi + 0xc4], 0x8159bc
// 00444994  8bc6                 mov eax, esi
// 00444996  5e                   pop esi
// 00444997  64890d00000000       mov dword ptr fs:[0], ecx
// 0044499e  83c410               add esp, 0x10
// 004449a1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
