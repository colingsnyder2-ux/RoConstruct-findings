// roc 2012-06 00a15fd0  unit: CXTPHookManagerHookAble  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a15fd0
//
// 00a15fd0  83ec0c               sub esp, 0xc
// 00a15fd3  56                   push esi
// 00a15fd4  8bf1                 mov esi, ecx
// 00a15fd6  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a15fd9  f7d8                 neg eax
// 00a15fdb  1bc0                 sbb eax, eax
// 00a15fdd  89442404             mov dword ptr [esp + 4], eax
// 00a15fe1  742e                 je 0xa16011
// 00a15fe3  8d442408             lea eax, [esp + 8]
// 00a15fe7  50                   push eax
// 00a15fe8  8d4c2410             lea ecx, [esp + 0x10]
// 00a15fec  51                   push ecx
// 00a15fed  8d54240c             lea edx, [esp + 0xc]
// 00a15ff1  52                   push edx
// 00a15ff2  8bce                 mov ecx, esi
// 00a15ff4  e86721f8ff           call 0x998160
// 00a15ff9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a15ffd  85c9                 test ecx, ecx
// 00a15fff  7409                 je 0xa1600a
// 00a16001  8b01                 mov eax, dword ptr [ecx]
// 00a16003  8b5004               mov edx, dword ptr [eax + 4]
// 00a16006  6a01                 push 1
// 00a16008  ffd2                 call edx
// 00a1600a  837c240400           cmp dword ptr [esp + 4], 0
// 00a1600f  75d2                 jne 0xa15fe3
// 00a16011  8bce                 mov ecx, esi
// 00a16013  5e                   pop esi
// 00a16014  83c40c               add esp, 0xc
// 00a16017  e994f6a3ff           jmp 0x4556b0
// library xtp-11.2.2/Source\CommandBars\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPHookManager.cpp
