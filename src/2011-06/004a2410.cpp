// from server: 100% by tester
// roc 2011-06 004a2410  unit: RBX::DS::CVideoStreamFilter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a2410
//
// 004a2410  56                   push esi
// 004a2411  6a00                 push 0
// 004a2413  83c114               add ecx, 0x14
// 004a2416  51                   push ecx
// 004a2417  ff156003a400         call dword ptr [0xa40360]
// 004a241d  8bf0                 mov esi, eax
// 004a241f  85f6                 test esi, esi
// 004a2421  7410                 je 0x4a2433
// 004a2423  6aff                 push -1
// 004a2425  56                   push esi
// 004a2426  ff15a803a400         call dword ptr [0xa403a8]
// 004a242c  56                   push esi
// 004a242d  ff157c03a400         call dword ptr [0xa4037c]
// 004a2433  5e                   pop esi
// 004a2434  c3                   ret 

extern "C" long __declspec(dllimport) __stdcall InterlockedExchange(long volatile *, long);
extern "C" unsigned long __declspec(dllimport) __stdcall WaitForSingleObject(void *, unsigned long);
extern "C" int __declspec(dllimport) __stdcall CloseHandle(void *);

struct S
{
    void *m14;
    void f();
};

void S::f()
{
    void *h = (void *)InterlockedExchange((long volatile *)((char *)this + 0x14), 0);
    if (h != 0)
    {
        WaitForSingleObject(h, (unsigned long)-1);
        CloseHandle(h);
    }
}
