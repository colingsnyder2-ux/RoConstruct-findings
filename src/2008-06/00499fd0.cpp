// roc 2008-06 00499fd0  unit: RBX::VInstance::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499fd0
//
// 00499fd0  6aff                 push -1
// 00499fd2  683bf47b00           push 0x7bf43b
// 00499fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00499fdd  50                   push eax
// 00499fde  64892500000000       mov dword ptr fs:[0], esp
// 00499fe5  51                   push ecx
// 00499fe6  56                   push esi
// 00499fe7  6a38                 push 0x38
// 00499fe9  8bf1                 mov esi, ecx
// 00499feb  e830692000           call 0x6a0920
// 00499ff0  83c404               add esp, 4
// 00499ff3  89442404             mov dword ptr [esp + 4], eax
// 00499ff7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00499fff  85c0                 test eax, eax
// 0049a001  741f                 je 0x49a022
// 0049a003  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049a007  56                   push esi
// 0049a008  51                   push ecx
// 0049a009  8bc8                 mov ecx, eax
// 0049a00b  e8e0fcffff           call 0x499cf0
// 0049a010  5e                   pop esi
// 0049a011  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a015  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a01c  83c410               add esp, 0x10
// 0049a01f  c20400               ret 4
// 0049a022  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049a026  33c0                 xor eax, eax
// 0049a028  5e                   pop esi
// 0049a029  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a030  83c410               add esp, 0x10
// 0049a033  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
