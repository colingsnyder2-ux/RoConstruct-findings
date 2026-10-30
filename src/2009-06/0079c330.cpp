// roc 2009-06 0079c330  unit: CXTPNewToolbarDlg  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c330
//
// 0079c330  56                   push esi
// 0079c331  8bf1                 mov esi, ecx
// 0079c333  837e0400             cmp dword ptr [esi + 4], 0
// 0079c337  7411                 je 0x79c34a
// 0079c339  837e0800             cmp dword ptr [esi + 8], 0
// 0079c33d  7505                 jne 0x79c344
// 0079c33f  e89cffffff           call 0x79c2e0
// 0079c344  8b442408             mov eax, dword ptr [esp + 8]
// 0079c348  8906                 mov dword ptr [esi], eax
// 0079c34a  5e                   pop esi
// 0079c34b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?PlaySystemSound@CXTPSoundManager@@QAEXW4XTPSoundManagerState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
