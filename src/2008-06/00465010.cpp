// from server: 78% by king_originala
struct Base
{
    unsigned long table;
    char padding[0xe8];
    unsigned long secondaryTable;

    Base();
    ~Base();
};

struct MemberA
{
    unsigned long table;
    char padding[0x20];

    MemberA();
    ~MemberA();
};

struct MemberB
{
    unsigned long table;
    char padding[0x20];

    MemberB();
    ~MemberB();
};

struct S : Base
{
    MemberA a;
    MemberB b;
    unsigned long field138;
    unsigned long field13c;
    unsigned long field140;
    unsigned long field144;
    unsigned long field148;
    unsigned long field14c;
    unsigned long field150;
    unsigned char field154;
    unsigned char field155;
    unsigned char field156;
    unsigned char padding157;
    unsigned long field158;
    unsigned long field15c;

    S();
};

S::S()
{
    table = 0x81b3dc;
    secondaryTable = 0x81b3d0;
    a.table = 0x81b3bc;
    b.table = 0x81b3a8;
    field138 = 0;
    field13c = 0;
    field140 = 0;
    field144 = 0;
    field148 = 0;
    field14c = 0;
    field150 = 0;
    field154 = 0;
    field155 = 0;
    field156 = 0;
    field15c = 0;
    field158 = 0x81b228;
}
