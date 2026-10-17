// from server: 65% by colin
struct VBase {
    void* field0;
    void* field4;
};

struct VOther {
    virtual void* slot0();
    virtual void* slot1();
    virtual void* slot2();
    virtual void* slot3();
    virtual void* slot4();
    virtual void* slot5();
    virtual void* slot6();
    virtual void* slot7();
    virtual void* slot8();
    virtual void* slot9();
    virtual void* slot10();
    virtual void* slot11();
    virtual void* slot12();
    virtual void* slot13();
    virtual void* slot14();
    virtual void* slot15();
    virtual void* slot16();
    virtual void* slot17();
    virtual void* slot18();
    virtual void* slot19();
    virtual void* slot20();
    virtual void* slot21();
    virtual void* slot22();
    virtual void* slot23();
    virtual void* slot24();
    virtual void* slot25();
    virtual void* slot26();
    virtual void* slot27();
    virtual void* slot28();
    virtual void* slot29();
    virtual void* slot30();
    virtual void* slot31();
    virtual void* slot32();
    virtual void* slot33();
    virtual void* slot34();
    virtual void* slot35();
    virtual void* slot36();
    virtual void* slot37();
    virtual void* slot38();
    virtual void* slot39();
    virtual void* slot40();
    virtual void* slot41();
    virtual void* slot42();
    virtual void* slot43();
    virtual void* slot44();
};

struct VInstance {
    void* field0;
    void* field4;
    char pad8[0x2d50];
    void* field2d54;
    void* field2d58;
};

struct VTarget {
    void* field0;
    void* field4;
    VInstance* field8;
    VOther* fieldC;
    char field10;
    char pad11[3];
    int field14;
    char pad18[0x114];
    int field12c;
    int field130;
    void* construct(int a, int b);
};

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
extern "C" void* __cdecl construct_helper(unsigned int size);

void* VTarget::construct(int a, int b) {
    field0 = 0;
    field4 = 0;
    field8 = (VInstance*)a;
    fieldC = (VOther*)b;
    field10 = 0;
    VInstance* inst = (VInstance*)a;
    VOther* other = (VOther*)b;
    void* p = other->slot44();
    int dec = (int)_InterlockedDecrement((volatile long*)0);
    int total = dec + (int)p;
    field14 = total;
    construct_helper((unsigned int)total);
    field12c = 2;
    field130 = 0;
    return this;
}
