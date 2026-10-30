// roc 2007-03 0054a830  unit: seg_00540000  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a830
//
// 0054a830  56                   push esi
// 0054a831  8bf1                 mov esi, ecx
// 0054a833  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054a837  83f9ff               cmp ecx, -1
// 0054a83a  7505                 jne 0x54a841
// 0054a83c  b900100000           mov ecx, 0x1000
// 0054a841  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054a845  83f8ff               cmp eax, -1
// 0054a848  7509                 jne 0x54a853
// 0054a84a  b804000000           mov eax, 4
// 0054a84f  89442410             mov dword ptr [esp + 0x10], eax
// 0054a853  83f802               cmp eax, 2
// 0054a856  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 0054a85e  8d442410             lea eax, [esp + 0x10]
// 0054a862  7f04                 jg 0x54a868
// 0054a864  8d44240c             lea eax, [esp + 0xc]
// 0054a868  85c9                 test ecx, ecx
// 0054a86a  8b00                 mov eax, dword ptr [eax]
// 0054a86c  894650               mov dword ptr [esi + 0x50], eax
// 0054a86f  7505                 jne 0x54a876
// 0054a871  b901000000           mov ecx, 1
// 0054a876  57                   push edi
// 0054a877  8d3c08               lea edi, [eax + ecx]
// 0054a87a  397e4c               cmp dword ptr [esi + 0x4c], edi
// 0054a87d  7429                 je 0x54a8a8
// 0054a87f  6a00                 push 0
// 0054a881  57                   push edi
// 0054a882  8d4c241c             lea ecx, [esp + 0x1c]
// 0054a886  ff1568e77700         call dword ptr [0x77e768]
// 0054a88c  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0054a88f  897e4c               mov dword ptr [esi + 0x4c], edi
// 0054a892  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0054a895  85c9                 test ecx, ecx
// 0054a897  894648               mov dword ptr [esi + 0x48], eax
// 0054a89a  740c                 je 0x54a8a8
// 0054a89c  52                   push edx
// 0054a89d  51                   push ecx
// 0054a89e  8d4c241c             lea ecx, [esp + 0x1c]
// 0054a8a2  ff1560e77700         call dword ptr [0x77e760]
// 0054a8a8  8b06                 mov eax, dword ptr [esi]
// 0054a8aa  8b5054               mov edx, dword ptr [eax + 0x54]
// 0054a8ad  8bce                 mov ecx, esi
// 0054a8af  ffd2                 call edx
// 0054a8b1  807e4100             cmp byte ptr [esi + 0x41], 0
// 0054a8b5  5f                   pop edi
// 0054a8b6  7404                 je 0x54a8bc
// 0054a8b8  c6464100             mov byte ptr [esi + 0x41], 0
// 0054a8bc  8a442410             mov al, byte ptr [esp + 0x10]
// 0054a8c0  884640               mov byte ptr [esi + 0x40], al
// 0054a8c3  c6464101             mov byte ptr [esi + 0x41], 1
// 0054a8c7  834e5401             or dword ptr [esi + 0x54], 1
// 0054a8cb  c6463c00             mov byte ptr [esi + 0x3c], 0
// 0054a8cf  5e                   pop esi
// 0054a8d0  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXABV?$basic_null_device@DUinput@iostreams@boost@@@34@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_d164bec48b1d5f1a.cpp