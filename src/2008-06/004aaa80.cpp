// from server: 100% by king_originala
// roc 2008-06 004aaa80  unit: VCRenderSettings::?$EnumPropDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aaa80
//
// 004aaa80  8b542404             mov edx, dword ptr [esp + 4]
// 004aaa84  56                   push esi
// 004aaa85  8bf1                 mov esi, ecx
// 004aaa87  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 004aaa8a  8b01                 mov eax, dword ptr [ecx]
// 004aaa8c  8b4008               mov eax, dword ptr [eax + 8]
// 004aaa8f  57                   push edi
// 004aaa90  52                   push edx
// 004aaa91  ffd0                 call eax
// 004aaa93  8b7620               mov esi, dword ptr [esi + 0x20]
// 004aaa96  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 004aaa9c  2b8edc000000         sub ecx, dword ptr [esi + 0xdc]
// 004aaaa2  8bf8                 mov edi, eax
// 004aaaa4  c1f902               sar ecx, 2
// 004aaaa7  3bf9                 cmp edi, ecx
// 004aaaa9  7327                 jae 0x4aaad2
// 004aaaab  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 004aaab1  2b96dc000000         sub edx, dword ptr [esi + 0xdc]
// 004aaab7  c1fa02               sar edx, 2
// 004aaaba  3bfa                 cmp edi, edx
// 004aaabc  7206                 jb 0x4aaac4
// 004aaabe  ff1590288000         call dword ptr [0x802890]
// 004aaac4  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 004aaaca  8b04b8               mov eax, dword ptr [eax + edi*4]
// 004aaacd  5f                   pop edi
// 004aaace  5e                   pop esi
// 004aaacf  c20400               ret 4
// 004aaad2  5f                   pop edi
// 004aaad3  83c8ff               or eax, 0xffffffff
// 004aaad6  5e                   pop esi
// 004aaad7  c20400               ret 4

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Getter {
    void** vtable;
};

struct Values {
    char padding[0xdc];
    int* begin;
    int* volatile end;
};

struct EnumPropDescriptor {
    char padding[0x1c];
    Getter* getter;
    Values* values;

    int convert(void* argument);
};

int EnumPropDescriptor::convert(void* argument)
{
    unsigned int index =
        reinterpret_cast<unsigned int (__thiscall*)(Getter*, void*)>(
            getter->vtable[2])(getter, argument);

    Values* table = values;
    if (index < static_cast<unsigned int>(table->end - table->begin)) {
        if (index >= static_cast<unsigned int>(table->end - table->begin))
            _invalid_parameter_noinfo();

        return table->begin[index];
    }

    return -1;
}
