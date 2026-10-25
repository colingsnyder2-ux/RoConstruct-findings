// from server: 100% by king_originala
// roc 2008-06 0046a8e0  unit: CWebToolbox  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a8e0
//
// 0046a8e0  56                   push esi
// 0046a8e1  8bf1                 mov esi, ecx
// 0046a8e3  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0046a8e9  57                   push edi
// 0046a8ea  85c9                 test ecx, ecx
// 0046a8ec  7405                 je 0x46a8f3
// 0046a8ee  e835612300           call 0x6a0a28
// 0046a8f3  8bb6fc000000         mov esi, dword ptr [esi + 0xfc]
// 0046a8f9  85f6                 test esi, esi
// 0046a8fb  7408                 je 0x46a905
// 0046a8fd  8b06                 mov eax, dword ptr [esi]
// 0046a8ff  8b4804               mov ecx, dword ptr [eax + 4]
// 0046a902  56                   push esi
// 0046a903  ffd1                 call ecx
// 0046a905  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046a909  85c0                 test eax, eax
// 0046a90b  7507                 jne 0x46a914
// 0046a90d  bf03400080           mov edi, 0x80004003
// 0046a912  eb10                 jmp 0x46a924
// 0046a914  8930                 mov dword ptr [eax], esi
// 0046a916  85f6                 test esi, esi
// 0046a918  7408                 je 0x46a922
// 0046a91a  8b16                 mov edx, dword ptr [esi]
// 0046a91c  8b4204               mov eax, dword ptr [edx + 4]
// 0046a91f  56                   push esi
// 0046a920  ffd0                 call eax
// 0046a922  33ff                 xor edi, edi
// 0046a924  85f6                 test esi, esi
// 0046a926  7408                 je 0x46a930
// 0046a928  8b0e                 mov ecx, dword ptr [esi]
// 0046a92a  8b5108               mov edx, dword ptr [ecx + 8]
// 0046a92d  56                   push esi
// 0046a92e  ffd2                 call edx
// 0046a930  8bc7                 mov eax, edi
// 0046a932  5f                   pop edi
// 0046a933  5e                   pop esi
// 0046a934  c20400               ret 4

struct Interface {
    virtual void __stdcall slot0() = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct Helper {
    void sub_6a0a28();
};

struct CWebToolbox {
    char pad[0xf8];
    Helper* field_f8;
    Interface* field_fc;
    long func_0046a8e0(Interface** out);
};

long CWebToolbox::func_0046a8e0(Interface** out)
{
    if (field_f8)
        field_f8->sub_6a0a28();

    Interface* value = field_fc;
    if (value)
        value->AddRef();

    long result;
    if (!out) {
        result = (long)0x80004003UL;
    } else {
        *out = value;
        if (value)
            value->AddRef();
        result = 0;
    }

    if (value)
        value->Release();

    return result;
}
