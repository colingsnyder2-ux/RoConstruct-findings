// roc 2011-06 00881550  unit: CXTPMouseManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881550
//
// 00881550  56                   push esi
// 00881551  8bf1                 mov esi, ecx
// 00881553  837e0400             cmp dword ptr [esi + 4], 0
// 00881557  7411                 je 0x88156a
// 00881559  837e0800             cmp dword ptr [esi + 8], 0
// 0088155d  7505                 jne 0x881564
// 0088155f  e89cffffff           call 0x881500
// 00881564  8b442408             mov eax, dword ptr [esp + 8]
// 00881568  8906                 mov dword ptr [esi], eax
// 0088156a  5e                   pop esi
// 0088156b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
