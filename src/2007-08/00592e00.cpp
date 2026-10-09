// from server: 44% by colin
// roc 2007-08 00592e00  unit: RBX::VVisit::?$BoundFuncDesc  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592e00
//
// 00592e00  89642458             mov dword ptr [esp + 0x58], esp
// 00592e04  50                   push eax
// 00592e05  ff159ce67700         call dword ptr [0x77e69c]
// 00592e0b  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00592e0e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00592e11  03cf                 add ecx, edi
// 00592e13  ffd0                 call eax
// 00592e15  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00592e19  85c9                 test ecx, ecx
// 00592e1b  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00592e20  7408                 je 0x592e2a
// 00592e22  8b11                 mov edx, dword ptr [ecx]
// 00592e24  8b02                 mov eax, dword ptr [edx]
// 00592e26  6a01                 push 1
// 00592e28  ffd0                 call eax
// 00592e2a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00592e2e  85c9                 test ecx, ecx
// 00592e30  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00592e38  7408                 je 0x592e42
// 00592e3a  8b11                 mov edx, dword ptr [ecx]
// 00592e3c  8b02                 mov eax, dword ptr [edx]
// 00592e3e  6a01                 push 1
// 00592e40  ffd0                 call eax
// 00592e42  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00592e46  5f                   pop edi
// 00592e47  64890d00000000       mov dword ptr fs:[0], ecx
// 00592e4e  5e                   pop esi
// 00592e4f  83c428               add esp, 0x28
// 00592e52  c20800               ret 8

struct BoundFuncDesc {
    void invoke(int a, int b);
};

extern "C" void* __stdcall GetCurrentThread(void);

void BoundFuncDesc::invoke(int a, int b)
{
    void* saved = (void*)0;
    void* sp;
    sp = (void*)&sp;
    (void)sp;
    GetCurrentThread();
    void (*fn)(void*) = *(void (**)(void*))((char*)this + 0x28);
    void* arg = *(void**)((char*)this + 0x2c);
    arg = (void*)((char*)arg + (int)&saved);
    fn(arg);
    void* p1 = *(void**)((char*)&a + 0);
    if (p1) {
        void** vt = *(void***)p1;
        void (*f)(void*, int) = (void (*)(void*, int))vt[0];
        f(p1, 1);
    }
    void* p2 = *(void**)((char*)&b + 0);
    if (p2) {
        void** vt = *(void***)p2;
        void (*f)(void*, int) = (void (*)(void*, int))vt[0];
        f(p2, 1);
    }
}
