// from server: 43% by colin
struct DataModel;

struct TToolVerb {
    void* field0;
    void* field4;
    void* field8;
    DataModel* dataModel;
    bool toggle;
    bool blacklisted;
    TToolVerb(DataModel* dm, bool t, bool b);
};

struct Alloc {
    void* alloc(unsigned int size);
};

extern "C" void* __cdecl sub_6a0920(unsigned int);
extern "C" void __stdcall sub_63de80(void* self, void* arg);

TToolVerb::TToolVerb(DataModel* dm, bool t, bool b)
{
    void* mem = sub_6a0920(0x24);
    if (mem) {
        sub_63de80(mem, *(void**)((char*)dm + 0x204));
        *(void**)mem = (void*)0x8397f4;
        *(void**)((char*)mem + 4) = (void*)0x8397dc;
    }
    this->field0 = mem;
}
