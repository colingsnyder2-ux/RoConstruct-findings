// roc 2009-12 00842160  unit: CXTPPopupBar  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00842160
//
// 00842160  83ec28               sub esp, 0x28
// 00842163  56                   push esi
// 00842164  8bf1                 mov esi, ecx
// 00842166  83bea001000000       cmp dword ptr [esi + 0x1a0], 0
// 0084216d  0f850e010000         jne 0x842281
// 00842173  837e2000             cmp dword ptr [esi + 0x20], 0
// 00842177  0f8404010000         je 0x842281
// 0084217d  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 00842184  0f84f7000000         je 0x842281
// 0084218a  57                   push edi
// 0084218b  8b3e                 mov edi, dword ptr [esi]
// 0084218d  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 00842193  6a00                 push 0
// 00842195  6a00                 push 0
// 00842197  8d442410             lea eax, [esp + 0x10]
// 0084219b  50                   push eax
// 0084219c  ffd2                 call edx
// 0084219e  8b4804               mov ecx, dword ptr [eax + 4]
// 008421a1  8b10                 mov edx, dword ptr [eax]
// 008421a3  51                   push ecx
// 008421a4  52                   push edx
// 008421a5  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 008421ab  8d442418             lea eax, [esp + 0x18]
// 008421af  50                   push eax
// 008421b0  8bce                 mov ecx, esi
// 008421b2  ffd2                 call edx
// 008421b4  56                   push esi
// 008421b5  8d4c2424             lea ecx, [esp + 0x24]
// 008421b9  e8b2900000           call 0x84b270
// 008421be  8d442420             lea eax, [esp + 0x20]
// 008421c2  50                   push eax
// 008421c3  8d4c2414             lea ecx, [esp + 0x14]
// 008421c7  51                   push ecx
// 008421c8  ff15bcca9800         call dword ptr [0x98cabc]
// 008421ce  8bce                 mov ecx, esi
// 008421d0  85c0                 test eax, eax
// 008421d2  0f859a000000         jne 0x842272
// 008421d8  e8f322fcff           call 0x8044d0
// 008421dd  8bce                 mov ecx, esi
// 008421df  8bf8                 mov edi, eax
// 008421e1  e89a21fdff           call 0x814380
// 008421e6  85c0                 test eax, eax
// 008421e8  740b                 je 0x8421f5
// 008421ea  85ff                 test edi, edi
// 008421ec  7407                 je 0x8421f5
// 008421ee  8bcf                 mov ecx, edi
// 008421f0  e8db38fdff           call 0x815ad0
// 008421f5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008421f8  6a00                 push 0
// 008421fa  6a00                 push 0
// 008421fc  51                   push ecx
// 008421fd  ff1554cb9800         call dword ptr [0x98cb54]
// 00842203  8b442414             mov eax, dword ptr [esp + 0x14]
// 00842207  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084220b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084220f  6856020000           push 0x256
// 00842214  2bd0                 sub edx, eax
// 00842216  52                   push edx
// 00842217  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084221b  2bd1                 sub edx, ecx
// 0084221d  52                   push edx
// 0084221e  50                   push eax
// 0084221f  51                   push ecx
// 00842220  6a00                 push 0
// 00842222  8bce                 mov ecx, esi
// 00842224  e8031afbff           call 0x7f3c2c
// 00842229  8bce                 mov ecx, esi
// 0084222b  e86023fcff           call 0x804590
// 00842230  8b10                 mov edx, dword ptr [eax]
// 00842232  8bc8                 mov ecx, eax
// 00842234  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 0084223a  56                   push esi
// 0084223b  ffd0                 call eax
// 0084223d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00842241  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00842245  8b542428             mov edx, dword ptr [esp + 0x28]
// 00842249  2b7c2424             sub edi, dword ptr [esp + 0x24]
// 0084224d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00842251  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00842255  2b542420             sub edx, dword ptr [esp + 0x20]
// 00842259  2b442410             sub eax, dword ptr [esp + 0x10]
// 0084225d  2bcf                 sub ecx, edi
// 0084225f  51                   push ecx
// 00842260  2bc2                 sub eax, edx
// 00842262  50                   push eax
// 00842263  56                   push esi
// 00842264  e847e20700           call 0x8c04b0
// 00842269  8bc8                 mov ecx, eax
// 0084226b  e860dd0700           call 0x8bffd0
// 00842270  8bce                 mov ecx, esi
// 00842272  8b16                 mov edx, dword ptr [esi]
// 00842274  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 0084227a  6a01                 push 1
// 0084227c  6a00                 push 0
// 0084227e  ffd0                 call eax
// 00842280  5f                   pop edi
// 00842281  5e                   pop esi
// 00842282  83c428               add esp, 0x28
// 00842285  c3                   ret 
// copied from an identical function in another client (function ?RecalcSizeLayout@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp