// roc 2007-08 006a2c00  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2c00
//
// 006a2c00  83ec0c               sub esp, 0xc
// 006a2c03  56                   push esi
// 006a2c04  8bf1                 mov esi, ecx
// 006a2c06  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a2c09  f7d8                 neg eax
// 006a2c0b  1bc0                 sbb eax, eax
// 006a2c0d  89442404             mov dword ptr [esp + 4], eax
// 006a2c11  742e                 je 0x6a2c41
// 006a2c13  8d442408             lea eax, [esp + 8]
// 006a2c17  50                   push eax
// 006a2c18  8d4c2410             lea ecx, [esp + 0x10]
// 006a2c1c  51                   push ecx
// 006a2c1d  8d54240c             lea edx, [esp + 0xc]
// 006a2c21  52                   push edx
// 006a2c22  8bce                 mov ecx, esi
// 006a2c24  e807910400           call 0x6ebd30
// 006a2c29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2c2d  85c9                 test ecx, ecx
// 006a2c2f  7409                 je 0x6a2c3a
// 006a2c31  8b01                 mov eax, dword ptr [ecx]
// 006a2c33  8b5004               mov edx, dword ptr [eax + 4]
// 006a2c36  6a01                 push 1
// 006a2c38  ffd2                 call edx
// 006a2c3a  837c240400           cmp dword ptr [esp + 4], 0
// 006a2c3f  75d2                 jne 0x6a2c13
// 006a2c41  8bce                 mov ecx, esi
// 006a2c43  5e                   pop esi
// 006a2c44  83c40c               add esp, 0xc
// 006a2c47  e9a4500300           jmp 0x6d7cf0
// library xtp-11.2.2-vc8/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPHookManager.cpp
