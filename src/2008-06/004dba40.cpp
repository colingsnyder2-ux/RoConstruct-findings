// from server: 100% by tester
// roc 2008-06 004dba40  unit: RBX::ViewNew::ViewRbxGfx  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dba40
//
// 004dba40  83ec08               sub esp, 8
// 004dba43  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004dba47  56                   push esi
// 004dba48  8bf1                 mov esi, ecx
// 004dba4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004dba4e  8d542404             lea edx, [esp + 4]
// 004dba52  52                   push edx
// 004dba53  89442408             mov dword ptr [esp + 8], eax
// 004dba57  894c240c             mov dword ptr [esp + 0xc], ecx
// 004dba5b  c70600000000         mov dword ptr [esi], 0
// 004dba61  e88ae81200           call 0x60a2f0
// 004dba66  83c404               add esp, 4
// 004dba69  84c0                 test al, al
// 004dba6b  7523                 jne 0x4dba90
// 004dba6d  8d4608               lea eax, [esi + 8]
// 004dba70  85c0                 test eax, eax
// 004dba72  740d                 je 0x4dba81
// 004dba74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dba78  8b542408             mov edx, dword ptr [esp + 8]
// 004dba7c  8908                 mov dword ptr [eax], ecx
// 004dba7e  895004               mov dword ptr [eax + 4], edx
// 004dba81  c706f86d8200         mov dword ptr [esi], 0x826df8
// 004dba87  8bc6                 mov eax, esi
// 004dba89  5e                   pop esi
// 004dba8a  83c408               add esp, 8
// 004dba8d  c20c00               ret 0xc
// 004dba90  c70600000000         mov dword ptr [esi], 0
// 004dba96  8bc6                 mov eax, esi
// 004dba98  5e                   pop esi
// 004dba99  83c408               add esp, 8
// 004dba9c  c20c00               ret 0xc

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
