// roc 2011-06 00521ac0  unit: RBX::Network::ProfiledRakPeer  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00521ac0
//
// 00521ac0  8b542404             mov edx, dword ptr [esp + 4]
// 00521ac4  56                   push esi
// 00521ac5  8b720c               mov esi, dword ptr [edx + 0xc]
// 00521ac8  8b4604               mov eax, dword ptr [esi + 4]
// 00521acb  85c0                 test eax, eax
// 00521acd  7566                 jne 0x521b35
// 00521acf  8b06                 mov eax, dword ptr [esi]
// 00521ad1  8910                 mov dword ptr [eax], edx
// 00521ad3  ff4604               inc dword ptr [esi + 4]
// 00521ad6  ff490c               dec dword ptr [ecx + 0xc]
// 00521ad9  8b560c               mov edx, dword ptr [esi + 0xc]
// 00521adc  8b4610               mov eax, dword ptr [esi + 0x10]
// 00521adf  894210               mov dword ptr [edx + 0x10], eax
// 00521ae2  8b5610               mov edx, dword ptr [esi + 0x10]
// 00521ae5  8b460c               mov eax, dword ptr [esi + 0xc]
// 00521ae8  89420c               mov dword ptr [edx + 0xc], eax
// 00521aeb  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00521aef  7e0d                 jle 0x521afe
// 00521af1  8b4104               mov eax, dword ptr [ecx + 4]
// 00521af4  3bf0                 cmp esi, eax
// 00521af6  7506                 jne 0x521afe
// 00521af8  8b500c               mov edx, dword ptr [eax + 0xc]
// 00521afb  895104               mov dword ptr [ecx + 4], edx
// 00521afe  8b4108               mov eax, dword ptr [ecx + 8]
// 00521b01  8d5001               lea edx, [eax + 1]
// 00521b04  895108               mov dword ptr [ecx + 8], edx
// 00521b07  85c0                 test eax, eax
// 00521b09  750c                 jne 0x521b17
// 00521b0b  8931                 mov dword ptr [ecx], esi
// 00521b0d  89760c               mov dword ptr [esi + 0xc], esi
// 00521b10  897610               mov dword ptr [esi + 0x10], esi
// 00521b13  5e                   pop esi
// 00521b14  c20c00               ret 0xc
// 00521b17  8b01                 mov eax, dword ptr [ecx]
// 00521b19  89460c               mov dword ptr [esi + 0xc], eax
// 00521b1c  8b11                 mov edx, dword ptr [ecx]
// 00521b1e  8b4210               mov eax, dword ptr [edx + 0x10]
// 00521b21  894610               mov dword ptr [esi + 0x10], eax
// 00521b24  8b11                 mov edx, dword ptr [ecx]
// 00521b26  8b4210               mov eax, dword ptr [edx + 0x10]
// 00521b29  89700c               mov dword ptr [eax + 0xc], esi
// 00521b2c  8b09                 mov ecx, dword ptr [ecx]
// 00521b2e  897110               mov dword ptr [ecx + 0x10], esi
// 00521b31  5e                   pop esi
// 00521b32  c20c00               ret 0xc
// 00521b35  57                   push edi
// 00521b36  8b3e                 mov edi, dword ptr [esi]
// 00521b38  891487               mov dword ptr [edi + eax*4], edx
// 00521b3b  ff4604               inc dword ptr [esi + 4]
// 00521b3e  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00521b41  8b4604               mov eax, dword ptr [esi + 4]
// 00521b44  c1ea04               shr edx, 4
// 00521b47  3bc2                 cmp eax, edx
// 00521b49  7551                 jne 0x521b9c
// 00521b4b  83790804             cmp dword ptr [ecx + 8], 4
// 00521b4f  7c4b                 jl 0x521b9c
// 00521b51  3b31                 cmp esi, dword ptr [ecx]
// 00521b53  7505                 jne 0x521b5a
// 00521b55  8b460c               mov eax, dword ptr [esi + 0xc]
// 00521b58  8901                 mov dword ptr [ecx], eax
// 00521b5a  8b5610               mov edx, dword ptr [esi + 0x10]
// 00521b5d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00521b60  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00521b64  89420c               mov dword ptr [edx + 0xc], eax
// 00521b67  8b560c               mov edx, dword ptr [esi + 0xc]
// 00521b6a  8b4610               mov eax, dword ptr [esi + 0x10]
// 00521b6d  53                   push ebx
// 00521b6e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00521b72  894210               mov dword ptr [edx + 0x10], eax
// 00521b75  ff4908               dec dword ptr [ecx + 8]
// 00521b78  8b0e                 mov ecx, dword ptr [esi]
// 00521b7a  57                   push edi
// 00521b7b  53                   push ebx
// 00521b7c  51                   push ecx
// 00521b7d  ff158ceec200         call dword ptr [0xc2ee8c]
// 00521b83  8b5608               mov edx, dword ptr [esi + 8]
// 00521b86  57                   push edi
// 00521b87  53                   push ebx
// 00521b88  52                   push edx
// 00521b89  ff158ceec200         call dword ptr [0xc2ee8c]
// 00521b8f  57                   push edi
// 00521b90  53                   push ebx
// 00521b91  56                   push esi
// 00521b92  ff158ceec200         call dword ptr [0xc2ee8c]
// 00521b98  83c424               add esp, 0x24
// 00521b9b  5b                   pop ebx
// 00521b9c  5f                   pop edi
// 00521b9d  5e                   pop esi
// 00521b9e  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Release@?$MemoryPool@USocketQueryOutput@RakPeer@RakNet@@@DataStructures@@QAEXPAUSocketQueryOutput@RakPeer@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
