// roc 2009-06 0081af75  unit: CXTIconHandle  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081af75
//
// 0081af75  8bff                 mov edi, edi
// 0081af77  55                   push ebp
// 0081af78  8bec                 mov ebp, esp
// 0081af7a  56                   push esi
// 0081af7b  57                   push edi
// 0081af7c  8bf1                 mov esi, ecx
// 0081af7e  8d7e14               lea edi, [esi + 0x14]
// 0081af81  57                   push edi
// 0081af82  ff15a8e18900         call dword ptr [0x89e1a8]
// 0081af88  8b4630               mov eax, dword ptr [esi + 0x30]
// 0081af8b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0081af8e  3bc8                 cmp ecx, eax
// 0081af90  7f23                 jg 0x81afb5
// 0081af92  85c9                 test ecx, ecx
// 0081af94  7c1f                 jl 0x81afb5
// 0081af96  3bc8                 cmp ecx, eax
// 0081af98  750e                 jne 0x81afa8
// 0081af9a  8b7608               mov esi, dword ptr [esi + 8]
// 0081af9d  57                   push edi
// 0081af9e  ff15ace18900         call dword ptr [0x89e1ac]
// 0081afa4  8bc6                 mov eax, esi
// 0081afa6  eb16                 jmp 0x81afbe
// 0081afa8  51                   push ecx
// 0081afa9  8d4e2c               lea ecx, [esi + 0x2c]
// 0081afac  e864ffffff           call 0x81af15
// 0081afb1  8b30                 mov esi, dword ptr [eax]
// 0081afb3  ebe8                 jmp 0x81af9d
// 0081afb5  57                   push edi
// 0081afb6  ff15ace18900         call dword ptr [0x89e1ac]
// 0081afbc  33c0                 xor eax, eax
// 0081afbe  5f                   pop edi
// 0081afbf  5e                   pop esi
// 0081afc0  5d                   pop ebp
// 0081afc1  c20400               ret 4
// copied from an identical function in another client (function ?GetHInstanceAt@CAtlBaseModule@ATL@@QAEPAUHINSTANCE__@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj