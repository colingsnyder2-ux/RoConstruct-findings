// roc 2008-06 00554c30  unit: RBX::RunService  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554c30
//
// 00554c30  8b442404             mov eax, dword ptr [esp + 4]
// 00554c34  83ec10               sub esp, 0x10
// 00554c37  57                   push edi
// 00554c38  8bf9                 mov edi, ecx
// 00554c3a  0fb64804             movzx ecx, byte ptr [eax + 4]
// 00554c3e  f7d9                 neg ecx
// 00554c40  1bc9                 sbb ecx, ecx
// 00554c42  85c8                 test eax, ecx
// 00554c44  7518                 jne 0x554c5e
// 00554c46  8d4c2404             lea ecx, [esp + 4]
// 00554c4a  e8a1370100           call 0x5683f0
// 00554c4f  681c0f8d00           push 0x8d0f1c
// 00554c54  8d542408             lea edx, [esp + 8]
// 00554c58  52                   push edx
// 00554c59  e82ec91400           call 0x6a158c
// 00554c5e  53                   push ebx
// 00554c5f  56                   push esi
// 00554c60  8b30                 mov esi, dword ptr [eax]
// 00554c62  8bcf                 mov ecx, edi
// 00554c64  e867d10900           call 0x5f1dd0
// 00554c69  8d442420             lea eax, [esp + 0x20]
// 00554c6d  50                   push eax
// 00554c6e  8bce                 mov ecx, esi
// 00554c70  e8cb000400           call 0x594d40
// 00554c75  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00554c79  51                   push ecx
// 00554c7a  8bcf                 mov ecx, edi
// 00554c7c  e81fd20900           call 0x5f1ea0
// 00554c81  8d542420             lea edx, [esp + 0x20]
// 00554c85  52                   push edx
// 00554c86  8bce                 mov ecx, esi
// 00554c88  8ad8                 mov bl, al
// 00554c8a  e891000400           call 0x594d20
// 00554c8f  5e                   pop esi
// 00554c90  8ac3                 mov al, bl
// 00554c92  5b                   pop ebx
// 00554c93  5f                   pop edi
// 00554c94  83c410               add esp, 0x10
// 00554c97  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$timed_wait@V?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@@condition@boost@@QAE_NAAV?$scoped_lock@Vmutex@boost@@@thread@detail@1@ABUxtime@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
