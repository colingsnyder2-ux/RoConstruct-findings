// roc 2011-06 00450fa0  unit: RBX::MergeBinder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00450fa0
//
// 00450fa0  8bc1                 mov eax, ecx
// 00450fa2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00450fa6  8b11                 mov edx, dword ptr [ecx]
// 00450fa8  8910                 mov dword ptr [eax], edx
// 00450faa  8b5104               mov edx, dword ptr [ecx + 4]
// 00450fad  895004               mov dword ptr [eax + 4], edx
// 00450fb0  8b5108               mov edx, dword ptr [ecx + 8]
// 00450fb3  895008               mov dword ptr [eax + 8], edx
// 00450fb6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00450fb9  89480c               mov dword ptr [eax + 0xc], ecx
// 00450fbc  85c9                 test ecx, ecx
// 00450fbe  740c                 je 0x450fcc
// 00450fc0  83c104               add ecx, 4
// 00450fc3  ba01000000           mov edx, 1
// 00450fc8  f00fc111             lock xadd dword ptr [ecx], edx
// 00450fcc  c20400               ret 4
// library rbxgs/v8xml\SerializerV2.cpp (function ??0IDREFItem@MergeBinder@RBX@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
