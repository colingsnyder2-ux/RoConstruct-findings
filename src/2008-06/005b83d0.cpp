// from server: 38% by colin
// roc 2008-06 005b83d0  unit: RBX::Soundscape::VSoundId::?$TypedPropertyDescriptor  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b83d0
//
// 005b83d0  83ec08               sub esp, 8
// 005b83d3  53                   push ebx
// 005b83d4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005b83d8  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005b83db  55                   push ebp
// 005b83dc  8b28                 mov ebp, dword ptr [eax]
// 005b83de  56                   push esi
// 005b83df  8b33                 mov esi, dword ptr [ebx]
// 005b83e1  57                   push edi
// 005b83e2  896c2414             mov dword ptr [esp + 0x14], ebp
// 005b83e6  89742410             mov dword ptr [esp + 0x10], esi
// 005b83ea  8d9b00000000         lea ebx, [ebx]
// 005b83f0  8b7b18               mov edi, dword ptr [ebx + 0x18]
// 005b83f3  8b03                 mov eax, dword ptr [ebx]
// 005b83f5  85f6                 test esi, esi
// 005b83f7  7404                 je 0x5b83fd
// 005b83f9  3bf0                 cmp esi, eax
// 005b83fb  7406                 je 0x5b8403
// 005b83fd  ff1590288000         call dword ptr [0x802890]
// 005b8403  3bef                 cmp ebp, edi
// 005b8405  7441                 je 0x5b8448
// 005b8407  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b840b  ff00                 inc dword ptr [eax]
// 005b840d  85f6                 test esi, esi
// 005b840f  7533                 jne 0x5b8444
// 005b8411  ff1590288000         call dword ptr [0x802890]
// 005b8417  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 005b841a  7506                 jne 0x5b8422
// 005b841c  ff1590288000         call dword ptr [0x802890]
// 005b8422  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 005b8425  83790800             cmp dword ptr [ecx + 8], 0
// 005b8429  7506                 jne 0x5b8431
// 005b842b  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b842f  ff00                 inc dword ptr [eax]
// 005b8431  8d4c2410             lea ecx, [esp + 0x10]
// 005b8435  e8261be5ff           call 0x409f60
// 005b843a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005b843e  8b742410             mov esi, dword ptr [esp + 0x10]
// 005b8442  ebac                 jmp 0x5b83f0
// 005b8444  8b36                 mov esi, dword ptr [esi]
// 005b8446  ebcf                 jmp 0x5b8417
// 005b8448  5f                   pop edi
// 005b8449  5e                   pop esi
// 005b844a  5d                   pop ebp
// 005b844b  5b                   pop ebx
// 005b844c  83c408               add esp, 8
// 005b844f  c3                   ret 

struct PropDesc {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Iter {
    PropDesc* m_ptr;
    PropDesc* m_end;
    void advance();
};

void Iter::advance()
{
    PropDesc* p = m_ptr;
    PropDesc* e = m_end;
    if (p != 0 && p != e) {
        _invalid_parameter_noinfo();
    }
    if (p != e) {
        p = (PropDesc*)p->m_value;
        m_ptr = p;
    }
}

void copyProps(PropDesc* dst, PropDesc* src, unsigned* count1, unsigned* count2)
{
    PropDesc* d = dst;
    PropDesc* s = src;
    PropDesc* dend = (PropDesc*)dst->m_value;
    PropDesc* send = (PropDesc*)src->m_value;
    Iter it;
    it.m_ptr = s;
    it.m_end = send;
    while (it.m_ptr != dend) {
        (*count1)++;
        if (it.m_ptr == 0) {
            _invalid_parameter_noinfo();
            if (it.m_ptr != dend) {
                _invalid_parameter_noinfo();
            }
            if (*(int*)((char*)it.m_ptr + 0x2c) == 0) {
                (*count2)++;
            }
            it.advance();
        } else {
            it.m_ptr = (PropDesc*)it.m_ptr->m_value;
        }
    }
}
