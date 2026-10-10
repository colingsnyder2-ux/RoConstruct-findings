// from server: 87% by colin
extern "C" void __cdecl sub_005bf700(void*, const char*, const char*);
extern "C" void __cdecl sub_005cb660(void*);

int __cdecl sub_005cb6c0(void* a)
{
    sub_005bf700(a, (const char*)0x7a5c60, (const char*)0x7b9df8);
    sub_005cb660(a);
    return 1;
}
