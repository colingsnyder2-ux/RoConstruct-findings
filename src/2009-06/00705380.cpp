// roc 2009-06 00705380  unit: VAuthoringSettings::?$FactoryProduct  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705380
//
// 00705380  803900               cmp byte ptr [ecx], 0
// 00705383  7516                 jne 0x70539b
// 00705385  8b4104               mov eax, dword ptr [ecx + 4]
// 00705388  c74004e08e4400       mov dword ptr [eax + 4], 0x448ee0
// 0070538f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00705392  6a00                 push 0
// 00705394  51                   push ecx
// 00705395  ff152ce28900         call dword ptr [0x89e22c]
// 0070539b  c3                   ret 
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
