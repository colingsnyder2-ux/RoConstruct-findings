// roc 2012-06 00480b40  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::V?$basic_filesystem_error::U?$error_info_injector::?$clone_impl  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00480b40
//
// 00480b40  8b542404             mov edx, dword ptr [esp + 4]
// 00480b44  8b4204               mov eax, dword ptr [edx + 4]
// 00480b47  83ec08               sub esp, 8
// 00480b4a  8bcc                 mov ecx, esp
// 00480b4c  8901                 mov dword ptr [ecx], eax
// 00480b4e  8b4208               mov eax, dword ptr [edx + 8]
// 00480b51  8964240c             mov dword ptr [esp + 0xc], esp
// 00480b55  894104               mov dword ptr [ecx + 4], eax
// 00480b58  85c0                 test eax, eax
// 00480b5a  740c                 je 0x480b68
// 00480b5c  83c008               add eax, 8
// 00480b5f  b901000000           mov ecx, 1
// 00480b64  f00fc108             lock xadd dword ptr [eax], ecx
// 00480b68  8b12                 mov edx, dword ptr [edx]
// 00480b6a  ffd2                 call edx
// 00480b6c  83c408               add esp, 8
// 00480b6f  c3                   ret 
// library rbxgs/v8datamodel\DebrisService.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
