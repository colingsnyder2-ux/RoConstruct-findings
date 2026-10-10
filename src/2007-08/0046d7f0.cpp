// from server: 100% by tester
// roc 2007-03 0046d770  unit: seg_00460000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d770
//
// 0046d770  6aff                 push -1
// 0046d772  6804677400           push 0x746704
// 0046d777  64a100000000         mov eax, dword ptr fs:[0]
// 0046d77d  50                   push eax
// 0046d77e  51                   push ecx
// 0046d77f  56                   push esi
// 0046d780  57                   push edi
// 0046d781  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d786  33c4                 xor eax, esp
// 0046d788  50                   push eax
// 0046d789  8d442410             lea eax, [esp + 0x10]
// 0046d78d  64a300000000         mov dword ptr fs:[0], eax
// 0046d793  8bf1                 mov esi, ecx
// 0046d795  8974240c             mov dword ptr [esp + 0xc], esi
// 0046d799  8d7e04               lea edi, [esi + 4]
// 0046d79c  8bcf                 mov ecx, edi
// 0046d79e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046d7a6  ff1584e77700         call dword ptr [0x77e784]
// 0046d7ac  8d442420             lea eax, [esp + 0x20]
// 0046d7b0  50                   push eax
// 0046d7b1  8bcf                 mov ecx, edi
// 0046d7b3  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0046d7b8  ff154ce77700         call dword ptr [0x77e74c]
// 0046d7be  8a4c243c             mov cl, byte ptr [esp + 0x3c]
// 0046d7c2  8b542440             mov edx, dword ptr [esp + 0x40]
// 0046d7c6  8b442444             mov eax, dword ptr [esp + 0x44]
// 0046d7ca  884e20               mov byte ptr [esi + 0x20], cl
// 0046d7cd  8d4c2420             lea ecx, [esp + 0x20]
// 0046d7d1  8916                 mov dword ptr [esi], edx
// 0046d7d3  894624               mov dword ptr [esi + 0x24], eax
// 0046d7d6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0046d7de  ff158ce77700         call dword ptr [0x77e78c]
// 0046d7e4  8bc6                 mov eax, esi
// 0046d7e6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046d7ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d7f1  59                   pop ecx
// 0046d7f2  5f                   pop edi
// 0046d7f3  5e                   pop esi
// 0046d7f4  83c410               add esp, 0x10
// 0046d7f7  c22800               ret 0x28
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NIPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
