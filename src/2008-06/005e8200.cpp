// roc 2008-06 005e8200  unit: RBX::Primitive  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8200
//
// 005e8200  53                   push ebx
// 005e8201  56                   push esi
// 005e8202  8bf1                 mov esi, ecx
// 005e8204  57                   push edi
// 005e8205  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 005e820b  8bcf                 mov ecx, edi
// 005e820d  e84e11fbff           call 0x599360
// 005e8212  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e8216  81c794000000         add edi, 0x94
// 005e821c  57                   push edi
// 005e821d  8bcb                 mov ecx, ebx
// 005e821f  e8bce3e8ff           call 0x4765e0
// 005e8224  84c0                 test al, al
// 005e8226  0f8486000000         je 0x5e82b2
// 005e822c  8b465c               mov eax, dword ptr [esi + 0x5c]
// 005e822f  85c0                 test eax, eax
// 005e8231  7405                 je 0x5e8238
// 005e8233  8b7824               mov edi, dword ptr [eax + 0x24]
// 005e8236  eb02                 jmp 0x5e823a
// 005e8238  33ff                 xor edi, edi
// 005e823a  85ff                 test edi, edi
// 005e823c  752a                 jne 0x5e8268
// 005e823e  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 005e8244  53                   push ebx
// 005e8245  e8b6c10200           call 0x614400
// 005e824a  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 005e8250  e88bc90200           call 0x614be0
// 005e8255  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005e8258  85c9                 test ecx, ecx
// 005e825a  7456                 je 0x5e82b2
// 005e825c  56                   push esi
// 005e825d  e85e0f0000           call 0x5e91c0
// 005e8262  5f                   pop edi
// 005e8263  5e                   pop esi
// 005e8264  5b                   pop ebx
// 005e8265  c20400               ret 4
// 005e8268  8b4724               mov eax, dword ptr [edi + 0x24]
// 005e826b  39701c               cmp dword ptr [eax + 0x1c], esi
// 005e826e  7542                 jne 0x5e82b2
// 005e8270  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 005e8276  53                   push ebx
// 005e8277  e884c10200           call 0x614400
// 005e827c  8bcf                 mov ecx, edi
// 005e827e  e8eddeffff           call 0x5e6170
// 005e8283  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005e8286  57                   push edi
// 005e8287  e8440f0000           call 0x5e91d0
// 005e828c  80bea800000000       cmp byte ptr [esi + 0xa8], 0
// 005e8293  751d                 jne 0x5e82b2
// 005e8295  80bea900000000       cmp byte ptr [esi + 0xa9], 0
// 005e829c  7514                 jne 0x5e82b2
// 005e829e  80beaa00000000       cmp byte ptr [esi + 0xaa], 0
// 005e82a5  750b                 jne 0x5e82b2
// 005e82a7  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005e82aa  6a00                 push 0
// 005e82ac  56                   push esi
// 005e82ad  e85e110000           call 0x5e9410
// 005e82b2  5f                   pop edi
// 005e82b3  5e                   pop esi
// 005e82b4  5b                   pop ebx
// 005e82b5  c20400               ret 4
// library rbxgs/roc_unit_3b800b142fb251e5.cpp (function ?setCoordinateFrame@Primitive@RBX@@QAEXABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_3b800b142fb251e5.cpp
