// roc 2008-06 0058f230  unit: TextXmlWriter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058f230
//
// 0058f230  8b442404             mov eax, dword ptr [esp + 4]
// 0058f234  56                   push esi
// 0058f235  57                   push edi
// 0058f236  8bf9                 mov edi, ecx
// 0058f238  6a04                 push 4
// 0058f23a  c707401b8300         mov dword ptr [edi], 0x831b40
// 0058f240  894704               mov dword ptr [edi + 4], eax
// 0058f243  8d7708               lea esi, [edi + 8]
// 0058f246  e8d5161100           call 0x6a0920
// 0058f24b  33c9                 xor ecx, ecx
// 0058f24d  83c404               add esp, 4
// 0058f250  3bc1                 cmp eax, ecx
// 0058f252  7404                 je 0x58f258
// 0058f254  8930                 mov dword ptr [eax], esi
// 0058f256  eb02                 jmp 0x58f25a
// 0058f258  33c0                 xor eax, eax
// 0058f25a  8906                 mov dword ptr [esi], eax
// 0058f25c  8bc7                 mov eax, edi
// 0058f25e  5f                   pop edi
// 0058f25f  894e10               mov dword ptr [esi + 0x10], ecx
// 0058f262  894e14               mov dword ptr [esi + 0x14], ecx
// 0058f265  894e18               mov dword ptr [esi + 0x18], ecx
// 0058f268  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0058f26b  5e                   pop esi
// 0058f26c  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
