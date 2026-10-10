// from server: 45% by colin
struct CXTPStatusBar {
    void dtor();
    char pad[0x44];
    int field44;
    int field48;
    char pad2[0x10];
    int field5c;
    int field60;
    char pad3[0x8];
    int field6c;
    char pad4[0x10];
    int field80;
    char pad5[0x10];
    int field94;
    char pad6[0x10];
    int fieldA8;
    char pad7[0x10];
    int fieldBC;
    char pad8[0x10];
    int fieldD0;
    char pad9[0x10];
    int fieldE4;
    char pad10[0x10];
    int fieldF8;
    char pad11[0x10];
    int field10C;
    char pad12[0x10];
    int field120;
    int field124;
};

extern "C" int __stdcall IsWindow(void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void* __stdcall sub_77edbc(void*);
extern "C" void* __stdcall sub_6305bc(void*);
extern "C" void __stdcall sub_63069a(void*);
extern "C" void __stdcall sub_41f680(void*);

void CXTPStatusBar::dtor()
{
    *(int*)this = 0x7d092c;
    void* p = sub_6305bc((void*)field44);
    if (p != 0) {
        if (IsWindow(*(void**)((char*)p + 0x20))) {
            (*(void(__thiscall**)(void*))(*(int*)p + 0x68))(p);
            if (field48 != 0) {
                (*(void(__thiscall**)(void*, int))(*(int*)p + 4))(p, 1);
            }
        }
    }
    *(int*)((char*)this + 0x5c) = 0x794a08;
    sub_41f680((char*)this + 0x5c);
    sub_77ddbc((char*)this + 0x40);
    sub_77ddbc((char*)this + 0x30);
    sub_63069a(this);
}
