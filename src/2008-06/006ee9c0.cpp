// roc 2008-06 006ee9c0  unit: CXTPPopupBar  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee9c0
//
// 006ee9c0  83ec28               sub esp, 0x28
// 006ee9c3  56                   push esi
// 006ee9c4  8bf1                 mov esi, ecx
// 006ee9c6  83bea001000000       cmp dword ptr [esi + 0x1a0], 0
// 006ee9cd  0f850e010000         jne 0x6eeae1
// 006ee9d3  837e2000             cmp dword ptr [esi + 0x20], 0
// 006ee9d7  0f8404010000         je 0x6eeae1
// 006ee9dd  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 006ee9e4  0f84f7000000         je 0x6eeae1
// 006ee9ea  57                   push edi
// 006ee9eb  8b3e                 mov edi, dword ptr [esi]
// 006ee9ed  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 006ee9f3  6a00                 push 0
// 006ee9f5  6a00                 push 0
// 006ee9f7  8d442410             lea eax, [esp + 0x10]
// 006ee9fb  50                   push eax
// 006ee9fc  ffd2                 call edx
// 006ee9fe  8b4804               mov ecx, dword ptr [eax + 4]
// 006eea01  8b10                 mov edx, dword ptr [eax]
// 006eea03  51                   push ecx
// 006eea04  52                   push edx
// 006eea05  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 006eea0b  8d442418             lea eax, [esp + 0x18]
// 006eea0f  50                   push eax
// 006eea10  8bce                 mov ecx, esi
// 006eea12  ffd2                 call edx
// 006eea14  56                   push esi
// 006eea15  8d4c2424             lea ecx, [esp + 0x24]
// 006eea19  e8b2900000           call 0x6f7ad0
// 006eea1e  8d442420             lea eax, [esp + 0x20]
// 006eea22  50                   push eax
// 006eea23  8d4c2414             lea ecx, [esp + 0x14]
// 006eea27  51                   push ecx
// 006eea28  ff15682c8000         call dword ptr [0x802c68]
// 006eea2e  8bce                 mov ecx, esi
// 006eea30  85c0                 test eax, eax
// 006eea32  0f859a000000         jne 0x6eead2
// 006eea38  e8d363fcff           call 0x6b4e10
// 006eea3d  8bce                 mov ecx, esi
// 006eea3f  8bf8                 mov edi, eax
// 006eea41  e8aa41fbff           call 0x6a2bf0
// 006eea46  85c0                 test eax, eax
// 006eea48  740b                 je 0x6eea55
// 006eea4a  85ff                 test edi, edi
// 006eea4c  7407                 je 0x6eea55
// 006eea4e  8bcf                 mov ecx, edi
// 006eea50  e8eb5afbff           call 0x6a4540
// 006eea55  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006eea58  6a00                 push 0
// 006eea5a  6a00                 push 0
// 006eea5c  51                   push ecx
// 006eea5d  ff15d42b8000         call dword ptr [0x802bd4]
// 006eea63  8b442414             mov eax, dword ptr [esp + 0x14]
// 006eea67  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006eea6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006eea6f  6856020000           push 0x256
// 006eea74  2bd0                 sub edx, eax
// 006eea76  52                   push edx
// 006eea77  8b542420             mov edx, dword ptr [esp + 0x20]
// 006eea7b  2bd1                 sub edx, ecx
// 006eea7d  52                   push edx
// 006eea7e  50                   push eax
// 006eea7f  51                   push ecx
// 006eea80  6a00                 push 0
// 006eea82  8bce                 mov ecx, esi
// 006eea84  e8bd1ffbff           call 0x6a0a46
// 006eea89  8bce                 mov ecx, esi
// 006eea8b  e84064fcff           call 0x6b4ed0
// 006eea90  8b10                 mov edx, dword ptr [eax]
// 006eea92  8bc8                 mov ecx, eax
// 006eea94  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 006eea9a  56                   push esi
// 006eea9b  ffd0                 call eax
// 006eea9d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006eeaa1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006eeaa5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006eeaa9  2b7c2424             sub edi, dword ptr [esp + 0x24]
// 006eeaad  8b442418             mov eax, dword ptr [esp + 0x18]
// 006eeab1  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 006eeab5  2b542420             sub edx, dword ptr [esp + 0x20]
// 006eeab9  2b442410             sub eax, dword ptr [esp + 0x10]
// 006eeabd  2bcf                 sub ecx, edi
// 006eeabf  51                   push ecx
// 006eeac0  2bc2                 sub eax, edx
// 006eeac2  50                   push eax
// 006eeac3  56                   push esi
// 006eeac4  e817e80700           call 0x76d2e0
// 006eeac9  8bc8                 mov ecx, eax
// 006eeacb  e870e30700           call 0x76ce40
// 006eead0  8bce                 mov ecx, esi
// 006eead2  8b16                 mov edx, dword ptr [esi]
// 006eead4  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006eeada  6a01                 push 1
// 006eeadc  6a00                 push 0
// 006eeade  ffd0                 call eax
// 006eeae0  5f                   pop edi
// 006eeae1  5e                   pop esi
// 006eeae2  83c428               add esp, 0x28
// 006eeae5  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?RecalcSizeLayout@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
