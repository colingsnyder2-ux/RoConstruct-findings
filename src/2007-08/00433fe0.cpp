// from server: 37% by colin
// roc 2007-08 00433fe0  unit: CBrowserFrameWnd  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433fe0

extern "C" void* __cdecl sub_62FEF6(unsigned int size);
extern "C" void __cdecl sub_66AAF0(void* p);

struct CBrowserFrameWnd {
    void* vtable;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    void* field2C;
    void* field30;
    void* field34;
    void* field38;
    void* field3C;
    void* field40;
    void* field44;
    void* field48;
    void* field4C;
    void* field50;
    void* field54;
    void* field58;
    void* field5C;
    void* field60;
    void* field64;
    void* field68;
    void* field6C;
    void* field70;
    void* field74;
    void* field78;
    void* field7C;
    void* field80;
    void* field84;
    void* field88;
    void* field8C;
    void* field90;
    void* field94;
    void* field98;
    void* field9C;
    void* fieldA0;
    void* fieldA4;
    void* fieldA8;
    void* fieldAC;
    void* fieldB0;
    void* fieldB4;
    void* fieldB8;
    void* fieldBC;
    void* fieldC0;
    void* fieldC4;
    void* fieldC8;
    void* fieldCC;
    void* fieldD0;
    void* fieldD4;
};

CBrowserFrameWnd* __cdecl sub_433FE0();

CBrowserFrameWnd* __cdecl sub_433FE0()
{
    CBrowserFrameWnd* p = (CBrowserFrameWnd*)sub_62FEF6(0xD8);
    if (p != 0)
    {
        sub_66AAF0(p);
        p->vtable = (void*)0x78C08C;
    }
    return p;
}
