// roc 2010-06 008a9e88  unit: CXTIconHandle  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a9e88
//
// 008a9e88  8bff                 mov edi, edi
// 008a9e8a  56                   push esi
// 008a9e8b  8bf1                 mov esi, ecx
// 008a9e8d  57                   push edi
// 008a9e8e  8d7e10               lea edi, [esi + 0x10]
// 008a9e91  8bcf                 mov ecx, edi
// 008a9e93  e8888db5ff           call 0x402c20
// 008a9e98  832600               and dword ptr [esi], 0
// 008a9e9b  8bcf                 mov ecx, edi
// 008a9e9d  c7460400004000       mov dword ptr [esi + 4], 0x400000
// 008a9ea4  c74608d0d4b500       mov dword ptr [esi + 8], 0xb5d4d0
// 008a9eab  c7460cd4d4b500       mov dword ptr [esi + 0xc], 0xb5d4d4
// 008a9eb2  e8898db5ff           call 0x402c40
// 008a9eb7  85c0                 test eax, eax
// 008a9eb9  7d09                 jge 0x8a9ec4
// 008a9ebb  c605c019c00001       mov byte ptr [0xc019c0], 1
// 008a9ec2  eb06                 jmp 0x8a9eca
// 008a9ec4  c70628000000         mov dword ptr [esi], 0x28
// 008a9eca  5f                   pop edi
// 008a9ecb  8bc6                 mov eax, esi
// 008a9ecd  5e                   pop esi
// 008a9ece  c3                   ret 
// copied from an identical function in another client (function ??0CAtlComModule@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-archive: msvc-atlmfc-rtm atls.lib/f:/dd/vctools/vc7libs/ship/atlmfc/src/atl/atls/staticrelease/obj1r/i386/atlcommodule.obj