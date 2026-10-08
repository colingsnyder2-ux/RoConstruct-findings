// from server: 72% by colin
// roc 2007-08 004a1ae0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1ae0
//
// 004a1ae0  53                   push ebx
// 004a1ae1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004a1ae5  55                   push ebp
// 004a1ae6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004a1aea  56                   push esi
// 004a1aeb  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a1aef  57                   push edi
// 004a1af0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004a1af4  3bf7                 cmp esi, edi
// 004a1af6  740e                 je 0x4a1b06
// 004a1af8  53                   push ebx
// 004a1af9  56                   push esi
// 004a1afa  ffd5                 call ebp
// 004a1afc  83c60c               add esi, 0xc
// 004a1aff  83c408               add esp, 8
// 004a1b02  3bf7                 cmp esi, edi
// 004a1b04  75f2                 jne 0x4a1af8
// 004a1b06  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a1b0a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004a1b0e  5f                   pop edi
// 004a1b0f  8928                 mov dword ptr [eax], ebp
// 004a1b11  5e                   pop esi
// 004a1b12  894804               mov dword ptr [eax + 4], ecx
// 004a1b15  5d                   pop ebp
// 004a1b16  895808               mov dword ptr [eax + 8], ebx
// 004a1b19  5b                   pop ebx
// 004a1b1a  c3                   ret 

struct BoundFuncDesc
{
    char pad[8];
    void* function;
    void* name;
    void* security;
    void* attributes;
    void* result;
};

struct Result
{
    void* a;
    void* b;
    void* c;
};

Result* __fastcall func(BoundFuncDesc* self, void* edx, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5)
{
    void* start = arg1;
    void* end = arg2;
    void* fn = arg3;
    void* extra = arg4;
    Result* out = (Result*)arg5;

    while (start != end)
    {
        ((void (__stdcall*)(void*, void*))fn)(start, extra);
        start = (char*)start + 12;
    }

    out->a = fn;
    out->b = extra;
    out->c = arg5;
    return out;
}
