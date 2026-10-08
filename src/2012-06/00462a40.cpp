// roc 2012-06 00462a40  unit: RBX::MergeBinder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462a40
//
// 00462a40  8bc1                 mov eax, ecx
// 00462a42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00462a46  8b11                 mov edx, dword ptr [ecx]
// 00462a48  8910                 mov dword ptr [eax], edx
// 00462a4a  8b5104               mov edx, dword ptr [ecx + 4]
// 00462a4d  895004               mov dword ptr [eax + 4], edx
// 00462a50  8b5108               mov edx, dword ptr [ecx + 8]
// 00462a53  895008               mov dword ptr [eax + 8], edx
// 00462a56  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00462a59  89480c               mov dword ptr [eax + 0xc], ecx
// 00462a5c  85c9                 test ecx, ecx
// 00462a5e  740c                 je 0x462a6c
// 00462a60  83c104               add ecx, 4
// 00462a63  ba01000000           mov edx, 1
// 00462a68  f00fc111             lock xadd dword ptr [ecx], edx
// 00462a6c  c20400               ret 4
// library rbxgs/v8xml\SerializerV2.cpp (function ??0IDREFItem@MergeBinder@RBX@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
