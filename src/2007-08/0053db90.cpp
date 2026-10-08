// roc 2007-08 0053db90  unit: RBX::VScript::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053db90
//
// 0053db90  64a100000000         mov eax, dword ptr fs:[0]
// 0053db96  6aff                 push -1
// 0053db98  68ce117500           push 0x7511ce
// 0053db9d  50                   push eax
// 0053db9e  b801000000           mov eax, 1
// 0053dba3  64892500000000       mov dword ptr fs:[0], esp
// 0053dbaa  8405b0138c00         test byte ptr [0x8c13b0], al
// 0053dbb0  7530                 jne 0x53dbe2
// 0053dbb2  0905b0138c00         or dword ptr [0x8c13b0], eax
// 0053dbb8  6870a18900           push 0x89a170
// 0053dbbd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053dbc5  e8a6fcffff           call 0x53d870
// 0053dbca  50                   push eax
// 0053dbcb  b928138c00           mov ecx, 0x8c1328
// 0053dbd0  e82b300300           call 0x570c00
// 0053dbd5  6860957700           push 0x779560
// 0053dbda  e844310f00           call 0x630d23
// 0053dbdf  83c404               add esp, 4
// 0053dbe2  8b0c24               mov ecx, dword ptr [esp]
// 0053dbe5  b828138c00           mov eax, 0x8c1328
// 0053dbea  64890d00000000       mov dword ptr fs:[0], ecx
// 0053dbf1  83c40c               add esp, 0xc
// 0053dbf4  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
