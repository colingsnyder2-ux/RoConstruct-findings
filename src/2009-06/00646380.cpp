// roc 2009-06 00646380  unit: RBX::Soundscape::SoundService  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00646380
//
// 00646380  6aff                 push -1
// 00646382  6868eb8600           push 0x86eb68
// 00646387  64a100000000         mov eax, dword ptr fs:[0]
// 0064638d  50                   push eax
// 0064638e  64892500000000       mov dword ptr fs:[0], esp
// 00646395  83ec08               sub esp, 8
// 00646398  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064639c  56                   push esi
// 0064639d  57                   push edi
// 0064639e  8bf1                 mov esi, ecx
// 006463a0  89742408             mov dword ptr [esp + 8], esi
// 006463a4  50                   push eax
// 006463a5  51                   push ecx
// 006463a6  8bc4                 mov eax, esp
// 006463a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006463b0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006463b8  89642414             mov dword ptr [esp + 0x14], esp
// 006463bc  c70000000000         mov dword ptr [eax], 0
// 006463c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006463c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006463ca  51                   push ecx
// 006463cb  52                   push edx
// 006463cc  c644242801           mov byte ptr [esp + 0x28], 1
// 006463d1  e83afbffff           call 0x645f10
// 006463d6  50                   push eax
// 006463d7  8bce                 mov ecx, esi
// 006463d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006463de  e85d33dcff           call 0x409740
// 006463e3  6a00                 push 0
// 006463e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006463ea  e843260d00           call 0x718a32
// 006463ef  6a18                 push 0x18
// 006463f1  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 006463f7  e83c260d00           call 0x718a38
// 006463fc  83c408               add esp, 8
// 006463ff  85c0                 test eax, eax
// 00646401  741e                 je 0x646421
// 00646403  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00646407  33c9                 xor ecx, ecx
// 00646409  33d2                 xor edx, edx
// 0064640b  897808               mov dword ptr [eax + 8], edi
// 0064640e  c70050e48d00         mov dword ptr [eax], 0x8de450
// 00646414  897004               mov dword ptr [eax + 4], esi
// 00646417  894810               mov dword ptr [eax + 0x10], ecx
// 0064641a  895014               mov dword ptr [eax + 0x14], edx
// 0064641d  8bf8                 mov edi, eax
// 0064641f  eb02                 jmp 0x646423
// 00646421  33ff                 xor edi, edi
// 00646423  8b4618               mov eax, dword ptr [esi + 0x18]
// 00646426  3bf8                 cmp edi, eax
// 00646428  7409                 je 0x646433
// 0064642a  50                   push eax
// 0064642b  e802260d00           call 0x718a32
// 00646430  83c404               add esp, 4
// 00646433  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00646437  897e18               mov dword ptr [esi + 0x18], edi
// 0064643a  5f                   pop edi
// 0064643b  8bc6                 mov eax, esi
// 0064643d  64890d00000000       mov dword ptr fs:[0], ecx
// 00646444  5e                   pop esi
// 00646445  83c414               add esp, 0x14
// 00646448  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
