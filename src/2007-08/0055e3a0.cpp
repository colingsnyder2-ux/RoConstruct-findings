// from server: 78% by colin
// roc 2007-08 0055e3a0  unit: RBX::DataModel  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e3a0
//
// 0055e3a0  53                   push ebx
// 0055e3a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0055e3a5  85db                 test ebx, ebx
// 0055e3a7  56                   push esi
// 0055e3a8  57                   push edi
// 0055e3a9  8bf1                 mov esi, ecx
// 0055e3ab  7408                 je 0x55e3b5
// 0055e3ad  8dbb4c010000         lea edi, [ebx + 0x14c]
// 0055e3b3  eb02                 jmp 0x55e3b7
// 0055e3b5  33ff                 xor edi, edi
// 0055e3b7  83ec1c               sub esp, 0x1c
// 0055e3ba  8bcc                 mov ecx, esp
// 0055e3bc  8964242c             mov dword ptr [esp + 0x2c], esp
// 0055e3c0  68fc907a00           push 0x7a90fc
// 0055e3c5  ff1598e67700         call dword ptr [0x77e698]
// 0055e3cb  57                   push edi
// 0055e3cc  8bce                 mov ecx, esi
// 0055e3ce  e87d680000           call 0x564c50
// 0055e3d3  5f                   pop edi
// 0055e3d4  895e0c               mov dword ptr [esi + 0xc], ebx
// 0055e3d7  c706e8907a00         mov dword ptr [esi], 0x7a90e8
// 0055e3dd  8bc6                 mov eax, esi
// 0055e3df  5e                   pop esi
// 0055e3e0  5b                   pop ebx
// 0055e3e1  c20400               ret 4

struct DataModel {
    char pad0[12];
    int m_field0c;
};

struct S_func_0055e3a0 {
    char pad0[12];
    int m_field0c;
    S_func_0055e3a0* f(DataModel* p);
};

extern "C" void __stdcall sub_00564c50(int);
extern "C" void __stdcall sub_0077e698();

S_func_0055e3a0* S_func_0055e3a0::f(DataModel* p)
{
    char buf[28];
    int q;
    if (p != 0)
        q = (int)((char*)p + 0x14c);
    else
        q = 0;
    sub_0077e698();
    sub_00564c50(q);
    m_field0c = (int)p;
    *(int*)this = 0x7a90e8;
    return this;
}
