// from server: 46% by colin
struct ScoreHud {
    char pad0[0xc];
    char* begin;
    char* end;
    char pad14[4];
    char pad18[0x18];
    void addEntry(int);
    void setEntries(int, int);
};

extern "C" void __stdcall sub_802460(void*);
extern "C" void __stdcall sub_802890(void);

void ScoreHud::setEntries(int a, int b)
{
    addEntry(a);
    int i = 0;
    if (b > 0) {
        int off = 0;
        do {
            int count = (int)((end - begin) / 0x18);
            if ((unsigned)i >= (unsigned)count)
                sub_802890();
            char* p = begin + off;
            char buf[0x1c];
            sub_802460(buf);
            addEntry(*(int*)((char*)&buf + 0x1c));
            i++;
            off += 0x18;
        } while (i < b);
    }
    char buf2[0x1c];
    sub_802460(buf2);
    addEntry(*(int*)((char*)&buf2 + 0x1c));
}
