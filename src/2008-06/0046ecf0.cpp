// from server: 56% by colin
struct LDrawCommand {
    bool writeToStream(void* stream);
};

extern "C" int __stdcall sub_46D080(int);
extern "C" void* __stdcall sub_44A450(void*, const char*);
extern "C" void* __stdcall sub_44A450_2(void*, const char*);
extern "C" void* __stdcall sub_44A450_3(void*, const char*);

extern void* g_802470;

bool LDrawCommand::writeToStream(void* stream)
{
    int v = sub_46D080(*(int*)((char*)this + 0xc));
    void* p = sub_44A450(stream, (const char*)0x81cae4);
    void* q = sub_44A450_2(p, (const char*)0x81cb08);
    (void)q;
    void* r = sub_44A450_3(stream, (const char*)0x81cbcc);
    (void)r;
    return true;
}
