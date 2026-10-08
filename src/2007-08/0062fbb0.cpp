// from server: 46% by colin
// roc 2007-08 0062fbb0  unit: RBX::IndexBox  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062fbb0
//
// 0062fbb0  33ff                 xor edi, edi
// 0062fbb2  8b7508               mov esi, dword ptr [ebp + 8]
// 0062fbb5  893e                 mov dword ptr [esi], edi
// 0062fbb7  8b0d34838c00         mov ecx, dword ptr [0x8c8334]
// 0062fbbd  51                   push ecx
// 0062fbbe  8bce                 mov ecx, esi
// 0062fbc0  e8ab53e4ff           call 0x474f70
// 0062fbc5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0062fbc8  5f                   pop edi
// 0062fbc9  8bc6                 mov eax, esi
// 0062fbcb  5e                   pop esi
// 0062fbcc  64890d00000000       mov dword ptr fs:[0], ecx
// 0062fbd3  5b                   pop ebx
// 0062fbd4  8be5                 mov esp, ebp
// 0062fbd6  5d                   pop ebp
// 0062fbd7  c3                   ret 

struct IndexBox {
    int m_data;
    IndexBox();
};

extern "C" int __stdcall sub_00474f70(int);

IndexBox::IndexBox()
{
    m_data = 0;
    sub_00474f70(*(int*)0x8c8334);
}
