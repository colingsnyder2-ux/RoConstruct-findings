// roc 2011-06 0089d9f0  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089d9f0
//
// 0089d9f0  83ec0c               sub esp, 0xc
// 0089d9f3  56                   push esi
// 0089d9f4  8bf1                 mov esi, ecx
// 0089d9f6  8b460c               mov eax, dword ptr [esi + 0xc]
// 0089d9f9  f7d8                 neg eax
// 0089d9fb  1bc0                 sbb eax, eax
// 0089d9fd  89442404             mov dword ptr [esp + 4], eax
// 0089da01  742e                 je 0x89da31
// 0089da03  8d442408             lea eax, [esp + 8]
// 0089da07  50                   push eax
// 0089da08  8d4c2410             lea ecx, [esp + 0x10]
// 0089da0c  51                   push ecx
// 0089da0d  8d54240c             lea edx, [esp + 0xc]
// 0089da11  52                   push edx
// 0089da12  8bce                 mov ecx, esi
// 0089da14  e8c7fc0200           call 0x8cd6e0
// 0089da19  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089da1d  85c9                 test ecx, ecx
// 0089da1f  7409                 je 0x89da2a
// 0089da21  8b01                 mov eax, dword ptr [ecx]
// 0089da23  8b5004               mov edx, dword ptr [eax + 4]
// 0089da26  6a01                 push 1
// 0089da28  ffd2                 call edx
// 0089da2a  837c240400           cmp dword ptr [esp + 4], 0
// 0089da2f  75d2                 jne 0x89da03
// 0089da31  8bce                 mov ecx, esi
// 0089da33  5e                   pop esi
// 0089da34  83c40c               add esp, 0xc
// 0089da37  e974b80100           jmp 0x8b92b0
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
