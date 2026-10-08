// roc 2007-03 00572850  unit: seg_00570000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572850
//
// 00572850  53                   push ebx
// 00572851  56                   push esi
// 00572852  57                   push edi
// 00572853  33ff                 xor edi, edi
// 00572855  8d99bc000000         lea ebx, [ecx + 0xbc]
// 0057285b  eb03                 jmp 0x572860
// 0057285d  8d4900               lea ecx, [ecx]
// 00572860  57                   push edi
// 00572861  8bcb                 mov ecx, ebx
// 00572863  e828f50300           call 0x5b1d90
// 00572868  8bf0                 mov esi, eax
// 0057286a  8bce                 mov ecx, esi
// 0057286c  e8bf160400           call 0x5b3f30
// 00572871  83f808               cmp eax, 8
// 00572874  740c                 je 0x572882
// 00572876  8bce                 mov ecx, esi
// 00572878  e8b3160400           call 0x5b3f30
// 0057287d  83f807               cmp eax, 7
// 00572880  750b                 jne 0x57288d
// 00572882  8bce                 mov ecx, esi
// 00572884  e8d7170400           call 0x5b4060
// 00572889  84c0                 test al, al
// 0057288b  750e                 jne 0x57289b
// 0057288d  83c701               add edi, 1
// 00572890  83ff06               cmp edi, 6
// 00572893  7ccb                 jl 0x572860
// 00572895  5f                   pop edi
// 00572896  5e                   pop esi
// 00572897  32c0                 xor al, al
// 00572899  5b                   pop ebx
// 0057289a  c3                   ret 
// 0057289b  5f                   pop edi
// 0057289c  5e                   pop esi
// 0057289d  b001                 mov al, 1
// 0057289f  5b                   pop ebx
// 005728a0  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?isControllable@PartInstance@RBX@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
