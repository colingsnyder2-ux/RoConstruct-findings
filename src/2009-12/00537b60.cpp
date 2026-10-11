// from server: 90% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct Replicator {
};

void __cdecl func_00537b60(int a, void* b, int c)
{
    if (a == 0 || a == 1) {
        if (b != 0) {
            *(int*)b = *(int*)c;
            *(int*)((char*)b + 4) = *(int*)((char*)c + 4);
        }
        return;
    }
    if (a == 2)
        return;
    if (a == 3) {
        int* p = (int*)b;
        type_info* v = (type_info*)*p;
        bool r = v->operator==(*(type_info*)0xb1d350);
        *p = r ? c : 0;
        return;
    }
    *(int*)b = 0xb1d350;
    *(char*)((char*)b + 4) = 0;
    *(char*)((char*)b + 5) = 0;
}
