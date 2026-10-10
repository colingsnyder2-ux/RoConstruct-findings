// from server: 23% by colin
struct CXTPReportColumnOrder {
    void Rebuild(int mode);
};

extern "C" int __cdecl sub_47B540();
extern "C" void __cdecl sub_685720(void* p, const char* fmt, ...);
extern "C" void* __cdecl sub_653870(void* p);
extern "C" void* __cdecl sub_6D3600(void* p, int n);
extern "C" void* __cdecl sub_6D34F0(void* p, int n);
extern "C" void __cdecl sub_6D3B80(void* p, void* q);
extern "C" void __cdecl sub_6D3BA0(void* p);

extern "C" void* __stdcall sub_77DDAC(void* p);
extern "C" void* __stdcall sub_77DD98(void* p, void* q);
extern "C" void* __stdcall sub_77DDBC(void* p);
extern "C" void* __stdcall sub_77DD94(void* p, const char* fmt, void* q);

void CXTPReportColumnOrder::Rebuild(int mode)
{
    int count;
    int i;
    void* item;
    void* str;
    char buf[8];

    if (*(int*)((char*)this + 0x24) == 0) {
        count = sub_47B540();
        sub_685720(this, "Column%i", count);
        if (count > 0) {
            for (i = 0; i < count; i++) {
                item = sub_6D3600(this, i);
                if (item) {
                    str = sub_653870(item);
                    sub_77DDAC(buf);
                    sub_77DD94(buf, "%s", str);
                    sub_685720(this, "%s", sub_77DD98(buf, 0));
                    sub_77DDBC(buf);
                }
            }
        }
    } else {
        sub_6D3BA0(this);
        sub_685720(this, "Count", 0);
        if (*(int*)((char*)this + 0x1c) > 0) {
            for (i = 0; i < *(int*)((char*)this + 0x1c); i++) {
                sub_77DDAC(buf);
                sub_77DD94(buf, "%s", (void*)1);
                sub_685720(this, "%s", sub_77DD98(buf, 0));
                sub_6D3B80(this, sub_6D34F0(*(void**)((char*)this + 0x20), *(int*)((char*)this + 0x30)));
                sub_77DDBC(buf);
            }
        }
    }
}
