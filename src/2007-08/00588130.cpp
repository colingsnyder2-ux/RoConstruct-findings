// from server: 42% by colin
// roc 2007-08 00588130  unit: RBX::P8Decal::?$GetSetImpl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588130
//
// 00588130  8b442404             mov eax, dword ptr [esp + 4]
// 00588134  85c0                 test eax, eax
// 00588136  53                   push ebx
// 00588137  55                   push ebp
// 00588138  56                   push esi
// 00588139  57                   push edi
// 0058813a  8bf9                 mov edi, ecx
// 0058813c  7405                 je 0x588143
// 0058813e  8d68fc               lea ebp, [eax - 4]
// 00588141  eb02                 jmp 0x588145
// 00588143  33ed                 xor ebp, ebp
// 00588145  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00588149  83ec20               sub esp, 0x20
// 0058814c  8bf4                 mov esi, esp
// 0058814e  89642434             mov dword ptr [esp + 0x34], esp
// 00588152  53                   push ebx
// 00588153  8bce                 mov ecx, esi
// 00588155  ff159ce67700         call dword ptr [0x77e69c]
// 0058815b  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0058815e  89461c               mov dword ptr [esi + 0x1c], eax
// 00588161  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00588164  8b5710               mov edx, dword ptr [edi + 0x10]
// 00588167  03cd                 add ecx, ebp
// 00588169  ffd2                 call edx
// 0058816b  5f                   pop edi
// 0058816c  5e                   pop esi
// 0058816d  5d                   pop ebp
// 0058816e  5b                   pop ebx
// 0058816f  c20800               ret 8

struct S_func_00588130 {
    char pad0[0x10];
    void* m_get;
    void* m_set;
    void f(void* a1, void* a2);
};

extern "C" void __stdcall G1_func_0077e69c();

void S_func_00588130::f(void* a1, void* a2)
{
    char* p = (char*)a1;
    if (p != 0) {
        p -= 4;
    } else {
        p = 0;
    }
    char buf[0x20];
    G1_func_0077e69c();
    *(int*)(buf + 0x1c) = *(int*)((char*)a2 + 0x1c);
    void* set = m_set;
    void* get = m_get;
    ((void (__stdcall*)(void*, char*))set)((char*)get + (int)p, buf);
}
