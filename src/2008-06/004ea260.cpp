// from server: 100% by tester
// roc 2008-06 004ea260  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea260
//
// 004ea260  83ec08               sub esp, 8
// 004ea263  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ea267  56                   push esi
// 004ea268  8bf1                 mov esi, ecx
// 004ea26a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ea26e  8d542404             lea edx, [esp + 4]
// 004ea272  52                   push edx
// 004ea273  89442408             mov dword ptr [esp + 8], eax
// 004ea277  894c240c             mov dword ptr [esp + 0xc], ecx
// 004ea27b  c70600000000         mov dword ptr [esi], 0
// 004ea281  e86a001200           call 0x60a2f0
// 004ea286  83c404               add esp, 4
// 004ea289  84c0                 test al, al
// 004ea28b  7523                 jne 0x4ea2b0
// 004ea28d  8d4608               lea eax, [esi + 8]
// 004ea290  85c0                 test eax, eax
// 004ea292  740d                 je 0x4ea2a1
// 004ea294  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ea298  8b542408             mov edx, dword ptr [esp + 8]
// 004ea29c  8908                 mov dword ptr [eax], ecx
// 004ea29e  895004               mov dword ptr [eax + 4], edx
// 004ea2a1  c706646f8200         mov dword ptr [esi], 0x826f64
// 004ea2a7  8bc6                 mov eax, esi
// 004ea2a9  5e                   pop esi
// 004ea2aa  83c408               add esp, 8
// 004ea2ad  c20c00               ret 0xc
// 004ea2b0  c70600000000         mov dword ptr [esi], 0
// 004ea2b6  8bc6                 mov eax, esi
// 004ea2b8  5e                   pop esi
// 004ea2b9  83c408               add esp, 8
// 004ea2bc  c20c00               ret 0xc

struct S {
    int f(int a, int b, int c);
};

extern "C" bool __cdecl func_0060a2f0(int* p);

int S::f(int a, int b, int c)
{
    int local[2];
    local[0] = a;
    local[1] = b;
    *(int*)this = 0;
    if (!func_0060a2f0(local)) {
        int* p = (int*)((char*)this + 8);
        if (p) {
            p[0] = local[0];
            p[1] = local[1];
        }
        *(int*)this = 0x826be8;
        return (int)this;
    }
    *(int*)this = 0;
    return (int)this;
}
