// roc 2007-08 007273f0  unit: boost::thread_resource_error  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007273f0
//
// 007273f0  8bc1                 mov eax, ecx
// 007273f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007273f6  8b11                 mov edx, dword ptr [ecx]
// 007273f8  8910                 mov dword ptr [eax], edx
// 007273fa  8b4904               mov ecx, dword ptr [ecx + 4]
// 007273fd  85c9                 test ecx, ecx
// 007273ff  894804               mov dword ptr [eax + 4], ecx
// 00727402  740c                 je 0x727410
// 00727404  83c104               add ecx, 4
// 00727407  ba01000000           mov edx, 1
// 0072740c  f00fc111             lock xadd dword ptr [ecx], edx
// 00727410  8b08                 mov ecx, dword ptr [eax]
// 00727412  830101               add dword ptr [ecx], 1
// 00727415  c20400               ret 4
// copied from an identical function in another client (function ??0call_notification@detail@signals@boost@@QAE@ABV?$shared_ptr@Vsignal_base_impl@detail@signals@boost@@@3@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_df54928aa29a52f6.cpp