// roc 2009-12 006621c0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006621c0
//
// 006621c0  56                   push esi
// 006621c1  57                   push edi
// 006621c2  e899ffffff           call 0x662160
// 006621c7  8bf0                 mov esi, eax
// 006621c9  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006621cc  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 006621cf  7606                 jbe 0x6621d7
// 006621d1  ff1560b79800         call dword ptr [0x98b760]
// 006621d7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006621db  8b36                 mov esi, dword ptr [esi]
// 006621dd  897804               mov dword ptr [eax + 4], edi
// 006621e0  5f                   pop edi
// 006621e1  8930                 mov dword ptr [eax], esi
// 006621e3  5e                   pop esi
// 006621e4  c3                   ret 
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