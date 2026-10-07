// roc 2009-06 004cb9d0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cb9d0
//
// 004cb9d0  6aff                 push -1
// 004cb9d2  68a8688600           push 0x8668a8
// 004cb9d7  64a100000000         mov eax, dword ptr fs:[0]
// 004cb9dd  50                   push eax
// 004cb9de  64892500000000       mov dword ptr fs:[0], esp
// 004cb9e5  51                   push ecx
// 004cb9e6  56                   push esi
// 004cb9e7  57                   push edi
// 004cb9e8  8bf9                 mov edi, ecx
// 004cb9ea  897c2408             mov dword ptr [esp + 8], edi
// 004cb9ee  8b7708               mov esi, dword ptr [edi + 8]
// 004cb9f1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004cb9f9  85f6                 test esi, esi
// 004cb9fb  742a                 je 0x4cba27
// 004cb9fd  8d4604               lea eax, [esi + 4]
// 004cba00  83c9ff               or ecx, 0xffffffff
// 004cba03  f00fc108             lock xadd dword ptr [eax], ecx
// 004cba07  751e                 jne 0x4cba27
// 004cba09  8b16                 mov edx, dword ptr [esi]
// 004cba0b  8b4204               mov eax, dword ptr [edx + 4]
// 004cba0e  8bce                 mov ecx, esi
// 004cba10  ffd0                 call eax
// 004cba12  8d4e08               lea ecx, [esi + 8]
// 004cba15  83caff               or edx, 0xffffffff
// 004cba18  f00fc111             lock xadd dword ptr [ecx], edx
// 004cba1c  7509                 jne 0x4cba27
// 004cba1e  8b06                 mov eax, dword ptr [esi]
// 004cba20  8b5008               mov edx, dword ptr [eax + 8]
// 004cba23  8bce                 mov ecx, esi
// 004cba25  ffd2                 call edx
// 004cba27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cba2b  c70738d38a00         mov dword ptr [edi], 0x8ad338
// 004cba31  5f                   pop edi
// 004cba32  5e                   pop esi
// 004cba33  64890d00000000       mov dword ptr fs:[0], ecx
// 004cba3a  83c410               add esp, 0x10
// 004cba3d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$holder@V?$shared_ptr@VInstance@RBX@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
