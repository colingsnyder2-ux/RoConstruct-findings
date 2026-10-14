// roc 2008-06 0055d000  unit: RBX::MD5HasherImpl  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d000
//
// 0055d000  6aff                 push -1
// 0055d002  68b9fe7c00           push 0x7cfeb9
// 0055d007  64a100000000         mov eax, dword ptr fs:[0]
// 0055d00d  50                   push eax
// 0055d00e  64892500000000       mov dword ptr fs:[0], esp
// 0055d015  83ec4c               sub esp, 0x4c
// 0055d018  668b44245c           mov ax, word ptr [esp + 0x5c]
// 0055d01d  56                   push esi
// 0055d01e  57                   push edi
// 0055d01f  668b7c246c           mov di, word ptr [esp + 0x6c]
// 0055d024  8bf1                 mov esi, ecx
// 0055d026  668b4c2468           mov cx, word ptr [esp + 0x68]
// 0055d02b  8d54240a             lea edx, [esp + 0xa]
// 0055d02f  52                   push edx
// 0055d030  668944240e           mov word ptr [esp + 0xe], ax
// 0055d035  66894c2410           mov word ptr [esp + 0x10], cx
// 0055d03a  66897c2412           mov word ptr [esp + 0x12], di
// 0055d03f  e8acf1ffff           call 0x55c1f0
// 0055d044  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0055d048  8906                 mov dword ptr [esi], eax
// 0055d04a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0055d04e  50                   push eax
// 0055d04f  51                   push ecx
// 0055d050  e87bf2ffff           call 0x55c2d0
// 0055d055  83c40c               add esp, 0xc
// 0055d058  663bc7               cmp ax, di
// 0055d05b  7338                 jae 0x55d095
// 0055d05d  68e0dc8200           push 0x82dce0
// 0055d062  8d4c2414             lea ecx, [esp + 0x14]
// 0055d066  ff1558248000         call dword ptr [0x802458]
// 0055d06c  50                   push eax
// 0055d06d  8d4c2430             lea ecx, [esp + 0x30]
// 0055d071  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0055d079  e8a253eaff           call 0x402420
// 0055d07e  68cc998e00           push 0x8e99cc
// 0055d083  8d542430             lea edx, [esp + 0x30]
// 0055d087  52                   push edx
// 0055d088  c744243478da8200     mov dword ptr [esp + 0x34], 0x82da78
// 0055d090  e8f7441400           call 0x6a158c
// 0055d095  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0055d099  5f                   pop edi
// 0055d09a  8bc6                 mov eax, esi
// 0055d09c  5e                   pop esi
// 0055d09d  64890d00000000       mov dword ptr fs:[0], ecx
// 0055d0a4  83c458               add esp, 0x58
// 0055d0a7  c20c00               ret 0xc
// library rbxgs-dll/script\ScriptContext.cpp (function ??0date@gregorian@boost@@QAE@Vgreg_year@12@Vgreg_month@12@Vgreg_day@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll script/ScriptContext.cpp
