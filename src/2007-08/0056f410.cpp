// from server: 17% by colin
struct PropertyDescriptor {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
};

struct TypedPropertyDescriptor : PropertyDescriptor {
    void* getset;
    void checkFlags();
    void construct();
};

extern "C" {
    int __stdcall G1_func_0077e708(void*, void*);
    void __stdcall G1_func_0077e698(void*, const char*);
    void __stdcall G1_func_0077e6ac(void*);
}

extern void G1_func_0056de80();
extern void G1_func_0056e030();
extern void G1_func_0056ddf0();
extern void G1_func_00537000();
extern void G1_func_0056e690();
extern void G1_func_005803f0();
extern void G1_func_005804b0();
extern void G1_func_00580600();
extern void G1_func_00580530();
extern void G1_func_0058cff0();
extern void G1_func_004141a0();
extern void G1_func_00412dc0();
extern void G1_func_00630b9e();
extern void G1_func_0056d840();
extern void G1_func_0056d7d0();
extern void G1_func_0056d8b0();
extern void G1_func_0056d920();
extern void G1_func_0056da70();

void TypedPropertyDescriptor::construct()
{
    void** vtbl = *(void***)this;
    void* type = vtbl[2];
    if (G1_func_0077e708((void*)0x8827e0, type)) {
        G1_func_0056de80();
        G1_func_005803f0();
        G1_func_004141a0();
        G1_func_0056d840();
    }
    if (G1_func_0077e708((void*)0x8827d4, type)) {
        G1_func_0056e030();
        G1_func_005804b0();
        G1_func_004141a0();
        G1_func_0056d7d0();
    }
    if (G1_func_0077e708((void*)0x8827ec, type)) {
        G1_func_0056ddf0();
        G1_func_00580600();
        G1_func_004141a0();
        G1_func_0056d8b0();
    }
    if (G1_func_0077e708((void*)0x8999a8, type)) {
        G1_func_00537000();
        G1_func_00580530();
        G1_func_004141a0();
        G1_func_0056d920();
    }
    if (G1_func_0077e708((void*)0x8999b4, type)) {
        G1_func_0056e690();
        G1_func_0058cff0();
        G1_func_004141a0();
        G1_func_0056da70();
    }
    if (G1_func_0077e708((void*)0x8827f8, (void*)0x8827c8)) {
        G1_func_0077e698((void*)0x7aa054, "Unable to cast value to std::string");
        G1_func_00412dc0();
        G1_func_00630b9e();
    }
}
