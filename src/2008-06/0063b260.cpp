// from server: 91% by colin
struct S {
    char pad0[4];
    int field4;
    int field8;
    char padC[4];
    int field10;
    int field14;
    void set(void* object, double* value);
};

extern "C" void __stdcall sub_40DB00(int);

void S::set(void* object, double* value)
{
    char* base = object ? static_cast<char*>(object) - 20 : 0;
    double* target = reinterpret_cast<double*>(field8 + reinterpret_cast<int>(base));
    if (*target != *value) {
        *target = *value;
        if (field10) {
            void (__thiscall *fn)(void*, int) = reinterpret_cast<void (__thiscall *)(void*, int)>(field10);
            fn(reinterpret_cast<void*>(field14 + reinterpret_cast<int>(base)), field4);
        }
        sub_40DB00(field4);
    }
}
