// from server: 59% by colin
// roc 2007-08 0065e520  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e520
//
// 0065e520  56                   push esi
// 0065e521  8bf1                 mov esi, ecx
// 0065e523  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0065e529  83f8ff               cmp eax, -1
// 0065e52c  7527                 jne 0x65e555
// 0065e52e  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e531  e82a4f0700           call 0x6d3460
// 0065e536  8bc8                 mov ecx, eax
// 0065e538  e8c3070000           call 0x65ed00
// 0065e53d  83b81002000000       cmp dword ptr [eax + 0x210], 0
// 0065e544  8bce                 mov ecx, esi
// 0065e546  7406                 je 0x65e54e
// 0065e548  5e                   pop esi
// 0065e549  e982ffffff           jmp 0x65e4d0
// 0065e54e  6a00                 push 0
// 0065e550  e84bffffff           call 0x65e4a0
// 0065e555  5e                   pop esi
// 0065e556  c3                   ret 

struct CXTPReportControl {
    void func_0065e4d0();
    void func_0065e4a0(int);
    int field_0x98;
    int field_0x54;

    void func_0065e520();
};

struct Helper_006d3460 {
    int get();
};

struct Helper_0065ed00 {
    int get();
};

extern Helper_006d3460* func_006d3460(int);
extern Helper_0065ed00* func_0065ed00(int);

void CXTPReportControl::func_0065e520()
{
    if (field_0x98 == -1)
    {
        Helper_006d3460* h1 = func_006d3460(field_0x54);
        Helper_0065ed00* h2 = func_0065ed00(h1->get());
        if (*(int*)((char*)h2 + 0x210) != 0)
        {
            func_0065e4d0();
        }
        else
        {
            func_0065e4a0(0);
        }
    }
}
