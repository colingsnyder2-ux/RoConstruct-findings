// from server: 100% by king_originala
// roc 2008-06 004e9ee0  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9ee0
//
// 004e9ee0  83ec08               sub esp, 8
// 004e9ee3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e9ee7  56                   push esi
// 004e9ee8  8bf1                 mov esi, ecx
// 004e9eea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e9eee  8d542404             lea edx, [esp + 4]
// 004e9ef2  52                   push edx
// 004e9ef3  89442408             mov dword ptr [esp + 8], eax
// 004e9ef7  894c240c             mov dword ptr [esp + 0xc], ecx
// 004e9efb  c70600000000         mov dword ptr [esi], 0
// 004e9f01  e8ea031200           call 0x60a2f0
// 004e9f06  83c404               add esp, 4
// 004e9f09  84c0                 test al, al
// 004e9f0b  7523                 jne 0x4e9f30
// 004e9f0d  8d4608               lea eax, [esi + 8]
// 004e9f10  85c0                 test eax, eax
// 004e9f12  740d                 je 0x4e9f21
// 004e9f14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e9f18  8b542408             mov edx, dword ptr [esp + 8]
// 004e9f1c  8908                 mov dword ptr [eax], ecx
// 004e9f1e  895004               mov dword ptr [eax + 4], edx
// 004e9f21  c706b06e8200         mov dword ptr [esi], 0x826eb0
// 004e9f27  8bc6                 mov eax, esi
// 004e9f29  5e                   pop esi
// 004e9f2a  83c408               add esp, 8
// 004e9f2d  c20c00               ret 0xc
// 004e9f30  c70600000000         mov dword ptr [esi], 0
// 004e9f36  8bc6                 mov eax, esi
// 004e9f38  5e                   pop esi
// 004e9f39  83c408               add esp, 8
// 004e9f3c  c20c00               ret 0xc

struct Texture {
    int f(int, int, int);
};

extern "C" bool __cdecl func_0060a2f0(int*);

int Texture::f(int a, int b, int c)
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
        *(int*)this = 0x826f7c;
        return (int)this;
    }
    *(int*)this = 0;
    return (int)this;
}
