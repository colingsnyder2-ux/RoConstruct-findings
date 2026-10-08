// from server: 100% by auto
// roc 2012-06 00a167a0  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a167a0
//
// 00a167a0  83ec08               sub esp, 8
// 00a167a3  56                   push esi
// 00a167a4  8bf1                 mov esi, ecx
// 00a167a6  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a167a9  f7d8                 neg eax
// 00a167ab  1bc0                 sbb eax, eax
// 00a167ad  c744240400000000     mov dword ptr [esp + 4], 0
// 00a167b5  89442408             mov dword ptr [esp + 8], eax
// 00a167b9  742d                 je 0xa167e8
// 00a167bb  57                   push edi
// 00a167bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a167c0  8d442408             lea eax, [esp + 8]
// 00a167c4  50                   push eax
// 00a167c5  8d4c2418             lea ecx, [esp + 0x18]
// 00a167c9  51                   push ecx
// 00a167ca  8d542414             lea edx, [esp + 0x14]
// 00a167ce  52                   push edx
// 00a167cf  8bce                 mov ecx, esi
// 00a167d1  e88a19f8ff           call 0x998160
// 00a167d6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a167da  57                   push edi
// 00a167db  e810feffff           call 0xa165f0
// 00a167e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a167e5  75d9                 jne 0xa167c0
// 00a167e7  5f                   pop edi
// 00a167e8  5e                   pop esi
// 00a167e9  83c408               add esp, 8
// 00a167ec  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@QAEXPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
