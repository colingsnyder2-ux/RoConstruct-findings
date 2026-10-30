// roc 2009-12 0087cce0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 559 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087cce0
//
// 0087cce0  6aff                 push -1
// 0087cce2  6808189600           push 0x961808
// 0087cce7  64a100000000         mov eax, dword ptr fs:[0]
// 0087cced  50                   push eax
// 0087ccee  83ec40               sub esp, 0x40
// 0087ccf1  53                   push ebx
// 0087ccf2  55                   push ebp
// 0087ccf3  56                   push esi
// 0087ccf4  57                   push edi
// 0087ccf5  a10052b600           mov eax, dword ptr [0xb65200]
// 0087ccfa  33c4                 xor eax, esp
// 0087ccfc  50                   push eax
// 0087ccfd  8d442454             lea eax, [esp + 0x54]
// 0087cd01  64a300000000         mov dword ptr fs:[0], eax
// 0087cd07  8bf9                 mov edi, ecx
// 0087cd09  837c247000           cmp dword ptr [esp + 0x70], 0
// 0087cd0e  751d                 jne 0x87cd2d
// 0087cd10  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0087cd14  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0087cd18  8b742464             mov esi, dword ptr [esp + 0x64]
// 0087cd1c  6a00                 push 0
// 0087cd1e  50                   push eax
// 0087cd1f  51                   push ecx
// 0087cd20  56                   push esi
// 0087cd21  8bcf                 mov ecx, edi
// 0087cd23  e85836f8ff           call 0x800380
// 0087cd28  e9ca010000           jmp 0x87cef7
// 0087cd2d  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0087cd31  8d97a4000000         lea edx, [edi + 0xa4]
// 0087cd37  52                   push edx
// 0087cd38  55                   push ebp
// 0087cd39  8d4c244c             lea ecx, [esp + 0x4c]
// 0087cd3d  e81ee9fcff           call 0x84b660
// 0087cd42  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0087cd46  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0087cd4c  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0087cd52  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0087cd58  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 0087cd5e  89442428             mov dword ptr [esp + 0x28], eax
// 0087cd62  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087cd68  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0087cd70  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0087cd74  89542430             mov dword ptr [esp + 0x30], edx
// 0087cd78  83f8ff               cmp eax, -1
// 0087cd7b  750f                 jne 0x87cd8c
// 0087cd7d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0087cd83  85c9                 test ecx, ecx
// 0087cd85  7405                 je 0x87cd8c
// 0087cd87  e82498f7ff           call 0x7f65b0
// 0087cd8c  89442468             mov dword ptr [esp + 0x68], eax
// 0087cd90  8b442470             mov eax, dword ptr [esp + 0x70]
// 0087cd94  50                   push eax
// 0087cd95  56                   push esi
// 0087cd96  55                   push ebp
// 0087cd97  8d4c2420             lea ecx, [esp + 0x20]
// 0087cd9b  51                   push ecx
// 0087cd9c  8bcf                 mov ecx, edi
// 0087cd9e  e8dd35f8ff           call 0x800380
// 0087cda3  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 0087cda9  039ea0010000         add ebx, dword ptr [esi + 0x1a0]
// 0087cdaf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087cdb3  2bc1                 sub eax, ecx
// 0087cdb5  8bce                 mov ecx, esi
// 0087cdb7  895c2424             mov dword ptr [esp + 0x24], ebx
// 0087cdbb  89442434             mov dword ptr [esp + 0x34], eax
// 0087cdbf  e80c01efff           call 0x76ced0
// 0087cdc4  8b16                 mov edx, dword ptr [esi]
// 0087cdc6  8bd8                 mov ebx, eax
// 0087cdc8  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0087cdcb  f7db                 neg ebx
// 0087cdcd  1bdb                 sbb ebx, ebx
// 0087cdcf  8bce                 mov ecx, esi
// 0087cdd1  f7db                 neg ebx
// 0087cdd3  ffd0                 call eax
// 0087cdd5  837c246800           cmp dword ptr [esp + 0x68], 0
// 0087cdda  8944246c             mov dword ptr [esp + 0x6c], eax
// 0087cdde  745b                 je 0x87ce3b
// 0087cde0  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087cde4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087cde8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087cdec  6aff                 push -1
// 0087cdee  8954241c             mov dword ptr [esp + 0x1c], edx
// 0087cdf2  894c2418             mov dword ptr [esp + 0x18], ecx
// 0087cdf6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087cdfa  6aff                 push -1
// 0087cdfc  8d54241c             lea edx, [esp + 0x1c]
// 0087ce00  52                   push edx
// 0087ce01  89442428             mov dword ptr [esp + 0x28], eax
// 0087ce05  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0087ce09  ff1558ca9800         call dword ptr [0x98ca58]
// 0087ce0f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087ce13  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087ce17  6a05                 push 5
// 0087ce19  6a05                 push 5
// 0087ce1b  83ec10               sub esp, 0x10
// 0087ce1e  8bc4                 mov eax, esp
// 0087ce20  8908                 mov dword ptr [eax], ecx
// 0087ce22  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087ce26  895004               mov dword ptr [eax + 4], edx
// 0087ce29  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087ce2d  894808               mov dword ptr [eax + 8], ecx
// 0087ce30  55                   push ebp
// 0087ce31  8bcf                 mov ecx, edi
// 0087ce33  89500c               mov dword ptr [eax + 0xc], edx
// 0087ce36  e82519f8ff           call 0x7fe760
// 0087ce3b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087ce3f  8b16                 mov edx, dword ptr [esi]
// 0087ce41  83c103               add ecx, 3
// 0087ce44  83ec10               sub esp, 0x10
// 0087ce47  8bc4                 mov eax, esp
// 0087ce49  8908                 mov dword ptr [eax], ecx
// 0087ce4b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087ce4f  41                   inc ecx
// 0087ce50  894804               mov dword ptr [eax + 4], ecx
// 0087ce53  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087ce57  41                   inc ecx
// 0087ce58  894808               mov dword ptr [eax + 8], ecx
// 0087ce5b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087ce5f  49                   dec ecx
// 0087ce60  89480c               mov dword ptr [eax + 0xc], ecx
// 0087ce63  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0087ce69  55                   push ebp
// 0087ce6a  8bce                 mov ecx, esi
// 0087ce6c  ffd0                 call eax
// 0087ce6e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0087ce72  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087ce76  8b17                 mov edx, dword ptr [edi]
// 0087ce78  8b921c010000         mov edx, dword ptr [edx + 0x11c]
// 0087ce7e  53                   push ebx
// 0087ce7f  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 0087ce83  56                   push esi
// 0087ce84  53                   push ebx
// 0087ce85  83ec10               sub esp, 0x10
// 0087ce88  8bc4                 mov eax, esp
// 0087ce8a  8908                 mov dword ptr [eax], ecx
// 0087ce8c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087ce90  894804               mov dword ptr [eax + 4], ecx
// 0087ce93  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087ce97  894808               mov dword ptr [eax + 8], ecx
// 0087ce9a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087ce9e  89480c               mov dword ptr [eax + 0xc], ecx
// 0087cea1  55                   push ebp
// 0087cea2  8bcf                 mov ecx, edi
// 0087cea4  ffd2                 call edx
// 0087cea6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087ceaa  8b17                 mov edx, dword ptr [edi]
// 0087ceac  8b9218010000         mov edx, dword ptr [edx + 0x118]
// 0087ceb2  56                   push esi
// 0087ceb3  53                   push ebx
// 0087ceb4  83ec10               sub esp, 0x10
// 0087ceb7  8bc4                 mov eax, esp
// 0087ceb9  8908                 mov dword ptr [eax], ecx
// 0087cebb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087cebf  894804               mov dword ptr [eax + 4], ecx
// 0087cec2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087cec6  894808               mov dword ptr [eax + 8], ecx
// 0087cec9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087cecd  89480c               mov dword ptr [eax + 0xc], ecx
// 0087ced0  55                   push ebp
// 0087ced1  8bcf                 mov ecx, edi
// 0087ced3  ffd2                 call edx
// 0087ced5  8b742464             mov esi, dword ptr [esp + 0x64]
// 0087ced9  8d4c2444             lea ecx, [esp + 0x44]
// 0087cedd  c70600000000         mov dword ptr [esi], 0
// 0087cee3  c7460400000000       mov dword ptr [esi + 4], 0
// 0087ceea  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0087cef2  e8e9e7fcff           call 0x84b6e0
// 0087cef7  8bc6                 mov eax, esi
// 0087cef9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0087cefd  64890d00000000       mov dword ptr fs:[0], ecx
// 0087cf04  59                   pop ecx
// 0087cf05  5f                   pop edi
// 0087cf06  5e                   pop esi
// 0087cf07  5d                   pop ebp
// 0087cf08  5b                   pop ebx
// 0087cf09  83c44c               add esp, 0x4c
// 0087cf0c  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDefaultTheme.cpp