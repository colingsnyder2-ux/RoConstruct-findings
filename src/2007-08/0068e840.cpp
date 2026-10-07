// roc 2007-08 0068e840  unit: CXTColorDialog  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068e840
//
// 0068e840  83ec64               sub esp, 0x64
// 0068e843  53                   push ebx
// 0068e844  55                   push ebp
// 0068e845  8b2dd8ec7700         mov ebp, dword ptr [0x77ecd8]
// 0068e84b  56                   push esi
// 0068e84c  57                   push edi
// 0068e84d  6a00                 push 0
// 0068e84f  6a00                 push 0
// 0068e851  8bf1                 mov esi, ecx
// 0068e853  8b4620               mov eax, dword ptr [esi + 0x20]
// 0068e856  6874040000           push 0x474
// 0068e85b  50                   push eax
// 0068e85c  ffd5                 call ebp
// 0068e85e  50                   push eax
// 0068e85f  e85c19faff           call 0x6301c0
// 0068e864  8b1dd4ed7700         mov ebx, dword ptr [0x77edd4]
// 0068e86a  8bf8                 mov edi, eax
// 0068e86c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0068e86f  8d4c2434             lea ecx, [esp + 0x34]
// 0068e873  51                   push ecx
// 0068e874  52                   push edx
// 0068e875  ffd3                 call ebx
// 0068e877  8d442434             lea eax, [esp + 0x34]
// 0068e87b  50                   push eax
// 0068e87c  8bce                 mov ecx, esi
// 0068e87e  e87121faff           call 0x6309f4
// 0068e883  8b5720               mov edx, dword ptr [edi + 0x20]
// 0068e886  8d4c2454             lea ecx, [esp + 0x54]
// 0068e88a  51                   push ecx
// 0068e88b  6a00                 push 0
// 0068e88d  680a130000           push 0x130a
// 0068e892  52                   push edx
// 0068e893  ffd5                 call ebp
// 0068e895  6a01                 push 1
// 0068e897  8bce                 mov ecx, esi
// 0068e899  e8cc20faff           call 0x63096a
// 0068e89e  8be8                 mov ebp, eax
// 0068e8a0  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0068e8a3  8d442424             lea eax, [esp + 0x24]
// 0068e8a7  50                   push eax
// 0068e8a8  51                   push ecx
// 0068e8a9  ffd3                 call ebx
// 0068e8ab  8d542424             lea edx, [esp + 0x24]
// 0068e8af  52                   push edx
// 0068e8b0  8bce                 mov ecx, esi
// 0068e8b2  e83d21faff           call 0x6309f4
// 0068e8b7  6a02                 push 2
// 0068e8b9  8bce                 mov ecx, esi
// 0068e8bb  e8aa20faff           call 0x63096a
// 0068e8c0  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068e8c3  8d4c2414             lea ecx, [esp + 0x14]
// 0068e8c7  51                   push ecx
// 0068e8c8  52                   push edx
// 0068e8c9  89442418             mov dword ptr [esp + 0x18], eax
// 0068e8cd  ffd3                 call ebx
// 0068e8cf  8d442414             lea eax, [esp + 0x14]
// 0068e8d3  50                   push eax
// 0068e8d4  8bce                 mov ecx, esi
// 0068e8d6  e81921faff           call 0x6309f4
// 0068e8db  6a00                 push 0
// 0068e8dd  6af1                 push -0xf
// 0068e8df  8d4c241c             lea ecx, [esp + 0x1c]
// 0068e8e3  51                   push ecx
// 0068e8e4  ff15d8ed7700         call dword ptr [0x77edd8]
// 0068e8ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068e8ee  8b542438             mov edx, dword ptr [esp + 0x38]
// 0068e8f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0068e8f6  83c1f1               add ecx, -0xf
// 0068e8f9  894c2440             mov dword ptr [esp + 0x40], ecx
// 0068e8fd  6a01                 push 1
// 0068e8ff  2bca                 sub ecx, edx
// 0068e901  51                   push ecx
// 0068e902  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0068e906  83c0fb               add eax, -5
// 0068e909  89442444             mov dword ptr [esp + 0x44], eax
// 0068e90d  2bc1                 sub eax, ecx
// 0068e90f  50                   push eax
// 0068e910  52                   push edx
// 0068e911  51                   push ecx
// 0068e912  8bcf                 mov ecx, edi
// 0068e914  e81b17faff           call 0x630034
// 0068e919  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0068e91d  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068e921  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068e925  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0068e929  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068e92d  89542428             mov dword ptr [esp + 0x28], edx
// 0068e931  8b542460             mov edx, dword ptr [esp + 0x60]
// 0068e935  2b542458             sub edx, dword ptr [esp + 0x58]
// 0068e939  89442430             mov dword ptr [esp + 0x30], eax
// 0068e93d  2b442418             sub eax, dword ptr [esp + 0x18]
// 0068e941  8d541a01             lea edx, [edx + ebx + 1]
// 0068e945  03c2                 add eax, edx
// 0068e947  6a01                 push 1
// 0068e949  89442434             mov dword ptr [esp + 0x34], eax
// 0068e94d  894c2430             mov dword ptr [esp + 0x30], ecx
// 0068e951  2bc2                 sub eax, edx
// 0068e953  50                   push eax
// 0068e954  2bcf                 sub ecx, edi
// 0068e956  51                   push ecx
// 0068e957  52                   push edx
// 0068e958  57                   push edi
// 0068e959  8bcd                 mov ecx, ebp
// 0068e95b  897c2438             mov dword ptr [esp + 0x38], edi
// 0068e95f  8954243c             mov dword ptr [esp + 0x3c], edx
// 0068e963  e8cc16faff           call 0x630034
// 0068e968  8b442430             mov eax, dword ptr [esp + 0x30]
// 0068e96c  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0068e970  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0068e974  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0068e978  8d5005               lea edx, [eax + 5]
// 0068e97b  89442420             mov dword ptr [esp + 0x20], eax
// 0068e97f  2bc3                 sub eax, ebx
// 0068e981  03c2                 add eax, edx
// 0068e983  6a01                 push 1
// 0068e985  89442424             mov dword ptr [esp + 0x24], eax
// 0068e989  894c2420             mov dword ptr [esp + 0x20], ecx
// 0068e98d  2bc2                 sub eax, edx
// 0068e98f  50                   push eax
// 0068e990  2bcf                 sub ecx, edi
// 0068e992  51                   push ecx
// 0068e993  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068e997  52                   push edx
// 0068e998  895c2428             mov dword ptr [esp + 0x28], ebx
// 0068e99c  57                   push edi
// 0068e99d  897c2428             mov dword ptr [esp + 0x28], edi
// 0068e9a1  8954242c             mov dword ptr [esp + 0x2c], edx
// 0068e9a5  e88a16faff           call 0x630034
// 0068e9aa  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0068e9b0  50                   push eax
// 0068e9b1  ff15bced7700         call dword ptr [0x77edbc]
// 0068e9b7  85c0                 test eax, eax
// 0068e9b9  7433                 je 0x68e9ee
// 0068e9bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068e9bf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0068e9c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068e9c7  894c2468             mov dword ptr [esp + 0x68], ecx
// 0068e9cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0068e9cf  894c2470             mov dword ptr [esp + 0x70], ecx
// 0068e9d3  83c105               add ecx, 5
// 0068e9d6  8d5112               lea edx, [ecx + 0x12]
// 0068e9d9  6a01                 push 1
// 0068e9db  2bd1                 sub edx, ecx
// 0068e9dd  52                   push edx
// 0068e9de  2bc7                 sub eax, edi
// 0068e9e0  50                   push eax
// 0068e9e1  51                   push ecx
// 0068e9e2  57                   push edi
// 0068e9e3  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0068e9e9  e84616faff           call 0x630034
// 0068e9ee  56                   push esi
// 0068e9ef  8d4c2448             lea ecx, [esp + 0x48]
// 0068e9f3  e8a815ffff           call 0x67ffa0
// 0068e9f8  8d542434             lea edx, [esp + 0x34]
// 0068e9fc  52                   push edx
// 0068e9fd  8bce                 mov ecx, esi
// 0068e9ff  e80a18faff           call 0x63020e
// 0068ea04  8b442440             mov eax, dword ptr [esp + 0x40]
// 0068ea08  8b542448             mov edx, dword ptr [esp + 0x48]
// 0068ea0c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0068ea10  83c00a               add eax, 0xa
// 0068ea13  6a01                 push 1
// 0068ea15  89442454             mov dword ptr [esp + 0x54], eax
// 0068ea19  2bc2                 sub eax, edx
// 0068ea1b  50                   push eax
// 0068ea1c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0068ea20  83e90f               sub ecx, 0xf
// 0068ea23  894c2454             mov dword ptr [esp + 0x54], ecx
// 0068ea27  2bc8                 sub ecx, eax
// 0068ea29  51                   push ecx
// 0068ea2a  52                   push edx
// 0068ea2b  50                   push eax
// 0068ea2c  8bce                 mov ecx, esi
// 0068ea2e  e80116faff           call 0x630034
// 0068ea33  5f                   pop edi
// 0068ea34  5e                   pop esi
// 0068ea35  5d                   pop ebp
// 0068ea36  5b                   pop ebx
// 0068ea37  83c464               add esp, 0x64
// 0068ea3a  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorDialog.cpp (function ?CalculateRects@CXTColorDialog@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorDialog.cpp
