// from server: 37% by colin
struct BoundFunctionData {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    char field2C;
    char field2D;
    char field2E;
    char field2F;
    char field30;
};

struct S {
    void construct(BoundFunctionData* other);
};

void S::construct(BoundFunctionData* other) {
    if (this == 0) {
        return;
    }
    *(int*)this = *(int*)other;
    *(int*)((char*)this + 8) = 0;
    int p = *(int*)((char*)other + 8);
    if (p != 0) {
        *(int*)((char*)this + 8) = p;
        int* vt = *(int**)((char*)other + 8);
        int fn = *vt;
        typedef void (__stdcall *Fn)(void*, void*, int);
        ((Fn)fn)((char*)this + 0x10, (char*)other + 0x10, 0);
    }
    *(int*)((char*)this + 0x28) = *(int*)((char*)other + 0x28);
    *(char*)((char*)this + 0x30) = *(char*)((char*)other + 0x30);
}
