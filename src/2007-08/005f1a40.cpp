// from server: 47% by colin
// roc 2007-08 005f1a40  size: 142 bytes

struct Name {
    void* data;
};

struct FactoryProduct {
    char pad[0x1c];
    Name name;
    char pad2[0x3c - 0x1c - sizeof(Name)];
    char* creator;
    void construct();
};

extern "C" void __cdecl sub_729150();
extern "C" void __cdecl sub_728f10(Name* dst, const Name* src);
extern "C" void __cdecl sub_728a70(Name* dst, const Name* src);
extern "C" void __cdecl sub_42ae50(void* dst, ...);

void FactoryProduct::construct()
{
    char localFlag = 0;
    Name n1;
    Name n2;
    Name n3;
    Name n4;
    Name n5;
    Name n6;
    Name n7;

    sub_729150();

    sub_728f10(&n1, &this->name);
    sub_728f10(&n2, &this->name);

    sub_728f10(&n3, &n2);
    sub_728f10(&n4, &n3);

    sub_42ae50(&n5, &n4, &n1, localFlag);
    sub_728a70(&n6, &n5);

    sub_728f10(&n7, &n6);
    sub_728a70(&this->name, &n7);

    char* c = this->creator;
    if (*c != 0)
        *c = 0;
}
