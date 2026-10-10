// from server: 34% by colin
struct RBX_Name;

struct Descriptor
{
    const char* name;
    int attributes;
};

struct EnumDescriptor;

struct EnumItem : public Descriptor
{
    const EnumDescriptor* owner;
    int value;
    unsigned int index;
};

struct EnumDescriptor
{
    char pad0[0x58];
    void* field58;
    char pad5c[0x1a8 - 0x5c];
    void* field1a8;
};

struct NameLookup
{
    char pad0[0x58];
    void* field58;
    char pad5c[0x78 - 0x5c];
    int field78;
};

extern "C" int __stdcall sub_65ac80(void* p, int a, void* b);
extern "C" void __stdcall sub_67ffa0(void* p, void* q);
extern "C" void __stdcall sub_6309f4(void* p, void* q);
extern "C" void* __stdcall sub_654ba0(void* p, int a);
extern "C" int __stdcall sub_653870(void* p);
extern "C" void __stdcall sub_6d1930(void* p, void* q, void* r);

struct CNameItem
{
    void construct(NameLookup* a1);
};

void CNameItem::construct(NameLookup* a1)
{
    EnumDescriptor* ed = (EnumDescriptor*)a1->field58;
    char buf[0x60];
    int i;
    for (i = 0; i < 0x60; i += 4)
        *(int*)(buf + i) = 0;

    *(void**)(buf + 0x14) = this;
    *(void**)(buf + 0x2c) = a1;

    int r = sub_65ac80(ed->field58, -0x3a, buf);
    if (r == 1)
        return;
    if (a1->field78 != 0x65)
        return;

    int v68 = *(int*)((char*)a1 + 0x68);
    void* v1a8 = ed->field1a8;
    int v5c = *(int*)((char*)a1 + 0x5c);
    int v60 = *(int*)((char*)a1 + 0x60);
    int v64 = *(int*)((char*)a1 + 0x64);
    int v6c = *(int*)((char*)a1 + 0x6c);
    int v70 = *(int*)((char*)a1 + 0x70);
    int v74 = *(int*)((char*)a1 + 0x74);
    void* v58 = a1->field58;

    *(int*)(buf - 0x10) = v68;
    *(int*)(buf - 0x0c) = v6c;
    *(int*)(buf - 0x08) = v70;
    *(int*)(buf - 0x24) = 0x7c7e28;
    *(int*)(buf - 0x20) = (int)v58;
    *(int*)(buf - 0x1c) = v5c;
    *(int*)(buf - 0x18) = v60;
    *(int*)(buf - 0x14) = v64;
    *(int*)(buf - 0x04) = v74;

    if (v60 == 0 && v58 == 0 && v64 == 0 && v5c == 0)
        return;

    *(int*)(buf + 0x30) = 0;
    sub_67ffa0(buf + 0x1c, a1);
    sub_6309f4(ed->field58, buf + 0x18);

    int c1 = *(int*)(buf + 0x24);
    int d1 = *(int*)(buf + 0x34);
    int a0 = *(int*)(buf + 0x20);
    *(int*)(buf - 0x04) = c1;
    *(int*)(buf - 0x04) = a0;

    void* item = sub_654ba0(this, d1);
    int n = sub_653870(*(void**)((char*)item + 0x28));
    if (n <= 0)
        return;

    sub_6d1930(v1a8, buf + 0x2c, (void*)n);
}
