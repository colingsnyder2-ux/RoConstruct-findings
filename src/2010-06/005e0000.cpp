// roc 2010-06 005e0000  unit: RBX::GlobalSettings  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e0000
//
// 005e0000  56                   push esi
// 005e0001  8bf1                 mov esi, ecx
// 005e0003  8b4604               mov eax, dword ptr [esi + 4]
// 005e0006  83f804               cmp eax, 4
// 005e0009  750f                 jne 0x5e001a
// 005e000b  8a4608               mov al, byte ptr [esi + 8]
// 005e000e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e0012  8801                 mov byte ptr [ecx], al
// 005e0014  b001                 mov al, 1
// 005e0016  5e                   pop esi
// 005e0017  c20400               ret 4
// 005e001a  57                   push edi
// 005e001b  83f802               cmp eax, 2
// 005e001e  752f                 jne 0x5e004f
// 005e0020  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005e0024  8b5608               mov edx, dword ptr [esi + 8]
// 005e0027  57                   push edi
// 005e0028  52                   push edx
// 005e0029  e8629b0400           call 0x629b90
// 005e002e  83c408               add esp, 8
// 005e0031  84c0                 test al, al
// 005e0033  741a                 je 0x5e004f
// 005e0035  8bce                 mov ecx, esi
// 005e0037  e8f4fcffff           call 0x5dfd30
// 005e003c  8a07                 mov al, byte ptr [edi]
// 005e003e  884608               mov byte ptr [esi + 8], al
// 005e0041  5f                   pop edi
// 005e0042  c7460404000000       mov dword ptr [esi + 4], 4
// 005e0049  b001                 mov al, 1
// 005e004b  5e                   pop esi
// 005e004c  c20400               ret 4
// 005e004f  5f                   pop edi
// 005e0050  32c0                 xor al, al
// 005e0052  5e                   pop esi
// 005e0053  c20400               ret 4
// library rbxgs/v8xml\XmlElement.cpp (function ?getValue@XmlNameValuePair@@QBE_NAA_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
