// from server: 63% by colin
struct SpecialShape {
    char pad[0x130];
    int m_130;
    char pad2[0x160 - 0x134];
    char m_160[0x20];
    int m_17c;
    void setMeshType(int value);
};

extern "C" int __stdcall sub_55bd60(void* a, void* b);
extern "C" void* __stdcall sub_80240c();
extern "C" void __stdcall sub_40db00(void* self, const char* name);

void SpecialShape::setMeshType(int value)
{
    char* p = (char*)this + 0x160;
    if (sub_55bd60(p, &value)) {
        sub_80240c();
        *(int*)(p + 0x1c) = *(int*)((char*)&value + 0x1c);
        sub_40db00(this, (const char*)0x976820);
        if (m_130 != 5) {
            m_130 = 5;
            sub_40db00(this, (const char*)0x976858);
        }
    }
}
