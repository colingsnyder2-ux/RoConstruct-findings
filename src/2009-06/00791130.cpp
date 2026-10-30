// from server: 100% by tester
// roc 2008-06 007189d0  unit: CXTPWinThemeWrapper  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007189d0
//
// 007189d0  56                   push esi
// 007189d1  8bf1                 mov esi, ecx
// 007189d3  e8e8ffffff           call 0x7189c0
// 007189d8  50                   push eax
// 007189d9  8bce                 mov ecx, esi
// 007189db  e8909c0700           call 0x792670
// 007189e0  c70674eb8500         mov dword ptr [esi], 0x85eb74
// 007189e6  c7465460eb8500       mov dword ptr [esi + 0x54], 0x85eb60
// 007189ed  c786ac00000000000000 mov dword ptr [esi + 0xac], 0
// 007189f7  8bc6                 mov eax, esi
// 007189f9  5e                   pop esi
// 007189fa  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ??0CXTCaptionButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
