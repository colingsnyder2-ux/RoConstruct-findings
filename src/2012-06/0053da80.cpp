// roc 2012-06 0053da80  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053da80
//
// 0053da80  6aff                 push -1
// 0053da82  6888c1aa00           push 0xaac188
// 0053da87  64a100000000         mov eax, dword ptr fs:[0]
// 0053da8d  50                   push eax
// 0053da8e  64892500000000       mov dword ptr fs:[0], esp
// 0053da95  51                   push ecx
// 0053da96  56                   push esi
// 0053da97  8bf1                 mov esi, ecx
// 0053da99  89742404             mov dword ptr [esp + 4], esi
// 0053da9d  8d4e04               lea ecx, [esi + 4]
// 0053daa0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053daa8  e803adf8ff           call 0x4c87b0
// 0053daad  8bce                 mov ecx, esi
// 0053daaf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053dab7  e894bdffff           call 0x539850
// 0053dabc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053dac0  5e                   pop esi
// 0053dac1  64890d00000000       mov dword ptr fs:[0], ecx
// 0053dac8  83c410               add esp, 0x10
// 0053dacb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
