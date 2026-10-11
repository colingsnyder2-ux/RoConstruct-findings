// from server: 55% by colin
struct DescribedBase
{
    char pad[0x134];
};

struct PropertyDescriptor
{
    char pad[0x134];
};

struct S
{
    int offset8;
    int offsetC;
    int offset10;
    int offset14;
    int offset18;

    void setValue(DescribedBase* object, const int* value);
};

extern "C" void __stdcall raisePropertyChanged(PropertyDescriptor* desc);

void S::setValue(DescribedBase* object, const int* value)
{
    DescribedBase* base;
    if (object)
        base = (DescribedBase*)((char*)object - 0x14);
    else
        base = 0;

    int* index = *(int**)((char*)base + 0x134);
    int offset = *(int*)((char*)this + 0xC);
    int entry = *(int*)((char*)index + offset);
    entry += *(int*)((char*)this + 8);

    int* target = (int*)(entry + (int)base + 0x134);
    int newValue = *value;

    if (*target != newValue)
    {
        *target = newValue;

        void (__stdcall *changed)(PropertyDescriptor*) = *(void (__stdcall**)(PropertyDescriptor*))((char*)this + 0x10);
        if (changed)
        {
            int* idx2 = *(int**)((char*)base + 0x134);
            int off2 = *(int*)((char*)this + 0x18);
            int ent2 = *(int*)((char*)idx2 + off2);
            ent2 += *(int*)((char*)this + 0x14);
            PropertyDescriptor* desc = (PropertyDescriptor*)(ent2 + (int)base + 0x134);
            changed(desc);
        }

        raisePropertyChanged((PropertyDescriptor*)((char*)base + 0x134));
    }
}
