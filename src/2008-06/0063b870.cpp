// roc 2008-06 0063b870  unit: RBX::P8DebrisService::?$GetSetImpl  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b870
//
// 0063b870  8b542404             mov edx, dword ptr [esp + 4]
// 0063b874  8b4204               mov eax, dword ptr [edx + 4]
// 0063b877  83ec08               sub esp, 8
// 0063b87a  8bcc                 mov ecx, esp
// 0063b87c  8901                 mov dword ptr [ecx], eax
// 0063b87e  8b4208               mov eax, dword ptr [edx + 8]
// 0063b881  8964240c             mov dword ptr [esp + 0xc], esp
// 0063b885  894104               mov dword ptr [ecx + 4], eax
// 0063b888  85c0                 test eax, eax
// 0063b88a  740c                 je 0x63b898
// 0063b88c  83c008               add eax, 8
// 0063b88f  b901000000           mov ecx, 1
// 0063b894  f00fc108             lock xadd dword ptr [eax], ecx
// 0063b898  8b12                 mov edx, dword ptr [edx]
// 0063b89a  ffd2                 call edx
// 0063b89c  83c408               add esp, 8
// 0063b89f  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
