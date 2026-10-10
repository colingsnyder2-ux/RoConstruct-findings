// from server: 100% by tester
// roc 2008-06 0048d810  unit: RBX::Reflection::Z::$$A6AXM::?$TSignalDesc::TSignalInstance  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d810
//
// 0048d810  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048d814  83f803               cmp eax, 3
// 0048d817  741e                 je 0x48d837
// 0048d819  8b542408             mov edx, dword ptr [esp + 8]
// 0048d81d  c644240c00           mov byte ptr [esp + 0xc], 0
// 0048d822  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048d826  51                   push ecx
// 0048d827  50                   push eax
// 0048d828  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048d82c  52                   push edx
// 0048d82d  50                   push eax
// 0048d82e  e83df6ffff           call 0x48ce70
// 0048d833  83c410               add esp, 0x10
// 0048d836  c3                   ret 
// 0048d837  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048d83b  c70108549300         mov dword ptr [ecx], 0x935408
// 0048d841  c3                   ret 
// library rbxgs-net/Player.cpp (function ?manage@?$functor_manager@V?$bind_t@XV?$mf0@XVPlayer@Network@RBX@@@_mfi@boost@@V?$list1@V?$value@V?$shared_ptr@VPlayer@Network@RBX@@@boost@@@_bi@boost@@@_bi@3@@_bi@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
