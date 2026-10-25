// from server: 100% by tester
// roc 2010-06 00475510  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00475510
//
// 00475510  56                   push esi
// 00475511  8bf1                 mov esi, ecx
// 00475513  6a01                 push 1
// 00475515  8d86ac010000         lea eax, [esi + 0x1ac]
// 0047551b  50                   push eax
// 0047551c  ff1508a39e00         call dword ptr [0x9ea308]
// 00475522  85c0                 test eax, eax
// 00475524  7511                 jne 0x475537
// 00475526  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00475529  50                   push eax
// 0047552a  50                   push eax
// 0047552b  6869040000           push 0x469
// 00475530  51                   push ecx
// 00475531  ff1548ba9e00         call dword ptr [0x9eba48]
// 00475537  5e                   pop esi
// 00475538  c3                   ret 

extern "C" long __declspec(dllimport) __stdcall InterlockedExchange(long*, long);
extern "C" int __declspec(dllimport) __stdcall PostMessageA(void*, unsigned int, unsigned int, long);

struct S
{
    void f();
};

void S::f()
{
    long result = InterlockedExchange((long*)((char*)this + 0x1ac), 1);
    if (!result)
    {
        PostMessageA(*(void**)((char*)this + 0x20), 0x469, 0, 0);
    }
}
