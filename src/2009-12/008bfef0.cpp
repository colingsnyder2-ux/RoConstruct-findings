// roc 2009-12 008bfef0  unit: CXTPDockingPaneContext  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bfef0
//
// 008bfef0  6aff                 push -1
// 008bfef2  68383d9600           push 0x963d38
// 008bfef7  64a100000000         mov eax, dword ptr fs:[0]
// 008bfefd  50                   push eax
// 008bfefe  51                   push ecx
// 008bfeff  53                   push ebx
// 008bff00  56                   push esi
// 008bff01  57                   push edi
// 008bff02  a10052b600           mov eax, dword ptr [0xb65200]
// 008bff07  33c4                 xor eax, esp
// 008bff09  50                   push eax
// 008bff0a  8d442414             lea eax, [esp + 0x14]
// 008bff0e  64a300000000         mov dword ptr fs:[0], eax
// 008bff14  8bf1                 mov esi, ecx
// 008bff16  89742410             mov dword ptr [esp + 0x10], esi
// 008bff1a  e82942f3ff           call 0x7f4148
// 008bff1f  33db                 xor ebx, ebx
// 008bff21  8d7e54               lea edi, [esi + 0x54]
// 008bff24  8bcf                 mov ecx, edi
// 008bff26  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008bff2a  e87105fbff           call 0x8704a0
// 008bff2f  c706bc87a000         mov dword ptr [esi], 0xa087bc
// 008bff35  c707ac87a000         mov dword ptr [edi], 0xa087ac
// 008bff3b  895e68               mov dword ptr [esi + 0x68], ebx
// 008bff3e  895e5c               mov dword ptr [esi + 0x5c], ebx
// 008bff41  895e64               mov dword ptr [esi + 0x64], ebx
// 008bff44  895e60               mov dword ptr [esi + 0x60], ebx
// 008bff47  8bc6                 mov eax, esi
// 008bff49  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bff4d  64890d00000000       mov dword ptr fs:[0], ecx
// 008bff54  59                   pop ecx
// 008bff55  5f                   pop edi
// 008bff56  5e                   pop esi
// 008bff57  5b                   pop ebx
// 008bff58  83c410               add esp, 0x10
// 008bff5b  c3                   ret 
// copied from an identical function in another client (function ??0CShadowWnd@CXTPShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPShadowsManager.cpp