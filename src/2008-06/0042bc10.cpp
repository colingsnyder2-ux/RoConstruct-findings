// roc 2008-06 0042bc10  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042bc10
//
// 0042bc10  53                   push ebx
// 0042bc11  55                   push ebp
// 0042bc12  56                   push esi
// 0042bc13  57                   push edi
// 0042bc14  6a04                 push 4
// 0042bc16  8be9                 mov ebp, ecx
// 0042bc18  e8034d2700           call 0x6a0920
// 0042bc1d  83c404               add esp, 4
// 0042bc20  85c0                 test eax, eax
// 0042bc22  740a                 je 0x42bc2e
// 0042bc24  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042bc28  8908                 mov dword ptr [eax], ecx
// 0042bc2a  8bd8                 mov ebx, eax
// 0042bc2c  eb02                 jmp 0x42bc30
// 0042bc2e  33db                 xor ebx, ebx
// 0042bc30  e87bffffff           call 0x42bbb0
// 0042bc35  8bf8                 mov edi, eax
// 0042bc37  8bcf                 mov ecx, edi
// 0042bc39  e832b91700           call 0x5a7570
// 0042bc3e  8bf0                 mov esi, eax
// 0042bc40  85f6                 test esi, esi
// 0042bc42  7409                 je 0x42bc4d
// 0042bc44  6a00                 push 0
// 0042bc46  8bcf                 mov ecx, edi
// 0042bc48  e863ba1700           call 0x5a76b0
// 0042bc4d  897500               mov dword ptr [ebp], esi
// 0042bc50  e85bffffff           call 0x42bbb0
// 0042bc55  8bf0                 mov esi, eax
// 0042bc57  8bce                 mov ecx, esi
// 0042bc59  e812b91700           call 0x5a7570
// 0042bc5e  8bf8                 mov edi, eax
// 0042bc60  3bfb                 cmp edi, ebx
// 0042bc62  7414                 je 0x42bc78
// 0042bc64  53                   push ebx
// 0042bc65  8bce                 mov ecx, esi
// 0042bc67  e844ba1700           call 0x5a76b0
// 0042bc6c  85ff                 test edi, edi
// 0042bc6e  7408                 je 0x42bc78
// 0042bc70  57                   push edi
// 0042bc71  8bce                 mov ecx, esi
// 0042bc73  e878b31700           call 0x5a6ff0
// 0042bc78  5f                   pop edi
// 0042bc79  5e                   pop esi
// 0042bc7a  8bc5                 mov eax, ebp
// 0042bc7c  5d                   pop ebp
// 0042bc7d  5b                   pop ebx
// 0042bc7e  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ??0Impersonator@Security@RBX@@QAE@W4Identities@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
