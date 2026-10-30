// roc 2009-12 008789a0  unit: CXTPControlGallery  size: 321 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008789a0
//
// 008789a0  56                   push esi
// 008789a1  8bf1                 mov esi, ecx
// 008789a3  e818eaffff           call 0x8773c0
// 008789a8  85c0                 test eax, eax
// 008789aa  741a                 je 0x8789c6
// 008789ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 008789b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008789b4  8b542408             mov edx, dword ptr [esp + 8]
// 008789b8  50                   push eax
// 008789b9  51                   push ecx
// 008789ba  52                   push edx
// 008789bb  8bce                 mov ecx, esi
// 008789bd  e87e28fcff           call 0x83b240
// 008789c2  5e                   pop esi
// 008789c3  c20c00               ret 0xc
// 008789c6  8bce                 mov ecx, esi
// 008789c8  e8e3d4f7ff           call 0x7f5eb0
// 008789cd  85c0                 test eax, eax
// 008789cf  743d                 je 0x878a0e
// 008789d1  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008789d7  6a00                 push 0
// 008789d9  6aff                 push -1
// 008789db  e8c0dbf8ff           call 0x8065a0
// 008789e0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008789e6  8b01                 mov eax, dword ptr [ecx]
// 008789e8  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 008789ee  6a00                 push 0
// 008789f0  6aff                 push -1
// 008789f2  ffd2                 call edx
// 008789f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008789f8  8b06                 mov eax, dword ptr [esi]
// 008789fa  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008789fe  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 00878a04  51                   push ecx
// 00878a05  52                   push edx
// 00878a06  8bce                 mov ecx, esi
// 00878a08  ffd0                 call eax
// 00878a0a  5e                   pop esi
// 00878a0b  c20c00               ret 0xc
// 00878a0e  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00878a14  83f8ff               cmp eax, -1
// 00878a17  750f                 jne 0x878a28
// 00878a19  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00878a1f  85c9                 test ecx, ecx
// 00878a21  7405                 je 0x878a28
// 00878a23  e888dbf7ff           call 0x7f65b0
// 00878a28  85c0                 test eax, eax
// 00878a2a  0f84ad000000         je 0x878add
// 00878a30  837c240800           cmp dword ptr [esp + 8], 0
// 00878a35  0f85a2000000         jne 0x878add
// 00878a3b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00878a3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00878a43  8b16                 mov edx, dword ptr [esi]
// 00878a45  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00878a4b  50                   push eax
// 00878a4c  51                   push ecx
// 00878a4d  8bce                 mov ecx, esi
// 00878a4f  ffd2                 call edx
// 00878a51  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 00878a57  83f841               cmp eax, 0x41
// 00878a5a  7518                 jne 0x878a74
// 00878a5c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00878a62  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00878a68  6a00                 push 0
// 00878a6a  50                   push eax
// 00878a6b  e830dbf8ff           call 0x8065a0
// 00878a70  5e                   pop esi
// 00878a71  c20c00               ret 0xc
// 00878a74  85c0                 test eax, eax
// 00878a76  7445                 je 0x878abd
// 00878a78  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00878a7e  57                   push edi
// 00878a7f  85c0                 test eax, eax
// 00878a81  7504                 jne 0x878a87
// 00878a83  33ff                 xor edi, edi
// 00878a85  eb03                 jmp 0x878a8a
// 00878a87  8b7820               mov edi, dword ptr [eax + 0x20]
// 00878a8a  6a10                 push 0x10
// 00878a8c  ff1530cc9800         call dword ptr [0x98cc30]
// 00878a92  33c9                 xor ecx, ecx
// 00878a94  6685c0               test ax, ax
// 00878a97  8b442414             mov eax, dword ptr [esp + 0x14]
// 00878a9b  0f9cc1               setl cl
// 00878a9e  8d9688010000         lea edx, [esi + 0x188]
// 00878aa4  51                   push ecx
// 00878aa5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00878aa9  52                   push edx
// 00878aaa  50                   push eax
// 00878aab  51                   push ecx
// 00878aac  57                   push edi
// 00878aad  8d8e84010000         lea ecx, [esi + 0x184]
// 00878ab3  e8f8270700           call 0x8eb2b0
// 00878ab8  5f                   pop edi
// 00878ab9  5e                   pop esi
// 00878aba  c20c00               ret 0xc
// 00878abd  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00878ac3  6a00                 push 0
// 00878ac5  6aff                 push -1
// 00878ac7  e8d4daf8ff           call 0x8065a0
// 00878acc  8b542410             mov edx, dword ptr [esp + 0x10]
// 00878ad0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00878ad4  52                   push edx
// 00878ad5  50                   push eax
// 00878ad6  8bce                 mov ecx, esi
// 00878ad8  e813f8ffff           call 0x8782f0
// 00878add  5e                   pop esi
// 00878ade  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CXTPControlGallery@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp