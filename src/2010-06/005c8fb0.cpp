// roc 2010-06 005c8fb0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c8fb0
//
// 005c8fb0  56                   push esi
// 005c8fb1  57                   push edi
// 005c8fb2  e899ffffff           call 0x5c8f50
// 005c8fb7  8bf0                 mov esi, eax
// 005c8fb9  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005c8fbc  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005c8fbf  7606                 jbe 0x5c8fc7
// 005c8fc1  ff150ca99e00         call dword ptr [0x9ea90c]
// 005c8fc7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c8fcb  8b36                 mov esi, dword ptr [esi]
// 005c8fcd  897804               mov dword ptr [eax + 4], edi
// 005c8fd0  5f                   pop edi
// 005c8fd1  8930                 mov dword ptr [eax], esi
// 005c8fd3  5e                   pop esi
// 005c8fd4  c3                   ret 
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