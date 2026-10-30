// roc 2010-06 008a9db5  unit: CXTIconHandle  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9db5
//
// 008a9db5  8bff                 mov edi, edi
// 008a9db7  55                   push ebp
// 008a9db8  8bec                 mov ebp, esp
// 008a9dba  56                   push esi
// 008a9dbb  57                   push edi
// 008a9dbc  8bf1                 mov esi, ecx
// 008a9dbe  8d7e14               lea edi, [esi + 0x14]
// 008a9dc1  57                   push edi
// 008a9dc2  ff1574a39e00         call dword ptr [0x9ea374]
// 008a9dc8  8b4630               mov eax, dword ptr [esi + 0x30]
// 008a9dcb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008a9dce  3bc8                 cmp ecx, eax
// 008a9dd0  7f23                 jg 0x8a9df5
// 008a9dd2  85c9                 test ecx, ecx
// 008a9dd4  7c1f                 jl 0x8a9df5
// 008a9dd6  3bc8                 cmp ecx, eax
// 008a9dd8  750e                 jne 0x8a9de8
// 008a9dda  8b7608               mov esi, dword ptr [esi + 8]
// 008a9ddd  57                   push edi
// 008a9dde  ff1570a39e00         call dword ptr [0x9ea370]
// 008a9de4  8bc6                 mov eax, esi
// 008a9de6  eb16                 jmp 0x8a9dfe
// 008a9de8  51                   push ecx
// 008a9de9  8d4e2c               lea ecx, [esi + 0x2c]
// 008a9dec  e864ffffff           call 0x8a9d55
// 008a9df1  8b30                 mov esi, dword ptr [eax]
// 008a9df3  ebe8                 jmp 0x8a9ddd
// 008a9df5  57                   push edi
// 008a9df6  ff1570a39e00         call dword ptr [0x9ea370]
// 008a9dfc  33c0                 xor eax, eax
// 008a9dfe  5f                   pop edi
// 008a9dff  5e                   pop esi
// 008a9e00  5d                   pop ebp
// 008a9e01  c20400               ret 4
// copied from an identical function in another client (function ?GetHInstanceAt@CAtlBaseModule@ATL@@QAEPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj