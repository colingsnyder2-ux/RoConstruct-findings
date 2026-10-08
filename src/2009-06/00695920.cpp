// roc 2009-06 00695920  unit: RBX::Lua::FunctionRef  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695920
//
// 00695920  6aff                 push -1
// 00695922  68f8ea8600           push 0x86eaf8
// 00695927  64a100000000         mov eax, dword ptr fs:[0]
// 0069592d  50                   push eax
// 0069592e  64892500000000       mov dword ptr fs:[0], esp
// 00695935  51                   push ecx
// 00695936  56                   push esi
// 00695937  8bf1                 mov esi, ecx
// 00695939  89742404             mov dword ptr [esp + 4], esi
// 0069593d  c706547a8e00         mov dword ptr [esi], 0x8e7a54
// 00695943  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00695946  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0069594e  85c9                 test ecx, ecx
// 00695950  7416                 je 0x695968
// 00695952  8b4618               mov eax, dword ptr [esi + 0x18]
// 00695955  85c0                 test eax, eax
// 00695957  740f                 je 0x695968
// 00695959  51                   push ecx
// 0069595a  68f0d8ffff           push 0xffffd8f0
// 0069595f  50                   push eax
// 00695960  e8eb4d0200           call 0x6ba750
// 00695965  83c40c               add esp, 0xc
// 00695968  8bce                 mov ecx, esi
// 0069596a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00695972  e8b9feffff           call 0x695830
// 00695977  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069597b  5e                   pop esi
// 0069597c  64890d00000000       mov dword ptr fs:[0], ecx
// 00695983  83c410               add esp, 0x10
// 00695986  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ??1FunctionRef@Lua@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
