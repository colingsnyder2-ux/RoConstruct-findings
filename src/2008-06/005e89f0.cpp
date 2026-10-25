// from server: 100% by king_originala
// roc 2008-06 005e89f0  unit: RBX::Primitive  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e89f0
//
// 005e89f0  53                   push ebx
// 005e89f1  56                   push esi
// 005e89f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e89f6  8b06                 mov eax, dword ptr [esi]
// 005e89f8  8b500c               mov edx, dword ptr [eax + 0xc]
// 005e89fb  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 005e89fe  57                   push edi
// 005e89ff  8b7e10               mov edi, dword ptr [esi + 0x10]
// 005e8a02  8bce                 mov ecx, esi
// 005e8a04  ffd2                 call edx
// 005e8a06  56                   push esi
// 005e8a07  85c0                 test eax, eax
// 005e8a09  7519                 jne 0x5e8a24
// 005e8a0b  8d4b34               lea ecx, [ebx + 0x34]
// 005e8a0e  e87dffffff           call 0x5e8990
// 005e8a13  85ff                 test edi, edi
// 005e8a15  741e                 je 0x5e8a35
// 005e8a17  8d4f34               lea ecx, [edi + 0x34]
// 005e8a1a  56                   push esi
// 005e8a1b  e870ffffff           call 0x5e8990
// 005e8a20  5f                   pop edi
// 005e8a21  5e                   pop esi
// 005e8a22  5b                   pop ebx
// 005e8a23  c3                   ret 
// 005e8a24  8d4b18               lea ecx, [ebx + 0x18]
// 005e8a27  e864ffffff           call 0x5e8990
// 005e8a2c  8d4f18               lea ecx, [edi + 0x18]
// 005e8a2f  56                   push esi
// 005e8a30  e85bffffff           call 0x5e8990
// 005e8a35  5f                   pop edi
// 005e8a36  5e                   pop esi
// 005e8a37  5b                   pop ebx
// 005e8a38  c3                   ret 

struct Primitive;

struct List {
    void remove(Primitive*);
};

struct Primitive {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int slot3();

    int reserved[2];
    char* first;
    char* second;
};

void __cdecl f(Primitive* p)
{
    char* first = p->first;
    char* second = p->second;

    if (!p->slot3()) {
        reinterpret_cast<List*>(first + 0x34)->remove(p);
        if (second)
            reinterpret_cast<List*>(second + 0x34)->remove(p);
    } else {
        reinterpret_cast<List*>(first + 0x18)->remove(p);
        reinterpret_cast<List*>(second + 0x18)->remove(p);
    }
}
