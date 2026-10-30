// roc 2009-12 0080db10  unit: IIHH::?$CMap  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080db10
//
// 0080db10  6aff                 push -1
// 0080db12  68bb849500           push 0x9584bb
// 0080db17  64a100000000         mov eax, dword ptr fs:[0]
// 0080db1d  50                   push eax
// 0080db1e  51                   push ecx
// 0080db1f  53                   push ebx
// 0080db20  55                   push ebp
// 0080db21  56                   push esi
// 0080db22  57                   push edi
// 0080db23  a10052b600           mov eax, dword ptr [0xb65200]
// 0080db28  33c4                 xor eax, esp
// 0080db2a  50                   push eax
// 0080db2b  8d442418             lea eax, [esp + 0x18]
// 0080db2f  64a300000000         mov dword ptr fs:[0], eax
// 0080db35  8bd9                 mov ebx, ecx
// 0080db37  0fb774242c           movzx esi, word ptr [esp + 0x2c]
// 0080db3c  0fb7442428           movzx eax, word ptr [esp + 0x28]
// 0080db41  8d4c2414             lea ecx, [esp + 0x14]
// 0080db45  c1e610               shl esi, 0x10
// 0080db48  51                   push ecx
// 0080db49  0bf0                 or esi, eax
// 0080db4b  8d6b58               lea ebp, [ebx + 0x58]
// 0080db4e  33ff                 xor edi, edi
// 0080db50  56                   push esi
// 0080db51  8bcd                 mov ecx, ebp
// 0080db53  897c241c             mov dword ptr [esp + 0x1c], edi
// 0080db57  e824eeffff           call 0x80c980
// 0080db5c  85c0                 test eax, eax
// 0080db5e  7406                 je 0x80db66
// 0080db60  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080db64  eb3e                 jmp 0x80dba4
// 0080db66  6a70                 push 0x70
// 0080db68  e8f35cfeff           call 0x7f3860
// 0080db6d  83c404               add esp, 4
// 0080db70  89442414             mov dword ptr [esp + 0x14], eax
// 0080db74  897c2420             mov dword ptr [esp + 0x20], edi
// 0080db78  3bc7                 cmp eax, edi
// 0080db7a  7414                 je 0x80db90
// 0080db7c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0080db80  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080db84  52                   push edx
// 0080db85  51                   push ecx
// 0080db86  53                   push ebx
// 0080db87  8bc8                 mov ecx, eax
// 0080db89  e8c2e1ffff           call 0x80bd50
// 0080db8e  8bf8                 mov edi, eax
// 0080db90  56                   push esi
// 0080db91  8bcd                 mov ecx, ebp
// 0080db93  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0080db9b  e8e0650800           call 0x894180
// 0080dba0  8938                 mov dword ptr [eax], edi
// 0080dba2  8bc7                 mov eax, edi
// 0080dba4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080dba8  64890d00000000       mov dword ptr fs:[0], ecx
// 0080dbaf  59                   pop ecx
// 0080dbb0  5f                   pop edi
// 0080dbb1  5e                   pop esi
// 0080dbb2  5d                   pop ebp
// 0080dbb3  5b                   pop ebx
// 0080dbb4  83c410               add esp, 0x10
// 0080dbb7  c20800               ret 8
// copied from an identical function in another client (function ?GetResource@CXTPImageManager@@QAEPAVCXTPImageManagerResource@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp