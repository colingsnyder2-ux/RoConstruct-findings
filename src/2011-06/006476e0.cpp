// roc 2011-06 006476e0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006476e0
//
// 006476e0  8b442404             mov eax, dword ptr [esp + 4]
// 006476e4  8bd1                 mov edx, ecx
// 006476e6  85c0                 test eax, eax
// 006476e8  7405                 je 0x6476ef
// 006476ea  83c0e4               add eax, -0x1c
// 006476ed  eb02                 jmp 0x6476f1
// 006476ef  33c0                 xor eax, eax
// 006476f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006476f5  8b09                 mov ecx, dword ptr [ecx]
// 006476f7  56                   push esi
// 006476f8  8b7220               mov esi, dword ptr [edx + 0x20]
// 006476fb  51                   push ecx
// 006476fc  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 00647702  8b0c31               mov ecx, dword ptr [ecx + esi]
// 00647705  034a1c               add ecx, dword ptr [edx + 0x1c]
// 00647708  8b5218               mov edx, dword ptr [edx + 0x18]
// 0064770b  8d8c01b4000000       lea ecx, [ecx + eax + 0xb4]
// 00647712  ffd2                 call edx
// 00647714  5e                   pop esi
// 00647715  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEXPAXPAH@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
namespace ns_ROCX000006 {
// from server: 100% by atomic.potato
struct S
{
    char pad[0x18];
    void (__thiscall *fn)(void*, int);
    char pad2[0x20 - 0x1c];
    int idx;
    void f(void* a, int* b);
};

void S::f(void* a, int* b)
{
    char* p = (char*)a;
    if (p)
        p -= 0x1c;
    else
        p = 0;
    int v = *b;
    int i = *(int*)((char*)this + 0x20);
    int off = *(int*)(p + 0xb4);
    int c = *(int*)(off + i) + *(int*)((char*)this + 0x1c);
    void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))((char*)this + 0x18);
    fn((char*)p + c + 0xb4, v);
}
}