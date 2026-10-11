// from server: 37% by colin
// roc 2008-06 005ed900  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed900

struct XmlNameValuePair {
    char pad[0x10];
    int type;
    int f200();
    int f210(void*);
    int f4f0(void*);
};

struct String {
    char buf[0x1c];
    String();
    ~String();
};

extern "C" {
    void __stdcall sub_802460(void*);
    void __stdcall sub_802468(void*);
}

int __stdcall sub_554290(void*, char*);
void* __stdcall sub_557330(void*, void*);
void* __stdcall sub_5ed5c0();
int __stdcall sub_5ed300(void*, void*);
int __stdcall sub_57c810(void*);
int __stdcall sub_57c200(void*);
int __stdcall sub_57c210(void*, void*);
int __stdcall sub_57c4f0(void*, void*);

struct SurfaceEnumPropDescriptor {
    int method(int, int, int);
};

int SurfaceEnumPropDescriptor::method(int a, int b, int c)
{
    void* p = (void*)a;
    if (sub_57c810(p))
        return 0;

    XmlNameValuePair* nvp = (XmlNameValuePair*)((char*)p + 0x10);
    if (sub_57c200(nvp)) {
        String s;
        sub_802460(&s);
        if (sub_57c210(nvp, &s)) {
            char* str;
            if (*(int*)((char*)&s + 0x18) >= 0x10)
                str = *(char**)s.buf;
            else
                str = s.buf;
            sub_557330((void*)0x97b11c, (void*)0x5ed620);
            void* obj = sub_5ed5c0();
            void* tmp;
            sub_554290(&tmp, str);
            if (sub_5ed300(obj, &tmp)) {
                void* vt = *(void**)((char*)this + 0x1c);
                void* fn = *(void**)((char*)vt + 0xc);
                int val = *(int*)((char*)&s + 0x18);
                ((void(__stdcall*)(void*, int*))fn)(vt, &val);
                sub_802468(&s);
                return 0;
            }
        }
        sub_802468(&s);
    }

    int out;
    if (sub_57c4f0(nvp, &out)) {
        int val = out;
        void* vt = *(void**)((char*)this + 0x1c);
        void* fn = *(void**)((char*)vt + 0xc);
        ((void(__stdcall*)(void*, int*))fn)(vt, &val);
    }
    return 0;
}
