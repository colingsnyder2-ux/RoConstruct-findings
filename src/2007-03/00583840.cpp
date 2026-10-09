// roc 2007-03 00583840  unit: seg_00580000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00583840
//
// 00583840  56                   push esi
// 00583841  57                   push edi
// 00583842  e869ffffff           call 0x5837b0
// 00583847  8bf0                 mov esi, eax
// 00583849  8b7e08               mov edi, dword ptr [esi + 8]
// 0058384c  397e04               cmp dword ptr [esi + 4], edi
// 0058384f  7606                 jbe 0x583857
// 00583851  ff1544e97700         call dword ptr [0x77e944]
// 00583857  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058385b  897804               mov dword ptr [eax + 4], edi
// 0058385e  5f                   pop edi
// 0058385f  8930                 mov dword ptr [eax], esi
// 00583861  5e                   pop esi
// 00583862  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000002@ns_ROCX000002@@YAPAUResult@1@PAU21@@Z)

namespace ns_ROCX000002 {
struct Inner {
    char pad[4];
    unsigned int begin;
    unsigned int end;
};

struct Result {
    Inner* first;
    unsigned int second;
};

extern Inner* getInner();

extern "C" void (__stdcall *invalid_parameter_noinfo)();

Result* fn_ROCX000002(Result* out)
{
    Inner* p = getInner();
    unsigned int e = p->end;
    if (p->begin > e)
        invalid_parameter_noinfo();
    out->second = e;
    out->first = p;
    return out;
}
}
