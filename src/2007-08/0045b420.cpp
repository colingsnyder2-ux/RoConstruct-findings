// from server: 44% by colin
struct Item {
    void setValue(int);
    void setValue(double);
    void setValue(const char*);
    void update();
};

struct RenderStatsItem : Item {
    void update();
};

struct StatsService {
    char pad[0x210];
    int field210;
    int field214;
    int field218;
    int field21c;
};

extern "C" {
    void __stdcall sub_596AE0(Item* item, const char* fmt, double a, double b);
    void __stdcall sub_596A60(Item* item, int value);
    int __stdcall sub_472F80();
}

extern int dword_8BFBDC;
extern int dword_8BFBE0;
extern int dword_8BFBE4;
extern int dword_8BD028;
extern int dword_8BD0B4;
extern double dbl_78FEE8;
extern double dbl_793198;

void RenderStatsItem::update()
{
    if (dword_8BFBDC == 0) {
        Item* videoMemory = *(Item**)((char*)this + 0x110);
        *(double*)((char*)videoMemory + 0xe8) = 0.0;
        *(int*)((char*)videoMemory + 0xf0) = 0;
    } else {
        Item* videoMemory = *(Item**)((char*)this + 0x110);
        if (dword_8BFBE4 == 0) {
            sub_596AE0(videoMemory, "%.0f%%, %.2g", 0.0, 1.0);
        } else {
            int total = dword_8BFBE4 - dword_8BFBDC + dword_8BFBE0;
            float fTotal = (float)total;
            float fUsed = (float)dword_8BFBE4;
            float ratio = (fUsed - fTotal) / (fUsed - (float)dbl_793198);
            sub_596AE0(videoMemory, "%.0f%%, %.2g", (double)(ratio * (float)dbl_78FEE8), (double)fTotal);
        }
    }

    StatsService* ss = *(StatsService**)((char*)this + 0x128);
    Item* major = *(Item**)((char*)this + 0x120);
    sub_596AE0(major, "%d/%d", (double)ss->field214, (double)ss->field210);

    StatsService* ss2 = *(StatsService**)((char*)this + 0x128);
    Item* minor = *(Item**)((char*)this + 0x124);
    sub_596AE0(minor, "%d/%d", (double)ss2->field21c, (double)ss2->field218);

    sub_596A60(*(Item**)((char*)this + 0x114), dword_8BD028);
    sub_596A60(*(Item**)((char*)this + 0x118), dword_8BD0B4);
    sub_596A60(*(Item**)((char*)this + 0x11c), sub_472F80());
}
