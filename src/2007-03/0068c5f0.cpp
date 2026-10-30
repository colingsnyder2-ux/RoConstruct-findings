// roc 2007-03 0068c5f0  unit: seg_00680000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c5f0
//
// 0068c5f0  83ec0c               sub esp, 0xc
// 0068c5f3  56                   push esi
// 0068c5f4  8bf1                 mov esi, ecx
// 0068c5f6  8b460c               mov eax, dword ptr [esi + 0xc]
// 0068c5f9  f7d8                 neg eax
// 0068c5fb  1bc0                 sbb eax, eax
// 0068c5fd  89442404             mov dword ptr [esp + 4], eax
// 0068c601  742e                 je 0x68c631
// 0068c603  8d442408             lea eax, [esp + 8]
// 0068c607  50                   push eax
// 0068c608  8d4c2410             lea ecx, [esp + 0x10]
// 0068c60c  51                   push ecx
// 0068c60d  8d54240c             lea edx, [esp + 0xc]
// 0068c611  52                   push edx
// 0068c612  8bce                 mov ecx, esi
// 0068c614  e8e78ef9ff           call 0x625500
// 0068c619  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068c61d  85c9                 test ecx, ecx
// 0068c61f  7409                 je 0x68c62a
// 0068c621  8b01                 mov eax, dword ptr [ecx]
// 0068c623  8b5004               mov edx, dword ptr [eax + 4]
// 0068c626  6a01                 push 1
// 0068c628  ffd2                 call edx
// 0068c62a  837c240400           cmp dword ptr [esp + 4], 0
// 0068c62f  75d2                 jne 0x68c603
// 0068c631  8bce                 mov ecx, esi
// 0068c633  5e                   pop esi
// 0068c634  83c40c               add esp, 0xc
// 0068c637  e984f3f9ff           jmp 0x62b9c0
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
