// from server: 100% by auto
// roc 2008-06 0065caf0  unit: RBX::BallBallContact  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065caf0
//
// 0065caf0  51                   push ecx
// 0065caf1  55                   push ebp
// 0065caf2  85ff                 test edi, edi
// 0065caf4  7431                 je 0x65cb27
// 0065caf6  b801000000           mov eax, 1
// 0065cafb  8bce                 mov ecx, esi
// 0065cafd  d3e0                 shl eax, cl
// 0065caff  89442404             mov dword ptr [esp + 4], eax
// 0065cb03  844706               test byte ptr [edi + 6], al
// 0065cb06  751f                 jne 0x65cb27
// 0065cb08  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0065cb0c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0065cb0f  8b94b1bc000000       mov edx, dword ptr [ecx + esi*4 + 0xbc]
// 0065cb16  52                   push edx
// 0065cb17  56                   push esi
// 0065cb18  57                   push edi
// 0065cb19  e8b2faffff           call 0x65c5d0
// 0065cb1e  8be8                 mov ebp, eax
// 0065cb20  83c40c               add esp, 0xc
// 0065cb23  85ed                 test ebp, ebp
// 0065cb25  7505                 jne 0x65cb2c
// 0065cb27  33c0                 xor eax, eax
// 0065cb29  5d                   pop ebp
// 0065cb2a  59                   pop ecx
// 0065cb2b  c3                   ret 
// 0065cb2c  3bfb                 cmp edi, ebx
// 0065cb2e  743a                 je 0x65cb6a
// 0065cb30  85db                 test ebx, ebx
// 0065cb32  74f3                 je 0x65cb27
// 0065cb34  8a442404             mov al, byte ptr [esp + 4]
// 0065cb38  844306               test byte ptr [ebx + 6], al
// 0065cb3b  75ea                 jne 0x65cb27
// 0065cb3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065cb41  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0065cb44  8b84b2bc000000       mov eax, dword ptr [edx + esi*4 + 0xbc]
// 0065cb4b  50                   push eax
// 0065cb4c  56                   push esi
// 0065cb4d  53                   push ebx
// 0065cb4e  e87dfaffff           call 0x65c5d0
// 0065cb53  83c40c               add esp, 0xc
// 0065cb56  85c0                 test eax, eax
// 0065cb58  74cd                 je 0x65cb27
// 0065cb5a  50                   push eax
// 0065cb5b  55                   push ebp
// 0065cb5c  e80f5bfcff           call 0x622670
// 0065cb61  83c408               add esp, 8
// 0065cb64  f7d8                 neg eax
// 0065cb66  1bc0                 sbb eax, eax
// 0065cb68  23c5                 and eax, ebp
// 0065cb6a  5d                   pop ebp
// 0065cb6b  59                   pop ecx
// 0065cb6c  c3                   ret 
// library lua-5.1.4/lvm.c (function _get_compTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
