// from server: 36% by colin
struct CXTMaskEditBase {
    void ProcessInput(const char* text, int start, int end);
};

extern "C" {
    void* __stdcall sub_77D92C(void* self, void* arg);
    void* __stdcall sub_77D434(void* self, void* arg);
    void __stdcall sub_77DDBC(void* self);
    int  __stdcall sub_77DCC8(void* self);
    char __stdcall sub_77D578(void* self, int index);
    void __stdcall sub_77D568(void* self, char ch);
    void __cdecl sub_6F6F50(int);
    void __cdecl sub_6F6400();
}

void CXTMaskEditBase::ProcessInput(const char* text, int start, int end)
{
    char* p = (char*)text;
    char* q = p + 1;
    char c = *p;
    p++;
    while (c != 0) {
        c = *p;
        p++;
    }
    int len = (int)(p - q);

    void* self80 = (char*)this + 0x80;
    void* self84 = (char*)this + 0x84;

    char buf[4];
    sub_77D92C(self80, buf);
    sub_77D434(self80, buf);
    sub_77DDBC(buf);

    int i = 0;
    while (start < sub_77DCC8(self84)) {
        if (i >= len) break;
        char ch = text[i];
        if (start >= 0 && start < sub_77DCC8(self84)) {
            char mask = *(char*)((char*)this + 0x6c);
            char m = sub_77D578(self84, start);
            if (m == mask) {
                if (ch != mask) {
                    void** vt = *(void***)this;
                    int (*fn)(void*, char*, int) = (int (*)(void*, char*, int))vt[0x144/4];
                    if (!fn(this, &ch, start)) {
                        goto else_branch;
                    }
                }
                sub_77D568(self80, ch);
                i++;
                goto next;
            }
        }
    else_branch:
        sub_77D568(self80, sub_77D578(self84, start));
    next:
        start++;
    }

    if (buf[0] != 0) {
        sub_6F6F50(0);
    } else {
        sub_6F6400();
    }
}
