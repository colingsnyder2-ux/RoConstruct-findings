// from server: 56% by colin
struct ClientProxy {
    char pad[0x2d5c];
    int field_2d5c;
    void process(int);
    void* sub_42bbb0();
};

struct Reader {
    int read(int*, int, int);
};

extern "C" void __stdcall sub_42bc10(void*, int);

extern "C" void* __stdcall sub_5a7570(void*);
extern "C" void __stdcall sub_5a76b0(void*, void*);
extern "C" void __stdcall sub_5a6ff0(void*, void*);

void ClientProxy::process(int arg)
{
    int local;
    sub_42bc10(&local, 6);
    local = 0;
    char flag = 0;
    int value = 0;
    Reader* r = (Reader*)arg;
    for (;;) {
        r->read(&value, 2, 1);
        if (value < 1 || value > 3) {
            r->read(&value, 0x20, 1);
        }
        switch (value) {
        case 0:
            ((void (__thiscall*)(ClientProxy*, int))0x4b0800)(this, arg);
            break;
        case 1:
            ((void (__thiscall*)(ClientProxy*, int))0x4b7250)(this, arg);
            break;
        case 2:
            ((void (__thiscall*)(ClientProxy*, int))0x4b7a30)(this, arg);
            break;
        case 3:
            ((void (__thiscall*)(ClientProxy*, int))0x4b8490)(this, arg);
            break;
        case 4:
            flag = 1;
            break;
        }
        field_2d5c = value;
        if (flag) break;
    }
    local = -1;
    void* p = sub_42bbb0();
    void* q = sub_5a7570(p);
    if (q != *(void**)&local) {
        sub_5a76b0(p, *(void**)&local);
        if (q) {
            sub_5a6ff0(p, q);
        }
    }
}
