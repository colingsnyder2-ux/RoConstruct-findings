// roc 2007-08 007323b0  unit: seg_00730000  size: 395 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007323b0
//
// 007323b0  6aff                 push -1
// 007323b2  6830c17600           push 0x76c130
// 007323b7  64a100000000         mov eax, dword ptr fs:[0]
// 007323bd  50                   push eax
// 007323be  51                   push ecx
// 007323bf  53                   push ebx
// 007323c0  56                   push esi
// 007323c1  57                   push edi
// 007323c2  a188518b00           mov eax, dword ptr [0x8b5188]
// 007323c7  33c4                 xor eax, esp
// 007323c9  50                   push eax
// 007323ca  8d442414             lea eax, [esp + 0x14]
// 007323ce  64a300000000         mov dword ptr fs:[0], eax
// 007323d4  8bf1                 mov esi, ecx
// 007323d6  89742410             mov dword ptr [esp + 0x10], esi
// 007323da  c706548b7e00         mov dword ptr [esi], 0x7e8b54
// 007323e0  8b4644               mov eax, dword ptr [esi + 0x44]
// 007323e3  50                   push eax
// 007323e4  c744242007000000     mov dword ptr [esp + 0x20], 7
// 007323ec  e81fd4dcff           call 0x4ff810
// 007323f1  33db                 xor ebx, ebx
// 007323f3  895e44               mov dword ptr [esi + 0x44], ebx
// 007323f6  895e48               mov dword ptr [esi + 0x48], ebx
// 007323f9  895e4c               mov dword ptr [esi + 0x4c], ebx
// 007323fc  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007323ff  51                   push ecx
// 00732400  c644242406           mov byte ptr [esp + 0x24], 6
// 00732405  e806d4dcff           call 0x4ff810
// 0073240a  8b3de8d27700         mov edi, dword ptr [0x77d2e8]
// 00732410  895e38               mov dword ptr [esi + 0x38], ebx
// 00732413  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00732416  895e40               mov dword ptr [esi + 0x40], ebx
// 00732419  8b4634               mov eax, dword ptr [esi + 0x34]
// 0073241c  83c408               add esp, 8
// 0073241f  3bc3                 cmp eax, ebx
// 00732421  c644241c05           mov byte ptr [esp + 0x1c], 5
// 00732426  7424                 je 0x73244c
// 00732428  83c004               add eax, 4
// 0073242b  50                   push eax
// 0073242c  ffd7                 call edi
// 0073242e  85c0                 test eax, eax
// 00732430  7517                 jne 0x732449
// 00732432  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00732435  e89659d2ff           call 0x457dd0
// 0073243a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0073243d  3bcb                 cmp ecx, ebx
// 0073243f  7408                 je 0x732449
// 00732441  8b11                 mov edx, dword ptr [ecx]
// 00732443  8b02                 mov eax, dword ptr [edx]
// 00732445  6a01                 push 1
// 00732447  ffd0                 call eax
// 00732449  895e34               mov dword ptr [esi + 0x34], ebx
// 0073244c  8b4630               mov eax, dword ptr [esi + 0x30]
// 0073244f  3bc3                 cmp eax, ebx
// 00732451  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00732456  7424                 je 0x73247c
// 00732458  83c004               add eax, 4
// 0073245b  50                   push eax
// 0073245c  ffd7                 call edi
// 0073245e  85c0                 test eax, eax
// 00732460  7517                 jne 0x732479
// 00732462  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00732465  e86659d2ff           call 0x457dd0
// 0073246a  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0073246d  3bcb                 cmp ecx, ebx
// 0073246f  7408                 je 0x732479
// 00732471  8b11                 mov edx, dword ptr [ecx]
// 00732473  8b02                 mov eax, dword ptr [edx]
// 00732475  6a01                 push 1
// 00732477  ffd0                 call eax
// 00732479  895e30               mov dword ptr [esi + 0x30], ebx
// 0073247c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0073247f  3bc3                 cmp eax, ebx
// 00732481  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00732486  7424                 je 0x7324ac
// 00732488  83c004               add eax, 4
// 0073248b  50                   push eax
// 0073248c  ffd7                 call edi
// 0073248e  85c0                 test eax, eax
// 00732490  7517                 jne 0x7324a9
// 00732492  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00732495  e83659d2ff           call 0x457dd0
// 0073249a  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0073249d  3bcb                 cmp ecx, ebx
// 0073249f  7408                 je 0x7324a9
// 007324a1  8b11                 mov edx, dword ptr [ecx]
// 007324a3  8b02                 mov eax, dword ptr [edx]
// 007324a5  6a01                 push 1
// 007324a7  ffd0                 call eax
// 007324a9  895e2c               mov dword ptr [esi + 0x2c], ebx
// 007324ac  8b4628               mov eax, dword ptr [esi + 0x28]
// 007324af  3bc3                 cmp eax, ebx
// 007324b1  c644241c02           mov byte ptr [esp + 0x1c], 2
// 007324b6  7424                 je 0x7324dc
// 007324b8  83c004               add eax, 4
// 007324bb  50                   push eax
// 007324bc  ffd7                 call edi
// 007324be  85c0                 test eax, eax
// 007324c0  7517                 jne 0x7324d9
// 007324c2  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007324c5  e80659d2ff           call 0x457dd0
// 007324ca  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 007324cd  3bcb                 cmp ecx, ebx
// 007324cf  7408                 je 0x7324d9
// 007324d1  8b11                 mov edx, dword ptr [ecx]
// 007324d3  8b02                 mov eax, dword ptr [edx]
// 007324d5  6a01                 push 1
// 007324d7  ffd0                 call eax
// 007324d9  895e28               mov dword ptr [esi + 0x28], ebx
// 007324dc  8b4624               mov eax, dword ptr [esi + 0x24]
// 007324df  3bc3                 cmp eax, ebx
// 007324e1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 007324e6  7424                 je 0x73250c
// 007324e8  83c004               add eax, 4
// 007324eb  50                   push eax
// 007324ec  ffd7                 call edi
// 007324ee  85c0                 test eax, eax
// 007324f0  7517                 jne 0x732509
// 007324f2  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007324f5  e8d658d2ff           call 0x457dd0
// 007324fa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007324fd  3bcb                 cmp ecx, ebx
// 007324ff  7408                 je 0x732509
// 00732501  8b11                 mov edx, dword ptr [ecx]
// 00732503  8b02                 mov eax, dword ptr [edx]
// 00732505  6a01                 push 1
// 00732507  ffd0                 call eax
// 00732509  895e24               mov dword ptr [esi + 0x24], ebx
// 0073250c  68f0374600           push 0x4637f0
// 00732511  6a06                 push 6
// 00732513  6a04                 push 4
// 00732515  8d4e0c               lea ecx, [esi + 0xc]
// 00732518  51                   push ecx
// 00732519  885c242c             mov byte ptr [esp + 0x2c], bl
// 0073251d  e8d5e5efff           call 0x630af7
// 00732522  c70684797900         mov dword ptr [esi], 0x797984
// 00732528  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073252c  64890d00000000       mov dword ptr fs:[0], ecx
// 00732533  59                   pop ecx
// 00732534  5f                   pop edi
// 00732535  5e                   pop esi
// 00732536  5b                   pop ebx
// 00732537  83c410               add esp, 0x10
// 0073253a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ??1Sky@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
