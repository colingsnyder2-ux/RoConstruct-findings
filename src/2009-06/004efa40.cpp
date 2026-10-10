// from server: 77% by atomic.potato
struct Replicator {
    void ChangePropertyItem(int a1, int a2);
};

extern "C" void* __cdecl sub_657850(int);
extern "C" void __stdcall sub_4ED860(void* thisptr, const char*, void*);

void Replicator::ChangePropertyItem(int a1, int a2) {
    void* esi = sub_657850(a1);
    int* edi = (int*)a2;
    
    sub_4ED860(esi, (const char*)0x8C72FC, edi);
    sub_4ED860(esi, (const char*)0x8C72EC, edi + 2);
    sub_4ED860(esi, (const char*)0x8C72DC, edi + 4);
    sub_4ED860(esi, (const char*)0x8C72CC, edi + 6);
}
