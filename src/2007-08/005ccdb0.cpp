// roc 2007-08 005ccdb0  unit: RBX::IPipelined  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ccdb0
//
// 005ccdb0  6aff                 push -1
// 005ccdb2  68c8997500           push 0x7599c8
// 005ccdb7  64a100000000         mov eax, dword ptr fs:[0]
// 005ccdbd  50                   push eax
// 005ccdbe  64892500000000       mov dword ptr fs:[0], esp
// 005ccdc5  51                   push ecx
// 005ccdc6  56                   push esi
// 005ccdc7  8bf1                 mov esi, ecx
// 005ccdc9  89742404             mov dword ptr [esp + 4], esi
// 005ccdcd  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005ccdd4  8d4e08               lea ecx, [esi + 8]
// 005ccdd7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ccddf  c706e8a57b00         mov dword ptr [esi], 0x7ba5e8
// 005ccde5  e8c6bc0400           call 0x618ab0
// 005ccdea  d9ee                 fldz 
// 005ccdec  d95644               fst dword ptr [esi + 0x44]
// 005ccdef  b801000000           mov eax, 1
// 005ccdf4  d95648               fst dword ptr [esi + 0x48]
// 005ccdf7  d9564c               fst dword ptr [esi + 0x4c]
// 005ccdfa  d9442418             fld dword ptr [esp + 0x18]
// 005ccdfe  d95e2c               fstp dword ptr [esi + 0x2c]
// 005cce01  d944241c             fld dword ptr [esp + 0x1c]
// 005cce05  d95e34               fstp dword ptr [esi + 0x34]
// 005cce08  d9442420             fld dword ptr [esp + 0x20]
// 005cce0c  d95e30               fstp dword ptr [esi + 0x30]
// 005cce0f  840538d18b00         test byte ptr [0x8bd138], al
// 005cce15  7518                 jne 0x5cce2f
// 005cce17  090538d18b00         or dword ptr [0x8bd138], eax
// 005cce1d  d9152cd18b00         fst dword ptr [0x8bd12c]
// 005cce23  d91530d18b00         fst dword ptr [0x8bd130]
// 005cce29  d91534d18b00         fst dword ptr [0x8bd134]
// 005cce2f  d9052cd18b00         fld dword ptr [0x8bd12c]
// 005cce35  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cce39  d95e44               fstp dword ptr [esi + 0x44]
// 005cce3c  8bc6                 mov eax, esi
// 005cce3e  d90530d18b00         fld dword ptr [0x8bd130]
// 005cce44  d95e48               fstp dword ptr [esi + 0x48]
// 005cce47  d90534d18b00         fld dword ptr [0x8bd134]
// 005cce4d  d95e4c               fstp dword ptr [esi + 0x4c]
// 005cce50  d95638               fst dword ptr [esi + 0x38]
// 005cce53  d9563c               fst dword ptr [esi + 0x3c]
// 005cce56  d95e40               fstp dword ptr [esi + 0x40]
// 005cce59  5e                   pop esi
// 005cce5a  64890d00000000       mov dword ptr fs:[0], ecx
// 005cce61  83c410               add esp, 0x10
// 005cce64  c20c00               ret 0xc
// library rbxgs/v8world\Contact.cpp (function ??0ContactConnector@RBX@@QAE@MMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
