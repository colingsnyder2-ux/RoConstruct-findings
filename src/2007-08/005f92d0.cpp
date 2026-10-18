// from server: 82% by Viper
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct FactoryProduct {
};

extern "C" void* __cdecl sub_5F9250(void*, int, int);

void* __cdecl func(int a, int b)
{
    if (b == 2) {
        type_info* ti = (type_info*)0x8B3BC0;
        bool r = ti->operator==(*(const type_info*)&a);
        return (void*)(r ? a : 0);
    }
    char local = 0;
    return sub_5F9250((void*)a, b, *(int*)&local);
}
