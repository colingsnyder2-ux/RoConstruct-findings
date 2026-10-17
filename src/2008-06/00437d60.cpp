// from server: 35% by colin
struct String {
    char data[28];
    String(const char*);
    ~String();
};

extern "C" {
    void __stdcall sub_802458(void*, const char*);
    void __stdcall sub_802468(void*);
    int __cdecl sub_50edb0(void*);
    void __cdecl sub_553f90(const char*, int);
    void __cdecl sub_554270();
}

struct Item {
    void construct(const char* name);
};

void Item::construct(const char* name) {
    String s(name);
    int idx = sub_50edb0(&s);
    switch (idx) {
    case 0:
        sub_553f90("image/jpeg", -1);
        break;
    case 1:
        sub_553f90("image/bmp", -1);
        break;
    case 2:
        sub_553f90("image/vnd.microsoft.icon", -1);
        break;
    case 3:
        sub_553f90("image/png", -1);
        break;
    case 4:
        sub_553f90("image/png", -1);
        break;
    case 5:
        sub_553f90("image/png", -1);
        break;
    default:
        sub_554270();
        break;
    }
}
