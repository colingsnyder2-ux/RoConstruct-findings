// from server: 100% by auto
// roc 2010-06 0077e4e0  unit: seg_00770000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e4e0
//
// 0077e4e0  51                   push ecx
// 0077e4e1  57                   push edi
// 0077e4e2  85c0                 test eax, eax
// 0077e4e4  744f                 je 0x77e535
// 0077e4e6  8d7810               lea edi, [eax + 0x10]
// 0077e4e9  85ff                 test edi, edi
// 0077e4eb  7448                 je 0x77e535
// 0077e4ed  8b400c               mov eax, dword ptr [eax + 0xc]
// 0077e4f0  40                   inc eax
// 0077e4f1  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e4f5  89442404             mov dword ptr [esp + 4], eax
// 0077e4f9  7561                 jne 0x77e55c
// 0077e4fb  8b4608               mov eax, dword ptr [esi + 8]
// 0077e4fe  8b16                 mov edx, dword ptr [esi]
// 0077e500  50                   push eax
// 0077e501  8b4604               mov eax, dword ptr [esi + 4]
// 0077e504  6a04                 push 4
// 0077e506  8d4c240c             lea ecx, [esp + 0xc]
// 0077e50a  51                   push ecx
// 0077e50b  52                   push edx
// 0077e50c  ffd0                 call eax
// 0077e50e  894610               mov dword ptr [esi + 0x10], eax
// 0077e511  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077e515  83c410               add esp, 0x10
// 0077e518  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e51c  753e                 jne 0x77e55c
// 0077e51e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e521  8b16                 mov edx, dword ptr [esi]
// 0077e523  51                   push ecx
// 0077e524  50                   push eax
// 0077e525  8b4604               mov eax, dword ptr [esi + 4]
// 0077e528  57                   push edi
// 0077e529  52                   push edx
// 0077e52a  ffd0                 call eax
// 0077e52c  83c410               add esp, 0x10
// 0077e52f  894610               mov dword ptr [esi + 0x10], eax
// 0077e532  5f                   pop edi
// 0077e533  59                   pop ecx
// 0077e534  c3                   ret 
// 0077e535  837e1000             cmp dword ptr [esi + 0x10], 0
// 0077e539  c744240400000000     mov dword ptr [esp + 4], 0
// 0077e541  7519                 jne 0x77e55c
// 0077e543  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077e546  8b06                 mov eax, dword ptr [esi]
// 0077e548  51                   push ecx
// 0077e549  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e54c  6a04                 push 4
// 0077e54e  8d54240c             lea edx, [esp + 0xc]
// 0077e552  52                   push edx
// 0077e553  50                   push eax
// 0077e554  ffd1                 call ecx
// 0077e556  894610               mov dword ptr [esi + 0x10], eax
// 0077e559  83c410               add esp, 0x10
// 0077e55c  5f                   pop edi
// 0077e55d  59                   pop ecx
// 0077e55e  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
