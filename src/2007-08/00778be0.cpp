// from server: 82% by colin
extern "C" void __cdecl sub_725520(const char*, const char*);
extern "C" void* __cdecl sub_4CD600();
extern "C" void* __cdecl sub_407410(void**);
extern "C" void __fastcall sub_407220(void*);

extern "C" void __cdecl sub_778BE0();

void __cdecl sub_778BE0()
{
    *(unsigned int*)0x896C44 = 0x79F068;
    sub_725520((const char*)0x8BF9D8, (const char*)0x4CD760);
    void* p = sub_4CD600();
    void* q = sub_407410(&p);
    sub_407220(q);
}
