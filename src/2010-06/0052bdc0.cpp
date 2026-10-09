// roc 2010-06 0052bdc0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052bdc0
//
// 0052bdc0  6aff                 push -1
// 0052bdc2  68d5ea9800           push 0x98ead5
// 0052bdc7  64a100000000         mov eax, dword ptr fs:[0]
// 0052bdcd  50                   push eax
// 0052bdce  64892500000000       mov dword ptr fs:[0], esp
// 0052bdd5  83ec60               sub esp, 0x60
// 0052bdd8  56                   push esi
// 0052bdd9  8b742474             mov esi, dword ptr [esp + 0x74]
// 0052bddd  57                   push edi
// 0052bdde  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052bde6  8b3d6cba9e00         mov edi, dword ptr [0x9eba6c]
// 0052bdec  6a00                 push 0
// 0052bdee  ffd7                 call edi
// 0052bdf0  6a01                 push 1
// 0052bdf2  8944240c             mov dword ptr [esp + 0xc], eax
// 0052bdf6  ffd7                 call edi
// 0052bdf8  8944240c             mov dword ptr [esp + 0xc], eax
// 0052bdfc  8d442408             lea eax, [esp + 8]
// 0052be00  50                   push eax
// 0052be01  8d4c2434             lea ecx, [esp + 0x34]
// 0052be05  51                   push ecx
// 0052be06  e885ffffff           call 0x52bd90
// 0052be0b  8d542414             lea edx, [esp + 0x14]
// 0052be0f  52                   push edx
// 0052be10  8d442420             lea eax, [esp + 0x20]
// 0052be14  50                   push eax
// 0052be15  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 0052be20  e86bffffff           call 0x52bd90
// 0052be25  6870eda100           push 0xa1ed70
// 0052be2a  8d4c2444             lea ecx, [esp + 0x44]
// 0052be2e  51                   push ecx
// 0052be2f  8d542464             lea edx, [esp + 0x64]
// 0052be33  52                   push edx
// 0052be34  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 0052be3c  ff1588a49e00         call dword ptr [0x9ea488]
// 0052be42  8d4c2430             lea ecx, [esp + 0x30]
// 0052be46  51                   push ecx
// 0052be47  50                   push eax
// 0052be48  56                   push esi
// 0052be49  c684249800000003     mov byte ptr [esp + 0x98], 3
// 0052be51  ff1504a79e00         call dword ptr [0x9ea704]
// 0052be57  83c428               add esp, 0x28
// 0052be5a  8d4c244c             lea ecx, [esp + 0x4c]
// 0052be5e  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0052be66  c644247002           mov byte ptr [esp + 0x70], 2
// 0052be6b  ff1500a49e00         call dword ptr [0x9ea400]
// 0052be71  8d4c2414             lea ecx, [esp + 0x14]
// 0052be75  c644247001           mov byte ptr [esp + 0x70], 1
// 0052be7a  ff1500a49e00         call dword ptr [0x9ea400]
// 0052be80  8d4c2430             lea ecx, [esp + 0x30]
// 0052be84  c644247000           mov byte ptr [esp + 0x70], 0
// 0052be89  ff1500a49e00         call dword ptr [0x9ea400]
// 0052be8f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0052be93  5f                   pop edi
// 0052be94  8bc6                 mov eax, esi
// 0052be96  5e                   pop esi
// 0052be97  64890d00000000       mov dword ptr fs:[0], ecx
// 0052be9e  83c46c               add esp, 0x6c
// 0052bea1  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getMaxRes@Render@RBX@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
