// roc 2007-03 004f0890  unit: seg_004f0000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0890
//
// 004f0890  53                   push ebx
// 004f0891  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004f0895  55                   push ebp
// 004f0896  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004f089a  56                   push esi
// 004f089b  8b742414             mov esi, dword ptr [esp + 0x14]
// 004f089f  2bf3                 sub esi, ebx
// 004f08a1  8bcd                 mov ecx, ebp
// 004f08a3  2bcb                 sub ecx, ebx
// 004f08a5  c1fe02               sar esi, 2
// 004f08a8  c1f902               sar ecx, 2
// 004f08ab  85f6                 test esi, esi
// 004f08ad  57                   push edi
// 004f08ae  8bc1                 mov eax, ecx
// 004f08b0  8bfe                 mov edi, esi
// 004f08b2  740b                 je 0x4f08bf
// 004f08b4  99                   cdq 
// 004f08b5  f7ff                 idiv edi
// 004f08b7  8bc7                 mov eax, edi
// 004f08b9  85d2                 test edx, edx
// 004f08bb  8bfa                 mov edi, edx
// 004f08bd  75f5                 jne 0x4f08b4
// 004f08bf  3bc1                 cmp eax, ecx
// 004f08c1  7d5f                 jge 0x4f0922
// 004f08c3  85c0                 test eax, eax
// 004f08c5  7e5b                 jle 0x4f0922
// 004f08c7  8d1c83               lea ebx, [ebx + eax*4]
// 004f08ca  8d9b00000000         lea ebx, [ebx]
// 004f08d0  8b0b                 mov ecx, dword ptr [ebx]
// 004f08d2  8d14b3               lea edx, [ebx + esi*4]
// 004f08d5  3bd5                 cmp edx, ebp
// 004f08d7  8bfb                 mov edi, ebx
// 004f08d9  894c2418             mov dword ptr [esp + 0x18], ecx
// 004f08dd  7504                 jne 0x4f08e3
// 004f08df  8b542414             mov edx, dword ptr [esp + 0x14]
// 004f08e3  3bd3                 cmp edx, ebx
// 004f08e5  742b                 je 0x4f0912
// 004f08e7  8b0a                 mov ecx, dword ptr [edx]
// 004f08e9  890f                 mov dword ptr [edi], ecx
// 004f08eb  8bcd                 mov ecx, ebp
// 004f08ed  2bca                 sub ecx, edx
// 004f08ef  c1f902               sar ecx, 2
// 004f08f2  3bf1                 cmp esi, ecx
// 004f08f4  8bfa                 mov edi, edx
// 004f08f6  7d0b                 jge 0x4f0903
// 004f08f8  8d0cb500000000       lea ecx, [esi*4]
// 004f08ff  03d1                 add edx, ecx
// 004f0901  eb0b                 jmp 0x4f090e
// 004f0903  8bd6                 mov edx, esi
// 004f0905  2bd1                 sub edx, ecx
// 004f0907  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f090b  8d1491               lea edx, [ecx + edx*4]
// 004f090e  3bd3                 cmp edx, ebx
// 004f0910  75d5                 jne 0x4f08e7
// 004f0912  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f0916  83e801               sub eax, 1
// 004f0919  83eb04               sub ebx, 4
// 004f091c  85c0                 test eax, eax
// 004f091e  8917                 mov dword ptr [edi], edx
// 004f0920  7fae                 jg 0x4f08d0
// 004f0922  5f                   pop edi
// 004f0923  5e                   pop esi
// 004f0924  5d                   pop ebp
// 004f0925  5b                   pop ebx
// 004f0926  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Rotate@PAPAVMotorJoint@RBX@@HPAV12@@std@@YAXPAPAVMotorJoint@RBX@@00PAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
