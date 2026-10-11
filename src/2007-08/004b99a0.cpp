// roc 2007-08 004b99a0  unit: RakPeer  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b99a0
//
// 004b99a0  53                   push ebx
// 004b99a1  56                   push esi
// 004b99a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b99a6  57                   push edi
// 004b99a7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004b99ab  8bd7                 mov edx, edi
// 004b99ad  c1ea05               shr edx, 5
// 004b99b0  83e71f               and edi, 0x1f
// 004b99b3  85d2                 test edx, edx
// 004b99b5  742e                 je 0x4b99e5
// 004b99b7  b807000000           mov eax, 7
// 004b99bc  2bc2                 sub eax, edx
// 004b99be  7815                 js 0x4b99d5
// 004b99c0  8d0c10               lea ecx, [eax + edx]
// 004b99c3  8d0c8e               lea ecx, [esi + ecx*4]
// 004b99c6  8b1c86               mov ebx, dword ptr [esi + eax*4]
// 004b99c9  8919                 mov dword ptr [ecx], ebx
// 004b99cb  83e801               sub eax, 1
// 004b99ce  83e904               sub ecx, 4
// 004b99d1  85c0                 test eax, eax
// 004b99d3  7df1                 jge 0x4b99c6
// 004b99d5  03d2                 add edx, edx
// 004b99d7  03d2                 add edx, edx
// 004b99d9  52                   push edx
// 004b99da  6a00                 push 0
// 004b99dc  56                   push esi
// 004b99dd  e8aa711700           call 0x630b8c
// 004b99e2  83c40c               add esp, 0xc
// 004b99e5  85ff                 test edi, edi
// 004b99e7  0f848f000000         je 0x4b9a7c
// 004b99ed  8b16                 mov edx, dword ptr [esi]
// 004b99ef  8b5e04               mov ebx, dword ptr [esi + 4]
// 004b99f2  8bc2                 mov eax, edx
// 004b99f4  55                   push ebp
// 004b99f5  8bcf                 mov ecx, edi
// 004b99f7  d3e0                 shl eax, cl
// 004b99f9  8beb                 mov ebp, ebx
// 004b99fb  8906                 mov dword ptr [esi], eax
// 004b99fd  b820000000           mov eax, 0x20
// 004b9a02  2bc7                 sub eax, edi
// 004b9a04  8bc8                 mov ecx, eax
// 004b9a06  d3ea                 shr edx, cl
// 004b9a08  8bcf                 mov ecx, edi
// 004b9a0a  d3e5                 shl ebp, cl
// 004b9a0c  8bc8                 mov ecx, eax
// 004b9a0e  d3eb                 shr ebx, cl
// 004b9a10  8bcf                 mov ecx, edi
// 004b9a12  0bea                 or ebp, edx
// 004b9a14  8b5608               mov edx, dword ptr [esi + 8]
// 004b9a17  896e04               mov dword ptr [esi + 4], ebp
// 004b9a1a  8bea                 mov ebp, edx
// 004b9a1c  d3e5                 shl ebp, cl
// 004b9a1e  8bc8                 mov ecx, eax
// 004b9a20  d3ea                 shr edx, cl
// 004b9a22  8bcf                 mov ecx, edi
// 004b9a24  0beb                 or ebp, ebx
// 004b9a26  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 004b9a29  896e08               mov dword ptr [esi + 8], ebp
// 004b9a2c  8beb                 mov ebp, ebx
// 004b9a2e  d3e5                 shl ebp, cl
// 004b9a30  8bc8                 mov ecx, eax
// 004b9a32  d3eb                 shr ebx, cl
// 004b9a34  8bcf                 mov ecx, edi
// 004b9a36  0bea                 or ebp, edx
// 004b9a38  8b5610               mov edx, dword ptr [esi + 0x10]
// 004b9a3b  896e0c               mov dword ptr [esi + 0xc], ebp
// 004b9a3e  8bea                 mov ebp, edx
// 004b9a40  d3e5                 shl ebp, cl
// 004b9a42  8bc8                 mov ecx, eax
// 004b9a44  d3ea                 shr edx, cl
// 004b9a46  8bcf                 mov ecx, edi
// 004b9a48  0beb                 or ebp, ebx
// 004b9a4a  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 004b9a4d  896e10               mov dword ptr [esi + 0x10], ebp
// 004b9a50  8beb                 mov ebp, ebx
// 004b9a52  d3e5                 shl ebp, cl
// 004b9a54  8bc8                 mov ecx, eax
// 004b9a56  d3eb                 shr ebx, cl
// 004b9a58  8bcf                 mov ecx, edi
// 004b9a5a  0bea                 or ebp, edx
// 004b9a5c  8b5618               mov edx, dword ptr [esi + 0x18]
// 004b9a5f  896e14               mov dword ptr [esi + 0x14], ebp
// 004b9a62  8bea                 mov ebp, edx
// 004b9a64  d3e5                 shl ebp, cl
// 004b9a66  8bc8                 mov ecx, eax
// 004b9a68  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004b9a6b  d3ea                 shr edx, cl
// 004b9a6d  8bcf                 mov ecx, edi
// 004b9a6f  d3e0                 shl eax, cl
// 004b9a71  0beb                 or ebp, ebx
// 004b9a73  896e18               mov dword ptr [esi + 0x18], ebp
// 004b9a76  5d                   pop ebp
// 004b9a77  0bc2                 or eax, edx
// 004b9a79  89461c               mov dword ptr [esi + 0x1c], eax
// 004b9a7c  5f                   pop edi
// 004b9a7d  5e                   pop esi
// 004b9a7e  5b                   pop ebx
// 004b9a7f  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$shiftLeft@$$BY07I@big@@YAXAAY07II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
