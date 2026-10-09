// from server: 49% by colin
// roc 2007-08 00581130  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581130
//
// 00581130  8bc1                 mov eax, ecx
// 00581132  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581136  83ec0c               sub esp, 0xc
// 00581139  85c9                 test ecx, ecx
// 0058113b  7405                 je 0x581142
// 0058113d  83c1fc               add ecx, -4
// 00581140  eb02                 jmp 0x581144
// 00581142  33c9                 xor ecx, ecx
// 00581144  56                   push esi
// 00581145  8b7010               mov esi, dword ptr [eax + 0x10]
// 00581148  8d542404             lea edx, [esp + 4]
// 0058114c  52                   push edx
// 0058114d  8b91f8000000         mov edx, dword ptr [ecx + 0xf8]
// 00581153  8b1432               mov edx, dword ptr [edx + esi]
// 00581156  03500c               add edx, dword ptr [eax + 0xc]
// 00581159  8b4008               mov eax, dword ptr [eax + 8]
// 0058115c  8d8c0af8000000       lea ecx, [edx + ecx + 0xf8]
// 00581163  ffd0                 call eax
// 00581165  d900                 fld dword ptr [eax]
// 00581167  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058116b  d919                 fstp dword ptr [ecx]
// 0058116d  5e                   pop esi
// 0058116e  d94004               fld dword ptr [eax + 4]
// 00581171  d95904               fstp dword ptr [ecx + 4]
// 00581174  d94008               fld dword ptr [eax + 8]
// 00581177  8bc1                 mov eax, ecx
// 00581179  d95908               fstp dword ptr [ecx + 8]
// 0058117c  83c40c               add esp, 0xc
// 0058117f  c20800               ret 8

struct GetSetImpl {
    int (__stdcall *get)(void*);
    int (__stdcall *set)(void*);
    int offset;
    int pad;
    int index;
    int (__stdcall *func)(void*, void*);
    int getValue(void* obj, int* out);
};

int GetSetImpl::getValue(void* obj, int* out)
{
    int* p = (int*)obj;
    if (p)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int idx = this->index;
    int* base = (int*)((char*)p + 0xf8);
    int off = *(int*)((char*)p + 0xf8);
    off = *(int*)(off + idx);
    off += this->offset;
    int (__stdcall *f)(void*, void*) = this->func;
    int* addr = (int*)((char*)p + 0xf8 + off);
    int r = f(addr, out);
    *(float*)out = *(float*)r;
    *(float*)(out + 1) = *(float*)(r + 4);
    *(float*)(out + 2) = *(float*)(r + 8);
    return (int)out;
}
