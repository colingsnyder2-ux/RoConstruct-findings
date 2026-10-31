// roc 2011-06 0046e150  unit: CRobloxControlMaterialSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046e150
//
// 0046e150  55                   push ebp
// 0046e151  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0046e155  56                   push esi
// 0046e156  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046e15a  3bf5                 cmp esi, ebp
// 0046e15c  7426                 je 0x46e184
// 0046e15e  53                   push ebx
// 0046e15f  57                   push edi
// 0046e160  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046e164  8d5f08               lea ebx, [edi + 8]
// 0046e167  8b07                 mov eax, dword ptr [edi]
// 0046e169  8906                 mov dword ptr [esi], eax
// 0046e16b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0046e16e  894e04               mov dword ptr [esi + 4], ecx
// 0046e171  53                   push ebx
// 0046e172  8d4e08               lea ecx, [esi + 8]
// 0046e175  ff156425a400         call dword ptr [0xa42564]
// 0046e17b  83c60c               add esi, 0xc
// 0046e17e  3bf5                 cmp esi, ebp
// 0046e180  75e5                 jne 0x46e167
// 0046e182  5f                   pop edi
// 0046e183  5b                   pop ebx
// 0046e184  5e                   pop esi
// 0046e185  5d                   pop ebp
// 0046e186  c3                   ret 
// copied from an identical function in another client (function ??$_Fill@PAUColorEntry@@U1@@std@@YAXPAUColorEntry@@0ABU1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp