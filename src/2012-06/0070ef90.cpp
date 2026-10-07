// roc 2012-06 0070ef90  unit: RBX::HopperBin  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070ef90
//
// 0070ef90  6aff                 push -1
// 0070ef92  6838e2ab00           push 0xabe238
// 0070ef97  64a100000000         mov eax, dword ptr fs:[0]
// 0070ef9d  50                   push eax
// 0070ef9e  64892500000000       mov dword ptr fs:[0], esp
// 0070efa5  51                   push ecx
// 0070efa6  56                   push esi
// 0070efa7  8bf1                 mov esi, ecx
// 0070efa9  89742404             mov dword ptr [esp + 4], esi
// 0070efad  8d4e04               lea ecx, [esi + 4]
// 0070efb0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0070efb8  e8f397dbff           call 0x4c87b0
// 0070efbd  8bce                 mov ecx, esi
// 0070efbf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0070efc7  e8c4a5e2ff           call 0x539590
// 0070efcc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070efd0  5e                   pop esi
// 0070efd1  64890d00000000       mov dword ptr fs:[0], ecx
// 0070efd8  83c410               add esp, 0x10
// 0070efdb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
