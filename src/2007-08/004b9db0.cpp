// roc 2007-08 004b9db0  unit: RakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b9db0
//
// 004b9db0  53                   push ebx
// 004b9db1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004b9db5  8bd3                 mov edx, ebx
// 004b9db7  56                   push esi
// 004b9db8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b9dbc  c1ea05               shr edx, 5
// 004b9dbf  83e31f               and ebx, 0x1f
// 004b9dc2  85d2                 test edx, edx
// 004b9dc4  57                   push edi
// 004b9dc5  742e                 je 0x4b9df5
// 004b9dc7  b803000000           mov eax, 3
// 004b9dcc  2bc2                 sub eax, edx
// 004b9dce  7815                 js 0x4b9de5
// 004b9dd0  8d0c10               lea ecx, [eax + edx]
// 004b9dd3  8d0c8e               lea ecx, [esi + ecx*4]
// 004b9dd6  8b3c86               mov edi, dword ptr [esi + eax*4]
// 004b9dd9  8939                 mov dword ptr [ecx], edi
// 004b9ddb  83e801               sub eax, 1
// 004b9dde  83e904               sub ecx, 4
// 004b9de1  85c0                 test eax, eax
// 004b9de3  7df1                 jge 0x4b9dd6
// 004b9de5  03d2                 add edx, edx
// 004b9de7  03d2                 add edx, edx
// 004b9de9  52                   push edx
// 004b9dea  6a00                 push 0
// 004b9dec  56                   push esi
// 004b9ded  e89a6d1700           call 0x630b8c
// 004b9df2  83c40c               add esp, 0xc
// 004b9df5  85db                 test ebx, ebx
// 004b9df7  7447                 je 0x4b9e40
// 004b9df9  8b06                 mov eax, dword ptr [esi]
// 004b9dfb  8b7e04               mov edi, dword ptr [esi + 4]
// 004b9dfe  8bd0                 mov edx, eax
// 004b9e00  8bcb                 mov ecx, ebx
// 004b9e02  d3e2                 shl edx, cl
// 004b9e04  55                   push ebp
// 004b9e05  8bef                 mov ebp, edi
// 004b9e07  8916                 mov dword ptr [esi], edx
// 004b9e09  ba20000000           mov edx, 0x20
// 004b9e0e  2bd3                 sub edx, ebx
// 004b9e10  8bca                 mov ecx, edx
// 004b9e12  d3e8                 shr eax, cl
// 004b9e14  8bcb                 mov ecx, ebx
// 004b9e16  d3e5                 shl ebp, cl
// 004b9e18  8bca                 mov ecx, edx
// 004b9e1a  d3ef                 shr edi, cl
// 004b9e1c  8bcb                 mov ecx, ebx
// 004b9e1e  0be8                 or ebp, eax
// 004b9e20  8b4608               mov eax, dword ptr [esi + 8]
// 004b9e23  896e04               mov dword ptr [esi + 4], ebp
// 004b9e26  8be8                 mov ebp, eax
// 004b9e28  d3e5                 shl ebp, cl
// 004b9e2a  8bca                 mov ecx, edx
// 004b9e2c  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b9e2f  d3e8                 shr eax, cl
// 004b9e31  8bcb                 mov ecx, ebx
// 004b9e33  d3e2                 shl edx, cl
// 004b9e35  0bef                 or ebp, edi
// 004b9e37  896e08               mov dword ptr [esi + 8], ebp
// 004b9e3a  5d                   pop ebp
// 004b9e3b  0bd0                 or edx, eax
// 004b9e3d  89560c               mov dword ptr [esi + 0xc], edx
// 004b9e40  5f                   pop edi
// 004b9e41  5e                   pop esi
// 004b9e42  5b                   pop ebx
// 004b9e43  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$shiftLeft@$$BY03I@big@@YAXAAY03II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
