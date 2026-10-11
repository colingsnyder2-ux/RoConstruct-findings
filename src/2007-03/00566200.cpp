// roc 2007-03 00566200  unit: seg_00560000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566200
//
// 00566200  64a100000000         mov eax, dword ptr fs:[0]
// 00566206  6aff                 push -1
// 00566208  68cbd77400           push 0x74d7cb
// 0056620d  50                   push eax
// 0056620e  64892500000000       mov dword ptr fs:[0], esp
// 00566215  8b442410             mov eax, dword ptr [esp + 0x10]
// 00566219  56                   push esi
// 0056621a  8bf1                 mov esi, ecx
// 0056621c  6a1c                 push 0x1c
// 0056621e  8906                 mov dword ptr [esi], eax
// 00566220  c7460402000000       mov dword ptr [esi + 4], 2
// 00566227  e8dc7e0b00           call 0x61e108
// 0056622c  83c404               add esp, 4
// 0056622f  89442414             mov dword ptr [esp + 0x14], eax
// 00566233  85c0                 test eax, eax
// 00566235  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056623d  740f                 je 0x56624e
// 0056623f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00566243  51                   push ecx
// 00566244  8bc8                 mov ecx, eax
// 00566246  ff1578e77700         call dword ptr [0x77e778]
// 0056624c  eb02                 jmp 0x566250
// 0056624e  33c0                 xor eax, eax
// 00566250  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00566254  894608               mov dword ptr [esi + 8], eax
// 00566257  8bc6                 mov eax, esi
// 00566259  64890d00000000       mov dword ptr fs:[0], ecx
// 00566260  5e                   pop esi
// 00566261  83c40c               add esp, 0xc
// 00566264  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
