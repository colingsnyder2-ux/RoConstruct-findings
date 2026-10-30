// roc 2009-12 008f3d30  unit: CXTMemDC  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3d30
//
// 008f3d30  6aff                 push -1
// 008f3d32  68536c9600           push 0x966c53
// 008f3d37  64a100000000         mov eax, dword ptr fs:[0]
// 008f3d3d  50                   push eax
// 008f3d3e  51                   push ecx
// 008f3d3f  53                   push ebx
// 008f3d40  55                   push ebp
// 008f3d41  56                   push esi
// 008f3d42  57                   push edi
// 008f3d43  a10052b600           mov eax, dword ptr [0xb65200]
// 008f3d48  33c4                 xor eax, esp
// 008f3d4a  50                   push eax
// 008f3d4b  8d442418             lea eax, [esp + 0x18]
// 008f3d4f  64a300000000         mov dword ptr fs:[0], eax
// 008f3d55  8bf1                 mov esi, ecx
// 008f3d57  89742414             mov dword ptr [esp + 0x14], esi
// 008f3d5b  c7068cfaa000         mov dword ptr [esi], 0xa0fa8c
// 008f3d61  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008f3d69  e852baf7ff           call 0x86f7c0
// 008f3d6e  85c0                 test eax, eax
// 008f3d70  7430                 je 0x8f3da2
// 008f3d72  8b4624               mov eax, dword ptr [esi + 0x24]
// 008f3d75  2b461c               sub eax, dword ptr [esi + 0x1c]
// 008f3d78  8b6e04               mov ebp, dword ptr [esi + 4]
// 008f3d7b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f3d7e  2b4e18               sub ecx, dword ptr [esi + 0x18]
// 008f3d81  8b561c               mov edx, dword ptr [esi + 0x1c]
// 008f3d84  8b7e18               mov edi, dword ptr [esi + 0x18]
// 008f3d87  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 008f3d8a  682000cc00           push 0xcc0020
// 008f3d8f  6a00                 push 0
// 008f3d91  6a00                 push 0
// 008f3d93  55                   push ebp
// 008f3d94  50                   push eax
// 008f3d95  8b4304               mov eax, dword ptr [ebx + 4]
// 008f3d98  51                   push ecx
// 008f3d99  52                   push edx
// 008f3d9a  57                   push edi
// 008f3d9b  50                   push eax
// 008f3d9c  ff1548b19800         call dword ptr [0x98b148]
// 008f3da2  8b4630               mov eax, dword ptr [esi + 0x30]
// 008f3da5  85c0                 test eax, eax
// 008f3da7  7413                 je 0x8f3dbc
// 008f3da9  8b4e04               mov ecx, dword ptr [esi + 4]
// 008f3dac  50                   push eax
// 008f3dad  51                   push ecx
// 008f3dae  ff154cb19800         call dword ptr [0x98b14c]
// 008f3db4  8d4e28               lea ecx, [esi + 0x28]
// 008f3db7  e86200f0ff           call 0x7f3e1e
// 008f3dbc  8bce                 mov ecx, esi
// 008f3dbe  e8b32b0300           call 0x926976
// 008f3dc3  8d4e28               lea ecx, [esi + 0x28]
// 008f3dc6  c644242000           mov byte ptr [esp + 0x20], 0
// 008f3dcb  c70118229a00         mov dword ptr [ecx], 0x9a2218
// 008f3dd1  e85ab4b1ff           call 0x40f230
// 008f3dd6  8bce                 mov ecx, esi
// 008f3dd8  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f3de0  e8c3260300           call 0x9264a8
// 008f3de5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f3de9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3df0  59                   pop ecx
// 008f3df1  5f                   pop edi
// 008f3df2  5e                   pop esi
// 008f3df3  5d                   pop ebp
// 008f3df4  5b                   pop ebx
// 008f3df5  83c410               add esp, 0x10
// 008f3df8  c3                   ret 
// copied from an identical function in another client (function ??1CXTMemDC@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTMemDC.cpp