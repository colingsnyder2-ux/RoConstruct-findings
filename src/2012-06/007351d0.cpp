// roc 2012-06 007351d0  unit: RBX::Frame::W4Style::?$EnumDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007351d0
//
// 007351d0  6aff                 push -1
// 007351d2  68a807ac00           push 0xac07a8
// 007351d7  64a100000000         mov eax, dword ptr fs:[0]
// 007351dd  50                   push eax
// 007351de  64892500000000       mov dword ptr fs:[0], esp
// 007351e5  51                   push ecx
// 007351e6  56                   push esi
// 007351e7  8bf1                 mov esi, ecx
// 007351e9  89742404             mov dword ptr [esp + 4], esi
// 007351ed  8d4e04               lea ecx, [esi + 4]
// 007351f0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007351f8  e8b335d9ff           call 0x4c87b0
// 007351fd  8bce                 mov ecx, esi
// 007351ff  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00735207  e884fdffff           call 0x734f90
// 0073520c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00735210  5e                   pop esi
// 00735211  64890d00000000       mov dword ptr fs:[0], ecx
// 00735218  83c410               add esp, 0x10
// 0073521b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
