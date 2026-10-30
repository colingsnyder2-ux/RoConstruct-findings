// roc 2009-06 007931d0  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007931d0
//
// 007931d0  83ec0c               sub esp, 0xc
// 007931d3  56                   push esi
// 007931d4  8bf1                 mov esi, ecx
// 007931d6  8b460c               mov eax, dword ptr [esi + 0xc]
// 007931d9  f7d8                 neg eax
// 007931db  1bc0                 sbb eax, eax
// 007931dd  89442404             mov dword ptr [esp + 4], eax
// 007931e1  742e                 je 0x793211
// 007931e3  8d442408             lea eax, [esp + 8]
// 007931e7  50                   push eax
// 007931e8  8d4c2410             lea ecx, [esp + 0x10]
// 007931ec  51                   push ecx
// 007931ed  8d54240c             lea edx, [esp + 0xc]
// 007931f1  52                   push edx
// 007931f2  8bce                 mov ecx, esi
// 007931f4  e877feffff           call 0x793070
// 007931f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007931fd  85c9                 test ecx, ecx
// 007931ff  7409                 je 0x79320a
// 00793201  8b01                 mov eax, dword ptr [ecx]
// 00793203  8b5004               mov edx, dword ptr [eax + 4]
// 00793206  6a01                 push 1
// 00793208  ffd2                 call edx
// 0079320a  837c240400           cmp dword ptr [esp + 4], 0
// 0079320f  75d2                 jne 0x7931e3
// 00793211  8bce                 mov ecx, esi
// 00793213  5e                   pop esi
// 00793214  83c40c               add esp, 0xc
// 00793217  e964f4f9ff           jmp 0x732680
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
