// from server: 75% by colin
struct CXTPTabClientWnd_CWorkspace;

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall GetParent(void*);
extern "C" int __stdcall IsChild(void*, void*);

void* __stdcall sub_6FD170(void*);
void* __stdcall sub_6301C0(void*);
void __stdcall sub_68AF50(void*, void*);
void __stdcall sub_630004(void*);
void* __stdcall sub_6457A0(void*);
int __stdcall sub_68A2B0(void*, void*);

struct CXTPTabClientWnd_CWorkspace {
    void func(void*);
    char pad[0x8c];
    void* field_8c;
};

void CXTPTabClientWnd_CWorkspace::func(void* arg) {
    void* v1 = sub_6FD170(arg);
    void* v2 = sub_6301C0(v1);
    if (v2 == 0) return;
    sub_68AF50(this->field_8c, v2);
    void* v3 = sub_6301C0(GetFocus());
    if (v3 == 0) {
        sub_630004(v2);
        return;
    }
    void* p = *(void**)((char*)v3 + 0x20);
    if (p == 0) {
        sub_630004(v2);
        return;
    }
    if (v3 == v2) return;
    if (IsChild(*(void**)((char*)v2 + 0x20), p) != 0) return;
    void* q = *(void**)((char*)v3 + 0x38);
    if (q == 0) {
        q = GetParent(*(void**)((char*)v3 + 0x20));
    }
    void* v4 = sub_6301C0(q);
    if (v4 == 0) {
        sub_630004(v2);
        return;
    }
    if (*(void**)((char*)v4 + 0x20) == 0) {
        sub_630004(v2);
        return;
    }
    void* v5 = sub_6457A0(v3);
    if (sub_68A2B0(v2, v5) != 0) return;
    sub_630004(v2);
}
