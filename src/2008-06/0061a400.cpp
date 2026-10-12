// from server: 100% by king_originala
// roc 2008-06 0061a400  unit: RBX::InletTool  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a400
//
// 0061a400  8b442408             mov eax, dword ptr [esp + 8]
// 0061a404  8b5008               mov edx, dword ptr [eax + 8]
// 0061a407  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 0061a40a  7405                 je 0x61a411
// 0061a40c  32c0                 xor al, al
// 0061a40e  c20800               ret 8
// 0061a411  8b11                 mov edx, dword ptr [ecx]
// 0061a413  8b400c               mov eax, dword ptr [eax + 0xc]
// 0061a416  8b523c               mov edx, dword ptr [edx + 0x3c]
// 0061a419  89442408             mov dword ptr [esp + 8], eax
// 0061a41d  ffe2                 jmp edx

struct Argument {
    char padding[8];
    int key;
    void* value;
};

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual bool dispatch(int, void*);

    char padding[20];
    int key;

    bool f(int, Argument*);
};

bool S::f(int first, Argument* argument)
{
    if (argument->key != key)
        return false;
    return dispatch(first, argument->value);
}
