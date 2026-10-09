// roc 2009-12 0068b590  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b590
//
// 0068b590  6aff                 push -1
// 0068b592  6863639400           push 0x946363
// 0068b597  64a100000000         mov eax, dword ptr fs:[0]
// 0068b59d  50                   push eax
// 0068b59e  64892500000000       mov dword ptr fs:[0], esp
// 0068b5a5  83ec08               sub esp, 8
// 0068b5a8  56                   push esi
// 0068b5a9  8bf1                 mov esi, ecx
// 0068b5ab  89742408             mov dword ptr [esp + 8], esi
// 0068b5af  e8ec7adbff           call 0x4430a0
// 0068b5b4  8d442407             lea eax, [esp + 7]
// 0068b5b8  50                   push eax
// 0068b5b9  8d54240b             lea edx, [esp + 0xb]
// 0068b5bd  8d4e1c               lea ecx, [esi + 0x1c]
// 0068b5c0  52                   push edx
// 0068b5c1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0068b5c9  c706d40c9d00         mov dword ptr [esi], 0x9d0cd4
// 0068b5cf  e8ecc1deff           call 0x4777c0
// 0068b5d4  8d4e3c               lea ecx, [esi + 0x3c]
// 0068b5d7  c644241401           mov byte ptr [esp + 0x14], 1
// 0068b5dc  e8cff9ffff           call 0x68afb0
// 0068b5e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068b5e5  8bc6                 mov eax, esi
// 0068b5e7  5e                   pop esi
// 0068b5e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b5ef  83c414               add esp, 0x14
// 0068b5f2  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??0ArchiveBinder@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
