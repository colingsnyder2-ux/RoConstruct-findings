// from server: 92% by colin
// roc 2007-08 00411730  unit: boost::bad_any_cast  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411730
//
// 00411730  56                   push esi
// 00411731  8b742408             mov esi, dword ptr [esp + 8]
// 00411735  85f6                 test esi, esi
// 00411737  742c                 je 0x411765
// 00411739  8b0e                 mov ecx, dword ptr [esi]
// 0041173b  85c9                 test ecx, ecx
// 0041173d  7409                 je 0x411748
// 0041173f  8b01                 mov eax, dword ptr [ecx]
// 00411741  8b5004               mov edx, dword ptr [eax + 4]
// 00411744  ffd2                 call edx
// 00411746  eb05                 jmp 0x41174d
// 00411748  b8c8278800           mov eax, 0x8827c8
// 0041174d  68e0278800           push 0x8827e0
// 00411752  8bc8                 mov ecx, eax
// 00411754  ff1508e77700         call dword ptr [0x77e708]
// 0041175a  84c0                 test al, al
// 0041175c  7407                 je 0x411765
// 0041175e  8b06                 mov eax, dword ptr [esi]
// 00411760  83c004               add eax, 4
// 00411763  5e                   pop esi
// 00411764  c3                   ret 
// 00411765  33c0                 xor eax, eax
// 00411767  5e                   pop esi
// 00411768  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct VTable {
    void* unknown0;
    void* unknown1;
};

extern "C" {
    bool __stdcall compare_type_info(const type_info*, const type_info*);
}

extern type_info type_info_8827c8;
extern type_info type_info_8827e0;

void* func_00411730(VTable** obj)
{
    if (obj == 0)
        return 0;

    type_info* ti;
    VTable* vt = *obj;
    if (vt != 0) {
        void** vtbl = *(void***)vt;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vtbl[1];
        ti = (type_info*)fn(vt);
    } else {
        ti = &type_info_8827c8;
    }

    if (ti->operator==(type_info_8827e0)) {
        return (char*)*obj + 4;
    }

    return 0;
}
