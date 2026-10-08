// roc 2008-06 005994c0  unit: RBX::VPartInstance::?$FactoryProduct  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005994c0
//
// 005994c0  83ec60               sub esp, 0x60
// 005994c3  8d0424               lea eax, [esp]
// 005994c6  50                   push eax
// 005994c7  e814ffffff           call 0x5993e0
// 005994cc  b801000000           mov eax, 1
// 005994d1  840554639700         test byte ptr [0x976354], al
// 005994d7  7520                 jne 0x5994f9
// 005994d9  d9e8                 fld1 
// 005994db  090554639700         or dword ptr [0x976354], eax
// 005994e1  d91548639700         fst dword ptr [0x976348]
// 005994e7  d90504e78100         fld dword ptr [0x81e704]
// 005994ed  d91d4c639700         fstp dword ptr [0x97634c]
// 005994f3  d91d50639700         fstp dword ptr [0x976350]
// 005994f9  6848639700           push 0x976348
// 005994fe  8d4c2404             lea ecx, [esp + 4]
// 00599502  51                   push ecx
// 00599503  8d542438             lea edx, [esp + 0x38]
// 00599507  52                   push edx
// 00599508  e8335a0400           call 0x5def40
// 0059950d  d905b0b38200         fld dword ptr [0x82b3b0]
// 00599513  83c404               add esp, 4
// 00599516  d9542404             fst dword ptr [esp + 4]
// 0059951a  8d442438             lea eax, [esp + 0x38]
// 0059951e  d91c24               fstp dword ptr [esp]
// 00599521  50                   push eax
// 00599522  8d4c240c             lea ecx, [esp + 0xc]
// 00599526  51                   push ecx
// 00599527  e8744d0400           call 0x5de2a0
// 0059952c  83c470               add esp, 0x70
// 0059952f  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?aligned@PartInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
