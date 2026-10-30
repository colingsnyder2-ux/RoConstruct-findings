// from server: 100% by auto
// roc 2007-08 006ace10  unit: CXTPRibbonBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ace10
//
// 006ace10  56                   push esi
// 006ace11  8bf1                 mov esi, ecx
// 006ace13  837e0400             cmp dword ptr [esi + 4], 0
// 006ace17  7411                 je 0x6ace2a
// 006ace19  837e0800             cmp dword ptr [esi + 8], 0
// 006ace1d  7505                 jne 0x6ace24
// 006ace1f  e89cffffff           call 0x6acdc0
// 006ace24  8b442408             mov eax, dword ptr [esp + 8]
// 006ace28  8906                 mov dword ptr [esi], eax
// 006ace2a  5e                   pop esi
// 006ace2b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPSoundManager.cpp
