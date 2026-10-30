// roc 2009-12 008f5c55  unit: CXTIconHandle  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5c55
//
// 008f5c55  8bff                 mov edi, edi
// 008f5c57  55                   push ebp
// 008f5c58  8bec                 mov ebp, esp
// 008f5c5a  56                   push esi
// 008f5c5b  57                   push edi
// 008f5c5c  8bf1                 mov esi, ecx
// 008f5c5e  8d7e14               lea edi, [esi + 0x14]
// 008f5c61  57                   push edi
// 008f5c62  ff1504b29800         call dword ptr [0x98b204]
// 008f5c68  8b4630               mov eax, dword ptr [esi + 0x30]
// 008f5c6b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008f5c6e  3bc8                 cmp ecx, eax
// 008f5c70  7f23                 jg 0x8f5c95
// 008f5c72  85c9                 test ecx, ecx
// 008f5c74  7c1f                 jl 0x8f5c95
// 008f5c76  3bc8                 cmp ecx, eax
// 008f5c78  750e                 jne 0x8f5c88
// 008f5c7a  8b7608               mov esi, dword ptr [esi + 8]
// 008f5c7d  57                   push edi
// 008f5c7e  ff1500b29800         call dword ptr [0x98b200]
// 008f5c84  8bc6                 mov eax, esi
// 008f5c86  eb16                 jmp 0x8f5c9e
// 008f5c88  51                   push ecx
// 008f5c89  8d4e2c               lea ecx, [esi + 0x2c]
// 008f5c8c  e864ffffff           call 0x8f5bf5
// 008f5c91  8b30                 mov esi, dword ptr [eax]
// 008f5c93  ebe8                 jmp 0x8f5c7d
// 008f5c95  57                   push edi
// 008f5c96  ff1500b29800         call dword ptr [0x98b200]
// 008f5c9c  33c0                 xor eax, eax
// 008f5c9e  5f                   pop edi
// 008f5c9f  5e                   pop esi
// 008f5ca0  5d                   pop ebp
// 008f5ca1  c20400               ret 4
// copied from an identical function in another client (function ?GetHInstanceAt@CAtlBaseModule@ATL@@QAEPAUHINSTANCE__@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlbase.obj