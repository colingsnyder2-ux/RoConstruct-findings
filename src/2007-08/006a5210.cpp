// from server: 90% by colin
// roc 2007-08 006a5210  unit: UtagACCEL::?$CArray  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5210

extern "C" void __stdcall sub_62FF26(void*);
extern "C" void __stdcall sub_63067C(void*);
extern "C" void __stdcall sub_77DDBC(void*);

struct UtagACCEL_CArray {
    void* field0;
    void** field4;
    unsigned int field8;
    unsigned int fieldC;
    unsigned int field10;
    void* field14;
    void Clear();
};

void UtagACCEL_CArray::Clear()
{
    unsigned int i;
    if (field4 != 0) {
        for (i = 0; i < field8; ++i) {
            void* p = field4[i];
            if (p != 0) {
                while (p != 0) {
                    sub_77DDBC((char*)p + 4);
                    p = *(void**)((char*)p + 8);
                }
            }
        }
    }
    sub_62FF26(field4);
    field4 = 0;
    fieldC = 0;
    field10 = 0;
    sub_63067C(field14);
    field14 = 0;
}
