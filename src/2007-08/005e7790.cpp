// roc 2007-08 005e7790  unit: RBX::VFlag::?$FactoryProduct  size: 507 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7790
//
// 005e7790  6aff                 push -1
// 005e7792  6843ab7500           push 0x75ab43
// 005e7797  64a100000000         mov eax, dword ptr fs:[0]
// 005e779d  50                   push eax
// 005e779e  64892500000000       mov dword ptr fs:[0], esp
// 005e77a5  51                   push ecx
// 005e77a6  53                   push ebx
// 005e77a7  55                   push ebp
// 005e77a8  56                   push esi
// 005e77a9  57                   push edi
// 005e77aa  68d4e68a00           push 0x8ae6d4
// 005e77af  8bf1                 mov esi, ecx
// 005e77b1  6860d87b00           push 0x7bd860
// 005e77b6  89742418             mov dword ptr [esp + 0x18], esi
// 005e77ba  e8a1fbf9ff           call 0x587360
// 005e77bf  8d6e28               lea ebp, [esi + 0x28]
// 005e77c2  33ff                 xor edi, edi
// 005e77c4  8bcd                 mov ecx, ebp
// 005e77c6  897c241c             mov dword ptr [esp + 0x1c], edi
// 005e77ca  c7068cf07a00         mov dword ptr [esi], 0x7af08c
// 005e77d0  e8dbbdf9ff           call 0x5835b0
// 005e77d5  894504               mov dword ptr [ebp + 4], eax
// 005e77d8  bb01000000           mov ebx, 1
// 005e77dd  885815               mov byte ptr [eax + 0x15], bl
// 005e77e0  8b4504               mov eax, dword ptr [ebp + 4]
// 005e77e3  894004               mov dword ptr [eax + 4], eax
// 005e77e6  8b4504               mov eax, dword ptr [ebp + 4]
// 005e77e9  8900                 mov dword ptr [eax], eax
// 005e77eb  8b4504               mov eax, dword ptr [ebp + 4]
// 005e77ee  894008               mov dword ptr [eax + 8], eax
// 005e77f1  897d08               mov dword ptr [ebp + 8], edi
// 005e77f4  8d6e34               lea ebp, [esi + 0x34]
// 005e77f7  8bcd                 mov ecx, ebp
// 005e77f9  885c241c             mov byte ptr [esp + 0x1c], bl
// 005e77fd  e8aebdf9ff           call 0x5835b0
// 005e7802  894504               mov dword ptr [ebp + 4], eax
// 005e7805  885815               mov byte ptr [eax + 0x15], bl
// 005e7808  8b4504               mov eax, dword ptr [ebp + 4]
// 005e780b  894004               mov dword ptr [eax + 4], eax
// 005e780e  8b4504               mov eax, dword ptr [ebp + 4]
// 005e7811  8900                 mov dword ptr [eax], eax
// 005e7813  8b4504               mov eax, dword ptr [ebp + 4]
// 005e7816  894008               mov dword ptr [eax + 8], eax
// 005e7819  897d08               mov dword ptr [ebp + 8], edi
// 005e781c  897e44               mov dword ptr [esi + 0x44], edi
// 005e781f  897e48               mov dword ptr [esi + 0x48], edi
// 005e7822  897e4c               mov dword ptr [esi + 0x4c], edi
// 005e7825  8d6e50               lea ebp, [esi + 0x50]
// 005e7828  8bcd                 mov ecx, ebp
// 005e782a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e782f  e85c20f9ff           call 0x579890
// 005e7834  894504               mov dword ptr [ebp + 4], eax
// 005e7837  88582d               mov byte ptr [eax + 0x2d], bl
// 005e783a  8b4504               mov eax, dword ptr [ebp + 4]
// 005e783d  894004               mov dword ptr [eax + 4], eax
// 005e7840  8b4504               mov eax, dword ptr [ebp + 4]
// 005e7843  8900                 mov dword ptr [eax], eax
// 005e7845  8b4504               mov eax, dword ptr [ebp + 4]
// 005e7848  894008               mov dword ptr [eax + 8], eax
// 005e784b  897d08               mov dword ptr [ebp + 8], edi
// 005e784e  8d6e5c               lea ebp, [esi + 0x5c]
// 005e7851  8bcd                 mov ecx, ebp
// 005e7853  c644241c04           mov byte ptr [esp + 0x1c], 4
// 005e7858  e83320f9ff           call 0x579890
// 005e785d  894504               mov dword ptr [ebp + 4], eax
// 005e7860  88582d               mov byte ptr [eax + 0x2d], bl
// 005e7863  8b4504               mov eax, dword ptr [ebp + 4]
// 005e7866  894004               mov dword ptr [eax + 4], eax
// 005e7869  8b4504               mov eax, dword ptr [ebp + 4]
// 005e786c  8900                 mov dword ptr [eax], eax
// 005e786e  8b4504               mov eax, dword ptr [ebp + 4]
// 005e7871  894008               mov dword ptr [eax + 8], eax
// 005e7874  897d08               mov dword ptr [ebp + 8], edi
// 005e7877  897e6c               mov dword ptr [esi + 0x6c], edi
// 005e787a  897e70               mov dword ptr [esi + 0x70], edi
// 005e787d  897e74               mov dword ptr [esi + 0x74], edi
// 005e7880  897e7c               mov dword ptr [esi + 0x7c], edi
// 005e7883  89be80000000         mov dword ptr [esi + 0x80], edi
// 005e7889  89be84000000         mov dword ptr [esi + 0x84], edi
// 005e788f  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005e7895  89be90000000         mov dword ptr [esi + 0x90], edi
// 005e789b  89be94000000         mov dword ptr [esi + 0x94], edi
// 005e78a1  6858d87b00           push 0x7bd858
// 005e78a6  57                   push edi
// 005e78a7  8bce                 mov ecx, esi
// 005e78a9  c644242408           mov byte ptr [esp + 0x24], 8
// 005e78ae  e8adb7ffff           call 0x5e3060
// 005e78b3  6850d87b00           push 0x7bd850
// 005e78b8  53                   push ebx
// 005e78b9  8bce                 mov ecx, esi
// 005e78bb  e8a0b7ffff           call 0x5e3060
// 005e78c0  6848d87b00           push 0x7bd848
// 005e78c5  6a02                 push 2
// 005e78c7  8bce                 mov ecx, esi
// 005e78c9  e892b7ffff           call 0x5e3060
// 005e78ce  6840d87b00           push 0x7bd840
// 005e78d3  6a03                 push 3
// 005e78d5  8bce                 mov ecx, esi
// 005e78d7  e884b7ffff           call 0x5e3060
// 005e78dc  6838d87b00           push 0x7bd838
// 005e78e1  6a04                 push 4
// 005e78e3  8bce                 mov ecx, esi
// 005e78e5  e876b7ffff           call 0x5e3060
// 005e78ea  6830d87b00           push 0x7bd830
// 005e78ef  6a05                 push 5
// 005e78f1  8bce                 mov ecx, esi
// 005e78f3  e868b7ffff           call 0x5e3060
// 005e78f8  6814217b00           push 0x7b2114
// 005e78fd  6a06                 push 6
// 005e78ff  8bce                 mov ecx, esi
// 005e7901  e85ab7ffff           call 0x5e3060
// 005e7906  6828d87b00           push 0x7bd828
// 005e790b  6a07                 push 7
// 005e790d  8bce                 mov ecx, esi
// 005e790f  e84cb7ffff           call 0x5e3060
// 005e7914  68e4dc7900           push 0x79dce4
// 005e7919  6a08                 push 8
// 005e791b  8bce                 mov ecx, esi
// 005e791d  e83eb7ffff           call 0x5e3060
// 005e7922  68d8787b00           push 0x7b78d8
// 005e7927  6a09                 push 9
// 005e7929  8bce                 mov ecx, esi
// 005e792b  e830b7ffff           call 0x5e3060
// 005e7930  6820d87b00           push 0x7bd820
// 005e7935  6a0a                 push 0xa
// 005e7937  8bce                 mov ecx, esi
// 005e7939  e822b7ffff           call 0x5e3060
// 005e793e  6818d87b00           push 0x7bd818
// 005e7943  6a0b                 push 0xb
// 005e7945  8bce                 mov ecx, esi
// 005e7947  e814b7ffff           call 0x5e3060
// 005e794c  6810d87b00           push 0x7bd810
// 005e7951  6a0c                 push 0xc
// 005e7953  8bce                 mov ecx, esi
// 005e7955  e806b7ffff           call 0x5e3060
// 005e795a  6808d87b00           push 0x7bd808
// 005e795f  6a0d                 push 0xd
// 005e7961  8bce                 mov ecx, esi
// 005e7963  e8f8b6ffff           call 0x5e3060
// 005e7968  6800d87b00           push 0x7bd800
// 005e796d  6a0e                 push 0xe
// 005e796f  8bce                 mov ecx, esi
// 005e7971  e8eab6ffff           call 0x5e3060
// 005e7976  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e797a  5f                   pop edi
// 005e797b  8bc6                 mov eax, esi
// 005e797d  5e                   pop esi
// 005e797e  5d                   pop ebp
// 005e797f  5b                   pop ebx
// 005e7980  64890d00000000       mov dword ptr fs:[0], ecx
// 005e7987  83c410               add esp, 0x10
// 005e798a  c3                   ret 
// library openrbx-client/App\util\SoundWorld.cpp (function ??0?$EnumDesc@W4SoundType@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/SoundWorld.cpp
