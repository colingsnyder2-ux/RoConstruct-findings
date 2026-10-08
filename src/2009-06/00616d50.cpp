// roc 2009-06 00616d50  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00616d50
//
// 00616d50  6aff                 push -1
// 00616d52  6868eb8600           push 0x86eb68
// 00616d57  64a100000000         mov eax, dword ptr fs:[0]
// 00616d5d  50                   push eax
// 00616d5e  64892500000000       mov dword ptr fs:[0], esp
// 00616d65  83ec08               sub esp, 8
// 00616d68  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616d6c  56                   push esi
// 00616d6d  57                   push edi
// 00616d6e  8bf1                 mov esi, ecx
// 00616d70  89742408             mov dword ptr [esp + 8], esi
// 00616d74  50                   push eax
// 00616d75  51                   push ecx
// 00616d76  8bc4                 mov eax, esp
// 00616d78  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00616d80  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00616d88  89642414             mov dword ptr [esp + 0x14], esp
// 00616d8c  c70000000000         mov dword ptr [eax], 0
// 00616d92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00616d96  8b542428             mov edx, dword ptr [esp + 0x28]
// 00616d9a  51                   push ecx
// 00616d9b  52                   push edx
// 00616d9c  c644242801           mov byte ptr [esp + 0x28], 1
// 00616da1  e80a39fdff           call 0x5ea6b0
// 00616da6  50                   push eax
// 00616da7  8bce                 mov ecx, esi
// 00616da9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00616dae  e88d29dfff           call 0x409740
// 00616db3  6a00                 push 0
// 00616db5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00616dba  e8731c1000           call 0x718a32
// 00616dbf  6a18                 push 0x18
// 00616dc1  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 00616dc7  e86c1c1000           call 0x718a38
// 00616dcc  83c408               add esp, 8
// 00616dcf  85c0                 test eax, eax
// 00616dd1  741e                 je 0x616df1
// 00616dd3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00616dd7  33c9                 xor ecx, ecx
// 00616dd9  33d2                 xor edx, edx
// 00616ddb  897808               mov dword ptr [eax + 8], edi
// 00616dde  c700b88b8d00         mov dword ptr [eax], 0x8d8bb8
// 00616de4  897004               mov dword ptr [eax + 4], esi
// 00616de7  894810               mov dword ptr [eax + 0x10], ecx
// 00616dea  895014               mov dword ptr [eax + 0x14], edx
// 00616ded  8bf8                 mov edi, eax
// 00616def  eb02                 jmp 0x616df3
// 00616df1  33ff                 xor edi, edi
// 00616df3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00616df6  3bf8                 cmp edi, eax
// 00616df8  7409                 je 0x616e03
// 00616dfa  50                   push eax
// 00616dfb  e8321c1000           call 0x718a32
// 00616e00  83c404               add esp, 4
// 00616e03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00616e07  897e18               mov dword ptr [esi + 0x18], edi
// 00616e0a  5f                   pop edi
// 00616e0b  8bc6                 mov eax, esi
// 00616e0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00616e14  5e                   pop esi
// 00616e15  83c414               add esp, 0x14
// 00616e18  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
