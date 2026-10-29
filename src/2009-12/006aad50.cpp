// roc 2009-12 006aad50  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006aad50
//
// 006aad50  8b442404             mov eax, dword ptr [esp + 4]
// 006aad54  8bd1                 mov edx, ecx
// 006aad56  85c0                 test eax, eax
// 006aad58  7405                 je 0x6aad5f
// 006aad5a  83c0e4               add eax, -0x1c
// 006aad5d  eb02                 jmp 0x6aad61
// 006aad5f  33c0                 xor eax, eax
// 006aad61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006aad65  8b09                 mov ecx, dword ptr [ecx]
// 006aad67  56                   push esi
// 006aad68  8b7220               mov esi, dword ptr [edx + 0x20]
// 006aad6b  51                   push ecx
// 006aad6c  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 006aad72  8b0c31               mov ecx, dword ptr [ecx + esi]
// 006aad75  034a1c               add ecx, dword ptr [edx + 0x1c]
// 006aad78  8b5218               mov edx, dword ptr [edx + 0x18]
// 006aad7b  8d8c01b4000000       lea ecx, [ecx + eax + 0xb4]
// 006aad82  ffd2                 call edx
// 006aad84  5e                   pop esi
// 006aad85  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEXPAXPAH@Z)

namespace ns_ROCX000006 {
// from server: 100% by atomic.potato
struct S
{
    char pad[0x18];
    void (__thiscall *fn)(void*, int);
    char pad2[0x20 - 0x1c];
    int idx;
    void f(void* a, int* b);
};

void S::f(void* a, int* b)
{
    char* p = (char*)a;
    if (p)
        p -= 0x1c;
    else
        p = 0;
    int v = *b;
    int i = *(int*)((char*)this + 0x20);
    int off = *(int*)(p + 0xb4);
    int c = *(int*)(off + i) + *(int*)((char*)this + 0x1c);
    void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))((char*)this + 0x18);
    fn((char*)p + c + 0xb4, v);
}
}
