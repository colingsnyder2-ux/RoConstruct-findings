// roc 2007-08 0054b0f0  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b0f0
//
// 0054b0f0  56                   push esi
// 0054b0f1  8bf1                 mov esi, ecx
// 0054b0f3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054b0f7  83f9ff               cmp ecx, -1
// 0054b0fa  7505                 jne 0x54b101
// 0054b0fc  b900100000           mov ecx, 0x1000
// 0054b101  8b442410             mov eax, dword ptr [esp + 0x10]
// 0054b105  83f8ff               cmp eax, -1
// 0054b108  7509                 jne 0x54b113
// 0054b10a  b804000000           mov eax, 4
// 0054b10f  89442410             mov dword ptr [esp + 0x10], eax
// 0054b113  83f802               cmp eax, 2
// 0054b116  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 0054b11e  8d442410             lea eax, [esp + 0x10]
// 0054b122  7f04                 jg 0x54b128
// 0054b124  8d44240c             lea eax, [esp + 0xc]
// 0054b128  85c9                 test ecx, ecx
// 0054b12a  8b00                 mov eax, dword ptr [eax]
// 0054b12c  894650               mov dword ptr [esi + 0x50], eax
// 0054b12f  7505                 jne 0x54b136
// 0054b131  b901000000           mov ecx, 1
// 0054b136  57                   push edi
// 0054b137  8d3c08               lea edi, [eax + ecx]
// 0054b13a  397e4c               cmp dword ptr [esi + 0x4c], edi
// 0054b13d  7429                 je 0x54b168
// 0054b13f  6a00                 push 0
// 0054b141  57                   push edi
// 0054b142  8d4c241c             lea ecx, [esp + 0x1c]
// 0054b146  ff1518e67700         call dword ptr [0x77e618]
// 0054b14c  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0054b14f  897e4c               mov dword ptr [esi + 0x4c], edi
// 0054b152  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0054b155  85c9                 test ecx, ecx
// 0054b157  894648               mov dword ptr [esi + 0x48], eax
// 0054b15a  740c                 je 0x54b168
// 0054b15c  52                   push edx
// 0054b15d  51                   push ecx
// 0054b15e  8d4c241c             lea ecx, [esp + 0x1c]
// 0054b162  ff1510e67700         call dword ptr [0x77e610]
// 0054b168  8b06                 mov eax, dword ptr [esi]
// 0054b16a  8b5054               mov edx, dword ptr [eax + 0x54]
// 0054b16d  8bce                 mov ecx, esi
// 0054b16f  ffd2                 call edx
// 0054b171  807e4100             cmp byte ptr [esi + 0x41], 0
// 0054b175  5f                   pop edi
// 0054b176  7404                 je 0x54b17c
// 0054b178  c6464100             mov byte ptr [esi + 0x41], 0
// 0054b17c  8a442410             mov al, byte ptr [esp + 0x10]
// 0054b180  884640               mov byte ptr [esi + 0x40], al
// 0054b183  c6464101             mov byte ptr [esi + 0x41], 1
// 0054b187  834e5401             or dword ptr [esi + 0x54], 1
// 0054b18b  c6463c00             mov byte ptr [esi + 0x3c], 0
// 0054b18f  5e                   pop esi
// 0054b190  c20c00               ret 0xc
// copied from an identical function in another client (function ?open@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@QAEXABV?$basic_null_device@DUinput@iostreams@boost@@@34@HH@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_d164bec48b1d5f1a.cpp