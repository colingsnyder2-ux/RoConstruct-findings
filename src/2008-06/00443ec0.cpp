// roc 2008-06 00443ec0  unit: RBX::MergeBinder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443ec0
//
// 00443ec0  8bc1                 mov eax, ecx
// 00443ec2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00443ec6  8b11                 mov edx, dword ptr [ecx]
// 00443ec8  8910                 mov dword ptr [eax], edx
// 00443eca  8b5104               mov edx, dword ptr [ecx + 4]
// 00443ecd  895004               mov dword ptr [eax + 4], edx
// 00443ed0  8b5108               mov edx, dword ptr [ecx + 8]
// 00443ed3  895008               mov dword ptr [eax + 8], edx
// 00443ed6  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00443ed9  89480c               mov dword ptr [eax + 0xc], ecx
// 00443edc  85c9                 test ecx, ecx
// 00443ede  740c                 je 0x443eec
// 00443ee0  83c104               add ecx, 4
// 00443ee3  ba01000000           mov edx, 1
// 00443ee8  f00fc111             lock xadd dword ptr [ecx], edx
// 00443eec  c20400               ret 4
// library rbxgs/v8xml\SerializerV2.cpp (function ??0IDREFItem@MergeBinder@RBX@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
