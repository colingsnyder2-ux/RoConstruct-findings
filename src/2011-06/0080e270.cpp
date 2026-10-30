// roc 2011-06 0080e270  unit: PAVCXTPControlAction::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e270
//
// 0080e270  8b5164               mov edx, dword ptr [ecx + 0x64]
// 0080e273  33c0                 xor eax, eax
// 0080e275  85d2                 test edx, edx
// 0080e277  7e21                 jle 0x80e29a
// 0080e279  56                   push esi
// 0080e27a  8b742408             mov esi, dword ptr [esp + 8]
// 0080e27e  83c15c               add ecx, 0x5c
// 0080e281  57                   push edi
// 0080e282  85c0                 test eax, eax
// 0080e284  7c38                 jl 0x80e2be
// 0080e286  3b4108               cmp eax, dword ptr [ecx + 8]
// 0080e289  7d33                 jge 0x80e2be
// 0080e28b  8b7904               mov edi, dword ptr [ecx + 4]
// 0080e28e  393487               cmp dword ptr [edi + eax*4], esi
// 0080e291  740a                 je 0x80e29d
// 0080e293  40                   inc eax
// 0080e294  3bc2                 cmp eax, edx
// 0080e296  7cea                 jl 0x80e282
// 0080e298  5f                   pop edi
// 0080e299  5e                   pop esi
// 0080e29a  c20400               ret 4
// 0080e29d  6a01                 push 1
// 0080e29f  50                   push eax
// 0080e2a0  e8dbbf0100           call 0x82a280
// 0080e2a5  5f                   pop edi
// 0080e2a6  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 0080e2b0  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 0080e2ba  5e                   pop esi
// 0080e2bb  c20400               ret 4
// 0080e2be  e847c0ffff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp