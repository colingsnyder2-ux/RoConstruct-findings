// roc 2007-08 004fcd20  unit: RBX::Render::AggregateChunk  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcd20
//
// 004fcd20  53                   push ebx
// 004fcd21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004fcd25  55                   push ebp
// 004fcd26  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004fcd2a  56                   push esi
// 004fcd2b  8b742414             mov esi, dword ptr [esp + 0x14]
// 004fcd2f  2bf3                 sub esi, ebx
// 004fcd31  8bcd                 mov ecx, ebp
// 004fcd33  2bcb                 sub ecx, ebx
// 004fcd35  c1fe02               sar esi, 2
// 004fcd38  c1f902               sar ecx, 2
// 004fcd3b  85f6                 test esi, esi
// 004fcd3d  57                   push edi
// 004fcd3e  8bc1                 mov eax, ecx
// 004fcd40  8bfe                 mov edi, esi
// 004fcd42  740b                 je 0x4fcd4f
// 004fcd44  99                   cdq 
// 004fcd45  f7ff                 idiv edi
// 004fcd47  8bc7                 mov eax, edi
// 004fcd49  85d2                 test edx, edx
// 004fcd4b  8bfa                 mov edi, edx
// 004fcd4d  75f5                 jne 0x4fcd44
// 004fcd4f  3bc1                 cmp eax, ecx
// 004fcd51  7d5f                 jge 0x4fcdb2
// 004fcd53  85c0                 test eax, eax
// 004fcd55  7e5b                 jle 0x4fcdb2
// 004fcd57  8d1c83               lea ebx, [ebx + eax*4]
// 004fcd5a  8d9b00000000         lea ebx, [ebx]
// 004fcd60  8b0b                 mov ecx, dword ptr [ebx]
// 004fcd62  8d14b3               lea edx, [ebx + esi*4]
// 004fcd65  3bd5                 cmp edx, ebp
// 004fcd67  8bfb                 mov edi, ebx
// 004fcd69  894c2418             mov dword ptr [esp + 0x18], ecx
// 004fcd6d  7504                 jne 0x4fcd73
// 004fcd6f  8b542414             mov edx, dword ptr [esp + 0x14]
// 004fcd73  3bd3                 cmp edx, ebx
// 004fcd75  742b                 je 0x4fcda2
// 004fcd77  8b0a                 mov ecx, dword ptr [edx]
// 004fcd79  890f                 mov dword ptr [edi], ecx
// 004fcd7b  8bcd                 mov ecx, ebp
// 004fcd7d  2bca                 sub ecx, edx
// 004fcd7f  c1f902               sar ecx, 2
// 004fcd82  3bf1                 cmp esi, ecx
// 004fcd84  8bfa                 mov edi, edx
// 004fcd86  7d0b                 jge 0x4fcd93
// 004fcd88  8d0cb500000000       lea ecx, [esi*4]
// 004fcd8f  03d1                 add edx, ecx
// 004fcd91  eb0b                 jmp 0x4fcd9e
// 004fcd93  8bd6                 mov edx, esi
// 004fcd95  2bd1                 sub edx, ecx
// 004fcd97  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fcd9b  8d1491               lea edx, [ecx + edx*4]
// 004fcd9e  3bd3                 cmp edx, ebx
// 004fcda0  75d5                 jne 0x4fcd77
// 004fcda2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fcda6  83e801               sub eax, 1
// 004fcda9  83eb04               sub ebx, 4
// 004fcdac  85c0                 test eax, eax
// 004fcdae  8917                 mov dword ptr [edi], edx
// 004fcdb0  7fae                 jg 0x4fcd60
// 004fcdb2  5f                   pop edi
// 004fcdb3  5e                   pop esi
// 004fcdb4  5d                   pop ebp
// 004fcdb5  5b                   pop ebx
// 004fcdb6  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Rotate@PAPAVMotorJoint@RBX@@HPAV12@@std@@YAXPAPAVMotorJoint@RBX@@00PAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
