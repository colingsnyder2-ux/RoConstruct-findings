// from server: 100% by auto
// roc 2008-06 00552ff0  unit: RBX::RenderBase::AggregateChunk  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552ff0
//
// 00552ff0  55                   push ebp
// 00552ff1  8bec                 mov ebp, esp
// 00552ff3  6aff                 push -1
// 00552ff5  6810db7c00           push 0x7cdb10
// 00552ffa  64a100000000         mov eax, dword ptr fs:[0]
// 00553000  50                   push eax
// 00553001  51                   push ecx
// 00553002  83ec08               sub esp, 8
// 00553005  53                   push ebx
// 00553006  56                   push esi
// 00553007  57                   push edi
// 00553008  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0055300d  33c5                 xor eax, ebp
// 0055300f  50                   push eax
// 00553010  8d45f4               lea eax, [ebp - 0xc]
// 00553013  64a300000000         mov dword ptr fs:[0], eax
// 00553019  8965f0               mov dword ptr [ebp - 0x10], esp
// 0055301c  894dec               mov dword ptr [ebp - 0x14], ecx
// 0055301f  8b4508               mov eax, dword ptr [ebp + 8]
// 00553022  50                   push eax
// 00553023  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00553026  e835010000           call 0x553160
// 0055302b  0fb6c8               movzx ecx, al
// 0055302e  85c9                 test ecx, ecx
// 00553030  7451                 je 0x553083
// 00553032  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00553039  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0055303c  52                   push edx
// 0055303d  8b4508               mov eax, dword ptr [ebp + 8]
// 00553040  50                   push eax
// 00553041  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00553044  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00553047  52                   push edx
// 00553048  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0055304b  e890010000           call 0x5531e0
// 00553050  8945e8               mov dword ptr [ebp - 0x18], eax
// 00553053  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00553056  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00553059  894810               mov dword ptr [eax + 0x10], ecx
// 0055305c  eb1e                 jmp 0x55307c
// 0055305e  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00553061  e89af4feff           call 0x542500
// 00553066  6a00                 push 0
// 00553068  6a00                 push 0
// 0055306a  e81de51400           call 0x6a158c
// 0055306f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00553076  b883305500           mov eax, 0x553083
// 0055307b  c3                   ret 
// 0055307c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00553083  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00553086  64890d00000000       mov dword ptr fs:[0], ecx
// 0055308d  59                   pop ecx
// 0055308e  5f                   pop edi
// 0055308f  5e                   pop esi
// 00553090  5b                   pop ebx
// 00553091  8be5                 mov esp, ebp
// 00553093  5d                   pop ebp
// 00553094  c20800               ret 8

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp
