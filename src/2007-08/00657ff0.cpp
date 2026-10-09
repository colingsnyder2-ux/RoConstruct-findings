// from server: 67% by colin
// roc 2007-08 00657ff0  unit: CXTPReportControl  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657ff0
//
// 00657ff0  56                   push esi
// 00657ff1  8bf1                 mov esi, ecx
// 00657ff3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00657ff6  57                   push edi
// 00657ff7  8b3df8eb7700         mov edi, dword ptr [0x77ebf8]
// 00657ffd  50                   push eax
// 00657ffe  ffd7                 call edi
// 00658000  50                   push eax
// 00658001  e8ba81fdff           call 0x6301c0
// 00658006  50                   push eax
// 00658007  e81485fdff           call 0x630520
// 0065800c  50                   push eax
// 0065800d  e8f081fdff           call 0x630202
// 00658012  83c408               add esp, 8
// 00658015  85c0                 test eax, eax
// 00658017  7417                 je 0x658030
// 00658019  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0065801c  51                   push ecx
// 0065801d  ffd7                 call edi
// 0065801f  50                   push eax
// 00658020  e89b81fdff           call 0x6301c0
// 00658025  8b10                 mov edx, dword ptr [eax]
// 00658027  5f                   pop edi
// 00658028  5e                   pop esi
// 00658029  8bc8                 mov ecx, eax
// 0065802b  8b5278               mov edx, dword ptr [edx + 0x78]
// 0065802e  ffe2                 jmp edx
// 00658030  5f                   pop edi
// 00658031  33c0                 xor eax, eax
// 00658033  5e                   pop esi
// 00658034  c20400               ret 4

struct CXTPReportControl {
    void func_00657ff0(int);
};

extern "C" void* __stdcall GetParent(void*);
extern "C" void* __stdcall func_006301c0(void*);
extern "C" void* __stdcall func_00630520(void*);
extern "C" void* __stdcall func_00630202(void*, void*);

void CXTPReportControl::func_00657ff0(int arg)
{
    void* p = GetParent(*(void**)((char*)this + 0x20));
    void* q = func_006301c0(p);
    void* r = func_00630520(q);
    if (func_00630202(r, (void*)arg) != 0)
    {
        void* s = GetParent(*(void**)((char*)this + 0x20));
        void* t = func_006301c0(s);
        void** vt = *(void***)t;
        void (*fn)(void*) = (void (*)(void*))vt[0x78 / 4];
        fn(t);
    }
}
