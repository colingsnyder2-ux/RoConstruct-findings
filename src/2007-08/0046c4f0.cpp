// from server: 69% by colin
struct LuaWriter {
    void* stream;
    unsigned int offset;
    void* ensure();
};

extern "C" void* __stdcall sub_77E6D8();
extern "C" char* __stdcall sub_77E5E8(void*);

void* LuaWriter::ensure()
{
    if (stream == (void*)-2)
        return (void*)offset;

    if (stream == 0)
        sub_77E6D8();

    char* p = sub_77E5E8(stream);
    unsigned int n = (unsigned int)(p + *(int*)((char*)stream + 0x14));
    if (offset >= n)
        sub_77E6D8();

    return (void*)offset;
}
