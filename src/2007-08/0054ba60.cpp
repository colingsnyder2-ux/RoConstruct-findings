// roc 2007-08 0054ba60  unit: UString_sink::?$stream_buffer  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ba60
//
// 0054ba60  55                   push ebp
// 0054ba61  56                   push esi
// 0054ba62  8bf1                 mov esi, ecx
// 0054ba64  8b6e04               mov ebp, dword ptr [esi + 4]
// 0054ba67  57                   push edi
// 0054ba68  8b7d00               mov edi, dword ptr [ebp]
// 0054ba6b  eb03                 jmp 0x54ba70
// 0054ba6d  8d4900               lea ecx, [ecx]
// 0054ba70  3bfd                 cmp edi, ebp
// 0054ba72  7452                 je 0x54bac6
// 0054ba74  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0054ba77  a801                 test al, 1
// 0054ba79  7404                 je 0x54ba7f
// 0054ba7b  a804                 test al, 4
// 0054ba7d  7517                 jne 0x54ba96
// 0054ba7f  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054ba82  7506                 jne 0x54ba8a
// 0054ba84  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054ba8a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0054ba8d  8b01                 mov eax, dword ptr [ecx]
// 0054ba8f  8b5044               mov edx, dword ptr [eax + 0x44]
// 0054ba92  6a00                 push 0
// 0054ba94  ffd2                 call edx
// 0054ba96  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054ba99  7506                 jne 0x54baa1
// 0054ba9b  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054baa1  8b4f08               mov ecx, dword ptr [edi + 8]
// 0054baa4  85c9                 test ecx, ecx
// 0054baa6  c7470800000000       mov dword ptr [edi + 8], 0
// 0054baad  7408                 je 0x54bab7
// 0054baaf  8b01                 mov eax, dword ptr [ecx]
// 0054bab1  8b10                 mov edx, dword ptr [eax]
// 0054bab3  6a01                 push 1
// 0054bab5  ffd2                 call edx
// 0054bab7  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054baba  7506                 jne 0x54bac2
// 0054babc  ff15d8e67700         call dword ptr [0x77e6d8]
// 0054bac2  8b3f                 mov edi, dword ptr [edi]
// 0054bac4  ebaa                 jmp 0x54ba70
// 0054bac6  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054bac9  8b01                 mov eax, dword ptr [ecx]
// 0054bacb  8909                 mov dword ptr [ecx], ecx
// 0054bacd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0054bad0  894904               mov dword ptr [ecx + 4], ecx
// 0054bad3  3b4604               cmp eax, dword ptr [esi + 4]
// 0054bad6  c7460800000000       mov dword ptr [esi + 8], 0
// 0054badd  7413                 je 0x54baf2
// 0054badf  90                   nop 
// 0054bae0  8b38                 mov edi, dword ptr [eax]
// 0054bae2  50                   push eax
// 0054bae3  e87a410e00           call 0x62fc62
// 0054bae8  83c404               add esp, 4
// 0054baeb  3b7e04               cmp edi, dword ptr [esi + 4]
// 0054baee  8bc7                 mov eax, edi
// 0054baf0  75ee                 jne 0x54bae0
// 0054baf2  83661cfc             and dword ptr [esi + 0x1c], 0xfffffffc
// 0054baf6  5f                   pop edi
// 0054baf7  5e                   pop esi
// 0054baf8  5d                   pop ebp
// 0054baf9  c3                   ret 
// copied from an identical function in another client (function ?reset@chain_impl@?$chain_base@V?$chain@Uoutput@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@@iostreams@boost@@DU?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@QAEXXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_8be15fbf9b64785c.cpp