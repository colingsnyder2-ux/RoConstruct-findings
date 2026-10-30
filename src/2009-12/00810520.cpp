// roc 2009-12 00810520  unit: CXTPImageManager  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810520
//
// 00810520  83ec10               sub esp, 0x10
// 00810523  53                   push ebx
// 00810524  56                   push esi
// 00810525  57                   push edi
// 00810526  8bf1                 mov esi, ecx
// 00810528  8d442414             lea eax, [esp + 0x14]
// 0081052c  50                   push eax
// 0081052d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00810531  8d4c2414             lea ecx, [esp + 0x14]
// 00810535  51                   push ecx
// 00810536  8d542414             lea edx, [esp + 0x14]
// 0081053a  52                   push edx
// 0081053b  50                   push eax
// 0081053c  8bce                 mov ecx, esi
// 0081053e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00810546  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0081054e  e80dacffff           call 0x80b160
// 00810553  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00810557  8bf8                 mov edi, eax
// 00810559  85ff                 test edi, edi
// 0081055b  7423                 je 0x810580
// 0081055d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00810561  52                   push edx
// 00810562  33c9                 xor ecx, ecx
// 00810564  51                   push ecx
// 00810565  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00810569  33c0                 xor eax, eax
// 0081056b  50                   push eax
// 0081056c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00810570  50                   push eax
// 00810571  53                   push ebx
// 00810572  51                   push ecx
// 00810573  8bce                 mov ecx, esi
// 00810575  e886fcffff           call 0x810200
// 0081057a  85c0                 test eax, eax
// 0081057c  7502                 jne 0x810580
// 0081057e  33ff                 xor edi, edi
// 00810580  85db                 test ebx, ebx
// 00810582  7409                 je 0x81058d
// 00810584  53                   push ebx
// 00810585  e87c35feff           call 0x7f3b06
// 0081058a  83c404               add esp, 4
// 0081058d  8bc7                 mov eax, edi
// 0081058f  5f                   pop edi
// 00810590  5e                   pop esi
// 00810591  5b                   pop ebx
// 00810592  83c410               add esp, 0x10
// 00810595  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetIcons@CXTPImageManager@@QAEHIIW4XTPImageState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp