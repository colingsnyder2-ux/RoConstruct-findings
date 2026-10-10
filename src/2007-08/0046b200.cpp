// from server: 78% by colin
struct LuaObjectWriter {
    void* stream;
    void write();
};

extern "C" void* __cdecl sub_77E608(void*);
extern "C" void __cdecl sub_77E5D8(void*);

void LuaObjectWriter::write()
{
    void* p = stream;
    void* v = *(void**)p;
    void* r = sub_77E608((char*)p + *(int*)((char*)v + 4));
    if (r != 0) {
        void* p2 = stream;
        void* v2 = *(void**)p2;
        void* r2 = sub_77E608((char*)p2 + *(int*)((char*)v2 + 4));
        sub_77E5D8(r2);
    }
}
