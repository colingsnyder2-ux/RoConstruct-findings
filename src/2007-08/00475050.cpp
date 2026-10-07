// roc 2007-08 00475050  unit: CInstanceRecord::CNameItem  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475050
//
// 00475050  56                   push esi
// 00475051  8bf1                 mov esi, ecx
// 00475053  e8a8540900           call 0x50a500
// 00475058  50                   push eax
// 00475059  8bce                 mov ecx, esi
// 0047505b  e870450900           call 0x5095d0
// 00475060  b801000000           mov eax, 1
// 00475065  840538d18b00         test byte ptr [0x8bd138], al
// 0047506b  751a                 jne 0x475087
// 0047506d  d9ee                 fldz 
// 0047506f  090538d18b00         or dword ptr [0x8bd138], eax
// 00475075  d9152cd18b00         fst dword ptr [0x8bd12c]
// 0047507b  d91530d18b00         fst dword ptr [0x8bd130]
// 00475081  d91d34d18b00         fstp dword ptr [0x8bd134]
// 00475087  d9052cd18b00         fld dword ptr [0x8bd12c]
// 0047508d  8bc6                 mov eax, esi
// 0047508f  d95e24               fstp dword ptr [esi + 0x24]
// 00475092  d90530d18b00         fld dword ptr [0x8bd130]
// 00475098  d95e28               fstp dword ptr [esi + 0x28]
// 0047509b  d90534d18b00         fld dword ptr [0x8bd134]
// 004750a1  d95e2c               fstp dword ptr [esi + 0x2c]
// 004750a4  5e                   pop esi
// 004750a5  c3                   ret 
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
