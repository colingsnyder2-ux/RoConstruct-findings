// from server: 100% by tester
// roc 2008-06 004e9f40  unit: RBX::ViewNew::Texture  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e9f40
//
// 004e9f40  83ec08               sub esp, 8
// 004e9f43  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e9f47  56                   push esi
// 004e9f48  8bf1                 mov esi, ecx
// 004e9f4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e9f4e  8d542404             lea edx, [esp + 4]
// 004e9f52  52                   push edx
// 004e9f53  89442408             mov dword ptr [esp + 8], eax
// 004e9f57  894c240c             mov dword ptr [esp + 0xc], ecx
// 004e9f5b  c70600000000         mov dword ptr [esi], 0
// 004e9f61  e88a031200           call 0x60a2f0
// 004e9f66  83c404               add esp, 4
// 004e9f69  84c0                 test al, al
// 004e9f6b  7523                 jne 0x4e9f90
// 004e9f6d  8d4608               lea eax, [esi + 8]
// 004e9f70  85c0                 test eax, eax
// 004e9f72  740d                 je 0x4e9f81
// 004e9f74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e9f78  8b542408             mov edx, dword ptr [esp + 8]
// 004e9f7c  8908                 mov dword ptr [eax], ecx
// 004e9f7e  895004               mov dword ptr [eax + 4], edx
// 004e9f81  c706b86e8200         mov dword ptr [esi], 0x826eb8
// 004e9f87  8bc6                 mov eax, esi
// 004e9f89  5e                   pop esi
// 004e9f8a  83c408               add esp, 8
// 004e9f8d  c20c00               ret 0xc
// 004e9f90  c70600000000         mov dword ptr [esi], 0
// 004e9f96  8bc6                 mov eax, esi
// 004e9f98  5e                   pop esi
// 004e9f99  83c408               add esp, 8
// 004e9f9c  c20c00               ret 0xc

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
