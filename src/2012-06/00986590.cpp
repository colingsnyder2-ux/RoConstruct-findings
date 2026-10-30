// roc 2012-06 00986590  unit: IIHH::?$CMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986590
//
// 00986590  8b5164               mov edx, dword ptr [ecx + 0x64]
// 00986593  33c0                 xor eax, eax
// 00986595  85d2                 test edx, edx
// 00986597  7e21                 jle 0x9865ba
// 00986599  56                   push esi
// 0098659a  8b742408             mov esi, dword ptr [esp + 8]
// 0098659e  83c15c               add ecx, 0x5c
// 009865a1  57                   push edi
// 009865a2  85c0                 test eax, eax
// 009865a4  7c38                 jl 0x9865de
// 009865a6  3b4108               cmp eax, dword ptr [ecx + 8]
// 009865a9  7d33                 jge 0x9865de
// 009865ab  8b7904               mov edi, dword ptr [ecx + 4]
// 009865ae  393487               cmp dword ptr [edi + eax*4], esi
// 009865b1  740a                 je 0x9865bd
// 009865b3  40                   inc eax
// 009865b4  3bc2                 cmp eax, edx
// 009865b6  7cea                 jl 0x9865a2
// 009865b8  5f                   pop edi
// 009865b9  5e                   pop esi
// 009865ba  c20400               ret 4
// 009865bd  6a01                 push 1
// 009865bf  50                   push eax
// 009865c0  e8abcb0000           call 0x993170
// 009865c5  5f                   pop edi
// 009865c6  c7869c00000001000000 mov dword ptr [esi + 0x9c], 1
// 009865d0  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 009865da  5e                   pop esi
// 009865db  c20400               ret 4
// 009865de  e8ddbdffff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp