// roc 2008-06 0058c920  unit: RBX::ChangeHistoryService  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058c920
//
// 0058c920  64a100000000         mov eax, dword ptr fs:[0]
// 0058c926  6aff                 push -1
// 0058c928  683beb7d00           push 0x7deb3b
// 0058c92d  50                   push eax
// 0058c92e  64892500000000       mov dword ptr fs:[0], esp
// 0058c935  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058c939  56                   push esi
// 0058c93a  8bf1                 mov esi, ecx
// 0058c93c  6a1c                 push 0x1c
// 0058c93e  8906                 mov dword ptr [esi], eax
// 0058c940  c7460402000000       mov dword ptr [esi + 4], 2
// 0058c947  e8d43f1100           call 0x6a0920
// 0058c94c  83c404               add esp, 4
// 0058c94f  89442414             mov dword ptr [esp + 0x14], eax
// 0058c953  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058c95b  85c0                 test eax, eax
// 0058c95d  740f                 je 0x58c96e
// 0058c95f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058c963  51                   push ecx
// 0058c964  8bc8                 mov ecx, eax
// 0058c966  ff1558248000         call dword ptr [0x802458]
// 0058c96c  eb02                 jmp 0x58c970
// 0058c96e  33c0                 xor eax, eax
// 0058c970  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058c974  894608               mov dword ptr [esi + 8], eax
// 0058c977  8bc6                 mov eax, esi
// 0058c979  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c980  5e                   pop esi
// 0058c981  83c40c               add esp, 0xc
// 0058c984  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
