// roc 2009-12 00890510  unit: CXTPDockContext  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890510
//
// 00890510  83ec0c               sub esp, 0xc
// 00890513  53                   push ebx
// 00890514  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00890518  55                   push ebp
// 00890519  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0089051d  57                   push edi
// 0089051e  8bf9                 mov edi, ecx
// 00890520  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00890523  8b470c               mov eax, dword ptr [edi + 0xc]
// 00890526  2be9                 sub ebp, ecx
// 00890528  8b4f04               mov ecx, dword ptr [edi + 4]
// 0089052b  2bd8                 sub ebx, eax
// 0089052d  e89e3ff7ff           call 0x8044d0
// 00890532  89442410             mov dword ptr [esp + 0x10], eax
// 00890536  85c0                 test eax, eax
// 00890538  0f84f6000000         je 0x890634
// 0089053e  56                   push esi
// 0089053f  55                   push ebp
// 00890540  53                   push ebx
// 00890541  8d7740               lea esi, [edi + 0x40]
// 00890544  56                   push esi
// 00890545  ff156ccc9800         call dword ptr [0x98cc6c]
// 0089054b  55                   push ebp
// 0089054c  8d4730               lea eax, [edi + 0x30]
// 0089054f  53                   push ebx
// 00890550  50                   push eax
// 00890551  ff156ccc9800         call dword ptr [0x98cc6c]
// 00890557  8b4704               mov eax, dword ptr [edi + 4]
// 0089055a  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00890560  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00890566  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089056a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0089056e  52                   push edx
// 0089056f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00890573  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00890577  50                   push eax
// 00890578  51                   push ecx
// 00890579  8bcb                 mov ecx, ebx
// 0089057b  e81045f8ff           call 0x814a90
// 00890580  8be8                 mov ebp, eax
// 00890582  85ed                 test ebp, ebp
// 00890584  741a                 je 0x8905a0
// 00890586  8bcd                 mov ecx, ebp
// 00890588  e8c3090000           call 0x890f50
// 0089058d  85c0                 test eax, eax
// 0089058f  0f85a8000000         jne 0x89063d
// 00890595  f644241001           test byte ptr [esp + 0x10], 1
// 0089059a  0f85cf000000         jne 0x89066f
// 008905a0  f644241010           test byte ptr [esp + 0x10], 0x10
// 008905a5  747e                 je 0x890625
// 008905a7  8b4704               mov eax, dword ptr [edi + 4]
// 008905aa  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 008905b1  744d                 je 0x890600
// 008905b3  50                   push eax
// 008905b4  8bcb                 mov ecx, ebx
// 008905b6  e8753cf8ff           call 0x814230
// 008905bb  8b4f04               mov ecx, dword ptr [edi + 4]
// 008905be  8b01                 mov eax, dword ptr [ecx]
// 008905c0  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 008905c6  6a46                 push 0x46
// 008905c8  6a00                 push 0
// 008905ca  8d54241c             lea edx, [esp + 0x1c]
// 008905ce  52                   push edx
// 008905cf  ffd0                 call eax
// 008905d1  8b06                 mov eax, dword ptr [esi]
// 008905d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 008905d6  8b542414             mov edx, dword ptr [esp + 0x14]
// 008905da  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008905de  8906                 mov dword ptr [esi], eax
// 008905e0  03d0                 add edx, eax
// 008905e2  8b442424             mov eax, dword ptr [esp + 0x24]
// 008905e6  894e04               mov dword ptr [esi + 4], ecx
// 008905e9  03d9                 add ebx, ecx
// 008905eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008905ef  50                   push eax
// 008905f0  51                   push ecx
// 008905f1  895608               mov dword ptr [esi + 8], edx
// 008905f4  56                   push esi
// 008905f5  895e0c               mov dword ptr [esi + 0xc], ebx
// 008905f8  e853bb0200           call 0x8bc150
// 008905fd  83c40c               add esp, 0xc
// 00890600  56                   push esi
// 00890601  8bcf                 mov ecx, edi
// 00890603  e878feffff           call 0x890480
// 00890608  8b4604               mov eax, dword ptr [esi + 4]
// 0089060b  8b560c               mov edx, dword ptr [esi + 0xc]
// 0089060e  8b0e                 mov ecx, dword ptr [esi]
// 00890610  6a01                 push 1
// 00890612  2bd0                 sub edx, eax
// 00890614  52                   push edx
// 00890615  8b5608               mov edx, dword ptr [esi + 8]
// 00890618  2bd1                 sub edx, ecx
// 0089061a  52                   push edx
// 0089061b  50                   push eax
// 0089061c  51                   push ecx
// 0089061d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00890620  e80d36f6ff           call 0x7f3c32
// 00890625  8b442420             mov eax, dword ptr [esp + 0x20]
// 00890629  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089062d  89470c               mov dword ptr [edi + 0xc], eax
// 00890630  894f10               mov dword ptr [edi + 0x10], ecx
// 00890633  5e                   pop esi
// 00890634  5f                   pop edi
// 00890635  5d                   pop ebp
// 00890636  5b                   pop ebx
// 00890637  83c40c               add esp, 0xc
// 0089063a  c20800               ret 8
// 0089063d  83f802               cmp eax, 2
// 00890640  750a                 jne 0x89064c
// 00890642  f644241004           test byte ptr [esp + 0x10], 4
// 00890647  e94effffff           jmp 0x89059a
// 0089064c  83f803               cmp eax, 3
// 0089064f  750a                 jne 0x89065b
// 00890651  f644241008           test byte ptr [esp + 0x10], 8
// 00890656  e93fffffff           jmp 0x89059a
// 0089065b  83f801               cmp eax, 1
// 0089065e  0f853cffffff         jne 0x8905a0
// 00890664  f644241002           test byte ptr [esp + 0x10], 2
// 00890669  0f8431ffffff         je 0x8905a0
// 0089066f  8b4704               mov eax, dword ptr [edi + 4]
// 00890672  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00890678  55                   push ebp
// 00890679  8d7730               lea esi, [edi + 0x30]
// 0089067c  56                   push esi
// 0089067d  50                   push eax
// 0089067e  8bcb                 mov ecx, ebx
// 00890680  89542420             mov dword ptr [esp + 0x20], edx
// 00890684  e8073bf8ff           call 0x814190
// 00890689  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0089068d  750c                 jne 0x89069b
// 0089068f  8b4704               mov eax, dword ptr [edi + 4]
// 00890692  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00890699  758a                 jne 0x890625
// 0089069b  6a00                 push 0
// 0089069d  8bcb                 mov ecx, ebx
// 0089069f  e8fc42f8ff           call 0x8149a0
// 008906a4  8b4f04               mov ecx, dword ptr [edi + 4]
// 008906a7  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008906aa  56                   push esi
// 008906ab  52                   push edx
// 008906ac  ff1570cc9800         call dword ptr [0x98cc70]
// 008906b2  e96effffff           jmp 0x890625
// copied from an identical function in another client (function ?Move@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp