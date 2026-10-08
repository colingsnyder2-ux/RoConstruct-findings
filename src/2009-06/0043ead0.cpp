// roc 2009-06 0043ead0  unit: RBX::MergeBinder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043ead0
//
// 0043ead0  8bc1                 mov eax, ecx
// 0043ead2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043ead6  8b11                 mov edx, dword ptr [ecx]
// 0043ead8  8910                 mov dword ptr [eax], edx
// 0043eada  8b5104               mov edx, dword ptr [ecx + 4]
// 0043eadd  895004               mov dword ptr [eax + 4], edx
// 0043eae0  8b5108               mov edx, dword ptr [ecx + 8]
// 0043eae3  895008               mov dword ptr [eax + 8], edx
// 0043eae6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0043eae9  89480c               mov dword ptr [eax + 0xc], ecx
// 0043eaec  85c9                 test ecx, ecx
// 0043eaee  740c                 je 0x43eafc
// 0043eaf0  83c104               add ecx, 4
// 0043eaf3  ba01000000           mov edx, 1
// 0043eaf8  f00fc111             lock xadd dword ptr [ecx], edx
// 0043eafc  c20400               ret 4
// library rbxgs/v8xml\SerializerV2.cpp (function ??0IDREFItem@MergeBinder@RBX@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
