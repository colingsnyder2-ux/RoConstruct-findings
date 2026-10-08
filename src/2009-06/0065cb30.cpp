// roc 2009-06 0065cb30  unit: RBX::P8PartInstance::?$GetSetImpl  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065cb30
//
// 0065cb30  83ec60               sub esp, 0x60
// 0065cb33  8d0424               lea eax, [esp]
// 0065cb36  50                   push eax
// 0065cb37  e814ffffff           call 0x65ca50
// 0065cb3c  b801000000           mov eax, 1
// 0065cb41  8405e8cfa400         test byte ptr [0xa4cfe8], al
// 0065cb47  7520                 jne 0x65cb69
// 0065cb49  d9e8                 fld1 
// 0065cb4b  0905e8cfa400         or dword ptr [0xa4cfe8], eax
// 0065cb51  d915dccfa400         fst dword ptr [0xa4cfdc]
// 0065cb57  d905c4758b00         fld dword ptr [0x8b75c4]
// 0065cb5d  d91de0cfa400         fstp dword ptr [0xa4cfe0]
// 0065cb63  d91de4cfa400         fstp dword ptr [0xa4cfe4]
// 0065cb69  68dccfa400           push 0xa4cfdc
// 0065cb6e  8d4c2404             lea ecx, [esp + 4]
// 0065cb72  51                   push ecx
// 0065cb73  8d542438             lea edx, [esp + 0x38]
// 0065cb77  52                   push edx
// 0065cb78  e8b3140100           call 0x66e030
// 0065cb7d  d905e8978c00         fld dword ptr [0x8c97e8]
// 0065cb83  83c404               add esp, 4
// 0065cb86  d9542404             fst dword ptr [esp + 4]
// 0065cb8a  8d442438             lea eax, [esp + 0x38]
// 0065cb8e  d91c24               fstp dword ptr [esp]
// 0065cb91  50                   push eax
// 0065cb92  8d4c240c             lea ecx, [esp + 0xc]
// 0065cb96  51                   push ecx
// 0065cb97  e864070100           call 0x66d300
// 0065cb9c  83c470               add esp, 0x70
// 0065cb9f  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?aligned@PartInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
