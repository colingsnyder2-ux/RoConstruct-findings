// roc 2008-06 0071c3e0  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071c3e0
//
// 0071c3e0  83ec0c               sub esp, 0xc
// 0071c3e3  56                   push esi
// 0071c3e4  8bf1                 mov esi, ecx
// 0071c3e6  8b460c               mov eax, dword ptr [esi + 0xc]
// 0071c3e9  f7d8                 neg eax
// 0071c3eb  1bc0                 sbb eax, eax
// 0071c3ed  89442404             mov dword ptr [esp + 4], eax
// 0071c3f1  742e                 je 0x71c421
// 0071c3f3  8d442408             lea eax, [esp + 8]
// 0071c3f7  50                   push eax
// 0071c3f8  8d4c2410             lea ecx, [esp + 0x10]
// 0071c3fc  51                   push ecx
// 0071c3fd  8d54240c             lea edx, [esp + 0xc]
// 0071c401  52                   push edx
// 0071c402  8bce                 mov ecx, esi
// 0071c404  e847ca0400           call 0x768e50
// 0071c409  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071c40d  85c9                 test ecx, ecx
// 0071c40f  7409                 je 0x71c41a
// 0071c411  8b01                 mov eax, dword ptr [ecx]
// 0071c413  8b5004               mov edx, dword ptr [eax + 4]
// 0071c416  6a01                 push 1
// 0071c418  ffd2                 call edx
// 0071c41a  837c240400           cmp dword ptr [esp + 4], 0
// 0071c41f  75d2                 jne 0x71c3f3
// 0071c421  8bce                 mov ecx, esi
// 0071c423  5e                   pop esi
// 0071c424  83c40c               add esp, 0xc
// 0071c427  e9046df8ff           jmp 0x6a3130
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
