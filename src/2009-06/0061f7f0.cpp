// roc 2009-06 0061f7f0  unit: TextXmlWriter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061f7f0
//
// 0061f7f0  8b442404             mov eax, dword ptr [esp + 4]
// 0061f7f4  56                   push esi
// 0061f7f5  57                   push edi
// 0061f7f6  8bf9                 mov edi, ecx
// 0061f7f8  6a04                 push 4
// 0061f7fa  c70758948d00         mov dword ptr [edi], 0x8d9458
// 0061f800  894704               mov dword ptr [edi + 4], eax
// 0061f803  8d7708               lea esi, [edi + 8]
// 0061f806  e82d920f00           call 0x718a38
// 0061f80b  33c9                 xor ecx, ecx
// 0061f80d  83c404               add esp, 4
// 0061f810  3bc1                 cmp eax, ecx
// 0061f812  7404                 je 0x61f818
// 0061f814  8930                 mov dword ptr [eax], esi
// 0061f816  eb02                 jmp 0x61f81a
// 0061f818  33c0                 xor eax, eax
// 0061f81a  8906                 mov dword ptr [esi], eax
// 0061f81c  8bc7                 mov eax, edi
// 0061f81e  5f                   pop edi
// 0061f81f  894e10               mov dword ptr [esi + 0x10], ecx
// 0061f822  894e14               mov dword ptr [esi + 0x14], ecx
// 0061f825  894e18               mov dword ptr [esi + 0x18], ecx
// 0061f828  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0061f82b  5e                   pop esi
// 0061f82c  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
