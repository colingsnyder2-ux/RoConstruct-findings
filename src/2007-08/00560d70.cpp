// from server: 28% by colin
struct Instance {
    void* vtable;
    char pad[8];
};

struct Selection {
    char pad[8];
    void* begin;
    void* end;
    void* cap;
};

struct FilteredSelection {
    char pad[12];
    Selection filteredSelection;
    void addFilteredSelection(Instance*);
    void removeFilteredSelection(Instance*);
    void removeFromSelection(Instance*);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl sub_630D36(void*, const char*, const char*, int, int);
extern "C" void __cdecl sub_5B4070(void*, void*);
extern "C" void __cdecl sub_55F7F0(void*, void*, void*);

void FilteredSelection::removeFromSelection(Instance* inst) {
    void* found = sub_630D36(inst->vtable, (const char*)0x881f4c, (const char*)0x88c6b8, 0, 0);
    if (found) {
        sub_5B4070(&filteredSelection, &found);
    }
    Instance* target = *(Instance**)((char*)inst + 8);
    if (target) {
        void** begin = (void**)&filteredSelection.begin;
        void** end = (void**)&filteredSelection.end;
        void** cap = (void**)&filteredSelection.cap;
        void* b = *begin;
        void* e = *end;
        if (b > e) _invalid_parameter_noinfo();
        void* c = *cap;
        if (e > c) _invalid_parameter_noinfo();
        void* it = e;
        while (it != b) {
            if (*(Instance**)it == target) break;
            it = (char*)it + 4;
        }
        void* c2 = *cap;
        if (*end > c2) _invalid_parameter_noinfo();
        if (it != b) {
            sub_55F7F0(&filteredSelection, &it, &b);
        }
    }
}
