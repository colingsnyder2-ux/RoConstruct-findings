// roc 2007-08 0046d7f0  unit: RBX::LDraw2Lua::LuaWriter  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d7f0
//
// 0046d7f0  6aff                 push -1
// 0046d7f2  6884427400           push 0x744284
// 0046d7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0046d7fd  50                   push eax
// 0046d7fe  51                   push ecx
// 0046d7ff  56                   push esi
// 0046d800  57                   push edi
// 0046d801  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d806  33c4                 xor eax, esp
// 0046d808  50                   push eax
// 0046d809  8d442410             lea eax, [esp + 0x10]
// 0046d80d  64a300000000         mov dword ptr fs:[0], eax
// 0046d813  8bf1                 mov esi, ecx
// 0046d815  8974240c             mov dword ptr [esp + 0xc], esi
// 0046d819  8d7e04               lea edi, [esi + 4]
// 0046d81c  8bcf                 mov ecx, edi
// 0046d81e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046d826  ff15a4e67700         call dword ptr [0x77e6a4]
// 0046d82c  8d442420             lea eax, [esp + 0x20]
// 0046d830  50                   push eax
// 0046d831  8bcf                 mov ecx, edi
// 0046d833  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0046d838  ff1590e67700         call dword ptr [0x77e690]
// 0046d83e  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 0046d842  8b542440             mov edx, dword ptr [esp + 0x40]
// 0046d846  8b442444             mov eax, dword ptr [esp + 0x44]
// 0046d84a  884e20               mov byte ptr [esi + 0x20], cl
// 0046d84d  8d4c2420             lea ecx, [esp + 0x20]
// 0046d851  8916                 mov dword ptr [esi], edx
// 0046d853  894624               mov dword ptr [esi + 0x24], eax
// 0046d856  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0046d85e  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d864  8bc6                 mov eax, esi
// 0046d866  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d86a  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d871  59                   pop ecx
// 0046d872  5f                   pop edi
// 0046d873  5e                   pop esi
// 0046d874  83c410               add esp, 0x10
// 0046d877  c22800               ret 0x28
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NIPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
