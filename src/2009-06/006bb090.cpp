// roc 2009-06 006bb090  unit: RBX::UniversalTool  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb090
//
// 006bb090  8b442408             mov eax, dword ptr [esp + 8]
// 006bb094  8b5008               mov edx, dword ptr [eax + 8]
// 006bb097  3b5118               cmp edx, dword ptr [ecx + 0x18]
// 006bb09a  7405                 je 0x6bb0a1
// 006bb09c  32c0                 xor al, al
// 006bb09e  c20800               ret 8
// 006bb0a1  8b11                 mov edx, dword ptr [ecx]
// 006bb0a3  8b400c               mov eax, dword ptr [eax + 0xc]
// 006bb0a6  8b523c               mov edx, dword ptr [edx + 0x3c]
// 006bb0a9  89442408             mov dword ptr [esp + 8], eax
// 006bb0ad  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@S@@QAE_NHPAUArgument@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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