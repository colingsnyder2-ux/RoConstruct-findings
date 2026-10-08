// roc 2012-06 006a73c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a73c0
//
// 006a73c0  55                   push ebp
// 006a73c1  8bec                 mov ebp, esp
// 006a73c3  6aff                 push -1
// 006a73c5  68007bab00           push 0xab7b00
// 006a73ca  64a100000000         mov eax, dword ptr fs:[0]
// 006a73d0  50                   push eax
// 006a73d1  64892500000000       mov dword ptr fs:[0], esp
// 006a73d8  83ec08               sub esp, 8
// 006a73db  53                   push ebx
// 006a73dc  56                   push esi
// 006a73dd  57                   push edi
// 006a73de  8bf1                 mov esi, ecx
// 006a73e0  8965f0               mov dword ptr [ebp - 0x10], esp
// 006a73e3  8975ec               mov dword ptr [ebp - 0x14], esi
// 006a73e6  e8850b1d00           call 0x877f70
// 006a73eb  894604               mov dword ptr [esi + 4], eax
// 006a73ee  c6401101             mov byte ptr [eax + 0x11], 1
// 006a73f2  8b4604               mov eax, dword ptr [esi + 4]
// 006a73f5  894004               mov dword ptr [eax + 4], eax
// 006a73f8  8b4604               mov eax, dword ptr [esi + 4]
// 006a73fb  8900                 mov dword ptr [eax], eax
// 006a73fd  8b4604               mov eax, dword ptr [esi + 4]
// 006a7400  894008               mov dword ptr [eax + 8], eax
// 006a7403  8b4508               mov eax, dword ptr [ebp + 8]
// 006a7406  50                   push eax
// 006a7407  8bce                 mov ecx, esi
// 006a7409  c7460800000000       mov dword ptr [esi + 8], 0
// 006a7410  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006a7417  e8e4f4daff           call 0x456900
// 006a741c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006a741f  5f                   pop edi
// 006a7420  8bc6                 mov eax, esi
// 006a7422  5e                   pop esi
// 006a7423  64890d00000000       mov dword ptr fs:[0], ecx
// 006a742a  5b                   pop ebx
// 006a742b  8be5                 mov esp, ebp
// 006a742d  5d                   pop ebp
// 006a742e  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
