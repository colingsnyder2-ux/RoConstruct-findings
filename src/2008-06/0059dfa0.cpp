// from server: 63% by colin
struct VCRenderSettings_EnumPropDescriptor {
    void SetValue(int);
};

extern "C" void* __stdcall sub_5A3390(void*);
extern "C" void __stdcall sub_5EA4C0(void*, void*);
extern "C" void __stdcall sub_40DB00(void*, const char*);
extern "C" void __stdcall sub_599EB0(void*, void*, void*);
extern "C" void __stdcall sub_59DB90(void*, void*);
extern "C" void __stdcall sub_59B4F0(void*);
extern "C" void __stdcall sub_5EA5D0(void*, void*);

void VCRenderSettings_EnumPropDescriptor::SetValue(int value)
{
    char* self = (char*)this;
    int v;
    if (*(int*)(self + 0x1dc) == 1)
        v = value;
    else
        v = 0;

    if (v == *(int*)(self + 0x1e0))
        return;

    void* p = sub_5A3390(self);
    if (p != 0)
    {
        sub_5EA4C0(p, self + 0x228);
    }

    if (v != *(int*)(self + 0x1e0))
    {
        *(int*)(self + 0x1e0) = v;
        sub_40DB00(self, (const char*)0x9762ec);
    }

    float* f = (float*)(*(int*)(self + 0x2c4) + 4);
    float a = f[0];
    float b = f[1];
    float c = f[2];

    float t = (float)(int)b;
    float one = 1.0f;
    float* sel;
    if (t < one)
        sel = &t;
    else
        sel = &one;

    float d = *sel;

    sub_599EB0(self, &a, &d);
    sub_59DB90(self, &d);
    sub_59B4F0(self);

    void* q = sub_5A3390(self);
    if (q != 0)
    {
        sub_5EA5D0(q, self + 0x228);
    }
}
