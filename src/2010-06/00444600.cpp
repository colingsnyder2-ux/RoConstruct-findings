// roc 2010-06 00444600  unit: RBX::MergeBinder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00444600
//
// 00444600  8bc1                 mov eax, ecx
// 00444602  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00444606  8b11                 mov edx, dword ptr [ecx]
// 00444608  8910                 mov dword ptr [eax], edx
// 0044460a  8b5104               mov edx, dword ptr [ecx + 4]
// 0044460d  895004               mov dword ptr [eax + 4], edx
// 00444610  8b5108               mov edx, dword ptr [ecx + 8]
// 00444613  895008               mov dword ptr [eax + 8], edx
// 00444616  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00444619  89480c               mov dword ptr [eax + 0xc], ecx
// 0044461c  85c9                 test ecx, ecx
// 0044461e  740c                 je 0x44462c
// 00444620  83c104               add ecx, 4
// 00444623  ba01000000           mov edx, 1
// 00444628  f00fc111             lock xadd dword ptr [ecx], edx
// 0044462c  c20400               ret 4
// library rbxgs/v8xml\SerializerV2.cpp (function ??0IDREFItem@MergeBinder@RBX@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
