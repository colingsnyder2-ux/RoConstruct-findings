// from server: 55% by colin
// roc 2007-08 005e6330  unit: RBX::P8Flag::?$GetSetImpl  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6330
//
// 005e6330  8bc1                 mov eax, ecx
// 005e6332  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e6336  85c9                 test ecx, ecx
// 005e6338  7405                 je 0x5e633f
// 005e633a  83c1fc               add ecx, -4
// 005e633d  eb02                 jmp 0x5e6341
// 005e633f  33c9                 xor ecx, ecx
// 005e6341  56                   push esi
// 005e6342  8b7010               mov esi, dword ptr [eax + 0x10]
// 005e6345  8d54240c             lea edx, [esp + 0xc]
// 005e6349  52                   push edx
// 005e634a  8b9168010000         mov edx, dword ptr [ecx + 0x168]
// 005e6350  8b1432               mov edx, dword ptr [edx + esi]
// 005e6353  03500c               add edx, dword ptr [eax + 0xc]
// 005e6356  8b4008               mov eax, dword ptr [eax + 8]
// 005e6359  8d8c0a68010000       lea ecx, [edx + ecx + 0x168]
// 005e6360  ffd0                 call eax
// 005e6362  8b08                 mov ecx, dword ptr [eax]
// 005e6364  8b442408             mov eax, dword ptr [esp + 8]
// 005e6368  8908                 mov dword ptr [eax], ecx
// 005e636a  5e                   pop esi
// 005e636b  c20800               ret 8

struct GetSetImpl {
    char pad0[8];
    int (__stdcall *get)(void*, int*);
    char pad1[4];
    int offset;
    int (__stdcall *set)(void*, int);
    int f(int* out, int obj);
};

int GetSetImpl::f(int* out, int obj)
{
    int* p = (int*)obj;
    if (p)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int idx = *(int*)((char*)this + 0x10);
    int* vt = *(int**)((char*)p + 0x168);
    int off = vt[idx];
    off += *(int*)((char*)this + 0xc);
    int (__stdcall *fn)(void*, int*) = *(int (__stdcall **)(void*, int*))((char*)this + 8);
    int* base = (int*)((char*)p + 0x168);
    int* arg = (int*)((char*)base + off);
    int r = fn(arg, out);
    *out = *(int*)r;
    return (int)out;
}
