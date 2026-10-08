// roc 2007-03 00545360  unit: seg_00540000  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545360
//
// 00545360  8b442408             mov eax, dword ptr [esp + 8]
// 00545364  53                   push ebx
// 00545365  55                   push ebp
// 00545366  56                   push esi
// 00545367  8bd9                 mov ebx, ecx
// 00545369  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0054536c  57                   push edi
// 0054536d  8b3b                 mov edi, dword ptr [ebx]
// 0054536f  85ff                 test edi, edi
// 00545371  7508                 jne 0x54537b
// 00545373  81fd00000080         cmp ebp, 0x80000000
// 00545379  7432                 je 0x5453ad
// 0054537b  83ffff               cmp edi, -1
// 0054537e  7508                 jne 0x545388
// 00545380  81fdffffff7f         cmp ebp, 0x7fffffff
// 00545386  7425                 je 0x5453ad
// 00545388  83fffe               cmp edi, -2
// 0054538b  750c                 jne 0x545399
// 0054538d  81fdffffff7f         cmp ebp, 0x7fffffff
// 00545393  0f84b6000000         je 0x54544f
// 00545399  8b30                 mov esi, dword ptr [eax]
// 0054539b  85f6                 test esi, esi
// 0054539d  740e                 je 0x5453ad
// 0054539f  83feff               cmp esi, -1
// 005453a2  7409                 je 0x5453ad
// 005453a4  83fefe               cmp esi, -2
// 005453a7  0f858c000000         jne 0x545439
// 005453ad  83fffe               cmp edi, -2
// 005453b0  750c                 jne 0x5453be
// 005453b2  81fdffffff7f         cmp ebp, 0x7fffffff
// 005453b8  0f8491000000         je 0x54544f
// 005453be  8b30                 mov esi, dword ptr [eax]
// 005453c0  83fefe               cmp esi, -2
// 005453c3  0f8486000000         je 0x54544f
// 005453c9  83ffff               cmp edi, -1
// 005453cc  750c                 jne 0x5453da
// 005453ce  81fdffffff7f         cmp ebp, 0x7fffffff
// 005453d4  7504                 jne 0x5453da
// 005453d6  85f6                 test esi, esi
// 005453d8  7475                 je 0x54544f
// 005453da  85ff                 test edi, edi
// 005453dc  750d                 jne 0x5453eb
// 005453de  81fd00000080         cmp ebp, 0x80000000
// 005453e4  7505                 jne 0x5453eb
// 005453e6  83feff               cmp esi, -1
// 005453e9  7464                 je 0x54544f
// 005453eb  e8b0f7ffff           call 0x544ba0
// 005453f0  84c0                 test al, al
// 005453f2  7414                 je 0x545408
// 005453f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 005453f8  8bcf                 mov ecx, edi
// 005453fa  5f                   pop edi
// 005453fb  5e                   pop esi
// 005453fc  8bd5                 mov edx, ebp
// 005453fe  5d                   pop ebp
// 005453ff  8908                 mov dword ptr [eax], ecx
// 00545401  895004               mov dword ptr [eax + 4], edx
// 00545404  5b                   pop ebx
// 00545405  c20800               ret 8
// 00545408  83feff               cmp esi, -1
// 0054540b  7514                 jne 0x545421
// 0054540d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00545411  5f                   pop edi
// 00545412  8930                 mov dword ptr [eax], esi
// 00545414  5e                   pop esi
// 00545415  5d                   pop ebp
// 00545416  c74004ffffff7f       mov dword ptr [eax + 4], 0x7fffffff
// 0054541d  5b                   pop ebx
// 0054541e  c20800               ret 8
// 00545421  85f6                 test esi, esi
// 00545423  7514                 jne 0x545439
// 00545425  8b442414             mov eax, dword ptr [esp + 0x14]
// 00545429  5f                   pop edi
// 0054542a  8930                 mov dword ptr [eax], esi
// 0054542c  5e                   pop esi
// 0054542d  5d                   pop ebp
// 0054542e  c7400400000080       mov dword ptr [eax + 4], 0x80000000
// 00545435  5b                   pop ebx
// 00545436  c20800               ret 8
// 00545439  8b442414             mov eax, dword ptr [esp + 0x14]
// 0054543d  33c9                 xor ecx, ecx
// 0054543f  03f7                 add esi, edi
// 00545441  5f                   pop edi
// 00545442  8930                 mov dword ptr [eax], esi
// 00545444  5e                   pop esi
// 00545445  13cd                 adc ecx, ebp
// 00545447  5d                   pop ebp
// 00545448  894804               mov dword ptr [eax + 4], ecx
// 0054544b  5b                   pop ebx
// 0054544c  c20800               ret 8
// 0054544f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00545453  5f                   pop edi
// 00545454  5e                   pop esi
// 00545455  5d                   pop ebp
// 00545456  c700feffffff         mov dword ptr [eax], 0xfffffffe
// 0054545c  c74004ffffff7f       mov dword ptr [eax + 4], 0x7fffffff
// 00545463  5b                   pop ebx
// 00545464  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ??$?HK@?$int_adapter@_J@date_time@boost@@QBE?AV012@ABV?$int_adapter@K@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
