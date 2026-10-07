// roc 2011-06 0068f410  unit: RBX::GuiTextButton  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068f410
//
// 0068f410  6aff                 push -1
// 0068f412  6898f99e00           push 0x9ef998
// 0068f417  64a100000000         mov eax, dword ptr fs:[0]
// 0068f41d  50                   push eax
// 0068f41e  64892500000000       mov dword ptr fs:[0], esp
// 0068f425  51                   push ecx
// 0068f426  56                   push esi
// 0068f427  8bf1                 mov esi, ecx
// 0068f429  89742404             mov dword ptr [esp + 4], esi
// 0068f42d  8d4e04               lea ecx, [esi + 4]
// 0068f430  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0068f438  e803dae2ff           call 0x4bce40
// 0068f43d  8bce                 mov ecx, esi
// 0068f43f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0068f447  e824faffff           call 0x68ee70
// 0068f44c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068f450  5e                   pop esi
// 0068f451  64890d00000000       mov dword ptr fs:[0], ecx
// 0068f458  83c410               add esp, 0x10
// 0068f45b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
