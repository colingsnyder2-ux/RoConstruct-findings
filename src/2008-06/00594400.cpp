// roc 2008-06 00594400  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594400
//
// 00594400  6aff                 push -1
// 00594402  68581f7d00           push 0x7d1f58
// 00594407  64a100000000         mov eax, dword ptr fs:[0]
// 0059440d  50                   push eax
// 0059440e  64892500000000       mov dword ptr fs:[0], esp
// 00594415  51                   push ecx
// 00594416  56                   push esi
// 00594417  57                   push edi
// 00594418  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0059441c  8bf1                 mov esi, ecx
// 0059441e  57                   push edi
// 0059441f  8974240c             mov dword ptr [esp + 0xc], esi
// 00594423  e818faffff           call 0x593e40
// 00594428  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059442c  50                   push eax
// 0059442d  57                   push edi
// 0059442e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00594436  c706d0eb8000         mov dword ptr [esi], 0x80ebd0
// 0059443c  e88fd90700           call 0x611dd0
// 00594441  68f0d8ffff           push 0xffffd8f0
// 00594446  57                   push edi
// 00594447  e874cc0700           call 0x6110c0
// 0059444c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00594450  83c410               add esp, 0x10
// 00594453  894620               mov dword ptr [esi + 0x20], eax
// 00594456  5f                   pop edi
// 00594457  8bc6                 mov eax, esi
// 00594459  5e                   pop esi
// 0059445a  64890d00000000       mov dword ptr fs:[0], ecx
// 00594461  83c410               add esp, 0x10
// 00594464  c20800               ret 8
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@PAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
