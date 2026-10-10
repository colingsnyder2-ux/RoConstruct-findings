// from server: 56% by colin
struct RakPeer;

struct Peer {
    char pad[0x2b4];
    struct List {
        char pad0[0xc];
        void* head;
        char pad1[4];
        int count;
    } list;
};

extern "C" void __stdcall sub_4A3590(void*, int);
extern "C" void* __fastcall sub_4B9450(void*);
extern "C" int __fastcall sub_4B7F70(void*);
extern "C" int __fastcall sub_4BCB80(void*, int, int, int);
extern "C" void __cdecl sub_630D4C(void*, int, int);

bool __fastcall Peer_connect(Peer* self, void*, int, unsigned short, int, int, int, int);

bool __fastcall Peer_connect(Peer* self, void* a1, int a2, unsigned short a3, int a4, int a5, int a6, int a7)
{
    char buf[8];
    sub_4A3590(buf, a2);
    *(unsigned short*)(buf + 4) = a3;
    int v = *(int*)buf;
    if (sub_4BCB80(self, v, 0, 1) != 0)
        return false;

    Peer::List* list = (Peer::List*)((char*)self + 0x2b4);
    void* node = sub_4B9450(list);
    *(int*)node = *(int*)buf;
    *(unsigned short*)((char*)node + 4) = *(unsigned short*)(buf + 4);
    int r = sub_4B7F70(node);
    *(char*)((char*)node + 0xc) = 0;
    *(int*)((char*)node + 0x10) = 0;
    *(int*)((char*)node + 8) = r;
    *(int*)((char*)node + 0x118) = a6;
    *(int*)((char*)node + 0x11c) = 1;
    sub_630D4C((char*)node + 0x16, a4, a5);
    *(char*)((char*)node + 0x116) = (char)a5;
    void* h = list->head;
    list->count++;
    *(char*)((char*)h + 0x120) = 1;
    list->head = *(void**)((char*)h + 0x124);
    return true;
}
