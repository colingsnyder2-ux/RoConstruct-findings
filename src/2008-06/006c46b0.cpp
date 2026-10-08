// from server: 100% by auto
// roc 2008-06 006c46b0  unit: CXTPToolBar  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c46b0
//
// 006c46b0  53                   push ebx
// 006c46b1  56                   push esi
// 006c46b2  57                   push edi
// 006c46b3  8bf1                 mov esi, ecx
// 006c46b5  e850790f00           call 0x7bc00a
// 006c46ba  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006c46be  a900010000           test eax, 0x100
// 006c46c3  740c                 je 0x6c46d1
// 006c46c5  f6c340               test bl, 0x40
// 006c46c8  7407                 je 0x6c46d1
// 006c46ca  bf01000000           mov edi, 1
// 006c46cf  eb02                 jmp 0x6c46d3
// 006c46d1  33ff                 xor edi, edi
// 006c46d3  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 006c46da  0f85cc000000         jne 0x6c47ac
// 006c46e0  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 006c46e7  0f84bf000000         je 0x6c47ac
// 006c46ed  8bce                 mov ecx, esi
// 006c46ef  e81c07ffff           call 0x6b4e10
// 006c46f4  85c0                 test eax, eax
// 006c46f6  7409                 je 0x6c4701
// 006c46f8  8b4074               mov eax, dword ptr [eax + 0x74]
// 006c46fb  83783400             cmp dword ptr [eax + 0x34], 0
// 006c46ff  746c                 je 0x6c476d
// 006c4701  f6c308               test bl, 8
// 006c4704  741c                 je 0x6c4722
// 006c4706  8bce                 mov ecx, esi
// 006c4708  e895cdfdff           call 0x6a14a2
// 006c470d  85c0                 test eax, eax
// 006c470f  7511                 jne 0x6c4722
// 006c4711  6897000000           push 0x97
// 006c4716  50                   push eax
// 006c4717  50                   push eax
// 006c4718  50                   push eax
// 006c4719  50                   push eax
// 006c471a  50                   push eax
// 006c471b  8bce                 mov ecx, esi
// 006c471d  e824c3fdff           call 0x6a0a46
// 006c4722  f6c304               test bl, 4
// 006c4725  7446                 je 0x6c476d
// 006c4727  8bce                 mov ecx, esi
// 006c4729  e872f1ffff           call 0x6c38a0
// 006c472e  85c0                 test eax, eax
// 006c4730  753b                 jne 0x6c476d
// 006c4732  8bce                 mov ecx, esi
// 006c4734  e869cdfdff           call 0x6a14a2
// 006c4739  85c0                 test eax, eax
// 006c473b  7430                 je 0x6c476d
// 006c473d  6af0                 push -0x10
// 006c473f  ff15202e8000         call dword ptr [0x802e20]
// 006c4745  50                   push eax
// 006c4746  ff15bc2d8000         call dword ptr [0x802dbc]
// 006c474c  a900000010           test eax, 0x10000000
// 006c4751  741a                 je 0x6c476d
// 006c4753  a900000020           test eax, 0x20000000
// 006c4758  7513                 jne 0x6c476d
// 006c475a  6a57                 push 0x57
// 006c475c  6a00                 push 0
// 006c475e  6a00                 push 0
// 006c4760  6a00                 push 0
// 006c4762  6a00                 push 0
// 006c4764  6a00                 push 0
// 006c4766  8bce                 mov ecx, esi
// 006c4768  e8d9c2fdff           call 0x6a0a46
// 006c476d  f6c303               test bl, 3
// 006c4770  7427                 je 0x6c4799
// 006c4772  8bcb                 mov ecx, ebx
// 006c4774  80e101               and cl, 1
// 006c4777  0fb6d1               movzx edx, cl
// 006c477a  f7da                 neg edx
// 006c477c  1bd2                 sbb edx, edx
// 006c477e  83e2c0               and edx, 0xffffffc0
// 006c4781  83ea80               sub edx, -0x80
// 006c4784  83ca17               or edx, 0x17
// 006c4787  52                   push edx
// 006c4788  6a00                 push 0
// 006c478a  6a00                 push 0
// 006c478c  6a00                 push 0
// 006c478e  6a00                 push 0
// 006c4790  6a00                 push 0
// 006c4792  8bce                 mov ecx, esi
// 006c4794  e8adc2fdff           call 0x6a0a46
// 006c4799  f6c330               test bl, 0x30
// 006c479c  740e                 je 0x6c47ac
// 006c479e  c1eb04               shr ebx, 4
// 006c47a1  83e301               and ebx, 1
// 006c47a4  53                   push ebx
// 006c47a5  8bce                 mov ecx, esi
// 006c47a7  e86ac5fdff           call 0x6a0d16
// 006c47ac  8bc7                 mov eax, edi
// 006c47ae  5f                   pop edi
// 006c47af  5e                   pop esi
// 006c47b0  5b                   pop ebx
// 006c47b1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnFloatStatus@CXTPToolBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
