// from server: 100% by colin
// roc 2007-08 00587250  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587250
//
// 00587250  56                   push esi
// 00587251  57                   push edi
// 00587252  e869ffffff           call 0x5871c0
// 00587257  8bf0                 mov esi, eax
// 00587259  8b7e08               mov edi, dword ptr [esi + 8]
// 0058725c  397e04               cmp dword ptr [esi + 4], edi
// 0058725f  7606                 jbe 0x587267
// 00587261  ff15d8e67700         call dword ptr [0x77e6d8]
// 00587267  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058726b  897804               mov dword ptr [eax + 4], edi
// 0058726e  5f                   pop edi
// 0058726f  8930                 mov dword ptr [eax], esi
// 00587271  5e                   pop esi
// 00587272  c3                   ret 

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

Result* func_00587250(Result* out)
{
    Inner* p = getInner();
    unsigned int e = p->end;
    if (p->begin > e)
        invalid_parameter_noinfo();
    out->second = e;
    out->first = p;
    return out;
}
