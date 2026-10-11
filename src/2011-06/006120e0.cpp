// roc 2011-06 006120e0  unit: RBX::ChangeHistoryService  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006120e0
//
// 006120e0  64a100000000         mov eax, dword ptr fs:[0]
// 006120e6  6aff                 push -1
// 006120e8  682bc59f00           push 0x9fc52b
// 006120ed  50                   push eax
// 006120ee  64892500000000       mov dword ptr fs:[0], esp
// 006120f5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006120f9  56                   push esi
// 006120fa  8bf1                 mov esi, ecx
// 006120fc  6a1c                 push 0x1c
// 006120fe  8906                 mov dword ptr [esi], eax
// 00612100  c7460402000000       mov dword ptr [esi + 4], 2
// 00612107  e8527f1f00           call 0x80a05e
// 0061210c  83c404               add esp, 4
// 0061210f  89442414             mov dword ptr [esp + 0x14], eax
// 00612113  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0061211b  85c0                 test eax, eax
// 0061211d  740f                 je 0x61212e
// 0061211f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00612123  51                   push ecx
// 00612124  8bc8                 mov ecx, eax
// 00612126  ff15c404a400         call dword ptr [0xa404c4]
// 0061212c  eb02                 jmp 0x612130
// 0061212e  33c0                 xor eax, eax
// 00612130  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00612134  894608               mov dword ptr [esi + 8], eax
// 00612137  8bc6                 mov eax, esi
// 00612139  64890d00000000       mov dword ptr fs:[0], ecx
// 00612140  5e                   pop esi
// 00612141  83c40c               add esp, 0xc
// 00612144  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
