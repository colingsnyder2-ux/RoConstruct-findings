// roc 2009-06 00695990  unit: RBX::Lua::FunctionRef  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695990
//
// 00695990  6aff                 push -1
// 00695992  68f8ea8600           push 0x86eaf8
// 00695997  64a100000000         mov eax, dword ptr fs:[0]
// 0069599d  50                   push eax
// 0069599e  64892500000000       mov dword ptr fs:[0], esp
// 006959a5  51                   push ecx
// 006959a6  56                   push esi
// 006959a7  57                   push edi
// 006959a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006959ac  8bf1                 mov esi, ecx
// 006959ae  57                   push edi
// 006959af  8974240c             mov dword ptr [esp + 0xc], esi
// 006959b3  e868f9ffff           call 0x695320
// 006959b8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006959bb  33c9                 xor ecx, ecx
// 006959bd  894c2414             mov dword ptr [esp + 0x14], ecx
// 006959c1  c706547a8e00         mov dword ptr [esi], 0x8e7a54
// 006959c7  3bc1                 cmp eax, ecx
// 006959c9  7518                 jne 0x6959e3
// 006959cb  5f                   pop edi
// 006959cc  894e20               mov dword ptr [esi + 0x20], ecx
// 006959cf  8bc6                 mov eax, esi
// 006959d1  5e                   pop esi
// 006959d2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006959d6  64890d00000000       mov dword ptr fs:[0], ecx
// 006959dd  83c410               add esp, 0x10
// 006959e0  c20400               ret 4
// 006959e3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006959e6  51                   push ecx
// 006959e7  68f0d8ffff           push 0xffffd8f0
// 006959ec  50                   push eax
// 006959ed  e87e3c0200           call 0x6b9670
// 006959f2  8b4618               mov eax, dword ptr [esi + 0x18]
// 006959f5  68f0d8ffff           push 0xffffd8f0
// 006959fa  50                   push eax
// 006959fb  e8a04c0200           call 0x6ba6a0
// 00695a00  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00695a04  83c414               add esp, 0x14
// 00695a07  894620               mov dword ptr [esi + 0x20], eax
// 00695a0a  5f                   pop edi
// 00695a0b  8bc6                 mov eax, esi
// 00695a0d  5e                   pop esi
// 00695a0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00695a15  83c410               add esp, 0x10
// 00695a18  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
