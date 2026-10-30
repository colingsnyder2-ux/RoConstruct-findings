// roc 2010-06 00840a30  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840a30
//
// 00840a30  83ec0c               sub esp, 0xc
// 00840a33  56                   push esi
// 00840a34  8bf1                 mov esi, ecx
// 00840a36  8b460c               mov eax, dword ptr [esi + 0xc]
// 00840a39  f7d8                 neg eax
// 00840a3b  1bc0                 sbb eax, eax
// 00840a3d  89442404             mov dword ptr [esp + 4], eax
// 00840a41  742e                 je 0x840a71
// 00840a43  8d442408             lea eax, [esp + 8]
// 00840a47  50                   push eax
// 00840a48  8d4c2410             lea ecx, [esp + 0x10]
// 00840a4c  51                   push ecx
// 00840a4d  8d54240c             lea edx, [esp + 0xc]
// 00840a51  52                   push edx
// 00840a52  8bce                 mov ecx, esi
// 00840a54  e837f80200           call 0x870290
// 00840a59  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00840a5d  85c9                 test ecx, ecx
// 00840a5f  7409                 je 0x840a6a
// 00840a61  8b01                 mov eax, dword ptr [ecx]
// 00840a63  8b5004               mov edx, dword ptr [eax + 4]
// 00840a66  6a01                 push 1
// 00840a68  ffd2                 call edx
// 00840a6a  837c240400           cmp dword ptr [esp + 4], 0
// 00840a6f  75d2                 jne 0x840a43
// 00840a71  8bce                 mov ecx, esi
// 00840a73  5e                   pop esi
// 00840a74  83c40c               add esp, 0xc
// 00840a77  e944cff7ff           jmp 0x7bd9c0
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
