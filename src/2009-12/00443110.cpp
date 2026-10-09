// roc 2009-12 00443110  unit: RBX::MergeBinder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00443110
//
// 00443110  8bc1                 mov eax, ecx
// 00443112  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00443116  8b11                 mov edx, dword ptr [ecx]
// 00443118  8910                 mov dword ptr [eax], edx
// 0044311a  8b5104               mov edx, dword ptr [ecx + 4]
// 0044311d  895004               mov dword ptr [eax + 4], edx
// 00443120  8b5108               mov edx, dword ptr [ecx + 8]
// 00443123  895008               mov dword ptr [eax + 8], edx
// 00443126  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00443129  89480c               mov dword ptr [eax + 0xc], ecx
// 0044312c  85c9                 test ecx, ecx
// 0044312e  740c                 je 0x44313c
// 00443130  83c104               add ecx, 4
// 00443133  ba01000000           mov edx, 1
// 00443138  f00fc111             lock xadd dword ptr [ecx], edx
// 0044313c  c20400               ret 4
// library rbxgs/v8xml\SerializerV2.cpp (function ??0IDREFItem@MergeBinder@RBX@@QAE@ABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
