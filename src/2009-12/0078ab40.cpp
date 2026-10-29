// roc 2009-12 0078ab40  unit: RBX::UniversalTool  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078ab40
//
// 0078ab40  8b442408             mov eax, dword ptr [esp + 8]
// 0078ab44  8b5008               mov edx, dword ptr [eax + 8]
// 0078ab47  3b511c               cmp edx, dword ptr [ecx + 0x1c]
// 0078ab4a  7405                 je 0x78ab51
// 0078ab4c  32c0                 xor al, al
// 0078ab4e  c20800               ret 8
// 0078ab51  8b11                 mov edx, dword ptr [ecx]
// 0078ab53  8b400c               mov eax, dword ptr [eax + 0xc]
// 0078ab56  8b5240               mov edx, dword ptr [edx + 0x40]
// 0078ab59  89442408             mov dword ptr [esp + 8], eax
// 0078ab5d  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@X@@QAE_NHPAUA@@@Z)

// from server: 100% by colin
// roc-flags: /O2 /GS- /EHsc /MD
struct A { void* m_pad; void* m_a; void* m_b; void* m_c; };
struct X {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual bool doIt(int, void*);
    char pad[0x1c - 4];
    void* m_f1c;
    bool f(int a1, A* a);
};
bool X::f(int a1, A* a)
{
    if (a->m_b != m_f1c)
        return false;
    return doIt(a1, a->m_c);
}