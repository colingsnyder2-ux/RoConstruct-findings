// roc 2011-06 006bfca0  unit: RBX::VInsertService::?$EventDesc  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006bfca0
//
// 006bfca0  6aff                 push -1
// 006bfca2  68881f9f00           push 0x9f1f88
// 006bfca7  64a100000000         mov eax, dword ptr fs:[0]
// 006bfcad  50                   push eax
// 006bfcae  64892500000000       mov dword ptr fs:[0], esp
// 006bfcb5  51                   push ecx
// 006bfcb6  56                   push esi
// 006bfcb7  8bf1                 mov esi, ecx
// 006bfcb9  89742404             mov dword ptr [esp + 4], esi
// 006bfcbd  8d4e04               lea ecx, [esi + 4]
// 006bfcc0  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006bfcc8  e873d1dfff           call 0x4bce40
// 006bfccd  8bce                 mov ecx, esi
// 006bfccf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006bfcd7  e854dedfff           call 0x4bdb30
// 006bfcdc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bfce0  5e                   pop esi
// 006bfce1  64890d00000000       mov dword ptr fs:[0], ecx
// 006bfce8  83c410               add esp, 0x10
// 006bfceb  c3                   ret 
// library rbx2016-raknet/FileList.cpp (function ??1FileListNode@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet FileList.cpp
