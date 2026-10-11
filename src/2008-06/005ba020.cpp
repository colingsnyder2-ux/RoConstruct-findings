// from server: 91% by atomic.potato
struct VSoundIdTypedPropertyDescriptor {
    char pad0[0x134];
    int field134;
    char pad138[0x15c - 0x138];
    float field15c;
    float field160;
    float field164;
    void method();
};

extern "C" int __cdecl sub_69fbee(int);
extern "C" int __stdcall sub_5b87a0(int, float, float, float);

void VSoundIdTypedPropertyDescriptor::method()
{
    if (field134 != 0) {
        sub_5b87a0(sub_69fbee(field134), field15c, field160, field164);
    }
}
