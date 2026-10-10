// from server: 84% by colin
struct CInstanceRecord {
    struct CNameItem {
        void f(int, int, int);
    };
};

extern "C" void* __stdcall LoadCursorA(void*, const char*);
extern "C" int __stdcall SetCursor(void*);

void CInstanceRecord::CNameItem::f(int a, int b, int c)
{
    int (__thiscall *fn)(void*, int, int);
    fn = *(int (__thiscall **)(void*, int, int))(*(int*)this + 0x110);
    int r = fn(this, b, c);
    if (r < 0) {
        return;
    }
    void* h = LoadCursorA(0, (const char*)0x7f89);
    SetCursor(h);
}
