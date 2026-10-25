// from server: 100% by colin
// roc 2008-06 004d8760  unit: G3D::VVector3::?$Table  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8760
//
// 004d8760  83ec08               sub esp, 8
// 004d8763  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004d8767  56                   push esi
// 004d8768  8bf1                 mov esi, ecx
// 004d876a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d876e  8d542404             lea edx, [esp + 4]
// 004d8772  52                   push edx
// 004d8773  89442408             mov dword ptr [esp + 8], eax
// 004d8777  894c240c             mov dword ptr [esp + 0xc], ecx
// 004d877b  c70600000000         mov dword ptr [esi], 0
// 004d8781  e86a1b1300           call 0x60a2f0
// 004d8786  83c404               add esp, 4
// 004d8789  84c0                 test al, al
// 004d878b  7523                 jne 0x4d87b0
// 004d878d  8d4608               lea eax, [esi + 8]
// 004d8790  85c0                 test eax, eax
// 004d8792  740d                 je 0x4d87a1
// 004d8794  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d8798  8b542408             mov edx, dword ptr [esp + 8]
// 004d879c  8908                 mov dword ptr [eax], ecx
// 004d879e  895004               mov dword ptr [eax + 4], edx
// 004d87a1  c706e86b8200         mov dword ptr [esi], 0x826be8
// 004d87a7  8bc6                 mov eax, esi
// 004d87a9  5e                   pop esi
// 004d87aa  83c408               add esp, 8
// 004d87ad  c20c00               ret 0xc
// 004d87b0  c70600000000         mov dword ptr [esi], 0
// 004d87b6  8bc6                 mov eax, esi
// 004d87b8  5e                   pop esi
// 004d87b9  83c408               add esp, 8
// 004d87bc  c20c00               ret 0xc

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
