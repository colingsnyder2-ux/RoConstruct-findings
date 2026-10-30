// from server: 100% by auto
// roc 2008-06 00503a30  unit: RBX::RenderBase::RenderSceneBase  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503a30
//
// 00503a30  56                   push esi
// 00503a31  8bf1                 mov esi, ecx
// 00503a33  8d4e08               lea ecx, [esi + 8]
// 00503a36  c70624748200         mov dword ptr [esi], 0x827424
// 00503a3c  e8df24f7ff           call 0x475f20
// 00503a41  f644240801           test byte ptr [esp + 8], 1
// 00503a46  7409                 je 0x503a51
// 00503a48  56                   push esi
// 00503a49  e82ccc1900           call 0x6a067a
// 00503a4e  83c404               add esp, 4
// 00503a51  8bc6                 mov eax, esi
// 00503a53  5e                   pop esi
// 00503a54  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??_GCXTPMAPIBinary@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
