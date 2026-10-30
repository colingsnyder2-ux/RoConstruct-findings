// from server: 100% by auto
// roc 2009-06 006ea340  unit: RBX::PartDropTool  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ea340
//
// 006ea340  51                   push ecx
// 006ea341  55                   push ebp
// 006ea342  85ff                 test edi, edi
// 006ea344  7431                 je 0x6ea377
// 006ea346  b801000000           mov eax, 1
// 006ea34b  8bce                 mov ecx, esi
// 006ea34d  d3e0                 shl eax, cl
// 006ea34f  89442404             mov dword ptr [esp + 4], eax
// 006ea353  844706               test byte ptr [edi + 6], al
// 006ea356  751f                 jne 0x6ea377
// 006ea358  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ea35c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006ea35f  8b94b1bc000000       mov edx, dword ptr [ecx + esi*4 + 0xbc]
// 006ea366  52                   push edx
// 006ea367  56                   push esi
// 006ea368  57                   push edi
// 006ea369  e892faffff           call 0x6e9e00
// 006ea36e  8be8                 mov ebp, eax
// 006ea370  83c40c               add esp, 0xc
// 006ea373  85ed                 test ebp, ebp
// 006ea375  7505                 jne 0x6ea37c
// 006ea377  33c0                 xor eax, eax
// 006ea379  5d                   pop ebp
// 006ea37a  59                   pop ecx
// 006ea37b  c3                   ret 
// 006ea37c  3bfb                 cmp edi, ebx
// 006ea37e  743a                 je 0x6ea3ba
// 006ea380  85db                 test ebx, ebx
// 006ea382  74f3                 je 0x6ea377
// 006ea384  8a442404             mov al, byte ptr [esp + 4]
// 006ea388  844306               test byte ptr [ebx + 6], al
// 006ea38b  75ea                 jne 0x6ea377
// 006ea38d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ea391  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006ea394  8b84b2bc000000       mov eax, dword ptr [edx + esi*4 + 0xbc]
// 006ea39b  50                   push eax
// 006ea39c  56                   push esi
// 006ea39d  53                   push ebx
// 006ea39e  e85dfaffff           call 0x6e9e00
// 006ea3a3  83c40c               add esp, 0xc
// 006ea3a6  85c0                 test eax, eax
// 006ea3a8  74cd                 je 0x6ea377
// 006ea3aa  50                   push eax
// 006ea3ab  55                   push ebp
// 006ea3ac  e89fe8fdff           call 0x6c8c50
// 006ea3b1  83c408               add esp, 8
// 006ea3b4  f7d8                 neg eax
// 006ea3b6  1bc0                 sbb eax, eax
// 006ea3b8  23c5                 and eax, ebp
// 006ea3ba  5d                   pop ebp
// 006ea3bb  59                   pop ecx
// 006ea3bc  c3                   ret 
// library lua-5.1.4/lvm.c (function _get_compTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
