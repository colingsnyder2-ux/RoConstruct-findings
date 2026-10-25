// from server: 100% by king_originala
// roc 2008-06 004d7320  unit: RBX::RenderBase::SimpleSceneManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7320
//
// 004d7320  8b442404             mov eax, dword ptr [esp + 4]
// 004d7324  56                   push esi
// 004d7325  8b30                 mov esi, dword ptr [eax]
// 004d7327  8b4610               mov eax, dword ptr [esi + 0x10]
// 004d732a  57                   push edi
// 004d732b  33ff                 xor edi, edi
// 004d732d  3bc7                 cmp eax, edi
// 004d732f  7409                 je 0x4d733a
// 004d7331  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d7334  50                   push eax
// 004d7335  e8965f1a00           call 0x67d2d0
// 004d733a  897e0c               mov dword ptr [esi + 0xc], edi
// 004d733d  897e10               mov dword ptr [esi + 0x10], edi
// 004d7340  5f                   pop edi
// 004d7341  5e                   pop esi
// 004d7342  c20800               ret 8

struct Callee
{
    void release(void *);
};

struct State
{
    unsigned char padding[12];
    Callee *first;
    void *second;
};

void __stdcall func_004d7320(State **arg, unsigned int)
{
    State *state = *arg;
    if (state->second != 0)
        state->first->release(state->second);
    state->second = 0;
    state->first = 0;
}
