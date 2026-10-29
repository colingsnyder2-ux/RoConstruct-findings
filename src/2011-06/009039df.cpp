// roc 2011-06 009039df  unit: CXTIconHandle  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009039df
//
// 009039df  8bff                 mov edi, edi
// 009039e1  55                   push ebp
// 009039e2  8bec                 mov ebp, esp
// 009039e4  56                   push esi
// 009039e5  57                   push edi
// 009039e6  8bf1                 mov esi, ecx
// 009039e8  8d7e14               lea edi, [esi + 0x14]
// 009039eb  57                   push edi
// 009039ec  ff158403a400         call dword ptr [0xa40384]
// 009039f2  8b4630               mov eax, dword ptr [esi + 0x30]
// 009039f5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009039f8  3bc8                 cmp ecx, eax
// 009039fa  7f23                 jg 0x903a1f
// 009039fc  85c9                 test ecx, ecx
// 009039fe  7c1f                 jl 0x903a1f
// 00903a00  3bc8                 cmp ecx, eax
// 00903a02  750e                 jne 0x903a12
// 00903a04  8b7608               mov esi, dword ptr [esi + 8]
// 00903a07  57                   push edi
// 00903a08  ff158003a400         call dword ptr [0xa40380]
// 00903a0e  8bc6                 mov eax, esi
// 00903a10  eb16                 jmp 0x903a28
// 00903a12  51                   push ecx
// 00903a13  8d4e2c               lea ecx, [esi + 0x2c]
// 00903a16  e864ffffff           call 0x90397f
// 00903a1b  8b30                 mov esi, dword ptr [eax]
// 00903a1d  ebe8                 jmp 0x903a07
// 00903a1f  57                   push edi
// 00903a20  ff158003a400         call dword ptr [0xa40380]
// 00903a26  33c0                 xor eax, eax
// 00903a28  5f                   pop edi
// 00903a29  5e                   pop esi
// 00903a2a  5d                   pop ebp
// 00903a2b  c20400               ret 4
// copied from an identical function in another client (function ?GetHInstanceAt@CAtlBaseModule@ATL@@QAEPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj