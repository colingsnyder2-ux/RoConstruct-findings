// from server: 27% by colin
struct Notifier {
    char pad0[0xE8];
    int fieldE8;
    char padEC[0x14];
    int field100;
    char pad104[0x14];
    int field118;
    char pad11C[0x14];
    int field130;
    int field134;
    char pad138[0x8];
    int field140;
    int field144;
    void destroy();
};

extern "C" void __cdecl free(void*);
extern "C" void __stdcall sub_4AD480(int*, int*, int, int*, int*);
extern "C" void __stdcall sub_40DB50(int, int, int, int);
extern "C" void __stdcall sub_5402B0(void*);

void Notifier::destroy()
{
    int local;

    sub_4AD480(&field140, &field140, field144, &field140, &local);
    free((void*)field144);
    field144 = 0;
    field140 = 0;

    if (field134 != 0) {
        sub_40DB50(field134, field130, field134, (int)this);
        free((void*)field134);
    }
    field134 = 0;
    field130 = 0;
    field130 = 0;

    if (this != 0) {
        field118 = 0x7a71e0;
        if (field118 != 0) {
            free((void*)field118);
        }
        field118 = 0;
        field118 = 0;
        field118 = 0;
    }

    if (this != 0) {
        field100 = 0x7a71d0;
        if (field100 != 0) {
            free((void*)field100);
        }
        field100 = 0;
        field100 = 0;
        field100 = 0;
    }

    if (this != 0) {
        fieldE8 = 0x7a71c0;
        if (fieldE8 != 0) {
            free((void*)fieldE8);
        }
        fieldE8 = 0;
        fieldE8 = 0;
        fieldE8 = 0;
    }

    sub_5402B0(this);
}
