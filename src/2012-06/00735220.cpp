// roc 2012-06 00735220  unit: RBX::Frame::W4Style::?$EnumDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00735220
//
// 00735220  6aff                 push -1
// 00735222  68c807ac00           push 0xac07c8
// 00735227  64a100000000         mov eax, dword ptr fs:[0]
// 0073522d  50                   push eax
// 0073522e  64892500000000       mov dword ptr fs:[0], esp
// 00735235  51                   push ecx
// 00735236  56                   push esi
// 00735237  8bf1                 mov esi, ecx
// 00735239  89742404             mov dword ptr [esp + 4], esi
// 0073523d  8d4e04               lea ecx, [esi + 4]
// 00735240  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00735248  e86335d9ff           call 0x4c87b0
// 0073524d  8bce                 mov ecx, esi
// 0073524f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00735257  e8c4fdffff           call 0x735020
// 0073525c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00735260  5e                   pop esi
// 00735261  64890d00000000       mov dword ptr fs:[0], ecx
// 00735268  83c410               add esp, 0x10
// 0073526b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
