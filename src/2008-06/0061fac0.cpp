// roc 2008-06 0061fac0  unit: VFunctionScriptSlot::?$TGenericSlotWrapper  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061fac0
//
// 0061fac0  6aff                 push -1
// 0061fac2  6838957d00           push 0x7d9538
// 0061fac7  64a100000000         mov eax, dword ptr fs:[0]
// 0061facd  50                   push eax
// 0061face  64892500000000       mov dword ptr fs:[0], esp
// 0061fad5  51                   push ecx
// 0061fad6  56                   push esi
// 0061fad7  8bf1                 mov esi, ecx
// 0061fad9  89742404             mov dword ptr [esp + 4], esi
// 0061fadd  8d4e04               lea ecx, [esi + 4]
// 0061fae0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0061fae8  e8d3f7ffff           call 0x61f2c0
// 0061faed  8bce                 mov ecx, esi
// 0061faef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0061faf7  e814d9e5ff           call 0x47d410
// 0061fafc  f644241801           test byte ptr [esp + 0x18], 1
// 0061fb01  7409                 je 0x61fb0c
// 0061fb03  56                   push esi
// 0061fb04  e8710b0800           call 0x6a067a
// 0061fb09  83c404               add esp, 4
// 0061fb0c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061fb10  8bc6                 mov eax, esi
// 0061fb12  5e                   pop esi
// 0061fb13  64890d00000000       mov dword ptr fs:[0], ecx
// 0061fb1a  83c410               add esp, 0x10
// 0061fb1d  c20400               ret 4
// library rbx2016-raknet/FileListTransfer.cpp (function ??_GFileToPush@FileListTransfer@RakNet@@QAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileListTransfer.cpp
