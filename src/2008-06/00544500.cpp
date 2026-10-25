// from server: 100% by king_originala
// roc 2008-06 00544500  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544500
//
// 00544500  55                   push ebp
// 00544501  8bec                 mov ebp, esp
// 00544503  51                   push ecx
// 00544504  894dfc               mov dword ptr [ebp - 4], ecx
// 00544507  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054450a  e801dfebff           call 0x402410
// 0054450f  0fb6c0               movzx eax, al
// 00544512  85c0                 test eax, eax
// 00544514  7413                 je 0x544529
// 00544516  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00544519  51                   push ecx
// 0054451a  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054451d  e8ae2cf9ff           call 0x4d71d0
// 00544522  0fb6d0               movzx edx, al
// 00544525  85d2                 test edx, edx
// 00544527  7506                 jne 0x54452f
// 00544529  ff1590288000         call dword ptr [0x802890]
// 0054452f  33c0                 xor eax, eax
// 00544531  75fc                 jne 0x54452f
// 00544533  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544536  8b5508               mov edx, dword ptr [ebp + 8]
// 00544539  8b4104               mov eax, dword ptr [ecx + 4]
// 0054453c  2b4204               sub eax, dword ptr [edx + 4]
// 0054453f  c1f802               sar eax, 2
// 00544542  8be5                 mov esp, ebp
// 00544544  5d                   pop ebp
// 00544545  c20400               ret 4

#pragma optimize("", off)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct T;

struct S
{
    void* container;
    T** position;

    bool __thiscall _Has_container() const;
    bool __thiscall _Same_container(const S&) const;
    int __thiscall f(const S&) const;
};

int S::f(const S& other) const
{
    if (!_Has_container() || !_Same_container(other))
        _invalid_parameter_noinfo();

    do
    {
    } while (0);

    return position - other.position;
}
