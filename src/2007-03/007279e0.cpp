// roc 2007-03 007279e0  unit: seg_00720000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007279e0
//
// 007279e0  8bc1                 mov eax, ecx
// 007279e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007279e6  8b11                 mov edx, dword ptr [ecx]
// 007279e8  8910                 mov dword ptr [eax], edx
// 007279ea  8b4904               mov ecx, dword ptr [ecx + 4]
// 007279ed  85c9                 test ecx, ecx
// 007279ef  894804               mov dword ptr [eax + 4], ecx
// 007279f2  740c                 je 0x727a00
// 007279f4  83c104               add ecx, 4
// 007279f7  ba01000000           mov edx, 1
// 007279fc  f00fc111             lock xadd dword ptr [ecx], edx
// 00727a00  8b08                 mov ecx, dword ptr [eax]
// 00727a02  830101               add dword ptr [ecx], 1
// 00727a05  c20400               ret 4
// copied from an identical function in another client (function ??0call_notification@detail@signals@boost@@QAE@ABV?$shared_ptr@Vsignal_base_impl@detail@signals@boost@@@3@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_df54928aa29a52f6.cpp