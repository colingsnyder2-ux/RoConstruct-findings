// from server: 97% by atomic.potato
typedef unsigned long DWORD;

extern "C" DWORD __cdecl sub_69FC12(DWORD);
extern "C" DWORD __cdecl sub_5B87A0(DWORD);

struct Descriptor
{
    DWORD value;
};

struct Holder
{
    DWORD pad[8];
    Descriptor* descriptor;
};

void function_005BA2B0(Holder* object)
{
    Descriptor* descriptor = object->descriptor;
    DWORD value = descriptor->value;
    if (value != 0)
    {
        sub_5B87A0(sub_69FC12(value));
        descriptor->value = 0;
    }
}
