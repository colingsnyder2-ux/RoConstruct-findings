// roc 2007-08 0056fc60  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 381 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056fc60
//
// 0056fc60  6aff                 push -1
// 0056fc62  6843ab7500           push 0x75ab43
// 0056fc67  64a100000000         mov eax, dword ptr fs:[0]
// 0056fc6d  50                   push eax
// 0056fc6e  64892500000000       mov dword ptr fs:[0], esp
// 0056fc75  51                   push ecx
// 0056fc76  53                   push ebx
// 0056fc77  55                   push ebp
// 0056fc78  56                   push esi
// 0056fc79  57                   push edi
// 0056fc7a  68acf88900           push 0x89f8ac
// 0056fc7f  8bf1                 mov esi, ecx
// 0056fc81  68c0a07a00           push 0x7aa0c0
// 0056fc86  89742418             mov dword ptr [esp + 0x18], esi
// 0056fc8a  e8d1760100           call 0x587360
// 0056fc8f  8d6e28               lea ebp, [esi + 0x28]
// 0056fc92  33ff                 xor edi, edi
// 0056fc94  8bcd                 mov ecx, ebp
// 0056fc96  897c241c             mov dword ptr [esp + 0x1c], edi
// 0056fc9a  c706bca07a00         mov dword ptr [esi], 0x7aa0bc
// 0056fca0  e80b390100           call 0x5835b0
// 0056fca5  894504               mov dword ptr [ebp + 4], eax
// 0056fca8  bb01000000           mov ebx, 1
// 0056fcad  885815               mov byte ptr [eax + 0x15], bl
// 0056fcb0  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fcb3  894004               mov dword ptr [eax + 4], eax
// 0056fcb6  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fcb9  8900                 mov dword ptr [eax], eax
// 0056fcbb  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fcbe  894008               mov dword ptr [eax + 8], eax
// 0056fcc1  897d08               mov dword ptr [ebp + 8], edi
// 0056fcc4  8d6e34               lea ebp, [esi + 0x34]
// 0056fcc7  8bcd                 mov ecx, ebp
// 0056fcc9  885c241c             mov byte ptr [esp + 0x1c], bl
// 0056fccd  e8de380100           call 0x5835b0
// 0056fcd2  894504               mov dword ptr [ebp + 4], eax
// 0056fcd5  885815               mov byte ptr [eax + 0x15], bl
// 0056fcd8  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fcdb  894004               mov dword ptr [eax + 4], eax
// 0056fcde  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fce1  8900                 mov dword ptr [eax], eax
// 0056fce3  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fce6  894008               mov dword ptr [eax + 8], eax
// 0056fce9  897d08               mov dword ptr [ebp + 8], edi
// 0056fcec  897e44               mov dword ptr [esi + 0x44], edi
// 0056fcef  897e48               mov dword ptr [esi + 0x48], edi
// 0056fcf2  897e4c               mov dword ptr [esi + 0x4c], edi
// 0056fcf5  8d6e50               lea ebp, [esi + 0x50]
// 0056fcf8  8bcd                 mov ecx, ebp
// 0056fcfa  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0056fcff  e88c9b0000           call 0x579890
// 0056fd04  894504               mov dword ptr [ebp + 4], eax
// 0056fd07  88582d               mov byte ptr [eax + 0x2d], bl
// 0056fd0a  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fd0d  894004               mov dword ptr [eax + 4], eax
// 0056fd10  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fd13  8900                 mov dword ptr [eax], eax
// 0056fd15  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fd18  894008               mov dword ptr [eax + 8], eax
// 0056fd1b  897d08               mov dword ptr [ebp + 8], edi
// 0056fd1e  8d6e5c               lea ebp, [esi + 0x5c]
// 0056fd21  8bcd                 mov ecx, ebp
// 0056fd23  c644241c04           mov byte ptr [esp + 0x1c], 4
// 0056fd28  e8639b0000           call 0x579890
// 0056fd2d  894504               mov dword ptr [ebp + 4], eax
// 0056fd30  88582d               mov byte ptr [eax + 0x2d], bl
// 0056fd33  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fd36  894004               mov dword ptr [eax + 4], eax
// 0056fd39  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fd3c  8900                 mov dword ptr [eax], eax
// 0056fd3e  8b4504               mov eax, dword ptr [ebp + 4]
// 0056fd41  894008               mov dword ptr [eax + 8], eax
// 0056fd44  897d08               mov dword ptr [ebp + 8], edi
// 0056fd47  897e6c               mov dword ptr [esi + 0x6c], edi
// 0056fd4a  897e70               mov dword ptr [esi + 0x70], edi
// 0056fd4d  897e74               mov dword ptr [esi + 0x74], edi
// 0056fd50  897e7c               mov dword ptr [esi + 0x7c], edi
// 0056fd53  89be80000000         mov dword ptr [esi + 0x80], edi
// 0056fd59  89be84000000         mov dword ptr [esi + 0x84], edi
// 0056fd5f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 0056fd65  89be90000000         mov dword ptr [esi + 0x90], edi
// 0056fd6b  89be94000000         mov dword ptr [esi + 0x94], edi
// 0056fd71  68b87c7900           push 0x797cb8
// 0056fd76  53                   push ebx
// 0056fd77  8bce                 mov ecx, esi
// 0056fd79  c644242408           mov byte ptr [esp + 0x24], 8
// 0056fd7e  e8dd320700           call 0x5e3060
// 0056fd83  68b0a07a00           push 0x7aa0b0
// 0056fd88  6a04                 push 4
// 0056fd8a  8bce                 mov ecx, esi
// 0056fd8c  e8cf320700           call 0x5e3060
// 0056fd91  68a8a07a00           push 0x7aa0a8
// 0056fd96  6a02                 push 2
// 0056fd98  8bce                 mov ecx, esi
// 0056fd9a  e8c1320700           call 0x5e3060
// 0056fd9f  68a0a07a00           push 0x7aa0a0
// 0056fda4  6a05                 push 5
// 0056fda6  8bce                 mov ecx, esi
// 0056fda8  e8b3320700           call 0x5e3060
// 0056fdad  6898a07a00           push 0x7aa098
// 0056fdb2  57                   push edi
// 0056fdb3  8bce                 mov ecx, esi
// 0056fdb5  e8a6320700           call 0x5e3060
// 0056fdba  68b07c7900           push 0x797cb0
// 0056fdbf  6a03                 push 3
// 0056fdc1  8bce                 mov ecx, esi
// 0056fdc3  e898320700           call 0x5e3060
// 0056fdc8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0056fdcc  5f                   pop edi
// 0056fdcd  8bc6                 mov eax, esi
// 0056fdcf  5e                   pop esi
// 0056fdd0  5d                   pop ebp
// 0056fdd1  5b                   pop ebx
// 0056fdd2  64890d00000000       mov dword ptr fs:[0], ecx
// 0056fdd9  83c410               add esp, 0x10
// 0056fddc  c3                   ret 
// library openrbx-client/App\v8tree\enumproperty.cpp (function ??0?$EnumDesc@W4NormalId@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/enumproperty.cpp
