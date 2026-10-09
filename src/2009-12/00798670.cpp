// roc 2009-12 00798670  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00798670
//
// 00798670  6aff                 push -1
// 00798672  68eba59400           push 0x94a5eb
// 00798677  64a100000000         mov eax, dword ptr fs:[0]
// 0079867d  50                   push eax
// 0079867e  64892500000000       mov dword ptr fs:[0], esp
// 00798685  51                   push ecx
// 00798686  53                   push ebx
// 00798687  56                   push esi
// 00798688  57                   push edi
// 00798689  6a20                 push 0x20
// 0079868b  8bf9                 mov edi, ecx
// 0079868d  e8ceb10500           call 0x7f3860
// 00798692  83c404               add esp, 4
// 00798695  8944240c             mov dword ptr [esp + 0xc], eax
// 00798699  33f6                 xor esi, esi
// 0079869b  89742418             mov dword ptr [esp + 0x18], esi
// 0079869f  3bc6                 cmp eax, esi
// 007986a1  740e                 je 0x7986b1
// 007986a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007986a7  51                   push ecx
// 007986a8  8bc8                 mov ecx, eax
// 007986aa  e8f12bfaff           call 0x73b2a0
// 007986af  8bf0                 mov esi, eax
// 007986b1  8d5f04               lea ebx, [edi + 4]
// 007986b4  56                   push esi
// 007986b5  8bcb                 mov ecx, ebx
// 007986b7  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007986bf  8937                 mov dword ptr [edi], esi
// 007986c1  e89a2effff           call 0x78b560
// 007986c6  56                   push esi
// 007986c7  56                   push esi
// 007986c8  53                   push ebx
// 007986c9  e8c2c30b00           call 0x854a90
// 007986ce  dd442430             fld qword ptr [esp + 0x30]
// 007986d2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007986d6  dd5f08               fstp qword ptr [edi + 8]
// 007986d9  d9ee                 fldz 
// 007986db  83c40c               add esp, 0xc
// 007986de  dd5f10               fstp qword ptr [edi + 0x10]
// 007986e1  8bc7                 mov eax, edi
// 007986e3  5f                   pop edi
// 007986e4  5e                   pop esi
// 007986e5  5b                   pop ebx
// 007986e6  64890d00000000       mov dword ptr fs:[0], ecx
// 007986ed  83c410               add esp, 0x10
// 007986f0  c20c00               ret 0xc
// library openrbx-client/App\script\ScriptEvent.cpp (function ??0WaitingThread@YieldingThreads@Lua@RBX@@QAE@PAUlua_State@@N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptEvent.cpp
