// roc 2010-06 007e77e0  unit: CRobloxTreeCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e77e0
//
// 007e77e0  53                   push ebx
// 007e77e1  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 007e77e7  56                   push esi
// 007e77e8  57                   push edi
// 007e77e9  8bf9                 mov edi, ecx
// 007e77eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e77ef  8b4734               mov eax, dword ptr [edi + 0x34]
// 007e77f2  8b5020               mov edx, dword ptr [eax + 0x20]
// 007e77f5  51                   push ecx
// 007e77f6  6a07                 push 7
// 007e77f8  680a110000           push 0x110a
// 007e77fd  52                   push edx
// 007e77fe  ffd3                 call ebx
// 007e7800  8bf0                 mov esi, eax
// 007e7802  85f6                 test esi, esi
// 007e7804  7425                 je 0x7e782b
// 007e7806  6a02                 push 2
// 007e7808  56                   push esi
// 007e7809  8bcf                 mov ecx, edi
// 007e780b  e830eeffff           call 0x7e6640
// 007e7810  a802                 test al, 2
// 007e7812  751f                 jne 0x7e7833
// 007e7814  8b4734               mov eax, dword ptr [edi + 0x34]
// 007e7817  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e781a  56                   push esi
// 007e781b  6a07                 push 7
// 007e781d  680a110000           push 0x110a
// 007e7822  50                   push eax
// 007e7823  ffd3                 call ebx
// 007e7825  8bf0                 mov esi, eax
// 007e7827  85f6                 test esi, esi
// 007e7829  75db                 jne 0x7e7806
// 007e782b  5f                   pop edi
// 007e782c  5e                   pop esi
// 007e782d  33c0                 xor eax, eax
// 007e782f  5b                   pop ebx
// 007e7830  c20400               ret 4
// 007e7833  5f                   pop edi
// 007e7834  8bc6                 mov eax, esi
// 007e7836  5e                   pop esi
// 007e7837  5b                   pop ebx
// 007e7838  c20400               ret 4
// copied from an identical function in another client (function ?GetPrevSelectedItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp