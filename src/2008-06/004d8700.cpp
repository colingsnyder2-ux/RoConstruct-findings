// from server: 100% by tester
// roc 2008-06 004d8700  unit: G3D::VVector3::?$Table  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8700
//
// 004d8700  83ec08               sub esp, 8
// 004d8703  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d8707  56                   push esi
// 004d8708  8bf1                 mov esi, ecx
// 004d870a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d870e  8d542404             lea edx, [esp + 4]
// 004d8712  52                   push edx
// 004d8713  89442408             mov dword ptr [esp + 8], eax
// 004d8717  894c240c             mov dword ptr [esp + 0xc], ecx
// 004d871b  c70600000000         mov dword ptr [esi], 0
// 004d8721  e8ca1b1300           call 0x60a2f0
// 004d8726  83c404               add esp, 4
// 004d8729  84c0                 test al, al
// 004d872b  7523                 jne 0x4d8750
// 004d872d  8d4608               lea eax, [esi + 8]
// 004d8730  85c0                 test eax, eax
// 004d8732  740d                 je 0x4d8741
// 004d8734  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d8738  8b542408             mov edx, dword ptr [esp + 8]
// 004d873c  8908                 mov dword ptr [eax], ecx
// 004d873e  895004               mov dword ptr [eax + 4], edx
// 004d8741  c706e06b8200         mov dword ptr [esi], 0x826be0
// 004d8747  8bc6                 mov eax, esi
// 004d8749  5e                   pop esi
// 004d874a  83c408               add esp, 8
// 004d874d  c20c00               ret 0xc
// 004d8750  c70600000000         mov dword ptr [esi], 0
// 004d8756  8bc6                 mov eax, esi
// 004d8758  5e                   pop esi
// 004d8759  83c408               add esp, 8
// 004d875c  c20c00               ret 0xc

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
