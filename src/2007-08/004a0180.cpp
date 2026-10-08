// from server: 64% by colin
// roc 2007-08 004a0180  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0180
//
// 004a0180  51                   push ecx
// 004a0181  8bc1                 mov eax, ecx
// 004a0183  8b08                 mov ecx, dword ptr [eax]
// 004a0185  8b4004               mov eax, dword ptr [eax + 4]
// 004a0188  8b11                 mov edx, dword ptr [ecx]
// 004a018a  8b5210               mov edx, dword ptr [edx + 0x10]
// 004a018d  56                   push esi
// 004a018e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a0192  50                   push eax
// 004a0193  56                   push esi
// 004a0194  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004a019c  ffd2                 call edx
// 004a019e  8bc6                 mov eax, esi
// 004a01a0  5e                   pop esi
// 004a01a1  59                   pop ecx
// 004a01a2  c20400               ret 4

struct BoundFuncDesc {
    void* field0;
    void* field4;
    void* invoke(void* arg);
};

void* BoundFuncDesc::invoke(void* arg)
{
    void* p = field0;
    void* q = field4;
    void** vtbl = *(void***)p;
    void* (*fn)(void*, void*) = (void* (*)(void*, void*))vtbl[4];
    *(void**)arg = 0;
    fn(q, arg);
    return arg;
}
