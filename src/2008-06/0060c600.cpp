// from server: 84% by tester
struct EnumPropDescriptor {
    char pad[0x150];
    void* getset;
    void setValue(float value);
};

extern "C" void __stdcall sub_5e5da0(float value);
extern "C" void __stdcall sub_40db00(void* desc, const char* name);

void EnumPropDescriptor::setValue(float value)
{
    void* gs = getset;
    float current = *(float*)((char*)gs + 0x8c);
    if (current == value)
        return;
    sub_5e5da0(value);
    sub_40db00(this, (const char*)0x97be80);
}
