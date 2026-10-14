// from server: 100% by colin
// roc 2008-06 00573ac0  unit: RBX::PercentPanel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573ac0
//
// 00573ac0  56                   push esi
// 00573ac1  8bb108010000         mov esi, dword ptr [ecx + 0x108]
// 00573ac7  8b4610               mov eax, dword ptr [esi + 0x10]
// 00573aca  2b460c               sub eax, dword ptr [esi + 0xc]
// 00573acd  57                   push edi
// 00573ace  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00573ad2  c1f803               sar eax, 3
// 00573ad5  3bf8                 cmp edi, eax
// 00573ad7  7206                 jb 0x573adf
// 00573ad9  ff1590288000         call dword ptr [0x802890]
// 00573adf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00573ae2  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 00573ae5  6a00                 push 0
// 00573ae7  68d8b89200           push 0x92b8d8
// 00573aec  687c909200           push 0x92907c
// 00573af1  6a00                 push 0
// 00573af3  50                   push eax
// 00573af4  e8cddc1200           call 0x6a17c6
// 00573af9  83c414               add esp, 0x14
// 00573afc  5f                   pop edi
// 00573afd  5e                   pop esi
// 00573afe  c20400               ret 4

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

extern char instanceType[];
extern char guiItemType[];

struct Entry {
    void* object;
    void* owner;
};

struct Entries {
    char padding[0x0c];
    Entry* begin;
    Entry* end;
};

struct PercentPanel {
    char padding[0x108];
    Entries* entries;

    void* getItem(unsigned int index);
};

void* PercentPanel::getItem(unsigned int index)
{
    Entries* list = entries;
    if (index >= static_cast<unsigned int>(list->end - list->begin))
        _invalid_parameter_noinfo();

    void* object = list->begin[index].object;
    return __RTDynamicCast(object, 0,
                           instanceType, guiItemType, 0);
}
