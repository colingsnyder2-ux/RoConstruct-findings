// roc 2011-06 008c5010  unit: CInstanceRecord::CNameItem  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5010
//
// 008c5010  51                   push ecx
// 008c5011  53                   push ebx
// 008c5012  56                   push esi
// 008c5013  8d7120               lea esi, [ecx + 0x20]
// 008c5016  57                   push edi
// 008c5017  8bce                 mov ecx, esi
// 008c5019  e8227cf9ff           call 0x85cc40
// 008c501e  8944240c             mov dword ptr [esp + 0xc], eax
// 008c5022  85c0                 test eax, eax
// 008c5024  7426                 je 0x8c504c
// 008c5026  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008c502a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008c502e  8bff                 mov edi, edi
// 008c5030  3bc7                 cmp eax, edi
// 008c5032  7418                 je 0x8c504c
// 008c5034  8d44240c             lea eax, [esp + 0xc]
// 008c5038  50                   push eax
// 008c5039  8bce                 mov ecx, esi
// 008c503b  e8f0b60300           call 0x900730
// 008c5040  3bc3                 cmp eax, ebx
// 008c5042  7411                 je 0x8c5055
// 008c5044  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c5048  85c0                 test eax, eax
// 008c504a  75e4                 jne 0x8c5030
// 008c504c  5f                   pop edi
// 008c504d  5e                   pop esi
// 008c504e  33c0                 xor eax, eax
// 008c5050  5b                   pop ebx
// 008c5051  59                   pop ecx
// 008c5052  c20800               ret 8
// 008c5055  5f                   pop edi
// 008c5056  5e                   pop esi
// 008c5057  b801000000           mov eax, 1
// 008c505c  5b                   pop ebx
// 008c505d  59                   pop ecx
// 008c505e  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_Before@CXTPDockingPaneSplitterContainer@@ABEHPBVCXTPDockingPaneBase@@PAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
