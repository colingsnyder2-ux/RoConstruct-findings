// from server: 41% by colin
struct CXTPPropertyGridItem {
    char pad[0x90];
    int m_nValue;
    void OnValueChanged(int value);
    void SetValue(int value);
};

struct ContentId {
    char pad[4];
    void* m_content;
    ContentId();
    ContentId(const ContentId& other);
    const char* c_str() const;
};

struct SoundId : ContentId {
    SoundId(const ContentId& id);
};

struct VSoundIdItem {
    char pad0[0xf0];
    int m_flag;
    char pad1[0x100 - 0xf4];
    char m_sub[0x18];
    void* m_ptr;
    void sub_43b5d0(void* p, int v);
    void sub_69a040(void* p, int a, int b);
    void sub_698cc0(int v);
    SoundId* ctor(void* p, int a);
};

SoundId* VSoundIdItem::ctor(void* p, int a) {
    void* q = *(void**)((char*)p + 4);
    const char* s = ((ContentId*)((char*)q + 4))->c_str();
    sub_69a040((void*)s, 0, 0);
    sub_43b5d0(p, a);
    m_flag = 1;
    *(void**)this = (void*)0x78e2b4;
    *(void**)((char*)this + 0x20) = (void*)0x78e254;
    *(void**)((char*)this + 0x100) = (void*)0x78e248;
    m_ptr = p;
    int v = (*(int(**)(void*))p)(p);
    sub_698cc0(v & 0xff);
    return (SoundId*)this;
}
