// roc 2011-06 0049a450  unit: VerbBinderJob  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049a450
//
// 0049a450  56                   push esi
// 0049a451  8bf1                 mov esi, ecx
// 0049a453  8b4604               mov eax, dword ptr [esi + 4]
// 0049a456  57                   push edi
// 0049a457  33ff                 xor edi, edi
// 0049a459  897e10               mov dword ptr [esi + 0x10], edi
// 0049a45c  3bc7                 cmp eax, edi
// 0049a45e  740c                 je 0x49a46c
// 0049a460  50                   push eax
// 0049a461  e89efe3600           call 0x80a304
// 0049a466  83c404               add esp, 4
// 0049a469  897e04               mov dword ptr [esi + 4], edi
// 0049a46c  897e08               mov dword ptr [esi + 8], edi
// 0049a46f  897e0c               mov dword ptr [esi + 0xc], edi
// 0049a472  33c0                 xor eax, eax
// 0049a474  b9e4040000           mov ecx, 0x4e4
// 0049a479  5f                   pop edi
// 0049a47a  668906               mov word ptr [esi], ax
// 0049a47d  66894e02             mov word ptr [esi + 2], cx
// 0049a481  5e                   pop esi
// 0049a482  c3                   ret 
// copied from an identical function in another client (function ?reset@DxUserInput@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct DxUserInput {
    unsigned short field0;
    unsigned short field2;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    void reset();
};

extern "C" void __cdecl free_ptr(void* p);

void DxUserInput::reset() {
    void* p = this->field4;
    this->field10 = 0;
    if (p != 0) {
        free_ptr(p);
        this->field4 = 0;
    }
    this->field0 = 0;
    this->field8 = 0;
    this->fieldC = 0;
    this->field2 = 0x4e4;
}
}
