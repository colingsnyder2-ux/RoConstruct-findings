// roc 2009-12 00407630  unit: VCApp::?$CComObject  size: 642 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407630
//
// 00407630  55                   push ebp
// 00407631  8bec                 mov ebp, esp
// 00407633  81ec40090000         sub esp, 0x940
// 00407639  53                   push ebx
// 0040763a  33db                 xor ebx, ebx
// 0040763c  56                   push esi
// 0040763d  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00407640  57                   push edi
// 00407641  c745ec7cf99900       mov dword ptr [ebp - 0x14], 0x99f97c
// 00407648  895df0               mov dword ptr [ebp - 0x10], ebx
// 0040764b  895df4               mov dword ptr [ebp - 0xc], ebx
// 0040764e  895df8               mov dword ptr [ebp - 8], ebx
// 00407651  3bf3                 cmp esi, ebx
// 00407653  7423                 je 0x407678
// 00407655  8b06                 mov eax, dword ptr [esi]
// 00407657  3bc3                 cmp eax, ebx
// 00407659  741d                 je 0x407678
// 0040765b  eb03                 jmp 0x407660
// 0040765d  8d4900               lea ecx, [ecx]
// 00407660  8b4e04               mov ecx, dword ptr [esi + 4]
// 00407663  51                   push ecx
// 00407664  50                   push eax
// 00407665  8d55ec               lea edx, [ebp - 0x14]
// 00407668  52                   push edx
// 00407669  e842daffff           call 0x4050b0
// 0040766e  8b4608               mov eax, dword ptr [esi + 8]
// 00407671  83c608               add esi, 8
// 00407674  3bc3                 cmp eax, ebx
// 00407676  75e8                 jne 0x407660
// 00407678  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0040767b  8b01                 mov eax, dword ptr [ecx]
// 0040767d  8b4014               mov eax, dword ptr [eax + 0x14]
// 00407680  8d55ec               lea edx, [ebp - 0x14]
// 00407683  52                   push edx
// 00407684  ffd0                 call eax
// 00407686  8bf0                 mov esi, eax
// 00407688  3bf3                 cmp esi, ebx
// 0040768a  0f8c09020000         jl 0x407899
// 00407690  8b3d24c0b900         mov edi, dword ptr [0xb9c024]
// 00407696  6804010000           push 0x104
// 0040769b  8d8de8feffff         lea ecx, [ebp - 0x118]
// 004076a1  51                   push ecx
// 004076a2  57                   push edi
// 004076a3  895d14               mov dword ptr [ebp + 0x14], ebx
// 004076a6  ff15fcb19800         call dword ptr [0x98b1fc]
// 004076ac  3bc3                 cmp eax, ebx
// 004076ae  750a                 jne 0x4076ba
// 004076b0  e8abb5ffff           call 0x402c60
// 004076b5  e9d5010000           jmp 0x40788f
// 004076ba  3d04010000           cmp eax, 0x104
// 004076bf  7524                 jne 0x4076e5
// 004076c1  8d4d14               lea ecx, [ebp + 0x14]
// 004076c4  e8b7c1ffff           call 0x403880
// 004076c9  8d4dec               lea ecx, [ebp - 0x14]
// 004076cc  e87fcfffff           call 0x404650
// 004076d1  b87a000780           mov eax, 0x8007007a
// 004076d6  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004076dc  5f                   pop edi
// 004076dd  5e                   pop esi
// 004076de  5b                   pop ebx
// 004076df  8be5                 mov esp, ebp
// 004076e1  5d                   pop ebp
// 004076e2  c21000               ret 0x10
// 004076e5  8d95e8feffff         lea edx, [ebp - 0x118]
// 004076eb  52                   push edx
// 004076ec  ff1518b29800         call dword ptr [0x98b218]
// 004076f2  40                   inc eax
// 004076f3  6a02                 push 2
// 004076f5  50                   push eax
// 004076f6  894508               mov dword ptr [ebp + 8], eax
// 004076f9  8d4508               lea eax, [ebp + 8]
// 004076fc  50                   push eax
// 004076fd  e87eb3ffff           call 0x402a80
// 00407702  83c40c               add esp, 0xc
// 00407705  85c0                 test eax, eax
// 00407707  7c44                 jl 0x40774d
// 00407709  8b7508               mov esi, dword ptr [ebp + 8]
// 0040770c  81fe00040000         cmp esi, 0x400
// 00407712  7f18                 jg 0x40772c
// 00407714  56                   push esi
// 00407715  e8d6c3ffff           call 0x403af0
// 0040771a  83c404               add esp, 4
// 0040771d  84c0                 test al, al
// 0040771f  740b                 je 0x40772c
// 00407721  8bc6                 mov eax, esi
// 00407723  e818d33e00           call 0x7f4a40
// 00407728  8bc4                 mov eax, esp
// 0040772a  eb09                 jmp 0x407735
// 0040772c  56                   push esi
// 0040772d  8d4d14               lea ecx, [ebp + 0x14]
// 00407730  e85bc9ffff           call 0x404090
// 00407735  6a03                 push 3
// 00407737  d1ee                 shr esi, 1
// 00407739  56                   push esi
// 0040773a  8d8de8feffff         lea ecx, [ebp - 0x118]
// 00407740  51                   push ecx
// 00407741  50                   push eax
// 00407742  e889b3ffff           call 0x402ad0
// 00407747  8bf0                 mov esi, eax
// 00407749  3bf3                 cmp esi, ebx
// 0040774b  7524                 jne 0x407771
// 0040774d  8d4d14               lea ecx, [ebp + 0x14]
// 00407750  e82bc1ffff           call 0x403880
// 00407755  8d4dec               lea ecx, [ebp - 0x14]
// 00407758  e8f3ceffff           call 0x404650
// 0040775d  b80e000780           mov eax, 0x8007000e
// 00407762  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407768  5f                   pop edi
// 00407769  5e                   pop esi
// 0040776a  5b                   pop ebx
// 0040776b  8be5                 mov esp, ebp
// 0040776d  5d                   pop ebp
// 0040776e  c21000               ret 0x10
// 00407771  56                   push esi
// 00407772  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00407778  6808020000           push 0x208
// 0040777d  52                   push edx
// 0040777e  e8fdb5ffff           call 0x402d80
// 00407783  83c40c               add esp, 0xc
// 00407786  3bfb                 cmp edi, ebx
// 00407788  7413                 je 0x40779d
// 0040778a  53                   push ebx
// 0040778b  ff151cb29800         call dword ptr [0x98b21c]
// 00407791  3bf8                 cmp edi, eax
// 00407793  7408                 je 0x40779d
// 00407795  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 0040779b  eb79                 jmp 0x407816
// 0040779d  8d85c0f6ffff         lea eax, [ebp - 0x940]
// 004077a3  50                   push eax
// 004077a4  8d8dd2faffff         lea ecx, [ebp - 0x52e]
// 004077aa  ba22000000           mov edx, 0x22
// 004077af  680b020000           push 0x20b
// 004077b4  51                   push ecx
// 004077b5  668995d0faffff       mov word ptr [ebp - 0x530], dx
// 004077bc  e88fb3ffff           call 0x402b50
// 004077c1  83c40c               add esp, 0xc
// 004077c4  84c0                 test al, al
// 004077c6  7524                 jne 0x4077ec
// 004077c8  8d4d14               lea ecx, [ebp + 0x14]
// 004077cb  e8b0c0ffff           call 0x403880
// 004077d0  8d4dec               lea ecx, [ebp - 0x14]
// 004077d3  e878ceffff           call 0x404650
// 004077d8  b805400080           mov eax, 0x80004005
// 004077dd  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004077e3  5f                   pop edi
// 004077e4  5e                   pop esi
// 004077e5  5b                   pop ebx
// 004077e6  8be5                 mov esp, ebp
// 004077e8  5d                   pop ebp
// 004077e9  c21000               ret 0x10
// 004077ec  8d95d0faffff         lea edx, [ebp - 0x530]
// 004077f2  52                   push edx
// 004077f3  ff1538b29800         call dword ptr [0x98b238]
// 004077f9  b922000000           mov ecx, 0x22
// 004077fe  33d2                 xor edx, edx
// 00407800  66898c45d0faffff     mov word ptr [ebp + eax*2 - 0x530], cx
// 00407808  66899445d2faffff     mov word ptr [ebp + eax*2 - 0x52e], dx
// 00407810  8d85d0faffff         lea eax, [ebp - 0x530]
// 00407816  50                   push eax
// 00407817  6864fc9900           push 0x99fc64
// 0040781c  8d4dec               lea ecx, [ebp - 0x14]
// 0040781f  51                   push ecx
// 00407820  e88bd8ffff           call 0x4050b0
// 00407825  8bf8                 mov edi, eax
// 00407827  3bfb                 cmp edi, ebx
// 00407829  7d21                 jge 0x40784c
// 0040782b  8d4d14               lea ecx, [ebp + 0x14]
// 0040782e  e84dc0ffff           call 0x403880
// 00407833  8d4dec               lea ecx, [ebp - 0x14]
// 00407836  e815ceffff           call 0x404650
// 0040783b  8bc7                 mov eax, edi
// 0040783d  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 00407843  5f                   pop edi
// 00407844  5e                   pop esi
// 00407845  5b                   pop ebx
// 00407846  8be5                 mov esp, ebp
// 00407848  5d                   pop ebp
// 00407849  c21000               ret 0x10
// 0040784c  8d95c0f6ffff         lea edx, [ebp - 0x940]
// 00407852  52                   push edx
// 00407853  684cfc9900           push 0x99fc4c
// 00407858  8d45ec               lea eax, [ebp - 0x14]
// 0040785b  50                   push eax
// 0040785c  e84fd8ffff           call 0x4050b0
// 00407861  8bf8                 mov edi, eax
// 00407863  3bfb                 cmp edi, ebx
// 00407865  7cc4                 jl 0x40782b
// 00407867  6838fc9900           push 0x99fc38
// 0040786c  395d10               cmp dword ptr [ebp + 0x10], ebx
// 0040786f  7410                 je 0x407881
// 00407871  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00407874  51                   push ecx
// 00407875  56                   push esi
// 00407876  8d55ec               lea edx, [ebp - 0x14]
// 00407879  52                   push edx
// 0040787a  e8e1faffff           call 0x407360
// 0040787f  eb0e                 jmp 0x40788f
// 00407881  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00407884  50                   push eax
// 00407885  56                   push esi
// 00407886  8d4dec               lea ecx, [ebp - 0x14]
// 00407889  51                   push ecx
// 0040788a  e8d1fbffff           call 0x407460
// 0040788f  8d4d14               lea ecx, [ebp + 0x14]
// 00407892  8bf0                 mov esi, eax
// 00407894  e8e7bfffff           call 0x403880
// 00407899  8d4dec               lea ecx, [ebp - 0x14]
// 0040789c  e8afcdffff           call 0x404650
// 004078a1  8bc6                 mov eax, esi
// 004078a3  8da5b4f6ffff         lea esp, [ebp - 0x94c]
// 004078a9  5f                   pop edi
// 004078aa  5e                   pop esi
// 004078ab  5b                   pop ebx
// 004078ac  8be5                 mov esp, ebp
// 004078ae  5d                   pop ebp
// 004078af  c21000               ret 0x10
// copied from an identical function in another client (function ?roc_update_registry_from_resource_s@@YGJPAVCAtlModule@ATL@@PB_WHPAU_ATL_REGMAP_ENTRY@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-rtm roc_atl_static_registry_wide_dc589bf9570d98db.cpp