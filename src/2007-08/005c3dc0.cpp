// roc 2007-08 005c3dc0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3dc0
//
// 005c3dc0  6aff                 push -1
// 005c3dc2  68b8977500           push 0x7597b8
// 005c3dc7  64a100000000         mov eax, dword ptr fs:[0]
// 005c3dcd  50                   push eax
// 005c3dce  64892500000000       mov dword ptr fs:[0], esp
// 005c3dd5  51                   push ecx
// 005c3dd6  56                   push esi
// 005c3dd7  8bf1                 mov esi, ecx
// 005c3dd9  89742404             mov dword ptr [esp + 4], esi
// 005c3ddd  8d4e04               lea ecx, [esi + 4]
// 005c3de0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c3de8  e873faffff           call 0x5c3860
// 005c3ded  8bce                 mov ecx, esi
// 005c3def  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c3df7  e834c2faff           call 0x570030
// 005c3dfc  f644241801           test byte ptr [esp + 0x18], 1
// 005c3e01  7409                 je 0x5c3e0c
// 005c3e03  56                   push esi
// 005c3e04  e859be0600           call 0x62fc62
// 005c3e09  83c404               add esp, 4
// 005c3e0c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c3e10  8bc6                 mov eax, esi
// 005c3e12  5e                   pop esi
// 005c3e13  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3e1a  83c410               add esp, 0x10
// 005c3e1d  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ??_GFileToPush@FileListTransfer@RakNet@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
