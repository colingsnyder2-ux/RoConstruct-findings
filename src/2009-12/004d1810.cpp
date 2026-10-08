// roc 2009-12 004d1810  unit: G3D::TextureManager::TextureArgs  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1810
//
// 004d1810  6aff                 push -1
// 004d1812  6878339300           push 0x933378
// 004d1817  64a100000000         mov eax, dword ptr fs:[0]
// 004d181d  50                   push eax
// 004d181e  64892500000000       mov dword ptr fs:[0], esp
// 004d1825  51                   push ecx
// 004d1826  56                   push esi
// 004d1827  8bf1                 mov esi, ecx
// 004d1829  57                   push edi
// 004d182a  89742408             mov dword ptr [esp + 8], esi
// 004d182e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d1832  8d4704               lea eax, [edi + 4]
// 004d1835  50                   push eax
// 004d1836  8d4e04               lea ecx, [esi + 4]
// 004d1839  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d1841  c70620e69a00         mov dword ptr [esi], 0x9ae620
// 004d1847  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d184d  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 004d1850  894e20               mov dword ptr [esi + 0x20], ecx
// 004d1853  8b5724               mov edx, dword ptr [edi + 0x24]
// 004d1856  895624               mov dword ptr [esi + 0x24], edx
// 004d1859  8b4728               mov eax, dword ptr [edi + 0x28]
// 004d185c  894628               mov dword ptr [esi + 0x28], eax
// 004d185f  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 004d1862  894e2c               mov dword ptr [esi + 0x2c], ecx
// 004d1865  dd4730               fld qword ptr [edi + 0x30]
// 004d1868  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d186c  dd5e30               fstp qword ptr [esi + 0x30]
// 004d186f  5f                   pop edi
// 004d1870  8bc6                 mov eax, esi
// 004d1872  5e                   pop esi
// 004d1873  64890d00000000       mov dword ptr fs:[0], ecx
// 004d187a  83c410               add esp, 0x10
// 004d187d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??0TextureArgs@TextureManager@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
