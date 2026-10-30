// roc 2007-03 00653160  unit: seg_00650000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00653160
//
// 00653160  53                   push ebx
// 00653161  8b1d50ee7700         mov ebx, dword ptr [0x77ee50]
// 00653167  56                   push esi
// 00653168  57                   push edi
// 00653169  8bf9                 mov edi, ecx
// 0065316b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065316f  8b4734               mov eax, dword ptr [edi + 0x34]
// 00653172  8b5020               mov edx, dword ptr [eax + 0x20]
// 00653175  51                   push ecx
// 00653176  6a07                 push 7
// 00653178  680a110000           push 0x110a
// 0065317d  52                   push edx
// 0065317e  ffd3                 call ebx
// 00653180  8bf0                 mov esi, eax
// 00653182  85f6                 test esi, esi
// 00653184  7425                 je 0x6531ab
// 00653186  6a02                 push 2
// 00653188  56                   push esi
// 00653189  8bcf                 mov ecx, edi
// 0065318b  e840eeffff           call 0x651fd0
// 00653190  a802                 test al, 2
// 00653192  751f                 jne 0x6531b3
// 00653194  8b4734               mov eax, dword ptr [edi + 0x34]
// 00653197  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065319a  56                   push esi
// 0065319b  6a07                 push 7
// 0065319d  680a110000           push 0x110a
// 006531a2  50                   push eax
// 006531a3  ffd3                 call ebx
// 006531a5  8bf0                 mov esi, eax
// 006531a7  85f6                 test esi, esi
// 006531a9  75db                 jne 0x653186
// 006531ab  5f                   pop edi
// 006531ac  5e                   pop esi
// 006531ad  33c0                 xor eax, eax
// 006531af  5b                   pop ebx
// 006531b0  c20400               ret 4
// 006531b3  5f                   pop edi
// 006531b4  8bc6                 mov eax, esi
// 006531b6  5e                   pop esi
// 006531b7  5b                   pop ebx
// 006531b8  c20400               ret 4
// copied from an identical function in another client (function ?GetPrevSelectedItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp