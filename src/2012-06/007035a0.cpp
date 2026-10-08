// roc 2012-06 007035a0  unit: TextXmlWriter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007035a0
//
// 007035a0  8b442404             mov eax, dword ptr [esp + 4]
// 007035a4  56                   push esi
// 007035a5  57                   push edi
// 007035a6  8bf9                 mov edi, ecx
// 007035a8  6a04                 push 4
// 007035aa  c7075ce8b900         mov dword ptr [edi], 0xb9e85c
// 007035b0  894704               mov dword ptr [edi + 4], eax
// 007035b3  8d7708               lea esi, [edi + 8]
// 007035b6  e85feb2700           call 0x98211a
// 007035bb  33c9                 xor ecx, ecx
// 007035bd  83c404               add esp, 4
// 007035c0  3bc1                 cmp eax, ecx
// 007035c2  7404                 je 0x7035c8
// 007035c4  8930                 mov dword ptr [eax], esi
// 007035c6  eb02                 jmp 0x7035ca
// 007035c8  33c0                 xor eax, eax
// 007035ca  8906                 mov dword ptr [esi], eax
// 007035cc  8bc7                 mov eax, edi
// 007035ce  5f                   pop edi
// 007035cf  894e10               mov dword ptr [esi + 0x10], ecx
// 007035d2  894e14               mov dword ptr [esi + 0x14], ecx
// 007035d5  894e18               mov dword ptr [esi + 0x18], ecx
// 007035d8  894e1c               mov dword ptr [esi + 0x1c], ecx
// 007035db  5e                   pop esi
// 007035dc  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
