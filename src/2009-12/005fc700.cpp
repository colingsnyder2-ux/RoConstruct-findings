// roc 2009-12 005fc700  unit: G3D::TextInput::WrongSymbol  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc700
//
// 005fc700  6aff                 push -1
// 005fc702  6804f99300           push 0x93f904
// 005fc707  64a100000000         mov eax, dword ptr fs:[0]
// 005fc70d  50                   push eax
// 005fc70e  64892500000000       mov dword ptr fs:[0], esp
// 005fc715  51                   push ecx
// 005fc716  56                   push esi
// 005fc717  57                   push edi
// 005fc718  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005fc71c  8bf1                 mov esi, ecx
// 005fc71e  57                   push edi
// 005fc71f  8974240c             mov dword ptr [esp + 0xc], esi
// 005fc723  e8d8f6ffff           call 0x5fbe00
// 005fc728  8d4744               lea eax, [edi + 0x44]
// 005fc72b  50                   push eax
// 005fc72c  8d4e44               lea ecx, [esi + 0x44]
// 005fc72f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fc737  c706182e9c00         mov dword ptr [esi], 0x9c2e18
// 005fc73d  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fc743  83c760               add edi, 0x60
// 005fc746  57                   push edi
// 005fc747  8d4e60               lea ecx, [esi + 0x60]
// 005fc74a  c644241801           mov byte ptr [esp + 0x18], 1
// 005fc74f  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fc755  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fc759  5f                   pop edi
// 005fc75a  8bc6                 mov eax, esi
// 005fc75c  5e                   pop esi
// 005fc75d  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc764  83c410               add esp, 0x10
// 005fc767  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongString@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
