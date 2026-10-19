// from server: 98% by colin
// from server: 82% by king_originala
// roc 2008-06 004302b0  unit: CWrapperView  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004302b0
//
// 004302b0  64a100000000         mov eax, dword ptr fs:[0]
// 004302b6  6aff                 push -1
// 004302b8  6868917d00           push 0x7d9168
// 004302bd  50                   push eax
// 004302be  64892500000000       mov dword ptr fs:[0], esp
// 004302c5  83ec08               sub esp, 8
// 004302c8  56                   push esi
// 004302c9  8bf1                 mov esi, ecx
// 004302cb  8b4620               mov eax, dword ptr [esi + 0x20]
// 004302ce  6a02                 push 2
// 004302d0  50                   push eax
// 004302d1  ff15582d8000         call dword ptr [0x802d58]
// 004302d7  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 004302dd  85c0                 test eax, eax
// 004302df  7560                 jne 0x430341
// 004302e1  8d4c2404             lea ecx, [esp + 4]
// 004302e5  51                   push ecx
// 004302e6  e835931300           call 0x569620
// 004302eb  8b00                 mov eax, dword ptr [eax]
// 004302ed  68600e8100           push 0x810e60
// 004302f2  6a02                 push 2
// 004302f4  50                   push eax
// 004302f5  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004302fd  e89e901300           call 0x5693a0
// 00430302  8b442418             mov eax, dword ptr [esp + 0x18]
// 00430306  83c410               add esp, 0x10
// 00430309  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00430311  85c0                 test eax, eax
// 00430313  742c                 je 0x430341
// 00430315  8bf0                 mov esi, eax
// 00430317  83c004               add eax, 4
// 0043031a  83caff               or edx, 0xffffffff
// 0043031d  f00fc110             lock xadd dword ptr [eax], edx
// 00430321  751e                 jne 0x430341
// 00430323  8b06                 mov eax, dword ptr [esi]
// 00430325  8b5004               mov edx, dword ptr [eax + 4]
// 00430328  8bce                 mov ecx, esi
// 0043032a  ffd2                 call edx
// 0043032c  8d4608               lea eax, [esi + 8]
// 0043032f  83c9ff               or ecx, 0xffffffff
// 00430332  f00fc108             lock xadd dword ptr [eax], ecx
// 00430336  7509                 jne 0x430341
// 00430338  8b16                 mov edx, dword ptr [esi]
// 0043033a  8b4208               mov eax, dword ptr [edx + 8]
// 0043033d  8bce                 mov ecx, esi
// 0043033f  ffd0                 call eax
// 00430341  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00430345  5e                   pop esi
// 00430346  64890d00000000       mov dword ptr fs:[0], ecx
// 0043034d  83c414               add esp, 0x14
// 00430350  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void* (__stdcall *MonitorFromWindow)(void*, unsigned long);

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct SharedHandle {
    void* object;
    void* get() const { return object; }
    RefCount* count;
    ~SharedHandle();
};

__forceinline SharedHandle::~SharedHandle()
{
    RefCount* p = count;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

SharedHandle __cdecl getService();
void __cdecl report(void*, int, const char*, ...);

struct CWrapperView {
    char padding0[0x20];
    void* window;
    char padding1[0xd8];
    void* monitor;
    void getMonitorInfo();
};

void CWrapperView::getMonitorInfo()
{
    monitor = MonitorFromWindow(window, 2);
    if (!monitor)
        report(getService().get(), 2,
               "CMainFrameFrameWnd::getMonitorInfo MonitorFromWindow returned NULL");
}
