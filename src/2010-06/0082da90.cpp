// roc 2010-06 0082da90  unit: CXTPRibbonTheme  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082da90
//
// 0082da90  83ec60               sub esp, 0x60
// 0082da93  53                   push ebx
// 0082da94  55                   push ebp
// 0082da95  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0082da99  56                   push esi
// 0082da9a  57                   push edi
// 0082da9b  8bf1                 mov esi, ecx
// 0082da9d  55                   push ebp
// 0082da9e  8d4c2414             lea ecx, [esp + 0x14]
// 0082daa2  e86918fdff           call 0x7ff310
// 0082daa7  8bcd                 mov ecx, ebp
// 0082daa9  e8b2b30100           call 0x848e60
// 0082daae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0082dab2  85c0                 test eax, eax
// 0082dab4  740a                 je 0x82dac0
// 0082dab6  038ec0050000         add ecx, dword ptr [esi + 0x5c0]
// 0082dabc  894c2414             mov dword ptr [esp + 0x14], ecx
// 0082dac0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082dac4  8b8650060000         mov eax, dword ptr [esi + 0x650]
// 0082daca  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0082dace  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0082dad2  03c1                 add eax, ecx
// 0082dad4  894c2424             mov dword ptr [esp + 0x24], ecx
// 0082dad8  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0082dade  89542420             mov dword ptr [esp + 0x20], edx
// 0082dae2  89542430             mov dword ptr [esp + 0x30], edx
// 0082dae6  51                   push ecx
// 0082dae7  89442430             mov dword ptr [esp + 0x30], eax
// 0082daeb  89442438             mov dword ptr [esp + 0x38], eax
// 0082daef  8b442420             mov eax, dword ptr [esp + 0x20]
// 0082daf3  8d542424             lea edx, [esp + 0x24]
// 0082daf7  52                   push edx
// 0082daf8  8bcb                 mov ecx, ebx
// 0082dafa  897c2430             mov dword ptr [esp + 0x30], edi
// 0082dafe  897c2440             mov dword ptr [esp + 0x40], edi
// 0082db02  89442444             mov dword ptr [esp + 0x44], eax
// 0082db06  e833acf7ff           call 0x7a873e
// 0082db0b  8b866c060000         mov eax, dword ptr [esi + 0x66c]
// 0082db11  50                   push eax
// 0082db12  8d4c2434             lea ecx, [esp + 0x34]
// 0082db16  51                   push ecx
// 0082db17  8bcb                 mov ecx, ebx
// 0082db19  e820acf7ff           call 0x7a873e
// 0082db1e  8bcd                 mov ecx, ebp
// 0082db20  e88bbc0100           call 0x8497b0
// 0082db25  85c0                 test eax, eax
// 0082db27  0f8491000000         je 0x82dbbe
// 0082db2d  8b952c020000         mov edx, dword ptr [ebp + 0x22c]
// 0082db33  8b8d34020000         mov ecx, dword ptr [ebp + 0x234]
// 0082db39  8b8530020000         mov eax, dword ptr [ebp + 0x230]
// 0082db3f  89542440             mov dword ptr [esp + 0x40], edx
// 0082db43  8b9538020000         mov edx, dword ptr [ebp + 0x238]
// 0082db49  894c2448             mov dword ptr [esp + 0x48], ecx
// 0082db4d  68485ca600           push 0xa65c48
// 0082db52  8bce                 mov ecx, esi
// 0082db54  89442448             mov dword ptr [esp + 0x48], eax
// 0082db58  89542450             mov dword ptr [esp + 0x50], edx
// 0082db5c  e89f460000           call 0x832200
// 0082db61  8bf8                 mov edi, eax
// 0082db63  85ff                 test edi, edi
// 0082db65  7457                 je 0x82dbbe
// 0082db67  6a01                 push 1
// 0082db69  6a00                 push 0
// 0082db6b  8d442468             lea eax, [esp + 0x68]
// 0082db6f  bd03000000           mov ebp, 3
// 0082db74  50                   push eax
// 0082db75  8bcf                 mov ecx, edi
// 0082db77  896c2468             mov dword ptr [esp + 0x68], ebp
// 0082db7b  e8b06f0600           call 0x894b30
// 0082db80  83ec10               sub esp, 0x10
// 0082db83  8bcc                 mov ecx, esp
// 0082db85  8929                 mov dword ptr [ecx], ebp
// 0082db87  8bd5                 mov edx, ebp
// 0082db89  895104               mov dword ptr [ecx + 4], edx
// 0082db8c  895108               mov dword ptr [ecx + 8], edx
// 0082db8f  89510c               mov dword ptr [ecx + 0xc], edx
// 0082db92  8b10                 mov edx, dword ptr [eax]
// 0082db94  83ec10               sub esp, 0x10
// 0082db97  8bcc                 mov ecx, esp
// 0082db99  8911                 mov dword ptr [ecx], edx
// 0082db9b  8b5004               mov edx, dword ptr [eax + 4]
// 0082db9e  895104               mov dword ptr [ecx + 4], edx
// 0082dba1  8b5008               mov edx, dword ptr [eax + 8]
// 0082dba4  8b400c               mov eax, dword ptr [eax + 0xc]
// 0082dba7  895108               mov dword ptr [ecx + 8], edx
// 0082dbaa  89410c               mov dword ptr [ecx + 0xc], eax
// 0082dbad  8d4c2460             lea ecx, [esp + 0x60]
// 0082dbb1  51                   push ecx
// 0082dbb2  53                   push ebx
// 0082dbb3  8bcf                 mov ecx, edi
// 0082dbb5  e846680600           call 0x894400
// 0082dbba  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 0082dbbe  8bcd                 mov ecx, ebp
// 0082dbc0  e82bb40100           call 0x848ff0
// 0082dbc5  85c0                 test eax, eax
// 0082dbc7  754b                 jne 0x82dc14
// 0082dbc9  8bcd                 mov ecx, ebp
// 0082dbcb  e8e0bb0100           call 0x8497b0
// 0082dbd0  85c0                 test eax, eax
// 0082dbd2  7540                 jne 0x82dc14
// 0082dbd4  8b9680060000         mov edx, dword ptr [esi + 0x680]
// 0082dbda  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082dbde  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082dbe2  52                   push edx
// 0082dbe3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082dbe7  50                   push eax
// 0082dbe8  83c1fe               add ecx, -2
// 0082dbeb  51                   push ecx
// 0082dbec  52                   push edx
// 0082dbed  53                   push ebx
// 0082dbee  8bce                 mov ecx, esi
// 0082dbf0  e84bf7f7ff           call 0x7ad340
// 0082dbf5  8b867c060000         mov eax, dword ptr [esi + 0x67c]
// 0082dbfb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082dbff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0082dc03  50                   push eax
// 0082dc04  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082dc08  51                   push ecx
// 0082dc09  4a                   dec edx
// 0082dc0a  52                   push edx
// 0082dc0b  50                   push eax
// 0082dc0c  53                   push ebx
// 0082dc0d  8bce                 mov ecx, esi
// 0082dc0f  e82cf7f7ff           call 0x7ad340
// 0082dc14  5f                   pop edi
// 0082dc15  5e                   pop esi
// 0082dc16  5d                   pop ebp
// 0082dc17  5b                   pop ebx
// 0082dc18  83c460               add esp, 0x60
// 0082dc1b  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillRibbonBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
