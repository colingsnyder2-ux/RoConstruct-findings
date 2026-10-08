// roc 2011-06 0061cce0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061cce0
//
// 0061cce0  55                   push ebp
// 0061cce1  8bec                 mov ebp, esp
// 0061cce3  6aff                 push -1
// 0061cce5  6850909e00           push 0x9e9050
// 0061ccea  64a100000000         mov eax, dword ptr fs:[0]
// 0061ccf0  50                   push eax
// 0061ccf1  64892500000000       mov dword ptr fs:[0], esp
// 0061ccf8  83ec08               sub esp, 8
// 0061ccfb  53                   push ebx
// 0061ccfc  56                   push esi
// 0061ccfd  57                   push edi
// 0061ccfe  8bf1                 mov esi, ecx
// 0061cd00  8965f0               mov dword ptr [ebp - 0x10], esp
// 0061cd03  8975ec               mov dword ptr [ebp - 0x14], esi
// 0061cd06  e875061700           call 0x78d380
// 0061cd0b  894604               mov dword ptr [esi + 4], eax
// 0061cd0e  c6401101             mov byte ptr [eax + 0x11], 1
// 0061cd12  8b4604               mov eax, dword ptr [esi + 4]
// 0061cd15  894004               mov dword ptr [eax + 4], eax
// 0061cd18  8b4604               mov eax, dword ptr [esi + 4]
// 0061cd1b  8900                 mov dword ptr [eax], eax
// 0061cd1d  8b4604               mov eax, dword ptr [esi + 4]
// 0061cd20  894008               mov dword ptr [eax + 8], eax
// 0061cd23  8b4508               mov eax, dword ptr [ebp + 8]
// 0061cd26  50                   push eax
// 0061cd27  8bce                 mov ecx, esi
// 0061cd29  c7460800000000       mov dword ptr [esi + 8], 0
// 0061cd30  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0061cd37  e83484e2ff           call 0x445170
// 0061cd3c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0061cd3f  5f                   pop edi
// 0061cd40  8bc6                 mov eax, esi
// 0061cd42  5e                   pop esi
// 0061cd43  64890d00000000       mov dword ptr fs:[0], ecx
// 0061cd4a  5b                   pop ebx
// 0061cd4b  8be5                 mov esp, ebp
// 0061cd4d  5d                   pop ebp
// 0061cd4e  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
