// from server: 49% by colin
struct B_func_004baa40 { virtual ~B_func_004baa40(); };
struct S_func_004baa40 : B_func_004baa40 { ~S_func_004baa40(); };

extern "C" void __stdcall fclose_impl(void*);
extern "C" void __cdecl free_impl(void*);

struct FilePacketLogger {
    char pad[0x20c];
    void* field_20c;
    virtual ~FilePacketLogger();
};

FilePacketLogger::~FilePacketLogger()
{
    void* p = this->field_20c;
    *(void**)this = (void*)0x82450c;
    if (p) {
        fclose_impl(p);
    }
    ((S_func_004baa40*)this)->~S_func_004baa40();
    if (*(unsigned char*)((char*)this + 8) & 1) {
        free_impl(this);
    }
}
