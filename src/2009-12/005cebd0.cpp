// from server: 68% by atomic.potato
extern "C" void* __cdecl sub_5ea2c0(int, int);
extern "C" void __cdecl sub_5eafc0(void*, int, int);
extern "C" void* __cdecl sub_5ce360(void*);

struct S {
    char pad0[4];
    int field4;
    void* field8;
    int fieldC;
    void copyFrom(S* other);
};

void S::copyFrom(S* other)
{
    field4 = other->field4;
    fieldC = other->fieldC;
    field8 = sub_5ea2c0(fieldC * 4, 0x10);
    sub_5eafc0(field8, 0, fieldC * 4);
    int i = 0;
    if (fieldC > 0) {
        do {
            int* p = (int*)other->field8 + i;
            if (*p != 0) {
                ((int*)field8)[i] = (int)sub_5ce360((void*)*p);
            }
            i++;
        } while (i < fieldC);
    }
}
