// from server: 69% by colin
struct BackpackItem {
    void construct();
};

struct String {
    char buf[24];
    String(const char*);
    ~String();
};

extern "C" {
    void __stdcall sub_77E698();
    void __stdcall sub_77E6AC();
}

void sub_541BF0();
void sub_59EB00();

void BackpackItem::construct()
{
    sub_59EB00();

    *(int*)((char*)this + 0x00) = 0x7b1f84;
    *(int*)((char*)this + 0x04) = 0x7b1f7c;
    *(int*)((char*)this + 0x10) = 0x7b1f74;
    *(int*)((char*)this + 0x14) = 0x7b1f64;
    *(int*)((char*)this + 0x2c) = 0x7b1f54;
    *(int*)((char*)this + 0x44) = 0x7b1f44;
    *(int*)((char*)this + 0x5c) = 0x7b1f34;
    *(int*)((char*)this + 0x74) = 0x7b1f24;
    *(int*)((char*)this + 0x8c) = 0x7b1f14;
    *(int*)((char*)this + 0xe8) = 0x7b1f0c;

    sub_77E698();

    String s("Hopper");
    sub_541BF0();
    sub_77E6AC();
}
