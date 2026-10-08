// roc 2007-08 004fd4c0  unit: RBX::Render::AggregateChunk  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd4c0
//
// 004fd4c0  55                   push ebp
// 004fd4c1  8bec                 mov ebp, esp
// 004fd4c3  83e4f8               and esp, 0xfffffff8
// 004fd4c6  83ec5c               sub esp, 0x5c
// 004fd4c9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004fd4cc  53                   push ebx
// 004fd4cd  56                   push esi
// 004fd4ce  8b7508               mov esi, dword ptr [ebp + 8]
// 004fd4d1  2bce                 sub ecx, esi
// 004fd4d3  b867666666           mov eax, 0x66666667
// 004fd4d8  f7e9                 imul ecx
// 004fd4da  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004fd4dd  c1fa05               sar edx, 5
// 004fd4e0  57                   push edi
// 004fd4e1  8bfa                 mov edi, edx
// 004fd4e3  2bce                 sub ecx, esi
// 004fd4e5  c1ef1f               shr edi, 0x1f
// 004fd4e8  03fa                 add edi, edx
// 004fd4ea  b867666666           mov eax, 0x66666667
// 004fd4ef  f7e9                 imul ecx
// 004fd4f1  c1fa05               sar edx, 5
// 004fd4f4  8bca                 mov ecx, edx
// 004fd4f6  c1e91f               shr ecx, 0x1f
// 004fd4f9  03ca                 add ecx, edx
// 004fd4fb  85ff                 test edi, edi
// 004fd4fd  8bc1                 mov eax, ecx
// 004fd4ff  89442410             mov dword ptr [esp + 0x10], eax
// 004fd503  8bdf                 mov ebx, edi
// 004fd505  7411                 je 0x4fd518
// 004fd507  99                   cdq 
// 004fd508  f7fb                 idiv ebx
// 004fd50a  895c2410             mov dword ptr [esp + 0x10], ebx
// 004fd50e  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fd512  85d2                 test edx, edx
// 004fd514  8bda                 mov ebx, edx
// 004fd516  75ef                 jne 0x4fd507
// 004fd518  3bc1                 cmp eax, ecx
// 004fd51a  0f8d02010000         jge 0x4fd622
// 004fd520  85c0                 test eax, eax
// 004fd522  0f8efa000000         jle 0x4fd622
// 004fd528  8d0cbf               lea ecx, [edi + edi*4]
// 004fd52b  8d1c80               lea ebx, [eax + eax*4]
// 004fd52e  c1e104               shl ecx, 4
// 004fd531  c1e304               shl ebx, 4
// 004fd534  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fd538  03de                 add ebx, esi
// 004fd53a  8d9b00000000         lea ebx, [ebx]
// 004fd540  53                   push ebx
// 004fd541  8d4c241c             lea ecx, [esp + 0x1c]
// 004fd545  8bf3                 mov esi, ebx
// 004fd547  e82474f7ff           call 0x474970
// 004fd54c  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fd550  8d0c03               lea ecx, [ebx + eax]
// 004fd553  3b4d10               cmp ecx, dword ptr [ebp + 0x10]
// 004fd556  7503                 jne 0x4fd55b
// 004fd558  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004fd55b  3bcb                 cmp ecx, ebx
// 004fd55d  0f849d000000         je 0x4fd600
// 004fd563  d901                 fld dword ptr [ecx]
// 004fd565  d91e                 fstp dword ptr [esi]
// 004fd567  d94104               fld dword ptr [ecx + 4]
// 004fd56a  d95e04               fstp dword ptr [esi + 4]
// 004fd56d  d94108               fld dword ptr [ecx + 8]
// 004fd570  d95e08               fstp dword ptr [esi + 8]
// 004fd573  d9410c               fld dword ptr [ecx + 0xc]
// 004fd576  d95e0c               fstp dword ptr [esi + 0xc]
// 004fd579  d94110               fld dword ptr [ecx + 0x10]
// 004fd57c  d95e10               fstp dword ptr [esi + 0x10]
// 004fd57f  d94114               fld dword ptr [ecx + 0x14]
// 004fd582  d95e14               fstp dword ptr [esi + 0x14]
// 004fd585  d94118               fld dword ptr [ecx + 0x18]
// 004fd588  d95e18               fstp dword ptr [esi + 0x18]
// 004fd58b  dd4120               fld qword ptr [ecx + 0x20]
// 004fd58e  dd5e20               fstp qword ptr [esi + 0x20]
// 004fd591  dd4128               fld qword ptr [ecx + 0x28]
// 004fd594  dd5e28               fstp qword ptr [esi + 0x28]
// 004fd597  dd4130               fld qword ptr [ecx + 0x30]
// 004fd59a  dd5e30               fstp qword ptr [esi + 0x30]
// 004fd59d  dd4138               fld qword ptr [ecx + 0x38]
// 004fd5a0  dd5e38               fstp qword ptr [esi + 0x38]
// 004fd5a3  d94140               fld dword ptr [ecx + 0x40]
// 004fd5a6  d95e40               fstp dword ptr [esi + 0x40]
// 004fd5a9  d94144               fld dword ptr [ecx + 0x44]
// 004fd5ac  d95e44               fstp dword ptr [esi + 0x44]
// 004fd5af  d94148               fld dword ptr [ecx + 0x48]
// 004fd5b2  d95e48               fstp dword ptr [esi + 0x48]
// 004fd5b5  0fb6514c             movzx edx, byte ptr [ecx + 0x4c]
// 004fd5b9  88564c               mov byte ptr [esi + 0x4c], dl
// 004fd5bc  8a414d               mov al, byte ptr [ecx + 0x4d]
// 004fd5bf  88464d               mov byte ptr [esi + 0x4d], al
// 004fd5c2  0fb6514e             movzx edx, byte ptr [ecx + 0x4e]
// 004fd5c6  88564e               mov byte ptr [esi + 0x4e], dl
// 004fd5c9  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004fd5cc  2bd1                 sub edx, ecx
// 004fd5ce  b867666666           mov eax, 0x66666667
// 004fd5d3  f7ea                 imul edx
// 004fd5d5  c1fa05               sar edx, 5
// 004fd5d8  8bc2                 mov eax, edx
// 004fd5da  c1e81f               shr eax, 0x1f
// 004fd5dd  03c2                 add eax, edx
// 004fd5df  3bf8                 cmp edi, eax
// 004fd5e1  8bf1                 mov esi, ecx
// 004fd5e3  7d06                 jge 0x4fd5eb
// 004fd5e5  034c2414             add ecx, dword ptr [esp + 0x14]
// 004fd5e9  eb0d                 jmp 0x4fd5f8
// 004fd5eb  8bcf                 mov ecx, edi
// 004fd5ed  2bc8                 sub ecx, eax
// 004fd5ef  8d0c89               lea ecx, [ecx + ecx*4]
// 004fd5f2  c1e104               shl ecx, 4
// 004fd5f5  034d08               add ecx, dword ptr [ebp + 8]
// 004fd5f8  3bcb                 cmp ecx, ebx
// 004fd5fa  0f8563ffffff         jne 0x4fd563
// 004fd600  8d442418             lea eax, [esp + 0x18]
// 004fd604  50                   push eax
// 004fd605  8bce                 mov ecx, esi
// 004fd607  e8c45ef7ff           call 0x4734d0
// 004fd60c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fd610  83e801               sub eax, 1
// 004fd613  83eb50               sub ebx, 0x50
// 004fd616  85c0                 test eax, eax
// 004fd618  89442410             mov dword ptr [esp + 0x10], eax
// 004fd61c  0f8f1effffff         jg 0x4fd540
// 004fd622  5f                   pop edi
// 004fd623  5e                   pop esi
// 004fd624  5b                   pop ebx
// 004fd625  8be5                 mov esp, ebp
// 004fd627  5d                   pop ebp
// 004fd628  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Rotate@PAVGLight@G3D@@HV12@@std@@YAXPAVGLight@G3D@@00PAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
