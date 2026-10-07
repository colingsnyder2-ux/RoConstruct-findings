// roc 2009-06 0059ee20  unit: seg_00590000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ee20
//
// 0059ee20  8b542404             mov edx, dword ptr [esp + 4]
// 0059ee24  83ec08               sub esp, 8
// 0059ee27  53                   push ebx
// 0059ee28  55                   push ebp
// 0059ee29  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0059ee2d  56                   push esi
// 0059ee2e  8bb2a0010000         mov esi, dword ptr [edx + 0x1a0]
// 0059ee34  807e2400             cmp byte ptr [esi + 0x24], 0
// 0059ee38  57                   push edi
// 0059ee39  742f                 je 0x59ee6a
// 0059ee3b  8b4628               mov eax, dword ptr [esi + 0x28]
// 0059ee3e  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059ee42  8b0b                 mov ecx, dword ptr [ebx]
// 0059ee44  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0059ee48  50                   push eax
// 0059ee49  6a01                 push 1
// 0059ee4b  6a00                 push 0
// 0059ee4d  8d048a               lea eax, [edx + ecx*4]
// 0059ee50  50                   push eax
// 0059ee51  8d4e20               lea ecx, [esi + 0x20]
// 0059ee54  6a00                 push 0
// 0059ee56  51                   push ecx
// 0059ee57  e8e4affeff           call 0x589e40
// 0059ee5c  83c418               add esp, 0x18
// 0059ee5f  bf01000000           mov edi, 1
// 0059ee64  c6462400             mov byte ptr [esi + 0x24], 0
// 0059ee68  eb60                 jmp 0x59eeca
// 0059ee6a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0059ee6d  bf02000000           mov edi, 2
// 0059ee72  3bc7                 cmp eax, edi
// 0059ee74  7302                 jae 0x59ee78
// 0059ee76  8bf8                 mov edi, eax
// 0059ee78  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059ee7c  8b03                 mov eax, dword ptr [ebx]
// 0059ee7e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ee82  2bc8                 sub ecx, eax
// 0059ee84  3bf9                 cmp edi, ecx
// 0059ee86  7602                 jbe 0x59ee8a
// 0059ee88  8bf9                 mov edi, ecx
// 0059ee8a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059ee8e  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 0059ee91  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059ee95  83ff01               cmp edi, 1
// 0059ee98  760a                 jbe 0x59eea4
// 0059ee9a  8b448104             mov eax, dword ptr [ecx + eax*4 + 4]
// 0059ee9e  89442414             mov dword ptr [esp + 0x14], eax
// 0059eea2  eb0b                 jmp 0x59eeaf
// 0059eea4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0059eea7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059eeab  c6462401             mov byte ptr [esi + 0x24], 1
// 0059eeaf  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0059eeb3  8b4d00               mov ecx, dword ptr [ebp]
// 0059eeb6  8d442410             lea eax, [esp + 0x10]
// 0059eeba  50                   push eax
// 0059eebb  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059eebf  51                   push ecx
// 0059eec0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059eec3  50                   push eax
// 0059eec4  52                   push edx
// 0059eec5  ffd1                 call ecx
// 0059eec7  83c410               add esp, 0x10
// 0059eeca  013b                 add dword ptr [ebx], edi
// 0059eecc  297e2c               sub dword ptr [esi + 0x2c], edi
// 0059eecf  807e2400             cmp byte ptr [esi + 0x24], 0
// 0059eed3  7503                 jne 0x59eed8
// 0059eed5  ff4500               inc dword ptr [ebp]
// 0059eed8  5f                   pop edi
// 0059eed9  5e                   pop esi
// 0059eeda  5d                   pop ebp
// 0059eedb  5b                   pop ebx
// 0059eedc  83c408               add esp, 8
// 0059eedf  c3                   ret 
// library jpeg-6b/jdmerge.c (function _merged_2v_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
