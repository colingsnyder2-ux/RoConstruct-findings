// roc 2009-12 00689d40  unit: TextXmlWriter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00689d40
//
// 00689d40  8b442404             mov eax, dword ptr [esp + 4]
// 00689d44  56                   push esi
// 00689d45  57                   push edi
// 00689d46  8bf9                 mov edi, ecx
// 00689d48  6a04                 push 4
// 00689d4a  c707300b9d00         mov dword ptr [edi], 0x9d0b30
// 00689d50  894704               mov dword ptr [edi + 4], eax
// 00689d53  8d7708               lea esi, [edi + 8]
// 00689d56  e8059b1600           call 0x7f3860
// 00689d5b  33c9                 xor ecx, ecx
// 00689d5d  83c404               add esp, 4
// 00689d60  3bc1                 cmp eax, ecx
// 00689d62  7404                 je 0x689d68
// 00689d64  8930                 mov dword ptr [eax], esi
// 00689d66  eb02                 jmp 0x689d6a
// 00689d68  33c0                 xor eax, eax
// 00689d6a  8906                 mov dword ptr [esi], eax
// 00689d6c  8bc7                 mov eax, edi
// 00689d6e  5f                   pop edi
// 00689d6f  894e10               mov dword ptr [esi + 0x10], ecx
// 00689d72  894e14               mov dword ptr [esi + 0x14], ecx
// 00689d75  894e18               mov dword ptr [esi + 0x18], ecx
// 00689d78  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00689d7b  5e                   pop esi
// 00689d7c  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
