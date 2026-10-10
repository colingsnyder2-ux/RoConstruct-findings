// from server: 57% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

void* __cdecl ChangePropertyItem(void* a, void* b, void* c);
void __cdecl DestroyItem(void* p);

struct Replicator {
    char pad[8];
    void* field8;
    void DeleteInstanceItem(void* a, void* b, void* c, void* d, void* e);
};

void Replicator::DeleteInstanceItem(void* a, void* b, void* c, void* d, void* e) {
    if (a != 0 && a != e) {
        _invalid_parameter_noinfo();
    }
    if (b != c) {
        void* p = ChangePropertyItem(c, field8, b);
        void* end = field8;
        void* it = p;
        while (it != end) {
            DestroyItem(it);
            it = (char*)it + 16;
        }
        field8 = p;
    }
    *(void**)d = a;
    *(void**)((char*)d + 4) = b;
}
