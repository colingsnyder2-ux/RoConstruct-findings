// roc 2012-06 004790e0  unit: CRobloxControlMaterialSelector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004790e0
//
// 004790e0  55                   push ebp
// 004790e1  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004790e5  56                   push esi
// 004790e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004790ea  3bf5                 cmp esi, ebp
// 004790ec  7426                 je 0x479114
// 004790ee  53                   push ebx
// 004790ef  57                   push edi
// 004790f0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004790f4  8d5f08               lea ebx, [edi + 8]
// 004790f7  8b07                 mov eax, dword ptr [edi]
// 004790f9  8906                 mov dword ptr [esi], eax
// 004790fb  8b4f04               mov ecx, dword ptr [edi + 4]
// 004790fe  894e04               mov dword ptr [esi + 4], ecx
// 00479101  53                   push ebx
// 00479102  8d4e08               lea ecx, [esi + 8]
// 00479105  ff152045b200         call dword ptr [0xb24520]
// 0047910b  83c60c               add esi, 0xc
// 0047910e  3bf5                 cmp esi, ebp
// 00479110  75e5                 jne 0x4790f7
// 00479112  5f                   pop edi
// 00479113  5b                   pop ebx
// 00479114  5e                   pop esi
// 00479115  5d                   pop ebp
// 00479116  c3                   ret 
// copied from an identical function in another client (function ??$_Fill@PAUColorEntry@@U1@@std@@YAXPAUColorEntry@@0ABU1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp