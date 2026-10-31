// from server: 100% by colin
// roc 2008-06 004500d0  unit: CRobloxDoc  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004500d0
//
// 004500d0  55                   push ebp
// 004500d1  8bec                 mov ebp, esp
// 004500d3  6aff                 push -1
// 004500d5  6834187c00           push 0x7c1834
// 004500da  64a100000000         mov eax, dword ptr fs:[0]
// 004500e0  50                   push eax
// 004500e1  64892500000000       mov dword ptr fs:[0], esp
// 004500e8  83ec18               sub esp, 0x18
// 004500eb  53                   push ebx
// 004500ec  56                   push esi
// 004500ed  57                   push edi
// 004500ee  8d45e0               lea eax, [ebp - 0x20]
// 004500f1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004500f4  50                   push eax
// 004500f5  8bf1                 mov esi, ecx
// 004500f7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004500fe  e8cd5ffbff           call 0x4060d0
// 00450103  83c404               add esp, 4
// 00450106  50                   push eax
// 00450107  8d4de4               lea ecx, [ebp - 0x1c]
// 0045010a  68f8798100           push 0x8179f8
// 0045010f  51                   push ecx
// 00450110  c645fc01             mov byte ptr [ebp - 4], 1
// 00450114  e807f1ffff           call 0x44f220
// 00450119  83c40c               add esp, 0xc
// 0045011c  68e0798100           push 0x8179e0
// 00450121  50                   push eax
// 00450122  8d55e8               lea edx, [ebp - 0x18]
// 00450125  52                   push edx
// 00450126  c645fc02             mov byte ptr [ebp - 4], 2
// 0045012a  e831e0fbff           call 0x40e160
// 0045012f  83c40c               add esp, 0xc
// 00450132  8bf8                 mov edi, eax
// 00450134  68d8798100           push 0x8179d8
// 00450139  8d45ec               lea eax, [ebp - 0x14]
// 0045013c  56                   push esi
// 0045013d  50                   push eax
// 0045013e  c645fc03             mov byte ptr [ebp - 4], 3
// 00450142  e8b9fcffff           call 0x44fe00
// 00450147  83c40c               add esp, 0xc
// 0045014a  8bf0                 mov esi, eax
// 0045014c  8bcf                 mov ecx, edi
// 0045014e  c645fc04             mov byte ptr [ebp - 4], 4
// 00450152  ff15e03e8000         call dword ptr [0x803ee0]
// 00450158  8bce                 mov ecx, esi
// 0045015a  8bf8                 mov edi, eax
// 0045015c  ff15e03e8000         call dword ptr [0x803ee0]
// 00450162  8bc8                 mov ecx, eax
// 00450164  e8d7fdffff           call 0x44ff40
// 00450169  8d4dec               lea ecx, [ebp - 0x14]
// 0045016c  ff15143f8000         call dword ptr [0x803f14]
// 00450172  8d4de8               lea ecx, [ebp - 0x18]
// 00450175  ff15143f8000         call dword ptr [0x803f14]
// 0045017b  8d4de4               lea ecx, [ebp - 0x1c]
// 0045017e  ff15143f8000         call dword ptr [0x803f14]
// 00450184  8d4de0               lea ecx, [ebp - 0x20]
// 00450187  ff15143f8000         call dword ptr [0x803f14]
// 0045018d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00450190  5f                   pop edi
// 00450191  5e                   pop esi
// 00450192  64890d00000000       mov dword ptr fs:[0], ecx
// 00450199  5b                   pop ebx
// 0045019a  8be5                 mov esp, ebp
// 0045019c  5d                   pop ebp
// 0045019d  c3                   ret 
// 0045019e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 004501a1  8b11                 mov edx, dword ptr [ecx]
// 004501a3  8b4204               mov eax, dword ptr [edx + 4]
// 004501a6  6a00                 push 0
// 004501a8  6a00                 push 0
// 004501aa  ffd0                 call eax
// 004501ac  50                   push eax
// 004501ad  e89e0a2500           call 0x6a0c50
// 004501b2  b88d014500           mov eax, 0x45018d
// 004501b7  c3                   ret 

// from server: 89% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_nativedocumentfamilyad94f610efff160c.cpp
