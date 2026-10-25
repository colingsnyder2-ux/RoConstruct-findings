// from server: 100% by tester
// roc 2008-06 004db9e0  unit: RBX::ViewNew::ViewRbxGfx  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db9e0
//
// 004db9e0  83ec08               sub esp, 8
// 004db9e3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004db9e7  56                   push esi
// 004db9e8  8bf1                 mov esi, ecx
// 004db9ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004db9ee  8d542404             lea edx, [esp + 4]
// 004db9f2  52                   push edx
// 004db9f3  89442408             mov dword ptr [esp + 8], eax
// 004db9f7  894c240c             mov dword ptr [esp + 0xc], ecx
// 004db9fb  c70600000000         mov dword ptr [esi], 0
// 004dba01  e8eae81200           call 0x60a2f0
// 004dba06  83c404               add esp, 4
// 004dba09  84c0                 test al, al
// 004dba0b  7523                 jne 0x4dba30
// 004dba0d  8d4608               lea eax, [esi + 8]
// 004dba10  85c0                 test eax, eax
// 004dba12  740d                 je 0x4dba21
// 004dba14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004dba18  8b542408             mov edx, dword ptr [esp + 8]
// 004dba1c  8908                 mov dword ptr [eax], ecx
// 004dba1e  895004               mov dword ptr [eax + 4], edx
// 004dba21  c706f06d8200         mov dword ptr [esi], 0x826df0
// 004dba27  8bc6                 mov eax, esi
// 004dba29  5e                   pop esi
// 004dba2a  83c408               add esp, 8
// 004dba2d  c20c00               ret 0xc
// 004dba30  c70600000000         mov dword ptr [esi], 0
// 004dba36  8bc6                 mov eax, esi
// 004dba38  5e                   pop esi
// 004dba39  83c408               add esp, 8
// 004dba3c  c20c00               ret 0xc

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
