// from server: 100% by king_originala
// roc 2008-06 00667f70  unit: RBX::HUMAN::GettingUp  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667f70
//
// 00667f70  56                   push esi
// 00667f71  8bf1                 mov esi, ecx
// 00667f73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00667f77  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00667f7a  83780400             cmp dword ptr [eax + 4], 0
// 00667f7e  57                   push edi
// 00667f7f  8b7910               mov edi, dword ptr [ecx + 0x10]
// 00667f82  7443                 je 0x667fc7
// 00667f84  837f0400             cmp dword ptr [edi + 4], 0
// 00667f88  743d                 je 0x667fc7
// 00667f8a  8b4004               mov eax, dword ptr [eax + 4]
// 00667f8d  8b10                 mov edx, dword ptr [eax]
// 00667f8f  8bc8                 mov ecx, eax
// 00667f91  8b4204               mov eax, dword ptr [edx + 4]
// 00667f94  53                   push ebx
// 00667f95  ffd0                 call eax
// 00667f97  8b16                 mov edx, dword ptr [esi]
// 00667f99  8bd8                 mov ebx, eax
// 00667f9b  8b4204               mov eax, dword ptr [edx + 4]
// 00667f9e  8bce                 mov ecx, esi
// 00667fa0  ffd0                 call eax
// 00667fa2  3bd8                 cmp ebx, eax
// 00667fa4  5b                   pop ebx
// 00667fa5  7e20                 jle 0x667fc7
// 00667fa7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00667faa  8b11                 mov edx, dword ptr [ecx]
// 00667fac  8b4204               mov eax, dword ptr [edx + 4]
// 00667faf  ffd0                 call eax
// 00667fb1  8b16                 mov edx, dword ptr [esi]
// 00667fb3  8bf8                 mov edi, eax
// 00667fb5  8b4204               mov eax, dword ptr [edx + 4]
// 00667fb8  8bce                 mov ecx, esi
// 00667fba  ffd0                 call eax
// 00667fbc  3bf8                 cmp edi, eax
// 00667fbe  7e07                 jle 0x667fc7
// 00667fc0  5f                   pop edi
// 00667fc1  b001                 mov al, 1
// 00667fc3  5e                   pop esi
// 00667fc4  c20400               ret 4
// 00667fc7  5f                   pop edi
// 00667fc8  32c0                 xor al, al
// 00667fca  5e                   pop esi
// 00667fcb  c20400               ret 4

struct S;
struct Link {
    void* unused;
    S* object;
};

struct Context {
    char unused[12];
    Link* left;
    Link* right;
};

struct S {
    virtual void slot0();
    virtual int value();
    bool f(Context* context);
};

bool S::f(Context* context)
{
    Link* left = context->left;
    Link* right = context->right;

    if (left->object && right->object) {
        int first = left->object->value();
        if (first > value()) {
            int second = right->object->value();
            if (second > value())
                return true;
        }
    }
    return false;
}
