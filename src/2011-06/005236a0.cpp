// roc 2011-06 005236a0  unit: RBX::Network::ProfiledRakPeer  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005236a0
//
// 005236a0  56                   push esi
// 005236a1  8bf1                 mov esi, ecx
// 005236a3  8b4608               mov eax, dword ptr [esi + 8]
// 005236a6  394604               cmp dword ptr [esi + 4], eax
// 005236a9  7579                 jne 0x523724
// 005236ab  85c0                 test eax, eax
// 005236ad  7509                 jne 0x5236b8
// 005236af  c7460810000000       mov dword ptr [esi + 8], 0x10
// 005236b6  eb05                 jmp 0x5236bd
// 005236b8  03c0                 add eax, eax
// 005236ba  894608               mov dword ptr [esi + 8], eax
// 005236bd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005236c1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005236c5  8b4608               mov eax, dword ptr [esi + 8]
// 005236c8  53                   push ebx
// 005236c9  51                   push ecx
// 005236ca  52                   push edx
// 005236cb  50                   push eax
// 005236cc  e81fd0ffff           call 0x5206f0
// 005236d1  83c40c               add esp, 0xc
// 005236d4  833e00               cmp dword ptr [esi], 0
// 005236d7  8bd8                 mov ebx, eax
// 005236d9  7446                 je 0x523721
// 005236db  57                   push edi
// 005236dc  33ff                 xor edi, edi
// 005236de  397e04               cmp dword ptr [esi + 4], edi
// 005236e1  761a                 jbe 0x5236fd
// 005236e3  8b0e                 mov ecx, dword ptr [esi]
// 005236e5  8d04bd00000000       lea eax, [edi*4]
// 005236ec  03c8                 add ecx, eax
// 005236ee  51                   push ecx
// 005236ef  8d0c18               lea ecx, [eax + ebx]
// 005236f2  e85932ffff           call 0x516950
// 005236f7  47                   inc edi
// 005236f8  3b7e04               cmp edi, dword ptr [esi + 4]
// 005236fb  72e6                 jb 0x5236e3
// 005236fd  8b06                 mov eax, dword ptr [esi]
// 005236ff  85c0                 test eax, eax
// 00523701  741d                 je 0x523720
// 00523703  8b50fc               mov edx, dword ptr [eax - 4]
// 00523706  8d78fc               lea edi, [eax - 4]
// 00523709  6840695100           push 0x516940
// 0052370e  52                   push edx
// 0052370f  6a04                 push 4
// 00523711  50                   push eax
// 00523712  e8c17a2e00           call 0x80b1d8
// 00523717  57                   push edi
// 00523718  e8e76b2e00           call 0x80a304
// 0052371d  83c404               add esp, 4
// 00523720  5f                   pop edi
// 00523721  891e                 mov dword ptr [esi], ebx
// 00523723  5b                   pop ebx
// 00523724  8b442408             mov eax, dword ptr [esp + 8]
// 00523728  8b4e04               mov ecx, dword ptr [esi + 4]
// 0052372b  8b16                 mov edx, dword ptr [esi]
// 0052372d  50                   push eax
// 0052372e  8d0c8a               lea ecx, [edx + ecx*4]
// 00523731  e81a32ffff           call 0x516950
// 00523736  ff4604               inc dword ptr [esi + 4]
// 00523739  5e                   pop esi
// 0052373a  c20c00               ret 0xc
// library rbx2016-raknet/RPC4Plugin.cpp (function ?Insert@?$List@VRakString@RakNet@@@DataStructures@@QAEXABVRakString@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RPC4Plugin.cpp
