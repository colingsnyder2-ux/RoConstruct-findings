// roc 2008-06 00595790  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595790
//
// 00595790  6aff                 push -1
// 00595792  6893207d00           push 0x7d2093
// 00595797  64a100000000         mov eax, dword ptr fs:[0]
// 0059579d  50                   push eax
// 0059579e  64892500000000       mov dword ptr fs:[0], esp
// 005957a5  51                   push ecx
// 005957a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005957aa  56                   push esi
// 005957ab  57                   push edi
// 005957ac  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005957b0  6868228300           push 0x832268
// 005957b5  50                   push eax
// 005957b6  8bf1                 mov esi, ecx
// 005957b8  57                   push edi
// 005957b9  89742414             mov dword ptr [esp + 0x14], esi
// 005957bd  e8be5cfdff           call 0x56b480
// 005957c2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005957c6  894e10               mov dword ptr [esi + 0x10], ecx
// 005957c9  8d4e14               lea ecx, [esi + 0x14]
// 005957cc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005957d4  e817f4ffff           call 0x594bf0
// 005957d9  56                   push esi
// 005957da  8d4f70               lea ecx, [edi + 0x70]
// 005957dd  c644241801           mov byte ptr [esp + 0x18], 1
// 005957e2  e809a8fdff           call 0x56fff0
// 005957e7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005957eb  5f                   pop edi
// 005957ec  8bc6                 mov eax, esi
// 005957ee  5e                   pop esi
// 005957ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005957f6  83c410               add esp, 0x10
// 005957f9  c20c00               ret 0xc
// library rbxgs/reflection\reflection_function.cpp (function ??0FunctionDescriptor@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBDW4Security@012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
