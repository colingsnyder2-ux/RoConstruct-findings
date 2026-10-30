// roc 2011-06 008feb80  unit: CXTPRibbonSystemPopupBar  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008feb80
//
// 008feb80  6aff                 push -1
// 008feb82  68d2f4a000           push 0xa0f4d2
// 008feb87  64a100000000         mov eax, dword ptr fs:[0]
// 008feb8d  50                   push eax
// 008feb8e  83ec44               sub esp, 0x44
// 008feb91  53                   push ebx
// 008feb92  55                   push ebp
// 008feb93  56                   push esi
// 008feb94  57                   push edi
// 008feb95  a12058c900           mov eax, dword ptr [0xc95820]
// 008feb9a  33c4                 xor eax, esp
// 008feb9c  50                   push eax
// 008feb9d  8d442458             lea eax, [esp + 0x58]
// 008feba1  64a300000000         mov dword ptr fs:[0], eax
// 008feba7  8bf1                 mov esi, ecx
// 008feba9  56                   push esi
// 008febaa  8d4c243c             lea ecx, [esp + 0x3c]
// 008febae  e8dde1f5ff           call 0x85cd90
// 008febb3  8bce                 mov ecx, esi
// 008febb5  e896bff1ff           call 0x81ab50
// 008febba  8be8                 mov ebp, eax
// 008febbc  6830d6ad00           push 0xadd630
// 008febc1  8bcd                 mov ecx, ebp
// 008febc3  e8c806f9ff           call 0x88f290
// 008febc8  8bf8                 mov edi, eax
// 008febca  85ff                 test edi, edi
// 008febcc  0f84dd010000         je 0x8fedaf
// 008febd2  6a01                 push 1
// 008febd4  6a00                 push 0
// 008febd6  8d442450             lea eax, [esp + 0x50]
// 008febda  50                   push eax
// 008febdb  8bcf                 mov ecx, edi
// 008febdd  e82eebfeff           call 0x8ed710
// 008febe2  8b10                 mov edx, dword ptr [eax]
// 008febe4  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008febe8  6aff                 push -1
// 008febea  8d8e00020000         lea ecx, [esi + 0x200]
// 008febf0  51                   push ecx
// 008febf1  83ec10               sub esp, 0x10
// 008febf4  8bcc                 mov ecx, esp
// 008febf6  8911                 mov dword ptr [ecx], edx
// 008febf8  8b5004               mov edx, dword ptr [eax + 4]
// 008febfb  895104               mov dword ptr [ecx + 4], edx
// 008febfe  8b5008               mov edx, dword ptr [eax + 8]
// 008fec01  8b400c               mov eax, dword ptr [eax + 0xc]
// 008fec04  895108               mov dword ptr [ecx + 8], edx
// 008fec07  89410c               mov dword ptr [ecx + 0xc], eax
// 008fec0a  8d4c2450             lea ecx, [esp + 0x50]
// 008fec0e  51                   push ecx
// 008fec0f  53                   push ebx
// 008fec10  8bcf                 mov ecx, edi
// 008fec12  e839f0feff           call 0x8edc50
// 008fec17  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 008fec1d  52                   push edx
// 008fec1e  e83dfaffff           call 0x8fe660
// 008fec23  50                   push eax
// 008fec24  e813b8f0ff           call 0x80a43c
// 008fec29  83c408               add esp, 8
// 008fec2c  85c0                 test eax, eax
// 008fec2e  0f847b010000         je 0x8fedaf
// 008fec34  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008fec3a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008fec40  50                   push eax
// 008fec41  e80a70faff           call 0x8a5c50
// 008fec46  50                   push eax
// 008fec47  e8f0b7f0ff           call 0x80a43c
// 008fec4c  8bf8                 mov edi, eax
// 008fec4e  83c408               add esp, 8
// 008fec51  85ff                 test edi, edi
// 008fec53  0f8456010000         je 0x8fedaf
// 008fec59  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008fec5f  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008fec65  894c2418             mov dword ptr [esp + 0x18], ecx
// 008fec69  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 008fec6f  8954241c             mov dword ptr [esp + 0x1c], edx
// 008fec73  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 008fec79  894c2420             mov dword ptr [esp + 0x20], ecx
// 008fec7d  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008fec83  89542424             mov dword ptr [esp + 0x24], edx
// 008fec87  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008fec8d  8d4c2418             lea ecx, [esp + 0x18]
// 008fec91  51                   push ecx
// 008fec92  8bc8                 mov ecx, eax
// 008fec94  e865b9f0ff           call 0x80a5fe
// 008fec99  8d542418             lea edx, [esp + 0x18]
// 008fec9d  52                   push edx
// 008fec9e  8bce                 mov ecx, esi
// 008feca0  e861c3f0ff           call 0x80b006
// 008feca5  8bcf                 mov ecx, edi
// 008feca7  e87475faff           call 0x8a6220
// 008fecac  85c0                 test eax, eax
// 008fecae  744e                 je 0x8fecfe
// 008fecb0  8d442438             lea eax, [esp + 0x38]
// 008fecb4  50                   push eax
// 008fecb5  8d4c241c             lea ecx, [esp + 0x1c]
// 008fecb9  51                   push ecx
// 008fecba  8d542450             lea edx, [esp + 0x50]
// 008fecbe  52                   push edx
// 008fecbf  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008fecc5  85c0                 test eax, eax
// 008fecc7  7435                 je 0x8fecfe
// 008fecc9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008feccd  8b5500               mov edx, dword ptr [ebp]
// 008fecd0  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 008fecd6  83ec10               sub esp, 0x10
// 008fecd9  8bc4                 mov eax, esp
// 008fecdb  8908                 mov dword ptr [eax], ecx
// 008fecdd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008fece1  894804               mov dword ptr [eax + 4], ecx
// 008fece4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008fece8  894808               mov dword ptr [eax + 8], ecx
// 008feceb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008fecef  89480c               mov dword ptr [eax + 0xc], ecx
// 008fecf2  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008fecf8  50                   push eax
// 008fecf9  53                   push ebx
// 008fecfa  8bcd                 mov ecx, ebp
// 008fecfc  ffd2                 call edx
// 008fecfe  8bce                 mov ecx, esi
// 008fed00  33ff                 xor edi, edi
// 008fed02  e809cbf1ff           call 0x81b810
// 008fed07  85c0                 test eax, eax
// 008fed09  0f8ea0000000         jle 0x8fedaf
// 008fed0f  90                   nop 
// 008fed10  57                   push edi
// 008fed11  8bce                 mov ecx, esi
// 008fed13  e808cbf1ff           call 0x81b820
// 008fed18  85c0                 test eax, eax
// 008fed1a  7409                 je 0x8fed25
// 008fed1c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008fed23  750e                 jne 0x8fed33
// 008fed25  8bce                 mov ecx, esi
// 008fed27  47                   inc edi
// 008fed28  e8e3caf1ff           call 0x81b810
// 008fed2d  3bf8                 cmp edi, eax
// 008fed2f  7cdf                 jl 0x8fed10
// 008fed31  eb7c                 jmp 0x8fedaf
// 008fed33  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 008fed39  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008fed3f  894c2428             mov dword ptr [esp + 0x28], ecx
// 008fed43  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 008fed49  51                   push ecx
// 008fed4a  89542430             mov dword ptr [esp + 0x30], edx
// 008fed4e  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 008fed54  894c2434             mov dword ptr [esp + 0x34], ecx
// 008fed58  8bcc                 mov ecx, esp
// 008fed5a  8964246c             mov dword ptr [esp + 0x6c], esp
// 008fed5e  6814d6ad00           push 0xadd614
// 008fed63  8954243c             mov dword ptr [esp + 0x3c], edx
// 008fed67  ff15002ea400         call dword ptr [0xa42e00]
// 008fed6d  51                   push ecx
// 008fed6e  8bcc                 mov ecx, esp
// 008fed70  8964241c             mov dword ptr [esp + 0x1c], esp
// 008fed74  686402ad00           push 0xad0264
// 008fed79  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008fed81  ff15002ea400         call dword ptr [0xa42e00]
// 008fed87  8bcd                 mov ecx, ebp
// 008fed89  c644246801           mov byte ptr [esp + 0x68], 1
// 008fed8e  e8ed04f9ff           call 0x88f280
// 008fed93  8bc8                 mov ecx, eax
// 008fed95  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008fed9d  e8aef1feff           call 0x8edf50
// 008feda2  50                   push eax
// 008feda3  8d44242c             lea eax, [esp + 0x2c]
// 008feda7  50                   push eax
// 008feda8  8bcb                 mov ecx, ebx
// 008fedaa  e871c0f0ff           call 0x80ae20
// 008fedaf  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008fedb3  64890d00000000       mov dword ptr fs:[0], ecx
// 008fedba  59                   pop ecx
// 008fedbb  5f                   pop edi
// 008fedbc  5e                   pop esi
// 008fedbd  5d                   pop ebp
// 008fedbe  5b                   pop ebx
// 008fedbf  83c450               add esp, 0x50
// 008fedc2  c20400               ret 4
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPRibbonSystemPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp