// from server: 37% by colin
// roc 2007-08 00593f30  unit: RBX::VArrowTool::?$TToolVerb  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593f30
//
// 00593f30  6aff                 push -1
// 00593f32  6888ad7500           push 0x75ad88
// 00593f37  64a100000000         mov eax, dword ptr fs:[0]
// 00593f3d  50                   push eax
// 00593f3e  64892500000000       mov dword ptr fs:[0], esp
// 00593f45  51                   push ecx
// 00593f46  56                   push esi
// 00593f47  8bf1                 mov esi, ecx
// 00593f49  89742404             mov dword ptr [esp + 4], esi
// 00593f4d  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00593f50  85c9                 test ecx, ecx
// 00593f52  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593f5a  7413                 je 0x593f6f
// 00593f5c  8d4108               lea eax, [ecx + 8]
// 00593f5f  83caff               or edx, 0xffffffff
// 00593f62  f00fc110             lock xadd dword ptr [eax], edx
// 00593f66  7507                 jne 0x593f6f
// 00593f68  8b01                 mov eax, dword ptr [ecx]
// 00593f6a  8b5008               mov edx, dword ptr [eax + 8]
// 00593f6d  ffd2                 call edx
// 00593f6f  8bce                 mov ecx, esi
// 00593f71  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00593f79  e8d2fd0400           call 0x5e3d50
// 00593f7e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593f82  5e                   pop esi
// 00593f83  64890d00000000       mov dword ptr fs:[0], ecx
// 00593f8a  83c410               add esp, 0x10
// 00593f8d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VerbContainer;

struct Verb {
    void* vptr;
    VerbContainer* container;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    void destroy();
    void release();
};

void Verb::destroy()
{
    void* p = field28;
    if (p) {
        volatile long* ref = (volatile long*)((char*)p + 8);
        if (_InterlockedExchangeAdd(ref, -1) == 1) {
            void** vt = *(void***)p;
            void (*fn)(void*) = (void (*)(void*))vt[2];
            fn(p);
        }
    }
    release();
}
