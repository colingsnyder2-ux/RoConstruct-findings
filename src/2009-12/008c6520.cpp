// roc 2009-12 008c6520  unit: CXTPPropertyGridInplaceButton  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6520
//
// 008c6520  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008c6523  56                   push esi
// 008c6524  33c0                 xor eax, eax
// 008c6526  57                   push edi
// 008c6527  85d2                 test edx, edx
// 008c6529  7e1d                 jle 0x8c6548
// 008c652b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c652f  90                   nop 
// 008c6530  85c0                 test eax, eax
// 008c6532  7c2a                 jl 0x8c655e
// 008c6534  3bc2                 cmp eax, edx
// 008c6536  7d26                 jge 0x8c655e
// 008c6538  8b7924               mov edi, dword ptr [ecx + 0x24]
// 008c653b  8b3c87               mov edi, dword ptr [edi + eax*4]
// 008c653e  397730               cmp dword ptr [edi + 0x30], esi
// 008c6541  740c                 je 0x8c654f
// 008c6543  40                   inc eax
// 008c6544  3bc2                 cmp eax, edx
// 008c6546  7ce8                 jl 0x8c6530
// 008c6548  5f                   pop edi
// 008c6549  33c0                 xor eax, eax
// 008c654b  5e                   pop esi
// 008c654c  c20400               ret 4
// 008c654f  3bc2                 cmp eax, edx
// 008c6551  7d0b                 jge 0x8c655e
// 008c6553  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008c6556  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008c6559  5f                   pop edi
// 008c655a  5e                   pop esi
// 008c655b  c20400               ret 4
// 008c655e  e8a9d5f2ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Find@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp