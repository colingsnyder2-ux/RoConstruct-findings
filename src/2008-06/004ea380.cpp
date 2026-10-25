// from server: 100% by tester
// roc 2008-06 004ea380  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea380
//
// 004ea380  83ec08               sub esp, 8
// 004ea383  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ea387  56                   push esi
// 004ea388  8bf1                 mov esi, ecx
// 004ea38a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ea38e  8d542404             lea edx, [esp + 4]
// 004ea392  52                   push edx
// 004ea393  89442408             mov dword ptr [esp + 8], eax
// 004ea397  894c240c             mov dword ptr [esp + 0xc], ecx
// 004ea39b  c70600000000         mov dword ptr [esi], 0
// 004ea3a1  e84aff1100           call 0x60a2f0
// 004ea3a6  83c404               add esp, 4
// 004ea3a9  84c0                 test al, al
// 004ea3ab  7523                 jne 0x4ea3d0
// 004ea3ad  8d4608               lea eax, [esi + 8]
// 004ea3b0  85c0                 test eax, eax
// 004ea3b2  740d                 je 0x4ea3c1
// 004ea3b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ea3b8  8b542408             mov edx, dword ptr [esp + 8]
// 004ea3bc  8908                 mov dword ptr [eax], ecx
// 004ea3be  895004               mov dword ptr [eax + 4], edx
// 004ea3c1  c7067c6f8200         mov dword ptr [esi], 0x826f7c
// 004ea3c7  8bc6                 mov eax, esi
// 004ea3c9  5e                   pop esi
// 004ea3ca  83c408               add esp, 8
// 004ea3cd  c20c00               ret 0xc
// 004ea3d0  c70600000000         mov dword ptr [esi], 0
// 004ea3d6  8bc6                 mov eax, esi
// 004ea3d8  5e                   pop esi
// 004ea3d9  83c408               add esp, 8
// 004ea3dc  c20c00               ret 0xc

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
