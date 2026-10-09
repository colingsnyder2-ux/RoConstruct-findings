// from server: 48% by colin
// roc 2007-08 00530410  unit: RBX::ModelInstance  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530410
//
// 00530410  83ec78               sub esp, 0x78
// 00530413  56                   push esi
// 00530414  8bf1                 mov esi, ecx
// 00530416  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0053041c  8b4808               mov ecx, dword ptr [eax + 8]
// 0053041f  57                   push edi
// 00530420  8dbc31ec000000       lea edi, [ecx + esi + 0xec]
// 00530427  8d4c2420             lea ecx, [esp + 0x20]
// 0053042b  e8204cf4ff           call 0x475050
// 00530430  8b17                 mov edx, dword ptr [edi]
// 00530432  8b12                 mov edx, dword ptr [edx]
// 00530434  50                   push eax
// 00530435  8d442454             lea eax, [esp + 0x54]
// 00530439  50                   push eax
// 0053043a  8bcf                 mov ecx, edi
// 0053043c  ffd2                 call edx
// 0053043e  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 00530445  50                   push eax
// 00530446  57                   push edi
// 00530447  8d442414             lea eax, [esp + 0x14]
// 0053044b  50                   push eax
// 0053044c  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 00530452  e849faffff           call 0x52fea0
// 00530457  8bc8                 mov ecx, eax
// 00530459  e802c80800           call 0x5bcc60
// 0053045e  8bc7                 mov eax, edi
// 00530460  5f                   pop edi
// 00530461  5e                   pop esi
// 00530462  83c478               add esp, 0x78
// 00530465  c20400               ret 4

struct T_func_00530410 {
    char pad[0xec];
    void* field_ec;
    char pad2[0x1c8 - 0xec - 4];
    void* field_1c8;
    void* m(void* arg);
};

extern "C" void __stdcall func_00475050(void* out);
extern "C" void __stdcall func_0052fea0(void* out, void* a, void* b);
extern "C" void __stdcall func_005bcc60(void* p);

void* T_func_00530410::m(void* arg)
{
    char buf1[0x20];
    char buf2[0x34];
    char buf3[0x14];
    void* p;
    void* q;
    void* r;

    func_00475050(buf1);

    void** vtbl = *(void***)field_ec;
    void* fn = vtbl[0];
    typedef void* (__thiscall *Fn)(void*, void*, void*);
    ((Fn)fn)(field_ec, buf2, buf1);

    func_0052fea0(buf3, arg, buf2);
    func_005bcc60(buf3);
    return arg;
}
