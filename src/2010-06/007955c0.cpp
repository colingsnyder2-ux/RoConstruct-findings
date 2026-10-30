// roc 2010-06 007955c0  unit: PasteVerb  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007955c0
//
// 007955c0  803900               cmp byte ptr [ecx], 0
// 007955c3  7516                 jne 0x7955db
// 007955c5  8b4104               mov eax, dword ptr [ecx + 4]
// 007955c8  c74004e08e4400       mov dword ptr [eax + 4], 0x448ee0
// 007955cf  8b4904               mov ecx, dword ptr [ecx + 4]
// 007955d2  6a00                 push 0
// 007955d4  51                   push ecx
// 007955d5  ff1508a39e00         call dword ptr [0x9ea308]
// 007955db  c3                   ret 
// copied from an identical function in another client (function ?f@PasteVerb@ns_ROCX00001c@@QAEXXZ)

namespace ns_ROCX00001c {
// from server: 100% by atomic.potato
extern "C" long __declspec(dllimport) __stdcall InterlockedExchange(long *, long);

struct PasteVerb
{
    unsigned char enabled;
    long *value;
    void f();
};

void PasteVerb::f()
{
    if (!enabled)
    {
        value[1] = 0x448ee0;
        InterlockedExchange(value, 0);
    }
}
}