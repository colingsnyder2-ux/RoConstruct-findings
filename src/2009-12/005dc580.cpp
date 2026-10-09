// roc 2009-12 005dc580  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005dc580
//
// 005dc580  6aff                 push -1
// 005dc582  68e5db9300           push 0x93dbe5
// 005dc587  64a100000000         mov eax, dword ptr fs:[0]
// 005dc58d  50                   push eax
// 005dc58e  64892500000000       mov dword ptr fs:[0], esp
// 005dc595  83ec60               sub esp, 0x60
// 005dc598  56                   push esi
// 005dc599  8b742474             mov esi, dword ptr [esp + 0x74]
// 005dc59d  57                   push edi
// 005dc59e  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dc5a6  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 005dc5ac  6a00                 push 0
// 005dc5ae  ffd7                 call edi
// 005dc5b0  6a01                 push 1
// 005dc5b2  8944240c             mov dword ptr [esp + 0xc], eax
// 005dc5b6  ffd7                 call edi
// 005dc5b8  8944240c             mov dword ptr [esp + 0xc], eax
// 005dc5bc  8d442408             lea eax, [esp + 8]
// 005dc5c0  50                   push eax
// 005dc5c1  8d4c2434             lea ecx, [esp + 0x34]
// 005dc5c5  51                   push ecx
// 005dc5c6  e885ffffff           call 0x5dc550
// 005dc5cb  8d542414             lea edx, [esp + 0x14]
// 005dc5cf  52                   push edx
// 005dc5d0  8d442420             lea eax, [esp + 0x20]
// 005dc5d4  50                   push eax
// 005dc5d5  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 005dc5e0  e86bffffff           call 0x5dc550
// 005dc5e5  6820409b00           push 0x9b4020
// 005dc5ea  8d4c2444             lea ecx, [esp + 0x44]
// 005dc5ee  51                   push ecx
// 005dc5ef  8d542464             lea edx, [esp + 0x64]
// 005dc5f3  52                   push edx
// 005dc5f4  c684248c00000002     mov byte ptr [esp + 0x8c], 2
// 005dc5fc  ff1580b69800         call dword ptr [0x98b680]
// 005dc602  8d4c2430             lea ecx, [esp + 0x30]
// 005dc606  51                   push ecx
// 005dc607  50                   push eax
// 005dc608  56                   push esi
// 005dc609  c684249800000003     mov byte ptr [esp + 0x98], 3
// 005dc611  ff159cb59800         call dword ptr [0x98b59c]
// 005dc617  83c428               add esp, 0x28
// 005dc61a  8d4c244c             lea ecx, [esp + 0x4c]
// 005dc61e  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005dc626  c644247002           mov byte ptr [esp + 0x70], 2
// 005dc62b  ff15e4b69800         call dword ptr [0x98b6e4]
// 005dc631  8d4c2414             lea ecx, [esp + 0x14]
// 005dc635  c644247001           mov byte ptr [esp + 0x70], 1
// 005dc63a  ff15e4b69800         call dword ptr [0x98b6e4]
// 005dc640  8d4c2430             lea ecx, [esp + 0x30]
// 005dc644  c644247000           mov byte ptr [esp + 0x70], 0
// 005dc649  ff15e4b69800         call dword ptr [0x98b6e4]
// 005dc64f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005dc653  5f                   pop edi
// 005dc654  8bc6                 mov eax, esi
// 005dc656  5e                   pop esi
// 005dc657  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc65e  83c46c               add esp, 0x6c
// 005dc661  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getMaxRes@Render@RBX@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
