// from server: 77% by colin
// roc 2007-08 0065e4e0  unit: CXTPReportControl  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e4e0
//
// 0065e4e0  56                   push esi
// 0065e4e1  8bf1                 mov esi, ecx
// 0065e4e3  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0065e4e9  83f8ff               cmp eax, -1
// 0065e4ec  7527                 jne 0x65e515
// 0065e4ee  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e4f1  e86a4f0700           call 0x6d3460
// 0065e4f6  8bc8                 mov ecx, eax
// 0065e4f8  e803080000           call 0x65ed00
// 0065e4fd  83b81002000000       cmp dword ptr [eax + 0x210], 0
// 0065e504  8bce                 mov ecx, esi
// 0065e506  7406                 je 0x65e50e
// 0065e508  5e                   pop esi
// 0065e509  e9c2ffffff           jmp 0x65e4d0
// 0065e50e  6a00                 push 0
// 0065e510  e88bffffff           call 0x65e4a0
// 0065e515  5e                   pop esi
// 0065e516  c3                   ret 

struct CXTPReportControl {
    void sub_65e4a0(int);
    void sub_65e4d0();
    void sub_65e4e0();
};

extern void* __stdcall sub_6d3460(void*);
extern char* __stdcall sub_65ed00(void*);

void CXTPReportControl::sub_65e4e0()
{
    if (*(int*)((char*)this + 0x94) == -1)
    {
        void* p = sub_6d3460(*(void**)((char*)this + 0x54));
        char* q = sub_65ed00(p);
        if (*(int*)(q + 0x210) != 0)
        {
            sub_65e4d0();
        }
        else
        {
            sub_65e4a0(0);
        }
    }
}
