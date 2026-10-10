// from server: 73% by colin
struct BoundFuncDesc {
    int field0;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    void clear();
};

extern "C" void __cdecl sub_4939A0(void*);
extern "C" void __cdecl sub_62FC62(void*);

void BoundFuncDesc::clear()
{
    while (field10 != 0) {
        if (field10 != 0) {
            int idx = fieldC + field10 - 1;
            if ((unsigned)field8 <= (unsigned)idx)
                idx -= field8;
            void* p = ((void**)field4)[idx];
            sub_4939A0(p);
            field10 -= 1;
            if (field10 == 0)
                fieldC = 0;
        }
    }
    int n = field8;
    while (n > 0) {
        n -= 1;
        void** slot = (void**)((char*)field4 + n * 4);
        if (*slot != 0) {
            sub_62FC62(*slot);
        }
    }
    if (field4 != 0) {
        sub_62FC62(field4);
    }
    field4 = 0;
    field8 = 0;
}
