// roc 2009-12 005121c0  unit: boost::detail::thread_data_base  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005121c0
//
// 005121c0  64a100000000         mov eax, dword ptr fs:[0]
// 005121c6  6aff                 push -1
// 005121c8  681b479500           push 0x95471b
// 005121cd  50                   push eax
// 005121ce  64892500000000       mov dword ptr fs:[0], esp
// 005121d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005121d9  56                   push esi
// 005121da  8bf1                 mov esi, ecx
// 005121dc  6a1c                 push 0x1c
// 005121de  8906                 mov dword ptr [esi], eax
// 005121e0  c7460402000000       mov dword ptr [esi + 4], 2
// 005121e7  e874162e00           call 0x7f3860
// 005121ec  83c404               add esp, 4
// 005121ef  89442414             mov dword ptr [esp + 0x14], eax
// 005121f3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005121fb  85c0                 test eax, eax
// 005121fd  740f                 je 0x51220e
// 005121ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00512203  51                   push ecx
// 00512204  8bc8                 mov ecx, eax
// 00512206  ff15f0b69800         call dword ptr [0x98b6f0]
// 0051220c  eb02                 jmp 0x512210
// 0051220e  33c0                 xor eax, eax
// 00512210  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00512214  894608               mov dword ptr [esi + 8], eax
// 00512217  8bc6                 mov eax, esi
// 00512219  64890d00000000       mov dword ptr fs:[0], ecx
// 00512220  5e                   pop esi
// 00512221  83c40c               add esp, 0xc
// 00512224  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
