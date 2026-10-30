// roc 2011-06 0088ab20  unit: CXTPRibbonTheme  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088ab20
//
// 0088ab20  83ec60               sub esp, 0x60
// 0088ab23  53                   push ebx
// 0088ab24  55                   push ebp
// 0088ab25  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0088ab29  56                   push esi
// 0088ab2a  57                   push edi
// 0088ab2b  8bf1                 mov esi, ecx
// 0088ab2d  55                   push ebp
// 0088ab2e  8d4c2414             lea ecx, [esp + 0x14]
// 0088ab32  e85922fdff           call 0x85cd90
// 0088ab37  8bcd                 mov ecx, ebp
// 0088ab39  e862b40100           call 0x8a5fa0
// 0088ab3e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088ab42  85c0                 test eax, eax
// 0088ab44  740a                 je 0x88ab50
// 0088ab46  038ec0050000         add ecx, dword ptr [esi + 0x5c0]
// 0088ab4c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0088ab50  8b542410             mov edx, dword ptr [esp + 0x10]
// 0088ab54  8b8650060000         mov eax, dword ptr [esi + 0x650]
// 0088ab5a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0088ab5e  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 0088ab62  03c1                 add eax, ecx
// 0088ab64  894c2424             mov dword ptr [esp + 0x24], ecx
// 0088ab68  8b8e6c060000         mov ecx, dword ptr [esi + 0x66c]
// 0088ab6e  89542420             mov dword ptr [esp + 0x20], edx
// 0088ab72  89542430             mov dword ptr [esp + 0x30], edx
// 0088ab76  51                   push ecx
// 0088ab77  89442430             mov dword ptr [esp + 0x30], eax
// 0088ab7b  89442438             mov dword ptr [esp + 0x38], eax
// 0088ab7f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088ab83  8d542424             lea edx, [esp + 0x24]
// 0088ab87  52                   push edx
// 0088ab88  8bcb                 mov ecx, ebx
// 0088ab8a  897c2430             mov dword ptr [esp + 0x30], edi
// 0088ab8e  897c2440             mov dword ptr [esp + 0x40], edi
// 0088ab92  89442444             mov dword ptr [esp + 0x44], eax
// 0088ab96  e88502f8ff           call 0x80ae20
// 0088ab9b  8b866c060000         mov eax, dword ptr [esi + 0x66c]
// 0088aba1  50                   push eax
// 0088aba2  8d4c2434             lea ecx, [esp + 0x34]
// 0088aba6  51                   push ecx
// 0088aba7  8bcb                 mov ecx, ebx
// 0088aba9  e87202f8ff           call 0x80ae20
// 0088abae  8bcd                 mov ecx, ebp
// 0088abb0  e83bbd0100           call 0x8a68f0
// 0088abb5  85c0                 test eax, eax
// 0088abb7  0f8491000000         je 0x88ac4e
// 0088abbd  8b952c020000         mov edx, dword ptr [ebp + 0x22c]
// 0088abc3  8b8d34020000         mov ecx, dword ptr [ebp + 0x234]
// 0088abc9  8b8530020000         mov eax, dword ptr [ebp + 0x230]
// 0088abcf  89542440             mov dword ptr [esp + 0x40], edx
// 0088abd3  8b9538020000         mov edx, dword ptr [ebp + 0x238]
// 0088abd9  894c2448             mov dword ptr [esp + 0x48], ecx
// 0088abdd  686806ad00           push 0xad0668
// 0088abe2  8bce                 mov ecx, esi
// 0088abe4  89442448             mov dword ptr [esp + 0x48], eax
// 0088abe8  89542450             mov dword ptr [esp + 0x50], edx
// 0088abec  e89f460000           call 0x88f290
// 0088abf1  8bf8                 mov edi, eax
// 0088abf3  85ff                 test edi, edi
// 0088abf5  7457                 je 0x88ac4e
// 0088abf7  6a01                 push 1
// 0088abf9  6a00                 push 0
// 0088abfb  8d442468             lea eax, [esp + 0x68]
// 0088abff  bd03000000           mov ebp, 3
// 0088ac04  50                   push eax
// 0088ac05  8bcf                 mov ecx, edi
// 0088ac07  896c2468             mov dword ptr [esp + 0x68], ebp
// 0088ac0b  e8002b0600           call 0x8ed710
// 0088ac10  83ec10               sub esp, 0x10
// 0088ac13  8bcc                 mov ecx, esp
// 0088ac15  8929                 mov dword ptr [ecx], ebp
// 0088ac17  8bd5                 mov edx, ebp
// 0088ac19  895104               mov dword ptr [ecx + 4], edx
// 0088ac1c  895108               mov dword ptr [ecx + 8], edx
// 0088ac1f  89510c               mov dword ptr [ecx + 0xc], edx
// 0088ac22  8b10                 mov edx, dword ptr [eax]
// 0088ac24  83ec10               sub esp, 0x10
// 0088ac27  8bcc                 mov ecx, esp
// 0088ac29  8911                 mov dword ptr [ecx], edx
// 0088ac2b  8b5004               mov edx, dword ptr [eax + 4]
// 0088ac2e  895104               mov dword ptr [ecx + 4], edx
// 0088ac31  8b5008               mov edx, dword ptr [eax + 8]
// 0088ac34  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088ac37  895108               mov dword ptr [ecx + 8], edx
// 0088ac3a  89410c               mov dword ptr [ecx + 0xc], eax
// 0088ac3d  8d4c2460             lea ecx, [esp + 0x60]
// 0088ac41  51                   push ecx
// 0088ac42  53                   push ebx
// 0088ac43  8bcf                 mov ecx, edi
// 0088ac45  e896230600           call 0x8ecfe0
// 0088ac4a  8b6c2478             mov ebp, dword ptr [esp + 0x78]
// 0088ac4e  8bcd                 mov ecx, ebp
// 0088ac50  e8dbb40100           call 0x8a6130
// 0088ac55  85c0                 test eax, eax
// 0088ac57  754b                 jne 0x88aca4
// 0088ac59  8bcd                 mov ecx, ebp
// 0088ac5b  e890bc0100           call 0x8a68f0
// 0088ac60  85c0                 test eax, eax
// 0088ac62  7540                 jne 0x88aca4
// 0088ac64  8b9680060000         mov edx, dword ptr [esi + 0x680]
// 0088ac6a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0088ac6e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088ac72  52                   push edx
// 0088ac73  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088ac77  50                   push eax
// 0088ac78  83c1fe               add ecx, -2
// 0088ac7b  51                   push ecx
// 0088ac7c  52                   push edx
// 0088ac7d  53                   push ebx
// 0088ac7e  8bce                 mov ecx, esi
// 0088ac80  e85b4bf8ff           call 0x80f7e0
// 0088ac85  8b867c060000         mov eax, dword ptr [esi + 0x67c]
// 0088ac8b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088ac8f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088ac93  50                   push eax
// 0088ac94  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088ac98  51                   push ecx
// 0088ac99  4a                   dec edx
// 0088ac9a  52                   push edx
// 0088ac9b  50                   push eax
// 0088ac9c  53                   push ebx
// 0088ac9d  8bce                 mov ecx, esi
// 0088ac9f  e83c4bf8ff           call 0x80f7e0
// 0088aca4  5f                   pop edi
// 0088aca5  5e                   pop esi
// 0088aca6  5d                   pop ebp
// 0088aca7  5b                   pop ebx
// 0088aca8  83c460               add esp, 0x60
// 0088acab  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillRibbonBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
