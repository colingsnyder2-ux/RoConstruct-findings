// from server: 28% by colin
// roc 2008-06 0064d530  unit: RBX::SimJobStage  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d530

extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" void __cdecl sub_553F90(void*, int);
extern "C" void __cdecl sub_4213A0(void*, void*);
extern "C" void __cdecl sub_5E6DE0(void*, int, int);
extern "C" void __cdecl sub_446F20(void*, void*);
extern "C" void __cdecl sub_554270();
extern "C" void __cdecl sub_446190(void*, int);
extern "C" void __cdecl sub_5644A0(void*, void*);
extern "C" void __cdecl sub_802890();
extern "C" void __cdecl sub_802460(void*);
extern "C" void __cdecl sub_80244C(void*, void*);

struct SimJobStage {
    char pad0[0x10];
    char field10[0x18];
    int field28;
    int field2c;
    char pad30[0x40];
    char field70[0x0c];
    char field7c[0x04];
    char field80[0x14];
    char field94[0x04];
    char field98[0x08];
    char fieldA0[0x0c];
    char fieldAC[0x04];
    char fieldB0[0x08];
    char fieldB8[0x18];
    char fieldD0[0x0c];
    char fieldDC[0x04];
    char fieldE0[0x04];

    void func(int a, int b);
};

void SimJobStage::func(int a, int b)
{
    int* p = (int*)sub_6A0920(0x14);
    int* pb = p;
    int idx = a;
    int* obj = 0;
    if (p != 0) {
        sub_553F90((void*)b, -1);
        p[0] = 0x80b730;
        p[4] = (int)this;
        p[3] = idx;
        p[2] = (int)this->field28;
        p[1] = (int)p;
        p[0] = 0x815be8;
        obj = p;
    }
    sub_4213A0(this->field10, &pb);
    int* v1 = (int*)((char*)this + 0xd0);
    int n1 = (*(int*)((char*)this + 0xe0) - *(int*)((char*)this + 0xdc)) >> 2;
    if (n1 <= idx) {
        sub_5E6DE0(v1, idx + 1, -1);
    }
    int m1 = (v1[4] - v1[3]) >> 2;
    if (idx >= m1) {
        sub_802890();
    }
    *(int*)(v1[3] + idx * 4) = this->field28;
    sub_446F20((char*)this + 0xb8, &pb);
    int* v2 = (int*)((char*)this + 0x70);
    int n2 = (*(int*)((char*)this + 0x80) - *(int*)((char*)this + 0x7c)) >> 2;
    if (n2 <= idx) {
        sub_554270();
        sub_5E6DE0(v2, idx + 1, 0);
    }
    int m2 = (v2[4] - v2[3]) >> 2;
    if (idx >= m2) {
        sub_802890();
    }
    *(int*)(v2[3] + idx * 4) = *(int*)(obj + 1);
    int* v3 = (int*)((char*)this + 0x88);
    int n3 = (*(int*)((char*)this + 0x98) - *(int*)((char*)this + 0x94)) / 28;
    if (n3 <= idx) {
        sub_802460((void*)((char*)this + 0x88));
        sub_446190(v3, idx + 1);
    }
    int m3 = (v3[4] - v3[3]) / 28;
    if (idx >= m3) {
        sub_802890();
    }
    sub_80244C((void*)(v3[3] + idx * 28), (void*)b);
    int* v4 = (int*)((char*)this + 0xa0);
    int n4 = (*(int*)((char*)this + 0xb0) - *(int*)((char*)this + 0xac)) >> 2;
    if (n4 <= idx) {
        sub_5E6DE0(v4, idx + 1, 0);
    }
    int m4 = (v4[4] - v4[3]) >> 2;
    if (idx >= m4) {
        sub_802890();
    }
    *(int*)(v4[3] + idx * 4) = (int)obj;
    int tmp = *(int*)(obj + 1);
    sub_5644A0((char*)this + 0x30, &tmp);
    *(int*)&tmp = idx;
    this->field28++;
    int v = this->field28;
    int c = -1;
    if (v > 0) {
        do {
            v >>= 1;
            c++;
        } while (v > 0);
    }
    this->field2c = c;
}
