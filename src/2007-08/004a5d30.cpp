// roc 2007-08 004a5d30  unit: RBX::VInstance::?$NonFactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5d30
//
// 004a5d30  d9ee                 fldz 
// 004a5d32  8bc1                 mov eax, ecx
// 004a5d34  b901000000           mov ecx, 1
// 004a5d39  840d38d18b00         test byte ptr [0x8bd138], cl
// 004a5d3f  7518                 jne 0x4a5d59
// 004a5d41  090d38d18b00         or dword ptr [0x8bd138], ecx
// 004a5d47  d9152cd18b00         fst dword ptr [0x8bd12c]
// 004a5d4d  d91530d18b00         fst dword ptr [0x8bd130]
// 004a5d53  d91534d18b00         fst dword ptr [0x8bd134]
// 004a5d59  d9052cd18b00         fld dword ptr [0x8bd12c]
// 004a5d5f  d918                 fstp dword ptr [eax]
// 004a5d61  d90530d18b00         fld dword ptr [0x8bd130]
// 004a5d67  d95804               fstp dword ptr [eax + 4]
// 004a5d6a  d90534d18b00         fld dword ptr [0x8bd134]
// 004a5d70  d95808               fstp dword ptr [eax + 8]
// 004a5d73  840d38d18b00         test byte ptr [0x8bd138], cl
// 004a5d79  751a                 jne 0x4a5d95
// 004a5d7b  090d38d18b00         or dword ptr [0x8bd138], ecx
// 004a5d81  d9152cd18b00         fst dword ptr [0x8bd12c]
// 004a5d87  d91530d18b00         fst dword ptr [0x8bd130]
// 004a5d8d  d91d34d18b00         fstp dword ptr [0x8bd134]
// 004a5d93  eb02                 jmp 0x4a5d97
// 004a5d95  ddd8                 fstp st(0)
// 004a5d97  d9052cd18b00         fld dword ptr [0x8bd12c]
// 004a5d9d  d9580c               fstp dword ptr [eax + 0xc]
// 004a5da0  d90530d18b00         fld dword ptr [0x8bd130]
// 004a5da6  d95810               fstp dword ptr [eax + 0x10]
// 004a5da9  d90534d18b00         fld dword ptr [0x8bd134]
// 004a5daf  d95814               fstp dword ptr [eax + 0x14]
// 004a5db2  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ??0Velocity@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
