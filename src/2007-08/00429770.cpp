// from server: 92% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void __cdecl sub_429650(void*, int, int);

int __cdecl sub_429770(int arg1, int arg2, int arg3)
{
    if (arg2 == 2) {
        int v = arg1;
        if (*(const type_info*)0x8864c0 == *(const type_info*)v) {
            return v;
        }
        return 0;
    }
    char local = 0;
    sub_429650((void*)arg1, arg2, *(int*)&local);
    return 0;
}
