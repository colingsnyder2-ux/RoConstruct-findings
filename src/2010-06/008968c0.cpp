// roc 2010-06 008968c0  unit: CXTColorSelectorCtrl  size: 607 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008968c0
//
// 008968c0  6aff                 push -1
// 008968c2  68f9bc9b00           push 0x9bbcf9
// 008968c7  64a100000000         mov eax, dword ptr fs:[0]
// 008968cd  50                   push eax
// 008968ce  53                   push ebx
// 008968cf  55                   push ebp
// 008968d0  56                   push esi
// 008968d1  57                   push edi
// 008968d2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008968d7  33c4                 xor eax, esp
// 008968d9  50                   push eax
// 008968da  8d442414             lea eax, [esp + 0x14]
// 008968de  64a300000000         mov dword ptr fs:[0], eax
// 008968e4  8bf1                 mov esi, ecx
// 008968e6  8b442434             mov eax, dword ptr [esp + 0x34]
// 008968ea  894678               mov dword ptr [esi + 0x78], eax
// 008968ed  85c0                 test eax, eax
// 008968ef  0f8470010000         je 0x896a65
// 008968f5  8b4020               mov eax, dword ptr [eax + 0x20]
// 008968f8  50                   push eax
// 008968f9  e8f2fcffff           call 0x8965f0
// 008968fe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00896902  8b542440             mov edx, dword ptr [esp + 0x40]
// 00896906  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0089690a  8d442424             lea eax, [esp + 0x24]
// 0089690e  50                   push eax
// 0089690f  8dbe84000000         lea edi, [esi + 0x84]
// 00896915  57                   push edi
// 00896916  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 0089691c  898eb0000000         mov dword ptr [esi + 0xb0], ecx
// 00896922  8996b4000000         mov dword ptr [esi + 0xb4], edx
// 00896928  ff1548bc9e00         call dword ptr [0x9ebc48]
// 0089692e  8b5e6c               mov ebx, dword ptr [esi + 0x6c]
// 00896931  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00896934  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0089693a  0fafcb               imul ecx, ebx
// 0089693d  038e9c000000         add ecx, dword ptr [esi + 0x9c]
// 00896943  8b96a0000000         mov edx, dword ptr [esi + 0xa0]
// 00896949  038e94000000         add ecx, dword ptr [esi + 0x94]
// 0089694f  039698000000         add edx, dword ptr [esi + 0x98]
// 00896955  030f                 add ecx, dword ptr [edi]
// 00896957  898688000000         mov dword ptr [esi + 0x88], eax
// 0089695d  898e8c000000         mov dword ptr [esi + 0x8c], ecx
// 00896963  8d0c02               lea ecx, [edx + eax]
// 00896966  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0089696c  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00896972  a810                 test al, 0x10
// 00896974  7509                 jne 0x89697f
// 00896976  83c11b               add ecx, 0x1b
// 00896979  898e90000000         mov dword ptr [esi + 0x90], ecx
// 0089697f  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00896985  85c9                 test ecx, ecx
// 00896987  7409                 je 0x896992
// 00896989  83c802               or eax, 2
// 0089698c  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00896992  f686a400000002       test byte ptr [esi + 0xa4], 2
// 00896999  7425                 je 0x8969c0
// 0089699b  b828000000           mov eax, 0x28
// 008969a0  85c9                 test ecx, ecx
// 008969a2  7406                 je 0x8969aa
// 008969a4  8b8660010000         mov eax, dword ptr [esi + 0x160]
// 008969aa  8d4403ff             lea eax, [ebx + eax - 1]
// 008969ae  99                   cdq 
// 008969af  f7fb                 idiv ebx
// 008969b1  0faf8680000000       imul eax, dword ptr [esi + 0x80]
// 008969b8  018690000000         add dword ptr [esi + 0x90], eax
// 008969be  eb10                 jmp 0x8969d0
// 008969c0  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008969c6  8d4c0016             lea ecx, [eax + eax + 0x16]
// 008969ca  018e90000000         add dword ptr [esi + 0x90], ecx
// 008969d0  e88912f1ff           call 0x7a7c5e
// 008969d5  68007f0000           push 0x7f00
// 008969da  6a00                 push 0
// 008969dc  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 008969e2  6a00                 push 0
// 008969e4  6a00                 push 0
// 008969e6  50                   push eax
// 008969e7  6a00                 push 0
// 008969e9  e87819f1ff           call 0x7a8366
// 008969ee  50                   push eax
// 008969ef  8d4c2438             lea ecx, [esp + 0x38]
// 008969f3  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 008969f9  f686a400000004       test byte ptr [esi + 0xa4], 4
// 00896a00  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00896a08  7426                 je 0x896a30
// 00896a0a  8386900000001b       add dword ptr [esi + 0x90], 0x1b
// 00896a11  833dac66c20000       cmp dword ptr [0xc266ac], 0
// 00896a18  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00896a1e  7e10                 jle 0x896a30
// 00896a20  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00896a26  8d440204             lea eax, [edx + eax + 4]
// 00896a2a  898690000000         mov dword ptr [esi + 0x90], eax
// 00896a30  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00896a33  6a00                 push 0
// 00896a35  6a00                 push 0
// 00896a37  51                   push ecx
// 00896a38  57                   push edi
// 00896a39  6800000040           push 0x40000000
// 00896a3e  68fe08a000           push 0xa008fe
// 00896a43  8d4c244c             lea ecx, [esp + 0x4c]
// 00896a47  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00896a4d  50                   push eax
// 00896a4e  6a00                 push 0
// 00896a50  8bce                 mov ecx, esi
// 00896a52  e8bb0ff1ff           call 0x7a7a12
// 00896a57  85c0                 test eax, eax
// 00896a59  7511                 jne 0x896a6c
// 00896a5b  8d4c2434             lea ecx, [esp + 0x34]
// 00896a5f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00896a65  33c0                 xor eax, eax
// 00896a67  e99d000000           jmp 0x896b09
// 00896a6c  8bce                 mov ecx, esi
// 00896a6e  85ed                 test ebp, ebp
// 00896a70  7963                 jns 0x896ad5
// 00896a72  e8cb12f1ff           call 0x7a7d42
// 00896a77  8b5620               mov edx, dword ptr [esi + 0x20]
// 00896a7a  8b1d00bc9e00         mov ebx, dword ptr [0x9ebc00]
// 00896a80  6a00                 push 0
// 00896a82  6af8                 push -8
// 00896a84  52                   push edx
// 00896a85  ffd3                 call ebx
// 00896a87  6a00                 push 0
// 00896a89  6800000080           push 0x80000000
// 00896a8e  6800000040           push 0x40000000
// 00896a93  8bce                 mov ecx, esi
// 00896a95  e88016f1ff           call 0x7a811a
// 00896a9a  8b4678               mov eax, dword ptr [esi + 0x78]
// 00896a9d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00896aa0  8b5620               mov edx, dword ptr [esi + 0x20]
// 00896aa3  51                   push ecx
// 00896aa4  6af8                 push -8
// 00896aa6  52                   push edx
// 00896aa7  ffd3                 call ebx
// 00896aa9  8b470c               mov eax, dword ptr [edi + 0xc]
// 00896aac  2b4704               sub eax, dword ptr [edi + 4]
// 00896aaf  8b4f08               mov ecx, dword ptr [edi + 8]
// 00896ab2  2b0f                 sub ecx, dword ptr [edi]
// 00896ab4  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 00896aba  6850020000           push 0x250
// 00896abf  50                   push eax
// 00896ac0  8b07                 mov eax, dword ptr [edi]
// 00896ac2  51                   push ecx
// 00896ac3  8b0d78c79e00         mov ecx, dword ptr [0x9ec778]
// 00896ac9  52                   push edx
// 00896aca  50                   push eax
// 00896acb  51                   push ecx
// 00896acc  8bce                 mov ecx, esi
// 00896ace  e89912f1ff           call 0x7a7d6c
// 00896ad3  eb07                 jmp 0x896adc
// 00896ad5  6a08                 push 8
// 00896ad7  e8ac11f1ff           call 0x7a7c88
// 00896adc  e8df19f8ff           call 0x8184c0
// 00896ae1  05dc000000           add eax, 0xdc
// 00896ae6  7403                 je 0x896aeb
// 00896ae8  8b4004               mov eax, dword ptr [eax + 4]
// 00896aeb  8b5620               mov edx, dword ptr [esi + 0x20]
// 00896aee  6a01                 push 1
// 00896af0  50                   push eax
// 00896af1  6a30                 push 0x30
// 00896af3  52                   push edx
// 00896af4  ff1554ba9e00         call dword ptr [0x9eba54]
// 00896afa  8d4c2434             lea ecx, [esp + 0x34]
// 00896afe  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00896b04  b801000000           mov eax, 1
// 00896b09  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00896b0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00896b14  59                   pop ecx
// 00896b15  5f                   pop edi
// 00896b16  5e                   pop esi
// 00896b17  5d                   pop ebp
// 00896b18  5b                   pop ebx
// 00896b19  83c40c               add esp, 0xc
// 00896b1c  c22000               ret 0x20
// copied from an identical function in another client (function ?Create@CXTColorSelectorCtrl@@QAEHVCRect@@PAVCWnd@@KKK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp