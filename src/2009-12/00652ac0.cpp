// from server: 63% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    int value;
};

struct Outer {
    char pad[0xb0];
    Inner** begin;
    Inner** end;
    int getIndex(int);
};

extern "C" int __cdecl sub_64d5d0(int);

int Outer::getIndex(int arg)
{
    int idx = *reinterpret_cast<int*>(sub_64d5d0(arg));
    if (idx < 0)
        return 0;
    unsigned int count = (unsigned int)((char*)end - (char*)begin) >> 2;
    if ((unsigned int)idx >= count)
        return 0;
    if ((unsigned int)idx >= (unsigned int)((char*)end - (char*)begin) >> 2)
        _invalid_parameter_noinfo();
    return begin[idx]->value;
}
