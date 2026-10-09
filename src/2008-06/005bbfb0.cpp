// roc 2008-06 005bbfb0  unit: RBX::Soundscape::VSoundService::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbfb0
//
// 005bbfb0  6aff                 push -1
// 005bbfb2  68c83c7d00           push 0x7d3cc8
// 005bbfb7  64a100000000         mov eax, dword ptr fs:[0]
// 005bbfbd  50                   push eax
// 005bbfbe  64892500000000       mov dword ptr fs:[0], esp
// 005bbfc5  51                   push ecx
// 005bbfc6  56                   push esi
// 005bbfc7  8bf1                 mov esi, ecx
// 005bbfc9  89742404             mov dword ptr [esp + 4], esi
// 005bbfcd  e8eeabffff           call 0x5b6bc0
// 005bbfd2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bbfda  e881f8ffff           call 0x5bb860
// 005bbfdf  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbfe3  89461c               mov dword ptr [esi + 0x1c], eax
// 005bbfe6  c706447e8300         mov dword ptr [esi], 0x837e44
// 005bbfec  c74610387e8300       mov dword ptr [esi + 0x10], 0x837e38
// 005bbff3  c74614307e8300       mov dword ptr [esi + 0x14], 0x837e30
// 005bbffa  c74620287e8300       mov dword ptr [esi + 0x20], 0x837e28
// 005bc001  c74624187e8300       mov dword ptr [esi + 0x24], 0x837e18
// 005bc008  c74644087e8300       mov dword ptr [esi + 0x44], 0x837e08
// 005bc00f  c74664f87d8300       mov dword ptr [esi + 0x64], 0x837df8
// 005bc016  c78684000000e87d8300 mov dword ptr [esi + 0x84], 0x837de8
// 005bc020  c786a4000000d87d8300 mov dword ptr [esi + 0xa4], 0x837dd8
// 005bc02a  c786c4000000c87d8300 mov dword ptr [esi + 0xc4], 0x837dc8
// 005bc034  8bc6                 mov eax, esi
// 005bc036  5e                   pop esi
// 005bc037  64890d00000000       mov dword ptr fs:[0], ecx
// 005bc03e  83c410               add esp, 0x10
// 005bc041  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
