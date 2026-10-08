// roc 2007-08 005f8f10  unit: RBX::VDebrisService::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8f10
//
// 005f8f10  8b542404             mov edx, dword ptr [esp + 4]
// 005f8f14  8b4204               mov eax, dword ptr [edx + 4]
// 005f8f17  83ec08               sub esp, 8
// 005f8f1a  8bcc                 mov ecx, esp
// 005f8f1c  8901                 mov dword ptr [ecx], eax
// 005f8f1e  8b4208               mov eax, dword ptr [edx + 8]
// 005f8f21  85c0                 test eax, eax
// 005f8f23  8964240c             mov dword ptr [esp + 0xc], esp
// 005f8f27  894104               mov dword ptr [ecx + 4], eax
// 005f8f2a  740c                 je 0x5f8f38
// 005f8f2c  83c008               add eax, 8
// 005f8f2f  b901000000           mov ecx, 1
// 005f8f34  f00fc108             lock xadd dword ptr [eax], ecx
// 005f8f38  8b12                 mov edx, dword ptr [edx]
// 005f8f3a  ffd2                 call edx
// 005f8f3c  83c408               add esp, 8
// 005f8f3f  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
