// from server: 34% by colin
// roc 2008-06 00573cb0  unit: RBX::GuiRoot  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573cb0

extern "C" void __stdcall sub_55AF90(void*);
extern "C" void __stdcall sub_5739D0(void*);
extern "C" float* __stdcall sub_7BAF10();

struct GuiRoot {
    void construct(int a, int b, int c);
};

void GuiRoot::construct(int a, int b, int c)
{
    sub_5739D0(this);

    *(int*)((char*)this + 0x00) = 0x82faf4;
    *(int*)((char*)this + 0x10) = 0x82fae4;
    *(int*)((char*)this + 0x14) = 0x82fadc;
    *(int*)((char*)this + 0x20) = 0x82fad4;
    *(int*)((char*)this + 0x24) = 0x82fac4;
    *(int*)((char*)this + 0x44) = 0x82fab4;
    *(int*)((char*)this + 0x64) = 0x82faa4;
    *(int*)((char*)this + 0x84) = 0x82fa94;
    *(int*)((char*)this + 0xa4) = 0x82fa84;
    *(int*)((char*)this + 0xc4) = 0x82fa74;
    *(int*)((char*)this + 0x130) = 0x82fa6c;
    *(int*)((char*)this + 0x154) = 0;

    float* p = sub_7BAF10();
    *(float*)((char*)this + 0x144) = p[0];
    *(float*)((char*)this + 0x148) = p[1];
    *(float*)((char*)this + 0x14c) = p[2];
    *(float*)((char*)this + 0x150) = p[3];

    sub_55AF90((void*)a);
    *(unsigned char*)((char*)this + 0x158) = 1;
    *(int*)((char*)this + 0x154) = b;

    if (c != 0) {
        if ((*(unsigned char*)0x974e50 & 1) == 0) {
            float v = *(float*)0x82f838;
            *(unsigned int*)0x974e50 |= 1;
            *(float*)0x974e40 = v;
            *(float*)0x974e44 = v;
            *(float*)0x974e48 = v;
            *(float*)0x974e4c = v;
        }
        *(float*)((char*)this + 0x144) = *(float*)0x974e40;
        *(float*)((char*)this + 0x148) = *(float*)0x974e44;
        *(float*)((char*)this + 0x14c) = *(float*)0x974e48;
        *(float*)((char*)this + 0x150) = *(float*)0x974e4c;
    }
}
