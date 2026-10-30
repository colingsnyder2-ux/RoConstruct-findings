// roc 2007-03 00527620  unit: seg_00520000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527620
//
// 00527620  53                   push ebx
// 00527621  8a5c2408             mov bl, byte ptr [esp + 8]
// 00527625  56                   push esi
// 00527626  57                   push edi
// 00527627  8bf0                 mov esi, eax
// 00527629  e872ffffff           call 0x5275a0
// 0052762e  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00527632  7532                 jne 0x527666
// 00527634  e8e7feffff           call 0x527520
// 00527639  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052763c  c600ff               mov byte ptr [eax], 0xff
// 0052763f  83461001             add dword ptr [esi + 0x10], 1
// 00527643  83cfff               or edi, 0xffffffff
// 00527646  017e14               add dword ptr [esi + 0x14], edi
// 00527649  7505                 jne 0x527650
// 0052764b  e8d0fdffff           call 0x527420
// 00527650  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00527653  80eb30               sub bl, 0x30
// 00527656  8819                 mov byte ptr [ecx], bl
// 00527658  83461001             add dword ptr [esi + 0x10], 1
// 0052765c  017e14               add dword ptr [esi + 0x14], edi
// 0052765f  7505                 jne 0x527666
// 00527661  e8bafdffff           call 0x527420
// 00527666  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00527669  33d2                 xor edx, edx
// 0052766b  39912c010000         cmp dword ptr [ecx + 0x12c], edx
// 00527671  7524                 jne 0x527697
// 00527673  33c0                 xor eax, eax
// 00527675  3991e4000000         cmp dword ptr [ecx + 0xe4], edx
// 0052767b  7e20                 jle 0x52769d
// 0052767d  8d4e24               lea ecx, [esi + 0x24]
// 00527680  8911                 mov dword ptr [ecx], edx
// 00527682  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00527685  83c001               add eax, 1
// 00527688  83c104               add ecx, 4
// 0052768b  3b87e4000000         cmp eax, dword ptr [edi + 0xe4]
// 00527691  7ced                 jl 0x527680
// 00527693  5f                   pop edi
// 00527694  5e                   pop esi
// 00527695  5b                   pop ebx
// 00527696  c3                   ret 
// 00527697  895638               mov dword ptr [esi + 0x38], edx
// 0052769a  89563c               mov dword ptr [esi + 0x3c], edx
// 0052769d  5f                   pop edi
// 0052769e  5e                   pop esi
// 0052769f  5b                   pop ebx
// 005276a0  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
