// from server: 62% by colin
struct Instance {
    void* vtable;
    void* unknown4;
    void* unknown8;
};

struct FilteredSelection {
    char pad0[0xc];
    void* begin;
    void* end;
    void* cap;

    void removeFilteredSelection(FilteredSelection*);
    void addFilteredSelection(FilteredSelection*);
};

extern "C" void* __stdcall sub_630d36(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_5b4070(void*, void*);
extern "C" void __stdcall sub_55f7f0(void*, void*, void*);
extern "C" void __stdcall _invalid_parameter_noinfo();

void FilteredSelection::removeFilteredSelection(FilteredSelection* other)
{
    void* found = sub_630d36(*(void**)other, 0, (void*)0x881f4c, (void*)0x898fc0, 0);
    if (found != 0) {
        sub_5b4070(&this->pad0[0xc], &found);
    }

    Instance* inst = *(Instance**)((char*)other + 8);
    if (inst != 0) {
        char* self = (char*)this + 0xc;
        void* e = *(void**)(self + 8);
        if (*(unsigned int*)(self + 4) > (unsigned int)e) {
            _invalid_parameter_noinfo();
        }
        void* i = *(void**)(self + 4);
        if ((unsigned int)i > *(unsigned int*)(self + 8)) {
            _invalid_parameter_noinfo();
        }
        void* start = i;
        while (i != e) {
            if (*(Instance**)i == inst) {
                break;
            }
            i = (char*)i + 4;
            if (i == e) {
                break;
            }
        }
        void* e2 = *(void**)(self + 8);
        if (*(unsigned int*)(self + 4) > (unsigned int)e2) {
            _invalid_parameter_noinfo();
        }
        if (self != 0) {
            if (self == 0) {
                _invalid_parameter_noinfo();
            }
        } else {
            _invalid_parameter_noinfo();
        }
        if (i != e2) {
            sub_55f7f0(self, &start, i);
        }
    }
}
