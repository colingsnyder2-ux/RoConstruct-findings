// roc 2012-06 00808050  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00808050
//
// 00808050  6aff                 push -1
// 00808052  6818afac00           push 0xacaf18
// 00808057  64a100000000         mov eax, dword ptr fs:[0]
// 0080805d  50                   push eax
// 0080805e  64892500000000       mov dword ptr fs:[0], esp
// 00808065  51                   push ecx
// 00808066  56                   push esi
// 00808067  8bf1                 mov esi, ecx
// 00808069  89742404             mov dword ptr [esp + 4], esi
// 0080806d  8d4e04               lea ecx, [esi + 4]
// 00808070  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00808078  e83307ccff           call 0x4c87b0
// 0080807d  8bce                 mov ecx, esi
// 0080807f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00808087  e884d1ffff           call 0x805210
// 0080808c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00808090  5e                   pop esi
// 00808091  64890d00000000       mov dword ptr fs:[0], ecx
// 00808098  83c410               add esp, 0x10
// 0080809b  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
