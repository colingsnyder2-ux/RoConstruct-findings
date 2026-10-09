// roc 2007-03 0056c250  unit: seg_00560000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056c250
//
// 0056c250  6aff                 push -1
// 0056c252  68c89e7500           push 0x759ec8
// 0056c257  64a100000000         mov eax, dword ptr fs:[0]
// 0056c25d  50                   push eax
// 0056c25e  64892500000000       mov dword ptr fs:[0], esp
// 0056c265  51                   push ecx
// 0056c266  56                   push esi
// 0056c267  57                   push edi
// 0056c268  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056c26c  8bf1                 mov esi, ecx
// 0056c26e  6aff                 push -1
// 0056c270  57                   push edi
// 0056c271  89742410             mov dword ptr [esp + 0x10], esi
// 0056c275  c70664617800         mov dword ptr [esi], 0x786164
// 0056c27b  e86016fcff           call 0x52d8e0
// 0056c280  894604               mov dword ptr [esi + 4], eax
// 0056c283  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056c287  57                   push edi
// 0056c288  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0056c290  c706649e7900         mov dword ptr [esi], 0x799e64
// 0056c296  894608               mov dword ptr [esi + 8], eax
// 0056c299  e8721afcff           call 0x52dd10
// 0056c29e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056c2a2  83c40c               add esp, 0xc
// 0056c2a5  89460c               mov dword ptr [esi + 0xc], eax
// 0056c2a8  5f                   pop edi
// 0056c2a9  8bc6                 mov eax, esi
// 0056c2ab  5e                   pop esi
// 0056c2ac  64890d00000000       mov dword ptr fs:[0], ecx
// 0056c2b3  83c410               add esp, 0x10
// 0056c2b6  c20800               ret 8
// library openrbx-client/App\reflection\reflection_property.cpp (function ??0Type@Reflection@RBX@@IAE@PBDABVtype_info@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
