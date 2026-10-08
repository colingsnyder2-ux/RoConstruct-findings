// roc 2009-06 006958b0  unit: RBX::Lua::FunctionRef  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006958b0
//
// 006958b0  6aff                 push -1
// 006958b2  68f8ea8600           push 0x86eaf8
// 006958b7  64a100000000         mov eax, dword ptr fs:[0]
// 006958bd  50                   push eax
// 006958be  64892500000000       mov dword ptr fs:[0], esp
// 006958c5  51                   push ecx
// 006958c6  56                   push esi
// 006958c7  57                   push edi
// 006958c8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006958cc  8bf1                 mov esi, ecx
// 006958ce  57                   push edi
// 006958cf  8974240c             mov dword ptr [esp + 0xc], esi
// 006958d3  e838feffff           call 0x695710
// 006958d8  8b442420             mov eax, dword ptr [esp + 0x20]
// 006958dc  50                   push eax
// 006958dd  57                   push edi
// 006958de  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006958e6  c706547a8e00         mov dword ptr [esi], 0x8e7a54
// 006958ec  e84f360200           call 0x6b8f40
// 006958f1  68f0d8ffff           push 0xffffd8f0
// 006958f6  57                   push edi
// 006958f7  e8a44d0200           call 0x6ba6a0
// 006958fc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00695900  83c410               add esp, 0x10
// 00695903  894620               mov dword ptr [esi + 0x20], eax
// 00695906  5f                   pop edi
// 00695907  8bc6                 mov eax, esi
// 00695909  5e                   pop esi
// 0069590a  64890d00000000       mov dword ptr fs:[0], ecx
// 00695911  83c410               add esp, 0x10
// 00695914  c20800               ret 8
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
