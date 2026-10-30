// roc 2009-12 00807140  unit: CXTPCommandBar  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807140
//
// 00807140  83ec18               sub esp, 0x18
// 00807143  56                   push esi
// 00807144  8bf1                 mov esi, ecx
// 00807146  8b06                 mov eax, dword ptr [esi]
// 00807148  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0080714e  ffd2                 call edx
// 00807150  85c0                 test eax, eax
// 00807152  0f8402010000         je 0x80725a
// 00807158  8bce                 mov ecx, esi
// 0080715a  e813f31100           call 0x926472
// 0080715f  a900000010           test eax, 0x10000000
// 00807164  0f84f0000000         je 0x80725a
// 0080716a  53                   push ebx
// 0080716b  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0080716f  57                   push edi
// 00807170  8d442428             lea eax, [esp + 0x28]
// 00807174  50                   push eax
// 00807175  8d4c2414             lea ecx, [esp + 0x14]
// 00807179  51                   push ecx
// 0080717a  8d54241c             lea edx, [esp + 0x1c]
// 0080717e  52                   push edx
// 0080717f  8d442438             lea eax, [esp + 0x38]
// 00807183  50                   push eax
// 00807184  53                   push ebx
// 00807185  8bce                 mov ecx, esi
// 00807187  e8f4e6ffff           call 0x805880
// 0080718c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00807190  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00807194  51                   push ecx
// 00807195  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0080719b  52                   push edx
// 0080719c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008071a4  e877e40300           call 0x845620
// 008071a9  8bf8                 mov edi, eax
// 008071ab  85ff                 test edi, edi
// 008071ad  7446                 je 0x8071f5
// 008071af  8b06                 mov eax, dword ptr [esi]
// 008071b1  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008071b7  8bce                 mov ecx, esi
// 008071b9  ffd2                 call edx
// 008071bb  85c0                 test eax, eax
// 008071bd  751a                 jne 0x8071d9
// 008071bf  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008071c5  3b8780000000         cmp eax, dword ptr [edi + 0x80]
// 008071cb  740c                 je 0x8071d9
// 008071cd  e8ce07ffff           call 0x7f79a0
// 008071d2  8bc8                 mov ecx, eax
// 008071d4  e8477f0600           call 0x86f120
// 008071d9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008071dd  8b17                 mov edx, dword ptr [edi]
// 008071df  8b9210010000         mov edx, dword ptr [edx + 0x110]
// 008071e5  8d44240c             lea eax, [esp + 0xc]
// 008071e9  50                   push eax
// 008071ea  8b442430             mov eax, dword ptr [esp + 0x30]
// 008071ee  51                   push ecx
// 008071ef  50                   push eax
// 008071f0  53                   push ebx
// 008071f1  8bcf                 mov ecx, edi
// 008071f3  ffd2                 call edx
// 008071f5  8b542430             mov edx, dword ptr [esp + 0x30]
// 008071f9  8b03                 mov eax, dword ptr [ebx]
// 008071fb  8d4c240c             lea ecx, [esp + 0xc]
// 008071ff  51                   push ecx
// 00807200  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00807204  52                   push edx
// 00807205  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 0080720b  51                   push ecx
// 0080720c  56                   push esi
// 0080720d  8bcb                 mov ecx, ebx
// 0080720f  ffd2                 call edx
// 00807211  5f                   pop edi
// 00807212  5b                   pop ebx
// 00807213  85c0                 test eax, eax
// 00807215  7438                 je 0x80724f
// 00807217  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080721b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080721f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00807223  89863c010000         mov dword ptr [esi + 0x13c], eax
// 00807229  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080722d  898e40010000         mov dword ptr [esi + 0x140], ecx
// 00807233  899644010000         mov dword ptr [esi + 0x144], edx
// 00807239  8b16                 mov edx, dword ptr [esi]
// 0080723b  6a01                 push 1
// 0080723d  898648010000         mov dword ptr [esi + 0x148], eax
// 00807243  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00807249  6a00                 push 0
// 0080724b  8bce                 mov ecx, esi
// 0080724d  ffd0                 call eax
// 0080724f  8b442404             mov eax, dword ptr [esp + 4]
// 00807253  5e                   pop esi
// 00807254  83c418               add esp, 0x18
// 00807257  c20c00               ret 0xc
// 0080725a  33c0                 xor eax, eax
// 0080725c  5e                   pop esi
// 0080725d  83c418               add esp, 0x18
// 00807260  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnCustomizeDragOver@CXTPCommandBar@@UAEKPAVCXTPControl@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp