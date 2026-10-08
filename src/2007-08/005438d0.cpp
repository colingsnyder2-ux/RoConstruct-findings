// roc 2007-08 005438d0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005438d0
//
// 005438d0  6aff                 push -1
// 005438d2  6843ab7500           push 0x75ab43
// 005438d7  64a100000000         mov eax, dword ptr fs:[0]
// 005438dd  50                   push eax
// 005438de  64892500000000       mov dword ptr fs:[0], esp
// 005438e5  51                   push ecx
// 005438e6  53                   push ebx
// 005438e7  55                   push ebp
// 005438e8  56                   push esi
// 005438e9  57                   push edi
// 005438ea  68e8b88900           push 0x89b8e8
// 005438ef  8bf1                 mov esi, ecx
// 005438f1  681c697a00           push 0x7a691c
// 005438f6  89742418             mov dword ptr [esp + 0x18], esi
// 005438fa  e8613a0400           call 0x587360
// 005438ff  8d6e28               lea ebp, [esi + 0x28]
// 00543902  33ff                 xor edi, edi
// 00543904  8bcd                 mov ecx, ebp
// 00543906  897c241c             mov dword ptr [esp + 0x1c], edi
// 0054390a  c706f4687a00         mov dword ptr [esi], 0x7a68f4
// 00543910  e89bfc0300           call 0x5835b0
// 00543915  894504               mov dword ptr [ebp + 4], eax
// 00543918  bb01000000           mov ebx, 1
// 0054391d  885815               mov byte ptr [eax + 0x15], bl
// 00543920  8b4504               mov eax, dword ptr [ebp + 4]
// 00543923  894004               mov dword ptr [eax + 4], eax
// 00543926  8b4504               mov eax, dword ptr [ebp + 4]
// 00543929  8900                 mov dword ptr [eax], eax
// 0054392b  8b4504               mov eax, dword ptr [ebp + 4]
// 0054392e  894008               mov dword ptr [eax + 8], eax
// 00543931  897d08               mov dword ptr [ebp + 8], edi
// 00543934  8d6e34               lea ebp, [esi + 0x34]
// 00543937  8bcd                 mov ecx, ebp
// 00543939  885c241c             mov byte ptr [esp + 0x1c], bl
// 0054393d  e86efc0300           call 0x5835b0
// 00543942  894504               mov dword ptr [ebp + 4], eax
// 00543945  885815               mov byte ptr [eax + 0x15], bl
// 00543948  8b4504               mov eax, dword ptr [ebp + 4]
// 0054394b  894004               mov dword ptr [eax + 4], eax
// 0054394e  8b4504               mov eax, dword ptr [ebp + 4]
// 00543951  8900                 mov dword ptr [eax], eax
// 00543953  8b4504               mov eax, dword ptr [ebp + 4]
// 00543956  894008               mov dword ptr [eax + 8], eax
// 00543959  897d08               mov dword ptr [ebp + 8], edi
// 0054395c  897e44               mov dword ptr [esi + 0x44], edi
// 0054395f  897e48               mov dword ptr [esi + 0x48], edi
// 00543962  897e4c               mov dword ptr [esi + 0x4c], edi
// 00543965  8d6e50               lea ebp, [esi + 0x50]
// 00543968  8bcd                 mov ecx, ebp
// 0054396a  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0054396f  e81c5f0300           call 0x579890
// 00543974  894504               mov dword ptr [ebp + 4], eax
// 00543977  88582d               mov byte ptr [eax + 0x2d], bl
// 0054397a  8b4504               mov eax, dword ptr [ebp + 4]
// 0054397d  894004               mov dword ptr [eax + 4], eax
// 00543980  8b4504               mov eax, dword ptr [ebp + 4]
// 00543983  8900                 mov dword ptr [eax], eax
// 00543985  8b4504               mov eax, dword ptr [ebp + 4]
// 00543988  894008               mov dword ptr [eax + 8], eax
// 0054398b  897d08               mov dword ptr [ebp + 8], edi
// 0054398e  8d6e5c               lea ebp, [esi + 0x5c]
// 00543991  8bcd                 mov ecx, ebp
// 00543993  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00543998  e8f35e0300           call 0x579890
// 0054399d  894504               mov dword ptr [ebp + 4], eax
// 005439a0  88582d               mov byte ptr [eax + 0x2d], bl
// 005439a3  8b4504               mov eax, dword ptr [ebp + 4]
// 005439a6  894004               mov dword ptr [eax + 4], eax
// 005439a9  8b4504               mov eax, dword ptr [ebp + 4]
// 005439ac  8900                 mov dword ptr [eax], eax
// 005439ae  8b4504               mov eax, dword ptr [ebp + 4]
// 005439b1  894008               mov dword ptr [eax + 8], eax
// 005439b4  897d08               mov dword ptr [ebp + 8], edi
// 005439b7  897e6c               mov dword ptr [esi + 0x6c], edi
// 005439ba  897e70               mov dword ptr [esi + 0x70], edi
// 005439bd  897e74               mov dword ptr [esi + 0x74], edi
// 005439c0  897e7c               mov dword ptr [esi + 0x7c], edi
// 005439c3  89be80000000         mov dword ptr [esi + 0x80], edi
// 005439c9  89be84000000         mov dword ptr [esi + 0x84], edi
// 005439cf  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 005439d5  89be90000000         mov dword ptr [esi + 0x90], edi
// 005439db  89be94000000         mov dword ptr [esi + 0x94], edi
// 005439e1  6810697a00           push 0x7a6910
// 005439e6  57                   push edi
// 005439e7  8bce                 mov ecx, esi
// 005439e9  c644242408           mov byte ptr [esp + 0x24], 8
// 005439ee  e86df60900           call 0x5e3060
// 005439f3  6808697a00           push 0x7a6908
// 005439f8  53                   push ebx
// 005439f9  8bce                 mov ecx, esi
// 005439fb  e860f60900           call 0x5e3060
// 00543a00  6800697a00           push 0x7a6900
// 00543a05  6a02                 push 2
// 00543a07  8bce                 mov ecx, esi
// 00543a09  e852f60900           call 0x5e3060
// 00543a0e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00543a12  5f                   pop edi
// 00543a13  8bc6                 mov eax, esi
// 00543a15  5e                   pop esi
// 00543a16  5d                   pop ebp
// 00543a17  5b                   pop ebx
// 00543a18  64890d00000000       mov dword ptr fs:[0], ecx
// 00543a1f  83c410               add esp, 0x10
// 00543a22  c3                   ret 
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ??0?$EnumDesc@W4ErrorReporting@DebugSettings@RBX@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
