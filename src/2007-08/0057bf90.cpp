// from server: 86% by colin
// roc 2007-08 0057bf90  unit: seg_00570000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bf90
//
// 0057bf90  8b442404             mov eax, dword ptr [esp + 4]
// 0057bf94  8b4804               mov ecx, dword ptr [eax + 4]
// 0057bf97  894c2404             mov dword ptr [esp + 4], ecx
// 0057bf9b  8b10                 mov edx, dword ptr [eax]
// 0057bf9d  ffe2                 jmp edx

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD

struct ArrowTool
{
    void invoke(void* arg);
};

void ArrowTool::invoke(void* arg)
{
    struct Thunk
    {
        void (__stdcall *fn)(void*);
        void* ctx;
    };
    Thunk* t = (Thunk*)arg;
    t->fn(t->ctx);
}
