// from server: 100% by colin
// roc 2007-08 00574740  unit: RBX::P8PartInstance::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574740
//
// 00574740  8b442404             mov eax, dword ptr [esp + 4]
// 00574744  85c0                 test eax, eax
// 00574746  8bd1                 mov edx, ecx
// 00574748  7405                 je 0x57474f
// 0057474a  83c0fc               add eax, -4
// 0057474d  eb02                 jmp 0x574751
// 0057474f  33c0                 xor eax, eax
// 00574751  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574755  0fb609               movzx ecx, byte ptr [ecx]
// 00574758  56                   push esi
// 00574759  8b7220               mov esi, dword ptr [edx + 0x20]
// 0057475c  51                   push ecx
// 0057475d  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00574763  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00574766  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00574769  8b5218               mov edx, dword ptr [edx + 0x18]
// 0057476c  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 00574773  ffd2                 call edx
// 00574775  5e                   pop esi
// 00574776  c20800               ret 8

struct P8PartInstance_GetSetImpl
{
    char pad0[0x18];
    int m18;
    int m1c;
    int m20;
    void (__thiscall *m_func)(void*, unsigned char);
    char pad28[0xc4];
    int m_ec;

    void GetSetImpl(int a, unsigned char* b);
};

void P8PartInstance_GetSetImpl::GetSetImpl(int a, unsigned char* b)
{
    P8PartInstance_GetSetImpl* p = (P8PartInstance_GetSetImpl*)a;
    if (p)
        p = (P8PartInstance_GetSetImpl*)((char*)p - 4);
    else
        p = 0;

    unsigned char idx = *b;
    int off = *(int*)((char*)p + 0xec);
    int val = *(int*)(off + this->m20);
    val += this->m1c;
    void (__thiscall *fn)(void*, unsigned char) = *(void (__thiscall**)(void*, unsigned char))((char*)this + 0x18);
    fn((void*)((char*)p + 0xec + val), idx);
}
