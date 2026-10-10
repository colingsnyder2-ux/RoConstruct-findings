// from server: 51% by tester
struct SoundService {
    char pad[0x14];
    int count;
    bool func_005be950(unsigned short* out);
};

extern "C" {
    int __stdcall sub_8024c4(const char*, int, int);
    void* __stdcall sub_8023e0(void*, int, int, void*);
    int __stdcall sub_802868(const char*);
    void __stdcall sub_802468(void*);
}

bool SoundService::func_005be950(unsigned short* out)
{
    int idx = sub_8024c4(" SVW", 0, 2);
    if (idx < 0)
        return false;

    char buf[16];
    void* s = sub_8023e0(this, 0, idx, buf);
    const char* p;
    if (*(int*)((char*)s + 0x18) < 0x10)
        p = (const char*)s + 4;
    else
        p = *(const char**)s;

    out[0] = (unsigned short)sub_802868(p);
    sub_802468(buf);

    int next = idx + 1;
    if (count < next)
        return false;

    int len = count - next;
    void* s2 = sub_8023e0(this, next, len, buf);
    const char* p2;
    if (*(int*)((char*)s2 + 0x18) < 0x10)
        p2 = (const char*)s2 + 4;
    else
        p2 = *(const char**)s2;

    out[1] = (unsigned short)sub_802868(p2);
    sub_802468(buf);
    return true;
}
