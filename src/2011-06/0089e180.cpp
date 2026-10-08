// from server: 100% by auto
// roc 2011-06 0089e180  unit: CXTPHookManager::CHookSink  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e180
//
// 0089e180  83ec08               sub esp, 8
// 0089e183  56                   push esi
// 0089e184  8bf1                 mov esi, ecx
// 0089e186  8b460c               mov eax, dword ptr [esi + 0xc]
// 0089e189  f7d8                 neg eax
// 0089e18b  1bc0                 sbb eax, eax
// 0089e18d  c744240400000000     mov dword ptr [esp + 4], 0
// 0089e195  89442408             mov dword ptr [esp + 8], eax
// 0089e199  742d                 je 0x89e1c8
// 0089e19b  57                   push edi
// 0089e19c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0089e1a0  8d442408             lea eax, [esp + 8]
// 0089e1a4  50                   push eax
// 0089e1a5  8d4c2418             lea ecx, [esp + 0x18]
// 0089e1a9  51                   push ecx
// 0089e1aa  8d542414             lea edx, [esp + 0x14]
// 0089e1ae  52                   push edx
// 0089e1af  8bce                 mov ecx, esi
// 0089e1b1  e82af50200           call 0x8cd6e0
// 0089e1b6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089e1ba  57                   push edi
// 0089e1bb  e810feffff           call 0x89dfd0
// 0089e1c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0089e1c5  75d9                 jne 0x89e1a0
// 0089e1c7  5f                   pop edi
// 0089e1c8  5e                   pop esi
// 0089e1c9  83c408               add esp, 8
// 0089e1cc  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPHookManager.cpp (function ?RemoveAll@CXTPHookManager@@QAEXPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPHookManager.cpp
