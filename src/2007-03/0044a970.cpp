// roc 2007-03 0044a970  unit: seg_00440000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a970
//
// 0044a970  55                   push ebp
// 0044a971  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0044a975  56                   push esi
// 0044a976  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044a97a  3bf5                 cmp esi, ebp
// 0044a97c  7426                 je 0x44a9a4
// 0044a97e  53                   push ebx
// 0044a97f  57                   push edi
// 0044a980  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0044a984  8d5f08               lea ebx, [edi + 8]
// 0044a987  8b07                 mov eax, dword ptr [edi]
// 0044a989  8906                 mov dword ptr [esi], eax
// 0044a98b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044a98e  894e04               mov dword ptr [esi + 4], ecx
// 0044a991  53                   push ebx
// 0044a992  8d4e08               lea ecx, [esi + 8]
// 0044a995  ff1540d47700         call dword ptr [0x77d440]
// 0044a99b  83c60c               add esi, 0xc
// 0044a99e  3bf5                 cmp esi, ebp
// 0044a9a0  75e5                 jne 0x44a987
// 0044a9a2  5f                   pop edi
// 0044a9a3  5b                   pop ebx
// 0044a9a4  5e                   pop esi
// 0044a9a5  5d                   pop ebp
// 0044a9a6  c3                   ret 
// copied from an identical function in another client (function ??$_Fill@PAUColorEntry@@U1@@std@@YAXPAUColorEntry@@0ABU1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp