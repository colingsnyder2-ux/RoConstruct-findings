// roc 2012-06 0059a840  unit: VAuthoringSettings::?$FactoryProduct  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a840
//
// 0059a840  51                   push ecx
// 0059a841  53                   push ebx
// 0059a842  894c2404             mov dword ptr [esp + 4], ecx
// 0059a846  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0059a849  55                   push ebp
// 0059a84a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0059a84e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0059a853  f7e1                 mul ecx
// 0059a855  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059a859  56                   push esi
// 0059a85a  57                   push edi
// 0059a85b  55                   push ebp
// 0059a85c  50                   push eax
// 0059a85d  8bf2                 mov esi, edx
// 0059a85f  51                   push ecx
// 0059a860  33db                 xor ebx, ebx
// 0059a862  c1ee03               shr esi, 3
// 0059a865  ff159404d900         call dword ptr [0xd90494]
// 0059a86b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0059a86f  83c40c               add esp, 0xc
// 0059a872  894708               mov dword ptr [edi + 8], eax
// 0059a875  85c0                 test eax, eax
// 0059a877  7430                 je 0x59a8a9
// 0059a879  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a87d  55                   push ebp
// 0059a87e  51                   push ecx
// 0059a87f  8d14b500000000       lea edx, [esi*4]
// 0059a886  52                   push edx
// 0059a887  ff159404d900         call dword ptr [0xd90494]
// 0059a88d  8b4f08               mov ecx, dword ptr [edi + 8]
// 0059a890  83c40c               add esp, 0xc
// 0059a893  8907                 mov dword ptr [edi], eax
// 0059a895  85c0                 test eax, eax
// 0059a897  751a                 jne 0x59a8b3
// 0059a899  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059a89d  55                   push ebp
// 0059a89e  50                   push eax
// 0059a89f  51                   push ecx
// 0059a8a0  ff159c04d900         call dword ptr [0xd9049c]
// 0059a8a6  83c40c               add esp, 0xc
// 0059a8a9  5f                   pop edi
// 0059a8aa  5e                   pop esi
// 0059a8ab  5d                   pop ebp
// 0059a8ac  32c0                 xor al, al
// 0059a8ae  5b                   pop ebx
// 0059a8af  59                   pop ecx
// 0059a8b0  c21000               ret 0x10
// 0059a8b3  85f6                 test esi, esi
// 0059a8b5  7e0e                 jle 0x59a8c5
// 0059a8b7  897908               mov dword ptr [ecx + 8], edi
// 0059a8ba  890c98               mov dword ptr [eax + ebx*4], ecx
// 0059a8bd  43                   inc ebx
// 0059a8be  83c10c               add ecx, 0xc
// 0059a8c1  3bde                 cmp ebx, esi
// 0059a8c3  7cf2                 jl 0x59a8b7
// 0059a8c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059a8c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059a8cd  897704               mov dword ptr [edi + 4], esi
// 0059a8d0  8b02                 mov eax, dword ptr [edx]
// 0059a8d2  89470c               mov dword ptr [edi + 0xc], eax
// 0059a8d5  894f10               mov dword ptr [edi + 0x10], ecx
// 0059a8d8  5f                   pop edi
// 0059a8d9  5e                   pop esi
// 0059a8da  5d                   pop ebp
// 0059a8db  b001                 mov al, 1
// 0059a8dd  5b                   pop ebx
// 0059a8de  59                   pop ecx
// 0059a8df  c21000               ret 0x10
// library rbx2016-raknet/RakPeer.cpp (function ?InitPage@?$MemoryPool@URemoteSystemIndex@RakNet@@@DataStructures@@IAE_NPAUPage@12@0PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
