// roc 2007-08 00538c00  unit: RBX::VScriptContext::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538c00
//
// 00538c00  55                   push ebp
// 00538c01  8bec                 mov ebp, esp
// 00538c03  6aff                 push -1
// 00538c05  68b00b7500           push 0x750bb0
// 00538c0a  64a100000000         mov eax, dword ptr fs:[0]
// 00538c10  50                   push eax
// 00538c11  64892500000000       mov dword ptr fs:[0], esp
// 00538c18  83ec08               sub esp, 8
// 00538c1b  53                   push ebx
// 00538c1c  56                   push esi
// 00538c1d  57                   push edi
// 00538c1e  8bf1                 mov esi, ecx
// 00538c20  8965f0               mov dword ptr [ebp - 0x10], esp
// 00538c23  8975ec               mov dword ptr [ebp - 0x14], esi
// 00538c26  e885070700           call 0x5a93b0
// 00538c2b  894604               mov dword ptr [esi + 4], eax
// 00538c2e  c6401101             mov byte ptr [eax + 0x11], 1
// 00538c32  8b4604               mov eax, dword ptr [esi + 4]
// 00538c35  894004               mov dword ptr [eax + 4], eax
// 00538c38  8b4604               mov eax, dword ptr [esi + 4]
// 00538c3b  8900                 mov dword ptr [eax], eax
// 00538c3d  8b4604               mov eax, dword ptr [esi + 4]
// 00538c40  894008               mov dword ptr [eax + 8], eax
// 00538c43  8b4508               mov eax, dword ptr [ebp + 8]
// 00538c46  50                   push eax
// 00538c47  8bce                 mov ecx, esi
// 00538c49  c7460800000000       mov dword ptr [esi + 8], 0
// 00538c50  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00538c57  e8b4f7ffff           call 0x538410
// 00538c5c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00538c5f  5f                   pop edi
// 00538c60  8bc6                 mov eax, esi
// 00538c62  5e                   pop esi
// 00538c63  64890d00000000       mov dword ptr fs:[0], ecx
// 00538c6a  5b                   pop ebx
// 00538c6b  8be5                 mov esp, ebp
// 00538c6d  5d                   pop ebp
// 00538c6e  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
