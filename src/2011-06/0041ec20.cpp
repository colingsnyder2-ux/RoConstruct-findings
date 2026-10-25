// from server: 73% by atomic.potato
// roc 2011-06 0041ec20  unit: RBX::DS::CVideoStreamFilter  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0041ec20
//
// 0041ec20  8b442404             mov eax, dword ptr [esp + 4]
// 0041ec24  8b40f8               mov eax, dword ptr [eax - 8]
// 0041ec27  8b08                 mov ecx, dword ptr [eax]
// 0041ec29  89442404             mov dword ptr [esp + 4], eax
// 0041ec2d  8b5104               mov edx, dword ptr [ecx + 4]
// 0041ec30  ffe2                 jmp edx

struct CVideoStreamFilter
{
};

void __cdecl f(void* p)
{
    struct V
    {
        void (*g)();
    };

    V* q = *(V**)((char*)p - 8);
    void (*g)() = *(void (**)())((char*)q + 4);
    g();
}
