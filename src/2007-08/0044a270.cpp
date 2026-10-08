// from server: 48% by colin
// roc 2007-08 0044a270  unit: CRobloxModule  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a270
//
// 0044a270  8b542404             mov edx, dword ptr [esp + 4]
// 0044a274  8b4204               mov eax, dword ptr [edx + 4]
// 0044a277  83ec08               sub esp, 8
// 0044a27a  8bcc                 mov ecx, esp
// 0044a27c  8901                 mov dword ptr [ecx], eax
// 0044a27e  8b4208               mov eax, dword ptr [edx + 8]
// 0044a281  85c0                 test eax, eax
// 0044a283  8964240c             mov dword ptr [esp + 0xc], esp
// 0044a287  894104               mov dword ptr [ecx + 4], eax
// 0044a28a  740c                 je 0x44a298
// 0044a28c  83c004               add eax, 4
// 0044a28f  b901000000           mov ecx, 1
// 0044a294  f00fc108             lock xadd dword ptr [eax], ecx
// 0044a298  8b12                 mov edx, dword ptr [edx]
// 0044a29a  ffd2                 call edx
// 0044a29c  83c408               add esp, 8
// 0044a29f  c3                   ret 
// 0044a2a0  e97bfdffff           jmp 0x44a020

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxModule
{
    void m(void*);
};

void CRobloxModule::m(void* arg)
{
    struct Ref
    {
        void* p0;
        void* p1;
    };
    Ref* r = (Ref*)arg;
    Ref local;
    local.p0 = r->p0;
    local.p1 = r->p1;
    if (local.p1 != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)local.p1 + 4), 1);
    }
    void (*fn)(Ref*) = *(void (**)(Ref*))r->p0;
    fn(&local);
}
