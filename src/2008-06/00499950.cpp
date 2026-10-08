// roc 2008-06 00499950  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499950
//
// 00499950  6aff                 push -1
// 00499952  683bf47b00           push 0x7bf43b
// 00499957  64a100000000         mov eax, dword ptr fs:[0]
// 0049995d  50                   push eax
// 0049995e  64892500000000       mov dword ptr fs:[0], esp
// 00499965  51                   push ecx
// 00499966  56                   push esi
// 00499967  6a28                 push 0x28
// 00499969  8bf1                 mov esi, ecx
// 0049996b  e8b06f2000           call 0x6a0920
// 00499970  83c404               add esp, 4
// 00499973  89442404             mov dword ptr [esp + 4], eax
// 00499977  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049997f  85c0                 test eax, eax
// 00499981  741b                 je 0x49999e
// 00499983  83c608               add esi, 8
// 00499986  56                   push esi
// 00499987  8bc8                 mov ecx, eax
// 00499989  e852ffffff           call 0x4998e0
// 0049998e  5e                   pop esi
// 0049998f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00499993  64890d00000000       mov dword ptr fs:[0], ecx
// 0049999a  83c410               add esp, 0x10
// 0049999d  c3                   ret 
// 0049999e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004999a2  33c0                 xor eax, eax
// 004999a4  5e                   pop esi
// 004999a5  64890d00000000       mov dword ptr fs:[0], ecx
// 004999ac  83c410               add esp, 0x10
// 004999af  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
