// from server: 71% by atomic.potato
// roc 2011-06 004dfed0  unit: RBX::Network::VClient::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dfed0
//
// 004dfed0  83ec10               sub esp, 0x10
// 004dfed3  803db1c3cc0000       cmp byte ptr [0xccc3b1], 0
// 004dfeda  56                   push esi
// 004dfedb  8bf1                 mov esi, ecx
// 004dfedd  741f                 je 0x4dfefe
// 004dfedf  6a00                 push 0
// 004dfee1  6a00                 push 0
// 004dfee3  6a00                 push 0
// 004dfee5  68ab000000           push 0xab
// 004dfeea  68389aa700           push 0xa79a38
// 004dfeef  68249aa700           push 0xa79a24
// 004dfef4  6a02                 push 2
// 004dfef6  e8e5913100           call 0x7f90e0
// 004dfefb  83c41c               add esp, 0x1c
// 004dfefe  b880f74d00           mov eax, 0x4df780
// 004dff03  33c9                 xor ecx, ecx
// 004dff05  89442404             mov dword ptr [esp + 4], eax
// 004dff09  8d442404             lea eax, [esp + 4]
// 004dff0d  894c2408             mov dword ptr [esp + 8], ecx
// 004dff11  50                   push eax
// 004dff12  8bce                 mov ecx, esi
// 004dff14  e807ffffff           call 0x4dfe20
// 004dff19  8bce                 mov ecx, esi
// 004dff1b  e810840b00           call 0x598330
// 004dff20  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 004dff26  85c9                 test ecx, ecx
// 004dff28  7442                 je 0x4dff6c
// 004dff2a  e8d13c1700           call 0x653c00
// 004dff2f  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 004dff35  8b10                 mov edx, dword ptr [eax]
// 004dff37  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 004dff3d  6a03                 push 3
// 004dff3f  6a00                 push 0
// 004dff41  6a01                 push 1
// 004dff43  51                   push ecx
// 004dff44  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 004dff4a  51                   push ecx
// 004dff4b  8bc8                 mov ecx, eax
// 004dff4d  ffd2                 call edx
// 004dff4f  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 004dff55  e8a63c1700           call 0x653c00
// 004dff5a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004dff5e  8b10                 mov edx, dword ptr [eax]
// 004dff60  8b5238               mov edx, dword ptr [edx + 0x38]
// 004dff63  6a03                 push 3
// 004dff65  6a00                 push 0
// 004dff67  51                   push ecx
// 004dff68  8bc8                 mov ecx, eax
// 004dff6a  ffd2                 call edx
// 004dff6c  5e                   pop esi
// 004dff6d  83c410               add esp, 0x10
// 004dff70  c20400               ret 4

struct S_func_00653c00 {
    int m_x;
    int f();
};

extern "C" int __cdecl sub_7f90e0(int, int, int, int, int, int, int);
extern "C" int __cdecl sub_653c00(int);

struct S_func_004dfed0 {
    char pad[0x108];
    int m_108;
    char pad2[0x10];
    int m_118;
    int m_11c;
    void sub_4dfe20(void*);
    void sub_598330();
    void f(void*);
};

void S_func_004dfed0::f(void* arg)
{
    if (*(char*)0xccc3b1 != 0) {
        sub_7f90e0(2, 0xa79a24, 0xa79a38, 0xab, 0, 0, 0);
    }
    void* p = (void*)0x4df780;
    sub_4dfe20(&p);
    sub_598330();
    if (m_108 != 0) {
        int a = sub_653c00(m_108);
        int* vt = (int*)*(int*)a;
        ((void (__thiscall*)(int, int, int, int, int, int))vt[0x84/4])(a, m_118, m_11c, 1, 0, 3);
        int b = sub_653c00(m_108);
        int* vt2 = (int*)*(int*)b;
        ((void (__thiscall*)(int, void*, int, int))vt2[0x38/4])(b, arg, 0, 3);
    }
}
