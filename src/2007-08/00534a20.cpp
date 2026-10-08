// from server: 73% by colin
// roc 2007-08 00534a20  unit: RBX::Lua::VFunctionRef::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534a20
//
// 00534a20  56                   push esi
// 00534a21  8b742408             mov esi, dword ptr [esp + 8]
// 00534a25  85f6                 test esi, esi
// 00534a27  742c                 je 0x534a55
// 00534a29  8b0e                 mov ecx, dword ptr [esi]
// 00534a2b  85c9                 test ecx, ecx
// 00534a2d  7409                 je 0x534a38
// 00534a2f  8b01                 mov eax, dword ptr [ecx]
// 00534a31  8b5004               mov edx, dword ptr [eax + 4]
// 00534a34  ffd2                 call edx
// 00534a36  eb05                 jmp 0x534a3d
// 00534a38  b8c8278800           mov eax, 0x8827c8
// 00534a3d  68a8998900           push 0x8999a8
// 00534a42  8bc8                 mov ecx, eax
// 00534a44  ff1508e77700         call dword ptr [0x77e708]
// 00534a4a  84c0                 test al, al
// 00534a4c  7407                 je 0x534a55
// 00534a4e  8b06                 mov eax, dword ptr [esi]
// 00534a50  83c008               add eax, 8
// 00534a53  5e                   pop esi
// 00534a54  c3                   ret 
// 00534a55  33c0                 xor eax, eax
// 00534a57  5e                   pop esi
// 00534a58  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct VFunctionRef_holder {
    void* ptr;
    void* get() const;
};

void* VFunctionRef_holder::get() const
{
    VFunctionRef_holder* self = (VFunctionRef_holder*)this;
    if (self == 0)
        return 0;
    void* p = self->ptr;
    type_info* ti;
    if (p != 0) {
        void** vtbl = *(void***)p;
        void* (*fn)(void*) = (void* (*)(void*))vtbl[1];
        ti = (type_info*)fn(p);
    } else {
        ti = (type_info*)0x8827c8;
    }
    if (*ti == *(type_info*)0x8999a8)
        return (char*)self->ptr + 8;
    return 0;
}
