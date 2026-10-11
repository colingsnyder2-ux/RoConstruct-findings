// from server: 60% by atomic.potato
struct CXTPCommandBar {
    void* vtable;
    char pad0[0x34];
    void* field_38;
    char pad1[0xCC];
    void* field_108;
    void* GetActive();
    void* GetNext();
    void* sub_807090();
};

extern "C" void* __cdecl sub_7F3B2A(void*);

void* CXTPCommandBar::GetActive()
{
    CXTPCommandBar* self = this;
    void* p = self->GetNext();
    while (self->field_108 == 0) {
        if (self->field_38 != 0) {
            return sub_7F3B2A(self->field_38);
        }
        if (p == 0) {
            return self->sub_807090();
        }
        self = (CXTPCommandBar*)p;
        p = self->GetNext();
    }
    return self->field_108;
}
