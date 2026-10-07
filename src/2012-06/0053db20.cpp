// roc 2012-06 0053db20  unit: RBX::ObjectValue  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053db20
//
// 0053db20  6aff                 push -1
// 0053db22  68c8c1aa00           push 0xaac1c8
// 0053db27  64a100000000         mov eax, dword ptr fs:[0]
// 0053db2d  50                   push eax
// 0053db2e  64892500000000       mov dword ptr fs:[0], esp
// 0053db35  51                   push ecx
// 0053db36  56                   push esi
// 0053db37  8bf1                 mov esi, ecx
// 0053db39  89742404             mov dword ptr [esp + 4], esi
// 0053db3d  8d4e04               lea ecx, [esi + 4]
// 0053db40  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0053db48  e863acf8ff           call 0x4c87b0
// 0053db4d  8bce                 mov ecx, esi
// 0053db4f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0053db57  e814beffff           call 0x539970
// 0053db5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053db60  5e                   pop esi
// 0053db61  64890d00000000       mov dword ptr fs:[0], ecx
// 0053db68  83c410               add esp, 0x10
// 0053db6b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
