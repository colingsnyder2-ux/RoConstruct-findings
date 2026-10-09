// from server: 90% by colin
// roc 2007-08 0042d840  unit: boost::any::_N::?$holder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d840
//
// 0042d840  53                   push ebx
// 0042d841  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0042d845  57                   push edi
// 0042d846  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042d84a  3bdf                 cmp ebx, edi
// 0042d84c  743e                 je 0x42d88c
// 0042d84e  56                   push esi
// 0042d84f  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042d853  8b47f8               mov eax, dword ptr [edi - 8]
// 0042d856  83ef08               sub edi, 8
// 0042d859  83ee08               sub esi, 8
// 0042d85c  8906                 mov dword ptr [esi], eax
// 0042d85e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0042d861  85c9                 test ecx, ecx
// 0042d863  7409                 je 0x42d86e
// 0042d865  8b11                 mov edx, dword ptr [ecx]
// 0042d867  8b4208               mov eax, dword ptr [edx + 8]
// 0042d86a  ffd0                 call eax
// 0042d86c  eb02                 jmp 0x42d870
// 0042d86e  33c0                 xor eax, eax
// 0042d870  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042d873  85c9                 test ecx, ecx
// 0042d875  894604               mov dword ptr [esi + 4], eax
// 0042d878  7408                 je 0x42d882
// 0042d87a  8b11                 mov edx, dword ptr [ecx]
// 0042d87c  8b02                 mov eax, dword ptr [edx]
// 0042d87e  6a01                 push 1
// 0042d880  ffd0                 call eax
// 0042d882  3bfb                 cmp edi, ebx
// 0042d884  75cd                 jne 0x42d853
// 0042d886  8bc6                 mov eax, esi
// 0042d888  5e                   pop esi
// 0042d889  5f                   pop edi
// 0042d88a  5b                   pop ebx
// 0042d88b  c3                   ret 
// 0042d88c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042d890  5f                   pop edi
// 0042d891  5b                   pop ebx
// 0042d892  c3                   ret 

struct AnyHolder {
    void* m_p;
    virtual void* clone() const;
    virtual void destroy();
};

struct AnyValue {
    void* m_type;
    AnyHolder* m_holder;
};

AnyValue* __cdecl copy_backward(AnyValue* first, AnyValue* last, AnyValue* dest)
{
    if (first != last) {
        do {
            --last;
            --dest;
            dest->m_type = last->m_type;
            AnyHolder* src = last->m_holder;
            void* cloned;
            if (src)
                cloned = src->clone();
            else
                cloned = 0;
            AnyHolder* old = dest->m_holder;
            dest->m_holder = (AnyHolder*)cloned;
            if (old)
                old->destroy();
        } while (last != first);
    }
    return dest;
}
