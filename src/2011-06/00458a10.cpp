// roc 2011-06 00458a10  unit: CRobloxControlColorSelector  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00458a10
//
// 00458a10  53                   push ebx
// 00458a11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00458a15  85db                 test ebx, ebx
// 00458a17  7506                 jne 0x458a1f
// 00458a19  33c0                 xor eax, eax
// 00458a1b  5b                   pop ebx
// 00458a1c  c20400               ret 4
// 00458a1f  66833b00             cmp word ptr [ebx], 0
// 00458a23  55                   push ebp
// 00458a24  56                   push esi
// 00458a25  8beb                 mov ebp, ebx
// 00458a27  8bf3                 mov esi, ebx
// 00458a29  742a                 je 0x458a55
// 00458a2b  57                   push edi
// 00458a2c  8b3d1c1ca400         mov edi, dword ptr [0xa41c1c]
// 00458a32  56                   push esi
// 00458a33  ffd7                 call edi
// 00458a35  0fb70e               movzx ecx, word ptr [esi]
// 00458a38  6683f95c             cmp cx, 0x5c
// 00458a3c  740c                 je 0x458a4a
// 00458a3e  6683f92f             cmp cx, 0x2f
// 00458a42  7406                 je 0x458a4a
// 00458a44  6683f93a             cmp cx, 0x3a
// 00458a48  7502                 jne 0x458a4c
// 00458a4a  8be8                 mov ebp, eax
// 00458a4c  66833800             cmp word ptr [eax], 0
// 00458a50  8bf0                 mov esi, eax
// 00458a52  75de                 jne 0x458a32
// 00458a54  5f                   pop edi
// 00458a55  8bc5                 mov eax, ebp
// 00458a57  5e                   pop esi
// 00458a58  2bc3                 sub eax, ebx
// 00458a5a  5d                   pop ebp
// 00458a5b  d1f8                 sar eax, 1
// 00458a5d  5b                   pop ebx
// 00458a5e  c20400               ret 4
// copied from an identical function in another client (function ?AtlGetDirLen@ATL@@YGIPB_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll-rtm roc_espeon_nativeatldirabi3272e783e3521ab9.cpp