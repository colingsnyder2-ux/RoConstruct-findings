// from server: 100% by king_originala
// roc 2008-06 00651210  unit: RBX::ScoreHud  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00651210
//
// 00651210  56                   push esi
// 00651211  8b742410             mov esi, dword ptr [esp + 0x10]
// 00651215  85f6                 test esi, esi
// 00651217  742a                 je 0x651243
// 00651219  8d4604               lea eax, [esi + 4]
// 0065121c  83c9ff               or ecx, 0xffffffff
// 0065121f  f00fc108             lock xadd dword ptr [eax], ecx
// 00651223  751e                 jne 0x651243
// 00651225  8b16                 mov edx, dword ptr [esi]
// 00651227  8b4204               mov eax, dword ptr [edx + 4]
// 0065122a  8bce                 mov ecx, esi
// 0065122c  ffd0                 call eax
// 0065122e  8d4e08               lea ecx, [esi + 8]
// 00651231  83caff               or edx, 0xffffffff
// 00651234  f00fc111             lock xadd dword ptr [ecx], edx
// 00651238  7509                 jne 0x651243
// 0065123a  8b06                 mov eax, dword ptr [esi]
// 0065123c  8b5008               mov edx, dword ptr [eax + 8]
// 0065123f  8bce                 mov ecx, esi
// 00651241  ffd2                 call edx
// 00651243  5e                   pop esi
// 00651244  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

void __stdcall release(void*, void*, Control* control)
{
    if (control) {
        if (_InterlockedDecrement(&control->strong) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}
