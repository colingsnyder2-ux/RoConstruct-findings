// roc 2009-12 0081c920  unit: CXTPReportControl  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c920
//
// 0081c920  51                   push ecx
// 0081c921  53                   push ebx
// 0081c922  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0081c926  55                   push ebp
// 0081c927  8be9                 mov ebp, ecx
// 0081c929  85db                 test ebx, ebx
// 0081c92b  0f84dc000000         je 0x81ca0d
// 0081c931  8b4500               mov eax, dword ptr [ebp]
// 0081c934  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0081c93a  57                   push edi
// 0081c93b  53                   push ebx
// 0081c93c  ffd2                 call edx
// 0081c93e  33ff                 xor edi, edi
// 0081c940  8bcb                 mov ecx, ebx
// 0081c942  897c240c             mov dword ptr [esp + 0xc], edi
// 0081c946  e8d5020100           call 0x82cc20
// 0081c94b  85c0                 test eax, eax
// 0081c94d  0f8eab000000         jle 0x81c9fe
// 0081c953  56                   push esi
// 0081c954  8b03                 mov eax, dword ptr [ebx]
// 0081c956  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0081c959  57                   push edi
// 0081c95a  8bcb                 mov ecx, ebx
// 0081c95c  ffd2                 call edx
// 0081c95e  8bf0                 mov esi, eax
// 0081c960  85f6                 test esi, esi
// 0081c962  0f8481000000         je 0x81c9e9
// 0081c968  8b06                 mov eax, dword ptr [esi]
// 0081c96a  8b5060               mov edx, dword ptr [eax + 0x60]
// 0081c96d  8bce                 mov ecx, esi
// 0081c96f  ffd2                 call edx
// 0081c971  85c0                 test eax, eax
// 0081c973  741c                 je 0x81c991
// 0081c975  8b06                 mov eax, dword ptr [esi]
// 0081c977  8b5060               mov edx, dword ptr [eax + 0x60]
// 0081c97a  8bce                 mov ecx, esi
// 0081c97c  ffd2                 call edx
// 0081c97e  8bc8                 mov ecx, eax
// 0081c980  e89be30000           call 0x82ad20
// 0081c985  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0081c98d  85c0                 test eax, eax
// 0081c98f  7508                 jne 0x81c999
// 0081c991  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0081c999  8b06                 mov eax, dword ptr [esi]
// 0081c99b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0081c9a1  8bce                 mov ecx, esi
// 0081c9a3  ffd2                 call edx
// 0081c9a5  85c0                 test eax, eax
// 0081c9a7  7440                 je 0x81c9e9
// 0081c9a9  8b06                 mov eax, dword ptr [esi]
// 0081c9ab  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c9b1  8bce                 mov ecx, esi
// 0081c9b3  ffd2                 call edx
// 0081c9b5  85c0                 test eax, eax
// 0081c9b7  7430                 je 0x81c9e9
// 0081c9b9  837c241800           cmp dword ptr [esp + 0x18], 0
// 0081c9be  7409                 je 0x81c9c9
// 0081c9c0  83bdbc01000000       cmp dword ptr [ebp + 0x1bc], 0
// 0081c9c7  7420                 je 0x81c9e9
// 0081c9c9  8b06                 mov eax, dword ptr [esi]
// 0081c9cb  8b7d00               mov edi, dword ptr [ebp]
// 0081c9ce  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081c9d4  8bce                 mov ecx, esi
// 0081c9d6  81c7b8010000         add edi, 0x1b8
// 0081c9dc  ffd2                 call edx
// 0081c9de  50                   push eax
// 0081c9df  8b07                 mov eax, dword ptr [edi]
// 0081c9e1  8bcd                 mov ecx, ebp
// 0081c9e3  ffd0                 call eax
// 0081c9e5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0081c9e9  47                   inc edi
// 0081c9ea  8bcb                 mov ecx, ebx
// 0081c9ec  897c2410             mov dword ptr [esp + 0x10], edi
// 0081c9f0  e82b020100           call 0x82cc20
// 0081c9f5  3bf8                 cmp edi, eax
// 0081c9f7  0f8c57ffffff         jl 0x81c954
// 0081c9fd  5e                   pop esi
// 0081c9fe  8b13                 mov edx, dword ptr [ebx]
// 0081ca00  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0081ca06  6a00                 push 0
// 0081ca08  8bcb                 mov ecx, ebx
// 0081ca0a  ffd0                 call eax
// 0081ca0c  5f                   pop edi
// 0081ca0d  5d                   pop ebp
// 0081ca0e  5b                   pop ebx
// 0081ca0f  59                   pop ecx
// 0081ca10  c20400               ret 4
// copied from an identical function in another client (function ?SortTree@CXTPReportControl@@MAEXPAVCXTPReportRows@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp