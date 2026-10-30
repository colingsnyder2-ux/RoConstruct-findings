// roc 2009-12 00820cd0  unit: CXTPReportControl  size: 536 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820cd0
//
// 00820cd0  6aff                 push -1
// 00820cd2  6808b09500           push 0x95b008
// 00820cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00820cdd  50                   push eax
// 00820cde  81ecac000000         sub esp, 0xac
// 00820ce4  53                   push ebx
// 00820ce5  55                   push ebp
// 00820ce6  56                   push esi
// 00820ce7  57                   push edi
// 00820ce8  a10052b600           mov eax, dword ptr [0xb65200]
// 00820ced  33c4                 xor eax, esp
// 00820cef  50                   push eax
// 00820cf0  8d8424c0000000       lea eax, [esp + 0xc0]
// 00820cf7  64a300000000         mov dword ptr fs:[0], eax
// 00820cfd  8bf1                 mov esi, ecx
// 00820cff  8b86a0020000         mov eax, dword ptr [esi + 0x2a0]
// 00820d05  8b9698000000         mov edx, dword ptr [esi + 0x98]
// 00820d0b  8bbe90000000         mov edi, dword ptr [esi + 0x90]
// 00820d11  8d4801               lea ecx, [eax + 1]
// 00820d14  8944241c             mov dword ptr [esp + 0x1c], eax
// 00820d18  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00820d1e  897c2418             mov dword ptr [esp + 0x18], edi
// 00820d22  89542420             mov dword ptr [esp + 0x20], edx
// 00820d26  894c2424             mov dword ptr [esp + 0x24], ecx
// 00820d2a  8b88f0000000         mov ecx, dword ptr [eax + 0xf0]
// 00820d30  83f9ff               cmp ecx, -1
// 00820d33  7508                 jne 0x820d3d
// 00820d35  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 00820d3b  eb02                 jmp 0x820d3f
// 00820d3d  8bc1                 mov eax, ecx
// 00820d3f  8bbc24d0000000       mov edi, dword ptr [esp + 0xd0]
// 00820d46  50                   push eax
// 00820d47  8d44241c             lea eax, [esp + 0x1c]
// 00820d4b  50                   push eax
// 00820d4c  8bcf                 mov ecx, edi
// 00820d4e  e8ab38fdff           call 0x7f45fe
// 00820d53  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00820d59  8b88f0000000         mov ecx, dword ptr [eax + 0xf0]
// 00820d5f  83f9ff               cmp ecx, -1
// 00820d62  7508                 jne 0x820d6c
// 00820d64  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 00820d6a  eb02                 jmp 0x820d6e
// 00820d6c  8bc1                 mov eax, ecx
// 00820d6e  85ff                 test edi, edi
// 00820d70  7504                 jne 0x820d76
// 00820d72  33d2                 xor edx, edx
// 00820d74  eb03                 jmp 0x820d79
// 00820d76  8b5704               mov edx, dword ptr [edi + 4]
// 00820d79  50                   push eax
// 00820d7a  52                   push edx
// 00820d7b  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00820d82  e879a90200           call 0x84b700
// 00820d87  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00820d8d  8b88f0000000         mov ecx, dword ptr [eax + 0xf0]
// 00820d93  c78424c800000000000000 mov dword ptr [esp + 0xc8], 0
// 00820d9e  83f9ff               cmp ecx, -1
// 00820da1  7506                 jne 0x820da9
// 00820da3  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00820da9  85ff                 test edi, edi
// 00820dab  7504                 jne 0x820db1
// 00820dad  33c0                 xor eax, eax
// 00820daf  eb03                 jmp 0x820db4
// 00820db1  8b4704               mov eax, dword ptr [edi + 4]
// 00820db4  51                   push ecx
// 00820db5  50                   push eax
// 00820db6  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00820dbd  e8fea90200           call 0x84b7c0
// 00820dc2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00820dc6  8bb6a0020000         mov esi, dword ptr [esi + 0x2a0]
// 00820dcc  8d4102               lea eax, [ecx + 2]
// 00820dcf  8d5107               lea edx, [ecx + 7]
// 00820dd2  89542478             mov dword ptr [esp + 0x78], edx
// 00820dd6  8d5605               lea edx, [esi + 5]
// 00820dd9  894c2460             mov dword ptr [esp + 0x60], ecx
// 00820ddd  89442468             mov dword ptr [esp + 0x68], eax
// 00820de1  89442470             mov dword ptr [esp + 0x70], eax
// 00820de5  89842480000000       mov dword ptr [esp + 0x80], eax
// 00820dec  89842488000000       mov dword ptr [esp + 0x88], eax
// 00820df3  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00820dfa  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00820e01  6a07                 push 7
// 00820e03  8d442464             lea eax, [esp + 0x64]
// 00820e07  89542418             mov dword ptr [esp + 0x18], edx
// 00820e0b  89942488000000       mov dword ptr [esp + 0x88], edx
// 00820e12  8b5104               mov edx, dword ptr [ecx + 4]
// 00820e15  50                   push eax
// 00820e16  8d7efe               lea edi, [esi - 2]
// 00820e19  8d5e02               lea ebx, [esi + 2]
// 00820e1c  8d6efb               lea ebp, [esi - 5]
// 00820e1f  52                   push edx
// 00820e20  897c2470             mov dword ptr [esp + 0x70], edi
// 00820e24  897c2478             mov dword ptr [esp + 0x78], edi
// 00820e28  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 00820e2f  89b42488000000       mov dword ptr [esp + 0x88], esi
// 00820e36  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 00820e3d  899c24a0000000       mov dword ptr [esp + 0xa0], ebx
// 00820e44  ff1520b19800         call dword ptr [0x98b120]
// 00820e4a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00820e4e  48                   dec eax
// 00820e4f  8d48fe               lea ecx, [eax - 2]
// 00820e52  8d50f9               lea edx, [eax - 7]
// 00820e55  89542440             mov dword ptr [esp + 0x40], edx
// 00820e59  8b542414             mov edx, dword ptr [esp + 0x14]
// 00820e5d  89442428             mov dword ptr [esp + 0x28], eax
// 00820e61  894c2430             mov dword ptr [esp + 0x30], ecx
// 00820e65  894c2438             mov dword ptr [esp + 0x38], ecx
// 00820e69  894c2448             mov dword ptr [esp + 0x48], ecx
// 00820e6d  894c2450             mov dword ptr [esp + 0x50], ecx
// 00820e71  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00820e78  89442458             mov dword ptr [esp + 0x58], eax
// 00820e7c  6a07                 push 7
// 00820e7e  8d44242c             lea eax, [esp + 0x2c]
// 00820e82  89542450             mov dword ptr [esp + 0x50], edx
// 00820e86  8b5104               mov edx, dword ptr [ecx + 4]
// 00820e89  50                   push eax
// 00820e8a  52                   push edx
// 00820e8b  897c2438             mov dword ptr [esp + 0x38], edi
// 00820e8f  897c2440             mov dword ptr [esp + 0x40], edi
// 00820e93  896c2448             mov dword ptr [esp + 0x48], ebp
// 00820e97  89742450             mov dword ptr [esp + 0x50], esi
// 00820e9b  895c2460             mov dword ptr [esp + 0x60], ebx
// 00820e9f  895c2468             mov dword ptr [esp + 0x68], ebx
// 00820ea3  ff1520b19800         call dword ptr [0x98b120]
// 00820ea9  8d8c2498000000       lea ecx, [esp + 0x98]
// 00820eb0  e89ba90200           call 0x84b850
// 00820eb5  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00820ebc  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 00820ec7  e8c4a80200           call 0x84b790
// 00820ecc  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 00820ed3  64890d00000000       mov dword ptr fs:[0], ecx
// 00820eda  59                   pop ecx
// 00820edb  5f                   pop edi
// 00820edc  5e                   pop esi
// 00820edd  5d                   pop ebp
// 00820ede  5b                   pop ebx
// 00820edf  81c4b8000000         add esp, 0xb8
// 00820ee5  c20400               ret 4
// copied from an identical function in another client (function ?DrawDropMarker@CXTPReportControl@@MAEXPAVCDC@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp