// from server: 24% by colin
struct ReplicatorNewInstanceItem {
    char pad0[0xe8];
    int fieldE8;
    char padEC[0x8];
    int fieldF4;
    int fieldF8;
    int fieldF0;
    void destructor();
};

extern "C" void __stdcall sub_77e6ac(int);
extern "C" void __cdecl sub_62fc62(void*);
extern "C" void __cdecl sub_4992f0(void*);
extern "C" void __cdecl sub_5402b0(void*);

void ReplicatorNewInstanceItem::destructor()
{
    fieldE8 = 0x79d660;
    fieldF8 = 0x79d654;
    if (fieldF8) {
        (*(void (__thiscall**)(int, int))(*((int*)fieldF8) + 0xec))(fieldF8, (int)&fieldE8);
    }
    if (fieldF8) {
        (*(void (__thiscall**)(int, int))(*((int*)fieldF8)))(fieldF8, 1);
    }
    if (fieldF4) {
        sub_77e6ac(fieldF4 + 0x20018);
        sub_62fc62((void*)fieldF4);
    }
    if (fieldF0) {
        (*(void (__thiscall**)(int, int))(*((int*)fieldF0)))(fieldF0, 1);
    }
    fieldE8 = 0x795b60;
    sub_4992f0(&fieldE8);
    sub_5402b0(this);
}
