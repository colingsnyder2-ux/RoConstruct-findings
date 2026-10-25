// from server: 100% by king_originala
// roc 2008-06 005c42d0  unit: RBX::Profiling::Profiler  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c42d0
//
// 005c42d0  a194949700           mov eax, dword ptr [0x979494]
// 005c42d5  83ec08               sub esp, 8
// 005c42d8  56                   push esi
// 005c42d9  8bf1                 mov esi, ecx
// 005c42db  85c0                 test eax, eax
// 005c42dd  744d                 je 0x5c432c
// 005c42df  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c42e2  51                   push ecx
// 005c42e3  50                   push eax
// 005c42e4  ff15a4228000         call dword ptr [0x8022a4]
// 005c42ea  e82141f4ff           call 0x508410
// 005c42ef  dc6610               fsub qword ptr [esi + 0x10]
// 005c42f2  0fb65608             movzx edx, byte ptr [esi + 8]
// 005c42f6  8b0e                 mov ecx, dword ptr [esi]
// 005c42f8  83ec08               sub esp, 8
// 005c42fb  dd54240c             fst qword ptr [esp + 0xc]
// 005c42ff  dd1c24               fstp qword ptr [esp]
// 005c4302  52                   push edx
// 005c4303  e878fdffff           call 0x5c4080
// 005c4308  8b4604               mov eax, dword ptr [esi + 4]
// 005c430b  85c0                 test eax, eax
// 005c430d  741d                 je 0x5c432c
// 005c430f  8b00                 mov eax, dword ptr [eax]
// 005c4311  8b0e                 mov ecx, dword ptr [esi]
// 005c4313  3bc1                 cmp eax, ecx
// 005c4315  7415                 je 0x5c432c
// 005c4317  3b8140c00000         cmp eax, dword ptr [ecx + 0xc040]
// 005c431d  740d                 je 0x5c432c
// 005c431f  8b7604               mov esi, dword ptr [esi + 4]
// 005c4322  dd4610               fld qword ptr [esi + 0x10]
// 005c4325  dc442404             fadd qword ptr [esp + 4]
// 005c4329  dd5e10               fstp qword ptr [esi + 0x10]
// 005c432c  5e                   pop esi
// 005c432d  83c408               add esp, 8
// 005c4330  c3                   ret 

typedef unsigned long DWORD;

extern DWORD tlsIndex;
extern "C" int (__stdcall *TlsSetValue)(DWORD, void *);
extern double __cdecl currentTime();

struct Profiler
{
    char padding[0xC040];
    Profiler *excluded;

    void __thiscall record(unsigned char category, double elapsed);
};

struct Scope
{
    Profiler *profiler;
    Scope *parent;
    unsigned char category;
    char padding[7];
    double start;

    void __thiscall finish();
};

void __thiscall Scope::finish()
{
    if (tlsIndex)
    {
        TlsSetValue(tlsIndex, parent);
        double elapsed = currentTime() - start;
        profiler->record(category, elapsed);

        if (parent &&
            parent->profiler != profiler &&
            parent->profiler != profiler->excluded)
        {
            parent->start += elapsed;
        }
    }
}
