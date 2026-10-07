// roc 2008-06 0061f900  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f900
//
// 0061f900  6aff                 push -1
// 0061f902  6838957d00           push 0x7d9538
// 0061f907  64a100000000         mov eax, dword ptr fs:[0]
// 0061f90d  50                   push eax
// 0061f90e  64892500000000       mov dword ptr fs:[0], esp
// 0061f915  51                   push ecx
// 0061f916  56                   push esi
// 0061f917  8bf1                 mov esi, ecx
// 0061f919  89742404             mov dword ptr [esp + 4], esi
// 0061f91d  8d4e04               lea ecx, [esi + 4]
// 0061f920  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061f928  e823faffff           call 0x61f350
// 0061f92d  8bce                 mov ecx, esi
// 0061f92f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061f937  e8d4dae5ff           call 0x47d410
// 0061f93c  f644241801           test byte ptr [esp + 0x18], 1
// 0061f941  7409                 je 0x61f94c
// 0061f943  56                   push esi
// 0061f944  e8310d0800           call 0x6a067a
// 0061f949  83c404               add esp, 4
// 0061f94c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061f950  8bc6                 mov eax, esi
// 0061f952  5e                   pop esi
// 0061f953  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f95a  83c410               add esp, 0x10
// 0061f95d  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ??_GFileToPush@FileListTransfer@RakNet@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
