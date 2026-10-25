// from server: 100% by tester
// roc 2008-06 004ea2c0  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea2c0
//
// 004ea2c0  83ec08               sub esp, 8
// 004ea2c3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ea2c7  56                   push esi
// 004ea2c8  8bf1                 mov esi, ecx
// 004ea2ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ea2ce  8d542404             lea edx, [esp + 4]
// 004ea2d2  52                   push edx
// 004ea2d3  89442408             mov dword ptr [esp + 8], eax
// 004ea2d7  894c240c             mov dword ptr [esp + 0xc], ecx
// 004ea2db  c70600000000         mov dword ptr [esi], 0
// 004ea2e1  e80a001200           call 0x60a2f0
// 004ea2e6  83c404               add esp, 4
// 004ea2e9  84c0                 test al, al
// 004ea2eb  7523                 jne 0x4ea310
// 004ea2ed  8d4608               lea eax, [esi + 8]
// 004ea2f0  85c0                 test eax, eax
// 004ea2f2  740d                 je 0x4ea301
// 004ea2f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ea2f8  8b542408             mov edx, dword ptr [esp + 8]
// 004ea2fc  8908                 mov dword ptr [eax], ecx
// 004ea2fe  895004               mov dword ptr [eax + 4], edx
// 004ea301  c7066c6f8200         mov dword ptr [esi], 0x826f6c
// 004ea307  8bc6                 mov eax, esi
// 004ea309  5e                   pop esi
// 004ea30a  83c408               add esp, 8
// 004ea30d  c20c00               ret 0xc
// 004ea310  c70600000000         mov dword ptr [esi], 0
// 004ea316  8bc6                 mov eax, esi
// 004ea318  5e                   pop esi
// 004ea319  83c408               add esp, 8
// 004ea31c  c20c00               ret 0xc

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
