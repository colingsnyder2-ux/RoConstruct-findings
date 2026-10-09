// from server: 91% by colin
// roc 2007-08 0041cf10  unit: InsertDecal  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041cf10
//
// 0041cf10  56                   push esi
// 0041cf11  57                   push edi
// 0041cf12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041cf16  8bf1                 mov esi, ecx
// 0041cf18  56                   push esi
// 0041cf19  8bcf                 mov ecx, edi
// 0041cf1b  e8a0131200           call 0x53e2c0
// 0041cf20  84c0                 test al, al
// 0041cf22  7407                 je 0x41cf2b
// 0041cf24  5f                   pop edi
// 0041cf25  32c0                 xor al, al
// 0041cf27  5e                   pop esi
// 0041cf28  c20400               ret 4
// 0041cf2b  39b7bc000000         cmp dword ptr [edi + 0xbc], esi
// 0041cf31  74f1                 je 0x41cf24
// 0041cf33  8b06                 mov eax, dword ptr [esi]
// 0041cf35  8b500c               mov edx, dword ptr [eax + 0xc]
// 0041cf38  57                   push edi
// 0041cf39  8bce                 mov ecx, esi
// 0041cf3b  ffd2                 call edx
// 0041cf3d  84c0                 test al, al
// 0041cf3f  7407                 je 0x41cf48
// 0041cf41  5f                   pop edi
// 0041cf42  b001                 mov al, 1
// 0041cf44  5e                   pop esi
// 0041cf45  c20400               ret 4
// 0041cf48  8b07                 mov eax, dword ptr [edi]
// 0041cf4a  8b5010               mov edx, dword ptr [eax + 0x10]
// 0041cf4d  56                   push esi
// 0041cf4e  8bcf                 mov ecx, edi
// 0041cf50  ffd2                 call edx
// 0041cf52  84c0                 test al, al
// 0041cf54  5f                   pop edi
// 0041cf55  0f95c0               setne al
// 0041cf58  5e                   pop esi
// 0041cf59  c20400               ret 4

struct S_func_0041cf10 {
    bool f(void*);
};

struct S_other {
    virtual bool v0();
    virtual bool v1();
    virtual bool v2();
    virtual bool v3();
    virtual bool v4();
};

extern "C" bool __stdcall G1_func_0053e2c0(void*, void*);

bool S_func_0041cf10::f(void* a)
{
    if (G1_func_0053e2c0(a, this))
        return false;
    if (*(void**)((char*)a + 0xbc) == this)
        return false;
    if (((S_other*)this)->v3())
        return true;
    return ((S_other*)a)->v4();
}
