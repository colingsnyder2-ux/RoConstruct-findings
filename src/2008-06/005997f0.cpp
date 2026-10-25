// from server: 100% by king_originala
// roc 2008-06 005997f0  unit: RBX::PartInstance  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005997f0
//
// 005997f0  53                   push ebx
// 005997f1  56                   push esi
// 005997f2  8bf1                 mov esi, ecx
// 005997f4  57                   push edi
// 005997f5  8dbe28020000         lea edi, [esi + 0x228]
// 005997fb  8bcf                 mov ecx, edi
// 005997fd  e8beea0400           call 0x5e82c0
// 00599802  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00599806  50                   push eax
// 00599807  8bcb                 mov ecx, ebx
// 00599809  e8d2cdedff           call 0x4765e0
// 0059980e  84c0                 test al, al
// 00599810  7418                 je 0x59982a
// 00599812  53                   push ebx
// 00599813  8bcf                 mov ecx, edi
// 00599815  e8e6e90400           call 0x5e8200
// 0059981a  c6869803000001       mov byte ptr [esi + 0x398], 1
// 00599821  8b06                 mov eax, dword ptr [esi]
// 00599823  8b5050               mov edx, dword ptr [eax + 0x50]
// 00599826  8bce                 mov ecx, esi
// 00599828  ffd2                 call edx
// 0059982a  5f                   pop edi
// 0059982b  5e                   pop esi
// 0059982c  5b                   pop ebx
// 0059982d  c20400               ret 4

struct Vector3 {
    float x, y, z;
    bool differs(const Vector3& other) const;
};

struct Body;

struct Primitive {
    char pad[0xa0];
    Body* body;

    const Vector3& getValue();
    void setValue(const Vector3& value);
};

struct S {
    typedef void (__thiscall *Callback)(S*);

    Callback* volatile vtable;
    char pad[0x224];
    Primitive primitive;
    char gap[0xcc];
    volatile unsigned char dirty;

    void f(const Vector3& value);
};

void S::f(const Vector3& value)
{
    if (value.differs(primitive.getValue())) {
        primitive.setValue(value);
        dirty = 1;
        vtable[20](this);
    }
}
