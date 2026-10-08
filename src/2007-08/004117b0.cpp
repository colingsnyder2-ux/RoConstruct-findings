// from server: 92% by colin
// roc 2007-08 004117b0  unit: boost::bad_any_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004117b0
//
// 004117b0  56                   push esi
// 004117b1  8b742408             mov esi, dword ptr [esp + 8]
// 004117b5  85f6                 test esi, esi
// 004117b7  742c                 je 0x4117e5
// 004117b9  8b0e                 mov ecx, dword ptr [esi]
// 004117bb  85c9                 test ecx, ecx
// 004117bd  7409                 je 0x4117c8
// 004117bf  8b01                 mov eax, dword ptr [ecx]
// 004117c1  8b5004               mov edx, dword ptr [eax + 4]
// 004117c4  ffd2                 call edx
// 004117c6  eb05                 jmp 0x4117cd
// 004117c8  b8c8278800           mov eax, 0x8827c8
// 004117cd  6844288800           push 0x882844
// 004117d2  8bc8                 mov ecx, eax
// 004117d4  ff1508e77700         call dword ptr [0x77e708]
// 004117da  84c0                 test al, al
// 004117dc  7407                 je 0x4117e5
// 004117de  8b06                 mov eax, dword ptr [esi]
// 004117e0  83c004               add eax, 4
// 004117e3  5e                   pop esi
// 004117e4  c3                   ret 
// 004117e5  33c0                 xor eax, eax
// 004117e7  5e                   pop esi
// 004117e8  c3                   ret 

struct type_info
{
    bool operator==(const type_info&) const;
};

struct any_holder
{
    void* vtable;
};

extern "C" void* __stdcall get_vtable_of(void*);
extern "C" bool __stdcall compare_type_info(const type_info*, const type_info*);

extern type_info type_info_8827c8;
extern type_info type_info_882844;

void* func_004117b0(any_holder* p)
{
    if (p == 0)
        return 0;

    type_info* ti;
    if (p->vtable != 0)
    {
        void** vtbl = *(void***)p->vtable;
        typedef type_info* (__thiscall *get_ti_fn)(void*);
        get_ti_fn fn = (get_ti_fn)vtbl[1];
        ti = fn(p->vtable);
    }
    else
    {
        ti = &type_info_8827c8;
    }

    if (ti->operator==(type_info_882844))
    {
        return (char*)p->vtable + 4;
    }
    return 0;
}
