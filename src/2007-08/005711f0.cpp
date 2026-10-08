// roc 2007-08 005711f0  unit: RBX::Reflection::ClassDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005711f0
//
// 005711f0  64a100000000         mov eax, dword ptr fs:[0]
// 005711f6  6aff                 push -1
// 005711f8  68484e7500           push 0x754e48
// 005711fd  50                   push eax
// 005711fe  64892500000000       mov dword ptr fs:[0], esp
// 00571205  56                   push esi
// 00571206  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057120a  85f6                 test esi, esi
// 0057120c  89742414             mov dword ptr [esp + 0x14], esi
// 00571210  7428                 je 0x57123a
// 00571212  8d4e08               lea ecx, [esi + 8]
// 00571215  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057121d  e86e561b00           call 0x726890
// 00571222  8bce                 mov ecx, esi
// 00571224  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0057122c  e8ef441b00           call 0x725720
// 00571231  56                   push esi
// 00571232  e82bea0b00           call 0x62fc62
// 00571237  83c404               add esp, 4
// 0057123a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057123e  64890d00000000       mov dword ptr fs:[0], ecx
// 00571245  5e                   pop esi
// 00571246  83c40c               add esp, 0xc
// 00571249  c3                   ret 
// library rbxgs/util\boost.cpp (function ??$checked_delete@Udata@worker_thread@RBX@@@boost@@YAXPAUdata@worker_thread@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
