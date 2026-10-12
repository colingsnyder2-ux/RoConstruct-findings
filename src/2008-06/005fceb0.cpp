// from server: 88% by king_originala
extern unsigned char table_841364[];
extern unsigned char table_841354[];
extern unsigned char table_84134c[];
extern unsigned char table_841344[];
extern unsigned char table_841334[];
extern unsigned char table_841324[];
extern unsigned char table_841314[];
extern unsigned char table_841304[];
extern unsigned char table_8412f4[];
extern unsigned char table_8412e4[];
extern unsigned char table_8412dc[];
extern unsigned char table_8412d0[];
extern unsigned char table_8412c4[];
extern unsigned char table_8412b8[];
extern unsigned char table_8412ac[];
extern unsigned char table_8412a0[];
extern unsigned char table_841294[];

struct LocalBackpackItem
{
    volatile unsigned long storage[0x1ac / 4];

    void initializeBase();
    LocalBackpackItem* initialize();
};

LocalBackpackItem* LocalBackpackItem::initialize()
{
    initializeBase();

    storage[0x000 / 4] = (unsigned long)table_841364;
    storage[0x010 / 4] = (unsigned long)table_841354;
    storage[0x014 / 4] = (unsigned long)table_84134c;
    storage[0x020 / 4] = (unsigned long)table_841344;
    storage[0x024 / 4] = (unsigned long)table_841334;
    storage[0x044 / 4] = (unsigned long)table_841324;
    storage[0x064 / 4] = (unsigned long)table_841314;
    storage[0x084 / 4] = (unsigned long)table_841304;
    storage[0x0a4 / 4] = (unsigned long)table_8412f4;
    storage[0x0c4 / 4] = (unsigned long)table_8412e4;
    storage[0x130 / 4] = (unsigned long)table_8412dc;
    storage[0x168 / 4] = (unsigned long)table_8412d0;
    storage[0x16c / 4] = (unsigned long)table_8412c4;
    storage[0x170 / 4] = (unsigned long)table_8412b8;
    storage[0x174 / 4] = (unsigned long)table_8412ac;
    storage[0x178 / 4] = (unsigned long)table_8412a0;
    storage[0x17c / 4] = (unsigned long)table_841294;

    storage[0x180 / 4] = 0;
    storage[0x184 / 4] = 0;
    storage[0x188 / 4] = 0;
    storage[0x18c / 4] = 0;
    storage[0x190 / 4] = 0;
    storage[0x194 / 4] = 0;
    storage[0x198 / 4] = 0;
    storage[0x19c / 4] = 0;
    storage[0x1a0 / 4] = 0;
    storage[0x1a4 / 4] = 0;
    storage[0x1a8 / 4] = 0xffffffffUL;
    storage[0x160 / 4] = 1;

    return this;
}
