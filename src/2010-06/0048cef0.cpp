// roc 2010-06 0048cef0  unit: G3D::Win32Window  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048cef0
//
// 0048cef0  6aff                 push -1
// 0048cef2  6834649800           push 0x986434
// 0048cef7  64a100000000         mov eax, dword ptr fs:[0]
// 0048cefd  50                   push eax
// 0048cefe  64892500000000       mov dword ptr fs:[0], esp
// 0048cf05  51                   push ecx
// 0048cf06  56                   push esi
// 0048cf07  8bf1                 mov esi, ecx
// 0048cf09  57                   push edi
// 0048cf0a  89742408             mov dword ptr [esp + 8], esi
// 0048cf0e  8d7e04               lea edi, [esi + 4]
// 0048cf11  8bcf                 mov ecx, edi
// 0048cf13  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0048cf1b  ff1504a49e00         call dword ptr [0x9ea404]
// 0048cf21  8d44241c             lea eax, [esp + 0x1c]
// 0048cf25  50                   push eax
// 0048cf26  8bcf                 mov ecx, edi
// 0048cf28  c644241801           mov byte ptr [esp + 0x18], 1
// 0048cf2d  ff1568a49e00         call dword ptr [0x9ea468]
// 0048cf33  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 0048cf37  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0048cf3b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0048cf3f  884e20               mov byte ptr [esi + 0x20], cl
// 0048cf42  8d4c241c             lea ecx, [esp + 0x1c]
// 0048cf46  8916                 mov dword ptr [esi], edx
// 0048cf48  894624               mov dword ptr [esi + 0x24], eax
// 0048cf4b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048cf53  ff1500a49e00         call dword ptr [0x9ea400]
// 0048cf59  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048cf5d  5f                   pop edi
// 0048cf5e  8bc6                 mov eax, esi
// 0048cf60  5e                   pop esi
// 0048cf61  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cf68  83c410               add esp, 0x10
// 0048cf6b  c22800               ret 0x28
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ??0Node@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAE@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NIPAV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
