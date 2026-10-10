// from server: 70% by colin
struct EnumPropDescriptor {
    void* getset;
    int field4;
    void setValue(int value);
};

struct DescribedBase {
    char pad[0x1d8];
    void* classDescriptor;
};

extern "C" {
    extern float g_7b54f0;
    extern float g_797e9c;
    extern int g_8c5eb0;
    extern float g_8c5eb4;
    extern float g_8c5eb8;
    extern int g_8c5ebc;
}

void __stdcall sub_5b4a30(void* desc, int idx, void* val);
void __stdcall sub_573ea0(void* desc, int idx);
void* __stdcall sub_573890(void* desc, int idx);
void __stdcall sub_5b6b40(void* p);
void __stdcall sub_444710(void* p);

void EnumPropDescriptor::setValue(int value)
{
    DescribedBase* obj = (DescribedBase*)this->getset;
    int* arr = (int*)((char*)obj->classDescriptor + 0x94);
    int* slot = &arr[this->field4];
    int* result;
    if (*slot == 0) {
        if (!(g_8c5ebc & 1)) {
            g_8c5ebc |= 1;
            g_8c5eb4 = g_7b54f0;
            g_8c5eb0 = 0;
            g_8c5eb8 = g_797e9c;
        }
        result = &g_8c5eb0;
    } else {
        result = (int*)*slot;
    }
    int old = result[0];
    int tmp[3];
    tmp[0] = result[0];
    tmp[1] = result[1];
    tmp[2] = result[2];
    if (value != old) {
        tmp[0] = value;
        sub_5b4a30(obj->classDescriptor, this->field4, tmp);
        sub_573ea0(obj->classDescriptor, this->field4);
        void* p = sub_573890(obj->classDescriptor, this->field4);
        sub_5b6b40(p);
        sub_444710(p);
    }
}
