// from server: 53% by colin
struct CXTPAccessible {
    void construct();
};

struct Sub {
    void init();
    void set(int, const char*, int);
};

extern "C" void __stdcall sub_6e8130();
extern "C" void __stdcall sub_6e8200();
extern "C" void __stdcall sub_6e8e50();

void CXTPAccessible::construct()
{
    *(int*)((char*)this + 0) = 0x856e6c;
    *(int*)((char*)this + 4) = 0x856f74;
    ((Sub*)((char*)this + 0x14))->init();
    ((Sub*)((char*)this + 0x38))->init();
    ((Sub*)((char*)this + 0x14))->set(0, (const char*)0x857004, 0);
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
    *(int*)((char*)this + 0x10) = 0;
    ((Sub*)((char*)this + 0x14))->set(0, (const char*)0x856ff4, 0);
}
