// roc 2009-12 007222a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007222a0
//
// 007222a0  56                   push esi
// 007222a1  8bf1                 mov esi, ecx
// 007222a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007222a7  83f9ff               cmp ecx, -1
// 007222aa  7505                 jne 0x7222b1
// 007222ac  b900100000           mov ecx, 0x1000
// 007222b1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007222b5  83f8ff               cmp eax, -1
// 007222b8  7509                 jne 0x7222c3
// 007222ba  b804000000           mov eax, 4
// 007222bf  89442410             mov dword ptr [esp + 0x10], eax
// 007222c3  83f802               cmp eax, 2
// 007222c6  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 007222ce  8d442410             lea eax, [esp + 0x10]
// 007222d2  7f04                 jg 0x7222d8
// 007222d4  8d44240c             lea eax, [esp + 0xc]
// 007222d8  8b00                 mov eax, dword ptr [eax]
// 007222da  894650               mov dword ptr [esi + 0x50], eax
// 007222dd  85c9                 test ecx, ecx
// 007222df  7505                 jne 0x7222e6
// 007222e1  b901000000           mov ecx, 1
// 007222e6  03c1                 add eax, ecx
// 007222e8  50                   push eax
// 007222e9  8d4e48               lea ecx, [esi + 0x48]
// 007222ec  e8bffeffff           call 0x7221b0
// 007222f1  8b06                 mov eax, dword ptr [esi]
// 007222f3  8b5054               mov edx, dword ptr [eax + 0x54]
// 007222f6  8bce                 mov ecx, esi
// 007222f8  ffd2                 call edx
// 007222fa  807e4100             cmp byte ptr [esi + 0x41], 0
// 007222fe  7404                 je 0x722304
// 00722300  c6464100             mov byte ptr [esi + 0x41], 0
// 00722304  8a442410             mov al, byte ptr [esp + 0x10]
// 00722308  884640               mov byte ptr [esi + 0x40], al
// 0072230b  c6464101             mov byte ptr [esi + 0x41], 1
// 0072230f  834e5401             or dword ptr [esi + 0x54], 1
// 00722313  83663cfe             and dword ptr [esi + 0x3c], 0xfffffffe
// 00722317  5e                   pop esi
// 00722318  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXABV?$basic_null_device@DUinput@iostreams@boost@@@34@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp