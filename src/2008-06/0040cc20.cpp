// roc 2008-06 0040cc20  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040cc20
//
// 0040cc20  6aff                 push -1
// 0040cc22  68c8d37b00           push 0x7bd3c8
// 0040cc27  64a100000000         mov eax, dword ptr fs:[0]
// 0040cc2d  50                   push eax
// 0040cc2e  64892500000000       mov dword ptr fs:[0], esp
// 0040cc35  51                   push ecx
// 0040cc36  56                   push esi
// 0040cc37  8bf1                 mov esi, ecx
// 0040cc39  89742404             mov dword ptr [esp + 4], esi
// 0040cc3d  e8eeeaffff           call 0x40b730
// 0040cc42  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040cc4a  e821eeffff           call 0x40ba70
// 0040cc4f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040cc53  89461c               mov dword ptr [esi + 0x1c], eax
// 0040cc56  c70684c78000         mov dword ptr [esi], 0x80c784
// 0040cc5c  c7461078c78000       mov dword ptr [esi + 0x10], 0x80c778
// 0040cc63  c7461470c78000       mov dword ptr [esi + 0x14], 0x80c770
// 0040cc6a  c7462068c78000       mov dword ptr [esi + 0x20], 0x80c768
// 0040cc71  c7462458c78000       mov dword ptr [esi + 0x24], 0x80c758
// 0040cc78  c7464448c78000       mov dword ptr [esi + 0x44], 0x80c748
// 0040cc7f  c7466438c78000       mov dword ptr [esi + 0x64], 0x80c738
// 0040cc86  c7868400000028c78000 mov dword ptr [esi + 0x84], 0x80c728
// 0040cc90  c786a400000018c78000 mov dword ptr [esi + 0xa4], 0x80c718
// 0040cc9a  c786c400000008c78000 mov dword ptr [esi + 0xc4], 0x80c708
// 0040cca4  8bc6                 mov eax, esi
// 0040cca6  5e                   pop esi
// 0040cca7  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ccae  83c410               add esp, 0x10
// 0040ccb1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
