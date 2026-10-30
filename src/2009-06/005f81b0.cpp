// roc 2009-06 005f81b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f81b0
//
// 005f81b0  56                   push esi
// 005f81b1  57                   push edi
// 005f81b2  e899ffffff           call 0x5f8150
// 005f81b7  8bf0                 mov esi, eax
// 005f81b9  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005f81bc  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005f81bf  7606                 jbe 0x5f81c7
// 005f81c1  ff15ace98900         call dword ptr [0x89e9ac]
// 005f81c7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005f81cb  8b36                 mov esi, dword ptr [esi]
// 005f81cd  897804               mov dword ptr [eax + 4], edi
// 005f81d0  5f                   pop edi
// 005f81d1  8930                 mov dword ptr [eax], esi
// 005f81d3  5e                   pop esi
// 005f81d4  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPAUResult@@RAU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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