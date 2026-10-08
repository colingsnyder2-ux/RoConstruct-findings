// roc 2009-06 00442100  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00442100
//
// 00442100  6aff                 push -1
// 00442102  6868eb8600           push 0x86eb68
// 00442107  64a100000000         mov eax, dword ptr fs:[0]
// 0044210d  50                   push eax
// 0044210e  64892500000000       mov dword ptr fs:[0], esp
// 00442115  83ec08               sub esp, 8
// 00442118  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044211c  56                   push esi
// 0044211d  57                   push edi
// 0044211e  8bf1                 mov esi, ecx
// 00442120  89742408             mov dword ptr [esp + 8], esi
// 00442124  50                   push eax
// 00442125  51                   push ecx
// 00442126  8bc4                 mov eax, esp
// 00442128  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00442130  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00442138  89642414             mov dword ptr [esp + 0x14], esp
// 0044213c  c70000000000         mov dword ptr [eax], 0
// 00442142  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00442146  8b542428             mov edx, dword ptr [esp + 0x28]
// 0044214a  51                   push ecx
// 0044214b  52                   push edx
// 0044214c  c644242801           mov byte ptr [esp + 0x28], 1
// 00442151  e85afdffff           call 0x441eb0
// 00442156  50                   push eax
// 00442157  8bce                 mov ecx, esi
// 00442159  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0044215e  e8dd75fcff           call 0x409740
// 00442163  6a00                 push 0
// 00442165  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0044216a  e8c3682d00           call 0x718a32
// 0044216f  6a18                 push 0x18
// 00442171  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 00442177  e8bc682d00           call 0x718a38
// 0044217c  83c408               add esp, 8
// 0044217f  85c0                 test eax, eax
// 00442181  741e                 je 0x4421a1
// 00442183  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00442187  33c9                 xor ecx, ecx
// 00442189  33d2                 xor edx, edx
// 0044218b  897808               mov dword ptr [eax + 8], edi
// 0044218e  c70098608b00         mov dword ptr [eax], 0x8b6098
// 00442194  897004               mov dword ptr [eax + 4], esi
// 00442197  894810               mov dword ptr [eax + 0x10], ecx
// 0044219a  895014               mov dword ptr [eax + 0x14], edx
// 0044219d  8bf8                 mov edi, eax
// 0044219f  eb02                 jmp 0x4421a3
// 004421a1  33ff                 xor edi, edi
// 004421a3  8b4618               mov eax, dword ptr [esi + 0x18]
// 004421a6  3bf8                 cmp edi, eax
// 004421a8  7409                 je 0x4421b3
// 004421aa  50                   push eax
// 004421ab  e882682d00           call 0x718a32
// 004421b0  83c404               add esp, 4
// 004421b3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004421b7  897e18               mov dword ptr [esi + 0x18], edi
// 004421ba  5f                   pop edi
// 004421bb  8bc6                 mov eax, esi
// 004421bd  64890d00000000       mov dword ptr fs:[0], ecx
// 004421c4  5e                   pop esi
// 004421c5  83c414               add esp, 0x14
// 004421c8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
