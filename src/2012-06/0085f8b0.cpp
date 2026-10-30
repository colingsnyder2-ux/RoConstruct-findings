// roc 2012-06 0085f8b0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085f8b0
//
// 0085f8b0  51                   push ecx
// 0085f8b1  53                   push ebx
// 0085f8b2  56                   push esi
// 0085f8b3  8b742414             mov esi, dword ptr [esp + 0x14]
// 0085f8b7  57                   push edi
// 0085f8b8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0085f8bc  56                   push esi
// 0085f8bd  57                   push edi
// 0085f8be  e83df7ffff           call 0x85f000
// 0085f8c3  56                   push esi
// 0085f8c4  57                   push edi
// 0085f8c5  8ad8                 mov bl, al
// 0085f8c7  e834f7ffff           call 0x85f000
// 0085f8cc  56                   push esi
// 0085f8cd  57                   push edi
// 0085f8ce  88442427             mov byte ptr [esp + 0x27], al
// 0085f8d2  e829f7ffff           call 0x85f000
// 0085f8d7  56                   push esi
// 0085f8d8  57                   push edi
// 0085f8d9  8844242e             mov byte ptr [esp + 0x2e], al
// 0085f8dd  e81ef7ffff           call 0x85f000
// 0085f8e2  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 0085f8e7  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 0085f8ec  0fb6c0               movzx eax, al
// 0085f8ef  c1e008               shl eax, 8
// 0085f8f2  03c1                 add eax, ecx
// 0085f8f4  83c420               add esp, 0x20
// 0085f8f7  c1e008               shl eax, 8
// 0085f8fa  03c2                 add eax, edx
// 0085f8fc  0fb6cb               movzx ecx, bl
// 0085f8ff  5f                   pop edi
// 0085f900  c1e008               shl eax, 8
// 0085f903  5e                   pop esi
// 0085f904  03c1                 add eax, ecx
// 0085f906  5b                   pop ebx
// 0085f907  59                   pop ecx
// 0085f908  c3                   ret 
// copied from an identical function in another client (function ??$read_uint32@V?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@CAKAAV?$range_adapter@Uinput@iostreams@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@detail@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp