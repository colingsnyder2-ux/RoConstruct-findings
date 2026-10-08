// roc 2008-06 007b0090  unit: RBX::RenderNew::TextureProxy  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b0090
//
// 007b0090  55                   push ebp
// 007b0091  8bec                 mov ebp, esp
// 007b0093  83e4f8               and esp, 0xfffffff8
// 007b0096  83ec24               sub esp, 0x24
// 007b0099  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007b009c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007b009f  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 007b00a2  89442414             mov dword ptr [esp + 0x14], eax
// 007b00a6  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007b00a9  53                   push ebx
// 007b00aa  89442424             mov dword ptr [esp + 0x24], eax
// 007b00ae  a168ee9600           mov eax, dword ptr [0x96ee68]
// 007b00b3  83f804               cmp eax, 4
// 007b00b6  56                   push esi
// 007b00b7  57                   push edi
// 007b00b8  894c2424             mov dword ptr [esp + 0x24], ecx
// 007b00bc  89542428             mov dword ptr [esp + 0x28], edx
// 007b00c0  8944240c             mov dword ptr [esp + 0xc], eax
// 007b00c4  7e08                 jle 0x7b00ce
// 007b00c6  c744240c04000000     mov dword ptr [esp + 0xc], 4
// 007b00ce  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 007b00d1  8bcb                 mov ecx, ebx
// 007b00d3  e808ccccff           call 0x47cce0
// 007b00d8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 007b00db  d901                 fld dword ptr [ecx]
// 007b00dd  8d83a8040000         lea eax, [ebx + 0x4a8]
// 007b00e3  d918                 fstp dword ptr [eax]
// 007b00e5  50                   push eax
// 007b00e6  d94104               fld dword ptr [ecx + 4]
// 007b00e9  d95804               fstp dword ptr [eax + 4]
// 007b00ec  d94108               fld dword ptr [ecx + 8]
// 007b00ef  d95808               fstp dword ptr [eax + 8]
// 007b00f2  d9410c               fld dword ptr [ecx + 0xc]
// 007b00f5  d9580c               fstp dword ptr [eax + 0xc]
// 007b00f8  ff15f4298000         call dword ptr [0x8029f4]
// 007b00fe  6a05                 push 5
// 007b0100  8bcb                 mov ecx, ebx
// 007b0102  e809b3ccff           call 0x47b410
// 007b0107  33ff                 xor edi, edi
// 007b0109  33f6                 xor esi, esi
// 007b010b  3974240c             cmp dword ptr [esp + 0xc], esi
// 007b010f  7e1f                 jle 0x7b0130
// 007b0111  57                   push edi
// 007b0112  8d4c2414             lea ecx, [esp + 0x14]
// 007b0116  51                   push ecx
// 007b0117  8b4cb428             mov ecx, dword ptr [esp + esi*4 + 0x28]
// 007b011b  e8c0efe1ff           call 0x5cf0e0
// 007b0120  50                   push eax
// 007b0121  56                   push esi
// 007b0122  8bcb                 mov ecx, ebx
// 007b0124  e8377dccff           call 0x477e60
// 007b0129  46                   inc esi
// 007b012a  3b74240c             cmp esi, dword ptr [esp + 0xc]
// 007b012e  7ce1                 jl 0x7b0111
// 007b0130  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007b0133  57                   push edi
// 007b0134  8d54241c             lea edx, [esp + 0x1c]
// 007b0138  52                   push edx
// 007b0139  e8a2efe1ff           call 0x5cf0e0
// 007b013e  50                   push eax
// 007b013f  8bcb                 mov ecx, ebx
// 007b0141  e85a7dccff           call 0x477ea0
// 007b0146  47                   inc edi
// 007b0147  83ff04               cmp edi, 4
// 007b014a  7cbd                 jl 0x7b0109
// 007b014c  8bcb                 mov ecx, ebx
// 007b014e  e83d88ccff           call 0x478990
// 007b0153  8bcb                 mov ecx, ebx
// 007b0155  e806d2ccff           call 0x47d360
// 007b015a  5f                   pop edi
// 007b015b  5e                   pop esi
// 007b015c  5b                   pop ebx
// 007b015d  8be5                 mov esp, ebp
// 007b015f  5d                   pop ebp
// 007b0160  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@0000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
