// roc 2009-12 008a6900  unit: CXTPReportNavigator  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6900
//
// 008a6900  56                   push esi
// 008a6901  8bf1                 mov esi, ecx
// 008a6903  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6906  85c9                 test ecx, ecx
// 008a6908  0f84e8000000         je 0x8a69f6
// 008a690e  57                   push edi
// 008a690f  e84c7cf7ff           call 0x81e560
// 008a6914  837e2400             cmp dword ptr [esi + 0x24], 0
// 008a6918  8bf8                 mov edi, eax
// 008a691a  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a691d  742d                 je 0x8a694c
// 008a691f  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6923  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 008a6929  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 008a692f  52                   push edx
// 008a6930  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a6934  52                   push edx
// 008a6935  8b11                 mov edx, dword ptr [ecx]
// 008a6937  8b5274               mov edx, dword ptr [edx + 0x74]
// 008a693a  50                   push eax
// 008a693b  57                   push edi
// 008a693c  ffd2                 call edx
// 008a693e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6941  50                   push eax
// 008a6942  e8b9f1f7ff           call 0x825b00
// 008a6947  5f                   pop edi
// 008a6948  5e                   pop esi
// 008a6949  c20800               ret 8
// 008a694c  837e2800             cmp dword ptr [esi + 0x28], 0
// 008a6950  743f                 je 0x8a6991
// 008a6952  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 008a6958  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 008a695e  8b11                 mov edx, dword ptr [ecx]
// 008a6960  8b5274               mov edx, dword ptr [edx + 0x74]
// 008a6963  50                   push eax
// 008a6964  57                   push edi
// 008a6965  ffd2                 call edx
// 008a6967  3bf8                 cmp edi, eax
// 008a6969  750e                 jne 0x8a6979
// 008a696b  6a00                 push 0
// 008a696d  8bce                 mov ecx, esi
// 008a696f  e81cfdffff           call 0x8a6690
// 008a6974  5f                   pop edi
// 008a6975  5e                   pop esi
// 008a6976  c20800               ret 8
// 008a6979  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a697d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a6981  51                   push ecx
// 008a6982  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6985  52                   push edx
// 008a6986  50                   push eax
// 008a6987  e874f1f7ff           call 0x825b00
// 008a698c  5f                   pop edi
// 008a698d  5e                   pop esi
// 008a698e  c20800               ret 8
// 008a6991  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008a6997  8b80d4010000         mov eax, dword ptr [eax + 0x1d4]
// 008a699d  8b11                 mov edx, dword ptr [ecx]
// 008a699f  8b5274               mov edx, dword ptr [edx + 0x74]
// 008a69a2  50                   push eax
// 008a69a3  57                   push edi
// 008a69a4  ffd2                 call edx
// 008a69a6  8bf8                 mov edi, eax
// 008a69a8  85ff                 test edi, edi
// 008a69aa  7449                 je 0x8a69f5
// 008a69ac  8b07                 mov eax, dword ptr [edi]
// 008a69ae  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008a69b1  53                   push ebx
// 008a69b2  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 008a69b5  8bcf                 mov ecx, edi
// 008a69b7  ffd2                 call edx
// 008a69b9  39831c010000         cmp dword ptr [ebx + 0x11c], eax
// 008a69bf  7521                 jne 0x8a69e2
// 008a69c1  83bbf401000000       cmp dword ptr [ebx + 0x1f4], 0
// 008a69c8  742a                 je 0x8a69f4
// 008a69ca  83bb0802000000       cmp dword ptr [ebx + 0x208], 0
// 008a69d1  7421                 je 0x8a69f4
// 008a69d3  6a01                 push 1
// 008a69d5  8bce                 mov ecx, esi
// 008a69d7  e8b4fcffff           call 0x8a6690
// 008a69dc  5b                   pop ebx
// 008a69dd  5f                   pop edi
// 008a69de  5e                   pop esi
// 008a69df  c20800               ret 8
// 008a69e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a69e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a69ea  50                   push eax
// 008a69eb  51                   push ecx
// 008a69ec  57                   push edi
// 008a69ed  8bcb                 mov ecx, ebx
// 008a69ef  e80cf1f7ff           call 0x825b00
// 008a69f4  5b                   pop ebx
// 008a69f5  5f                   pop edi
// 008a69f6  5e                   pop esi
// 008a69f7  c20800               ret 8
// copied from an identical function in another client (function ?MoveUp@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp