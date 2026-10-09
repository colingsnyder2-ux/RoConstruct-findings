// from server: 73% by colin
// roc 2007-08 0063d5c0  unit: CXTPPaintManager  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d5c0
//
// 0063d5c0  83ec10               sub esp, 0x10
// 0063d5c3  56                   push esi
// 0063d5c4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0063d5c8  8bce                 mov ecx, esi
// 0063d5ca  e8b1c7ffff           call 0x639d80
// 0063d5cf  83f804               cmp eax, 4
// 0063d5d2  751d                 jne 0x63d5f1
// 0063d5d4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0063d5da  83b9f400000002       cmp dword ptr [ecx + 0xf4], 2
// 0063d5e1  740e                 je 0x63d5f1
// 0063d5e3  6a01                 push 1
// 0063d5e5  8d442408             lea eax, [esp + 8]
// 0063d5e9  50                   push eax
// 0063d5ea  e891360100           call 0x650c80
// 0063d5ef  eb11                 jmp 0x63d602
// 0063d5f1  8b16                 mov edx, dword ptr [esi]
// 0063d5f3  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0063d5f9  8d44240c             lea eax, [esp + 0xc]
// 0063d5fd  50                   push eax
// 0063d5fe  8bce                 mov ecx, esi
// 0063d600  ffd2                 call edx
// 0063d602  8b10                 mov edx, dword ptr [eax]
// 0063d604  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063d608  8b4004               mov eax, dword ptr [eax + 4]
// 0063d60b  894104               mov dword ptr [ecx + 4], eax
// 0063d60e  8911                 mov dword ptr [ecx], edx
// 0063d610  8bc1                 mov eax, ecx
// 0063d612  5e                   pop esi
// 0063d613  83c410               add esp, 0x10
// 0063d616  c20800               ret 8

struct Result
{
    int a;
    int b;
};

struct Inner
{
    char pad[0xf4];
    int field_f4;
};

struct Outer
{
    char pad[0xfc];
    Inner* field_fc;
};

struct CXTPPaintManager
{
    int method_00639d80();
    Result* method_00650c80(Result* out, int flag);
    Result* method_0063d5c0(Result* out, int arg);
};

Result* CXTPPaintManager::method_0063d5c0(Result* out, int arg)
{
    Result local;
    Result* p;
    if (method_00639d80() == 4)
    {
        Inner* inner = ((Outer*)this)->field_fc;
        if (inner->field_f4 != 2)
        {
            p = method_00650c80(&local, 1);
            *out = *p;
            return out;
        }
    }
    void** vtbl = *(void***)this;
    Result* (__thiscall* fn)(void*, Result*) = (Result* (__thiscall*)(void*, Result*))vtbl[0xcc / 4];
    p = fn(this, &local);
    *out = *p;
    return out;
}
