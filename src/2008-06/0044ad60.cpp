// from server: 87% by colin
// from server: 77% by king_originala
// roc 2008-06 0044ad60  unit: CRobloxApp  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ad60
//
// 0044ad60  6aff                 push -1
// 0044ad62  6868917d00           push 0x7d9168
// 0044ad67  64a100000000         mov eax, dword ptr fs:[0]
// 0044ad6d  50                   push eax
// 0044ad6e  64892500000000       mov dword ptr fs:[0], esp
// 0044ad75  83ec08               sub esp, 8
// 0044ad78  57                   push edi
// 0044ad79  8d442404             lea eax, [esp + 4]
// 0044ad7d  50                   push eax
// 0044ad7e  8bf9                 mov edi, ecx
// 0044ad80  e89be81100           call 0x569620
// 0044ad85  8b00                 mov eax, dword ptr [eax]
// 0044ad87  6824698100           push 0x816924
// 0044ad8c  6a01                 push 1
// 0044ad8e  50                   push eax
// 0044ad8f  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0044ad97  e804e61100           call 0x5693a0
// 0044ad9c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044ada0  83c410               add esp, 0x10
// 0044ada3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0044adab  85c0                 test eax, eax
// 0044adad  742e                 je 0x44addd
// 0044adaf  56                   push esi
// 0044adb0  8bf0                 mov esi, eax
// 0044adb2  83c004               add eax, 4
// 0044adb5  83c9ff               or ecx, 0xffffffff
// 0044adb8  f00fc108             lock xadd dword ptr [eax], ecx
// 0044adbc  751e                 jne 0x44addc
// 0044adbe  8b16                 mov edx, dword ptr [esi]
// 0044adc0  8b4204               mov eax, dword ptr [edx + 4]
// 0044adc3  8bce                 mov ecx, esi
// 0044adc5  ffd0                 call eax
// 0044adc7  8d4e08               lea ecx, [esi + 8]
// 0044adca  83caff               or edx, 0xffffffff
// 0044adcd  f00fc111             lock xadd dword ptr [ecx], edx
// 0044add1  7509                 jne 0x44addc
// 0044add3  8b06                 mov eax, dword ptr [esi]
// 0044add5  8b5008               mov edx, dword ptr [eax + 8]
// 0044add8  8bce                 mov ecx, esi
// 0044adda  ffd2                 call edx
// 0044addc  5e                   pop esi
// 0044addd  6840f39700           push 0x97f340
// 0044ade2  e829f2ffff           call 0x44a010
// 0044ade7  8bcf                 mov ecx, edi
// 0044ade9  e85c642500           call 0x6a124a
// 0044adee  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044adf2  5f                   pop edi
// 0044adf3  64890d00000000       mov dword ptr fs:[0], ecx
// 0044adfa  83c414               add esp, 0x14
// 0044adfd  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle
{
    void* object;
    void* get() const { return object; }
    Control* control;
    ~Handle();
};

inline Handle::~Handle()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

extern Handle __cdecl acquire();
extern void __cdecl report(void*, int, const char*);
extern int __stdcall cleanup(void*);
extern const char exitMessage[];
extern char cleanupObject;

struct CRobloxApp
{
    int ExitInstance();
    int finish();
};

int CRobloxApp::ExitInstance()
{
    report(acquire().get(), 1, exitMessage);
    cleanup(&cleanupObject);
    return finish();
}
