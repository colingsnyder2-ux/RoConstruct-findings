// from server: 100% by king_originala
// roc 2008-06 004566f0  unit: CRobloxReportView::CStatsItemRecord::CNameItem  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004566f0
//
// 004566f0  6aff                 push -1
// 004566f2  685b247c00           push 0x7c245b
// 004566f7  64a100000000         mov eax, dword ptr fs:[0]
// 004566fd  50                   push eax
// 004566fe  64892500000000       mov dword ptr fs:[0], esp
// 00456705  51                   push ecx
// 00456706  56                   push esi
// 00456707  8bf1                 mov esi, ecx
// 00456709  89742404             mov dword ptr [esp + 4], esi
// 0045670d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00456715  e846052700           call 0x6c6c60
// 0045671a  8bb680000000         mov esi, dword ptr [esi + 0x80]
// 00456720  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00456728  85f6                 test esi, esi
// 0045672a  742a                 je 0x456756
// 0045672c  8d4604               lea eax, [esi + 4]
// 0045672f  83c9ff               or ecx, 0xffffffff
// 00456732  f00fc108             lock xadd dword ptr [eax], ecx
// 00456736  751e                 jne 0x456756
// 00456738  8b16                 mov edx, dword ptr [esi]
// 0045673a  8b4204               mov eax, dword ptr [edx + 4]
// 0045673d  8bce                 mov ecx, esi
// 0045673f  ffd0                 call eax
// 00456741  8d4e08               lea ecx, [esi + 8]
// 00456744  83caff               or edx, 0xffffffff
// 00456747  f00fc111             lock xadd dword ptr [ecx], edx
// 0045674b  7509                 jne 0x456756
// 0045674d  8b06                 mov eax, dword ptr [esi]
// 0045674f  8b5008               mov edx, dword ptr [eax + 8]
// 00456752  8bce                 mov ecx, esi
// 00456754  ffd2                 call edx
// 00456756  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045675a  5e                   pop esi
// 0045675b  64890d00000000       mov dword ptr fs:[0], ecx
// 00456762  83c410               add esp, 0x10
// 00456765  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
    void releaseWeak();
};

inline void Control::releaseWeak()
{
    if (_InterlockedDecrement(&weak) == 0)
        destroy();
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        releaseWeak();
    }
}

struct Ptr
{
    void* object;
    Control* control;

    ~Ptr();
};

inline Ptr::~Ptr()
{
    if (control)
        control->release();
}

struct S
{
    char data[124];
    Ptr pointer;

    void cleanup();
    ~S();
};

S::~S()
{
    cleanup();
}
