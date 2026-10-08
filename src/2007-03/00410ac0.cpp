// roc 2007-03 00410ac0  unit: seg_00410000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00410ac0
//
// 00410ac0  53                   push ebx
// 00410ac1  56                   push esi
// 00410ac2  8bf1                 mov esi, ecx
// 00410ac4  33db                 xor ebx, ebx
// 00410ac6  395e10               cmp dword ptr [esi + 0x10], ebx
// 00410ac9  741e                 je 0x410ae9
// 00410acb  eb03                 jmp 0x410ad0
// 00410acd  8d4900               lea ecx, [ecx]
// 00410ad0  8b4610               mov eax, dword ptr [esi + 0x10]
// 00410ad3  3bc3                 cmp eax, ebx
// 00410ad5  740d                 je 0x410ae4
// 00410ad7  83c0ff               add eax, -1
// 00410ada  3bc3                 cmp eax, ebx
// 00410adc  894610               mov dword ptr [esi + 0x10], eax
// 00410adf  7503                 jne 0x410ae4
// 00410ae1  895e0c               mov dword ptr [esi + 0xc], ebx
// 00410ae4  395e10               cmp dword ptr [esi + 0x10], ebx
// 00410ae7  75e7                 jne 0x410ad0
// 00410ae9  57                   push edi
// 00410aea  8b7e08               mov edi, dword ptr [esi + 8]
// 00410aed  3bfb                 cmp edi, ebx
// 00410aef  761d                 jbe 0x410b0e
// 00410af1  8b4604               mov eax, dword ptr [esi + 4]
// 00410af4  83ef01               sub edi, 1
// 00410af7  391cb8               cmp dword ptr [eax + edi*4], ebx
// 00410afa  8d04b8               lea eax, [eax + edi*4]
// 00410afd  740b                 je 0x410b0a
// 00410aff  8b08                 mov ecx, dword ptr [eax]
// 00410b01  51                   push ecx
// 00410b02  e8e9d52000           call 0x61e0f0
// 00410b07  83c404               add esp, 4
// 00410b0a  3bfb                 cmp edi, ebx
// 00410b0c  77e3                 ja 0x410af1
// 00410b0e  8b4604               mov eax, dword ptr [esi + 4]
// 00410b11  3bc3                 cmp eax, ebx
// 00410b13  5f                   pop edi
// 00410b14  7409                 je 0x410b1f
// 00410b16  50                   push eax
// 00410b17  e8d4d52000           call 0x61e0f0
// 00410b1c  83c404               add esp, 4
// 00410b1f  895e04               mov dword ptr [esi + 4], ebx
// 00410b22  895e08               mov dword ptr [esi + 8], ebx
// 00410b25  5e                   pop esi
// 00410b26  5b                   pop ebx
// 00410b27  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Tidy@?$deque@PAVXmlElement@@V?$allocator@PAVXmlElement@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
