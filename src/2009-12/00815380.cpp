// roc 2009-12 00815380  unit: MyXTPCommandBars  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815380
//
// 00815380  56                   push esi
// 00815381  57                   push edi
// 00815382  8bf9                 mov edi, ecx
// 00815384  8b0d40aeb900         mov ecx, dword ptr [0xb9ae40]
// 0081538a  e8d3eefdff           call 0x7f4262
// 0081538f  8bf0                 mov esi, eax
// 00815391  85f6                 test esi, esi
// 00815393  7505                 jne 0x81539a
// 00815395  5f                   pop edi
// 00815396  5e                   pop esi
// 00815397  c20800               ret 8
// 0081539a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081539e  53                   push ebx
// 0081539f  50                   push eax
// 008153a0  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008153a6  89be04010000         mov dword ptr [esi + 0x104], edi
// 008153ac  ff155cde9800         call dword ptr [0x98de5c]
// 008153b2  8b16                 mov edx, dword ptr [esi]
// 008153b4  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 008153ba  6a01                 push 1
// 008153bc  6a00                 push 0
// 008153be  8bce                 mov ecx, esi
// 008153c0  ffd0                 call eax
// 008153c2  8b16                 mov edx, dword ptr [esi]
// 008153c4  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 008153ca  6a00                 push 0
// 008153cc  8bce                 mov ecx, esi
// 008153ce  c786d800000001000000 mov dword ptr [esi + 0xd8], 1
// 008153d8  ffd0                 call eax
// 008153da  85c0                 test eax, eax
// 008153dc  743f                 je 0x81541d
// 008153de  8b16                 mov edx, dword ptr [esi]
// 008153e0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008153e4  8b821c020000         mov eax, dword ptr [edx + 0x21c]
// 008153ea  53                   push ebx
// 008153eb  8bce                 mov ecx, esi
// 008153ed  ffd0                 call eax
// 008153ef  85c0                 test eax, eax
// 008153f1  742a                 je 0x81541d
// 008153f3  85db                 test ebx, ebx
// 008153f5  760e                 jbe 0x815405
// 008153f7  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008153fd  e83e2a0300           call 0x847e40
// 00815402  895f64               mov dword ptr [edi + 0x64], ebx
// 00815405  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 0081540b  8d4f7c               lea ecx, [edi + 0x7c]
// 0081540e  56                   push esi
// 0081540f  52                   push edx
// 00815410  e85b580500           call 0x86ac70
// 00815415  5b                   pop ebx
// 00815416  5f                   pop edi
// 00815417  8bc6                 mov eax, esi
// 00815419  5e                   pop esi
// 0081541a  c20800               ret 8
// 0081541d  8b06                 mov eax, dword ptr [esi]
// 0081541f  8b5004               mov edx, dword ptr [eax + 4]
// 00815422  6a01                 push 1
// 00815424  8bce                 mov ecx, esi
// 00815426  ffd2                 call edx
// 00815428  5b                   pop ebx
// 00815429  5f                   pop edi
// 0081542a  33c0                 xor eax, eax
// 0081542c  5e                   pop esi
// 0081542d  c20800               ret 8
// copied from an identical function in another client (function ?SetMenu@CXTPCommandBars@@QAEPAVCXTPMenuBar@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp