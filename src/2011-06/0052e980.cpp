// roc 2011-06 0052e980  unit: RBX::Network::ProfiledRakPeer  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052e980
//
// 0052e980  53                   push ebx
// 0052e981  56                   push esi
// 0052e982  8bf1                 mov esi, ecx
// 0052e984  8b06                 mov eax, dword ptr [esi]
// 0052e986  8d48ff               lea ecx, [eax - 1]
// 0052e989  83e107               and ecx, 7
// 0052e98c  2bc1                 sub eax, ecx
// 0052e98e  83c007               add eax, 7
// 0052e991  6a18                 push 0x18
// 0052e993  8bce                 mov ecx, esi
// 0052e995  8906                 mov dword ptr [esi], eax
// 0052e997  e834e2fbff           call 0x4ecbd0
// 0052e99c  e89f88fbff           call 0x4e7240
// 0052e9a1  84c0                 test al, al
// 0052e9a3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052e9a7  7535                 jne 0x52e9de
// 0052e9a9  8b16                 mov edx, dword ptr [esi]
// 0052e9ab  0fb618               movzx ebx, byte ptr [eax]
// 0052e9ae  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052e9b1  c1ea03               shr edx, 3
// 0052e9b4  881c0a               mov byte ptr [edx + ecx], bl
// 0052e9b7  8b16                 mov edx, dword ptr [esi]
// 0052e9b9  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0052e9bd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052e9c0  c1ea03               shr edx, 3
// 0052e9c3  885c0a01             mov byte ptr [edx + ecx + 1], bl
// 0052e9c7  8b16                 mov edx, dword ptr [esi]
// 0052e9c9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052e9cc  8a4002               mov al, byte ptr [eax + 2]
// 0052e9cf  c1ea03               shr edx, 3
// 0052e9d2  88440a02             mov byte ptr [edx + ecx + 2], al
// 0052e9d6  830618               add dword ptr [esi], 0x18
// 0052e9d9  5e                   pop esi
// 0052e9da  5b                   pop ebx
// 0052e9db  c20400               ret 4
// 0052e9de  8b0e                 mov ecx, dword ptr [esi]
// 0052e9e0  0fb65803             movzx ebx, byte ptr [eax + 3]
// 0052e9e4  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052e9e7  c1e903               shr ecx, 3
// 0052e9ea  881c11               mov byte ptr [ecx + edx], bl
// 0052e9ed  8b0e                 mov ecx, dword ptr [esi]
// 0052e9ef  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0052e9f3  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052e9f6  c1e903               shr ecx, 3
// 0052e9f9  885c1101             mov byte ptr [ecx + edx + 1], bl
// 0052e9fd  8b0e                 mov ecx, dword ptr [esi]
// 0052e9ff  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052ea02  8a4001               mov al, byte ptr [eax + 1]
// 0052ea05  c1e903               shr ecx, 3
// 0052ea08  88441102             mov byte ptr [ecx + edx + 2], al
// 0052ea0c  830618               add dword ptr [esi], 0x18
// 0052ea0f  5e                   pop esi
// 0052ea10  5b                   pop ebx
// 0052ea11  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??$Write@Uuint24_t@RakNet@@@BitStream@RakNet@@QAEXABUuint24_t@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
