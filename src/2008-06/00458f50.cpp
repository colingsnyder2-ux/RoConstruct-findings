// from server: 100% by king_originala
// roc 2008-06 00458f50  unit: InsertModelFromRobloxVerb  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458f50
//
// 00458f50  56                   push esi
// 00458f51  8bf1                 mov esi, ecx
// 00458f53  e878f40a00           call 0x5083d0
// 00458f58  dd4618               fld qword ptr [esi + 0x18]
// 00458f5b  dc05b8908100         fadd qword ptr [0x8190b8]
// 00458f61  ded9                 fcompp 
// 00458f63  dfe0                 fnstsw ax
// 00458f65  f6c441               test ah, 0x41
// 00458f68  7504                 jne 0x458f6e
// 00458f6a  32c0                 xor al, al
// 00458f6c  5e                   pop esi
// 00458f6d  c3                   ret 
// 00458f6e  8b4610               mov eax, dword ptr [esi + 0x10]
// 00458f71  6a01                 push 1
// 00458f73  50                   push eax
// 00458f74  e8e7ce0300           call 0x495e60
// 00458f79  83c408               add esp, 8
// 00458f7c  33c9                 xor ecx, ecx
// 00458f7e  84c0                 test al, al
// 00458f80  0f94c1               sete cl
// 00458f83  8ac1                 mov al, cl
// 00458f85  5e                   pop esi
// 00458f86  c3                   ret 

extern "C" bool __cdecl G1_func_00495e60(void*, int);
extern "C" double __cdecl G2_func_005083d0();

extern double g_8190b8;

struct InsertModelFromRobloxVerb
{
    char pad[0x10];
    void* field10;
    char pad2[0x4];
    double field18;

    bool f();
};

bool InsertModelFromRobloxVerb::f()
{
    double now = G2_func_005083d0();
    if (this->field18 + g_8190b8 > now)
        return false;

    return !G1_func_00495e60(this->field10, 1);
}
