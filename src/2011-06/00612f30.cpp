// roc 2011-06 00612f30  unit: TextXmlWriter  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00612f30
//
// 00612f30  8b442404             mov eax, dword ptr [esp + 4]
// 00612f34  56                   push esi
// 00612f35  57                   push edi
// 00612f36  8bf9                 mov edi, ecx
// 00612f38  6a04                 push 4
// 00612f3a  c7070c3fa900         mov dword ptr [edi], 0xa93f0c
// 00612f40  894704               mov dword ptr [edi + 4], eax
// 00612f43  8d7708               lea esi, [edi + 8]
// 00612f46  e813711f00           call 0x80a05e
// 00612f4b  33c9                 xor ecx, ecx
// 00612f4d  83c404               add esp, 4
// 00612f50  3bc1                 cmp eax, ecx
// 00612f52  7404                 je 0x612f58
// 00612f54  8930                 mov dword ptr [eax], esi
// 00612f56  eb02                 jmp 0x612f5a
// 00612f58  33c0                 xor eax, eax
// 00612f5a  8906                 mov dword ptr [esi], eax
// 00612f5c  8bc7                 mov eax, edi
// 00612f5e  5f                   pop edi
// 00612f5f  894e10               mov dword ptr [esi + 0x10], ecx
// 00612f62  894e14               mov dword ptr [esi + 0x14], ecx
// 00612f65  894e18               mov dword ptr [esi + 0x18], ecx
// 00612f68  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00612f6b  5e                   pop esi
// 00612f6c  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlParser@@IAE@PAV?$basic_streambuf@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
