// from server: 100% by king_originala
// roc 2008-06 0056bff0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056bff0
//
// 0056bff0  56                   push esi
// 0056bff1  57                   push edi
// 0056bff2  e899ffffff           call 0x56bf90
// 0056bff7  8bf0                 mov esi, eax
// 0056bff9  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0056bffc  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0056bfff  7606                 jbe 0x56c007
// 0056c001  ff1590288000         call dword ptr [0x802890]
// 0056c007  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056c00b  8b36                 mov esi, dword ptr [esi]
// 0056c00d  897804               mov dword ptr [eax + 4], edi
// 0056c010  5f                   pop edi
// 0056c011  8930                 mov dword ptr [eax], esi
// 0056c013  5e                   pop esi
// 0056c014  c3                   ret 

struct State {
    unsigned first;
    unsigned reserved[2];
    unsigned current;
    unsigned limit;
};

struct Result {
    unsigned first;
    unsigned current;
};

extern State* __cdecl getState();
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

Result* __cdecl f(Result* volatile result)
{
    State* state = getState();
    unsigned current = state->current;
    if (current > state->limit)
        _invalid_parameter_noinfo();

    Result* output = result;
    unsigned first = state->first;
    output->current = current;
    output->first = first;
    return output;
}
