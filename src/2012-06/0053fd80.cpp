// roc 2012-06 0053fd80  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0053fd80
//
// 0053fd80  64a100000000         mov eax, dword ptr fs:[0]
// 0053fd86  6aff                 push -1
// 0053fd88  689b34ad00           push 0xad349b
// 0053fd8d  50                   push eax
// 0053fd8e  64892500000000       mov dword ptr fs:[0], esp
// 0053fd95  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053fd99  56                   push esi
// 0053fd9a  8bf1                 mov esi, ecx
// 0053fd9c  6a1c                 push 0x1c
// 0053fd9e  8906                 mov dword ptr [esi], eax
// 0053fda0  c7460402000000       mov dword ptr [esi + 4], 2
// 0053fda7  e86e234400           call 0x98211a
// 0053fdac  83c404               add esp, 4
// 0053fdaf  89442414             mov dword ptr [esp + 0x14], eax
// 0053fdb3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053fdbb  85c0                 test eax, eax
// 0053fdbd  740f                 je 0x53fdce
// 0053fdbf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053fdc3  51                   push ecx
// 0053fdc4  8bc8                 mov ecx, eax
// 0053fdc6  ff154426b200         call dword ptr [0xb22644]
// 0053fdcc  eb02                 jmp 0x53fdd0
// 0053fdce  33c0                 xor eax, eax
// 0053fdd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053fdd4  894608               mov dword ptr [esi + 8], eax
// 0053fdd7  8bc6                 mov eax, esi
// 0053fdd9  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fde0  5e                   pop esi
// 0053fde1  83c40c               add esp, 0xc
// 0053fde4  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
