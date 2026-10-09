// from server: 70% by colin
// roc 2007-08 0053d0e0  unit: RBX::ScriptContext  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d0e0
//
// 0053d0e0  83ec0c               sub esp, 0xc
// 0053d0e3  56                   push esi
// 0053d0e4  8bf1                 mov esi, ecx
// 0053d0e6  8d442414             lea eax, [esp + 0x14]
// 0053d0ea  50                   push eax
// 0053d0eb  8d4c2408             lea ecx, [esp + 8]
// 0053d0ef  51                   push ecx
// 0053d0f0  8d8e14010000         lea ecx, [esi + 0x114]
// 0053d0f6  e8b5580a00           call 0x5e29b0
// 0053d0fb  80780801             cmp byte ptr [eax + 8], 1
// 0053d0ff  7527                 jne 0x53d128
// 0053d101  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053d105  80b81001000000       cmp byte ptr [eax + 0x110], 0
// 0053d10c  751a                 jne 0x53d128
// 0053d10e  83ec08               sub esp, 8
// 0053d111  8bd4                 mov edx, esp
// 0053d113  8964241c             mov dword ptr [esp + 0x1c], esp
// 0053d117  50                   push eax
// 0053d118  52                   push edx
// 0053d119  e85205f6ff           call 0x49d670
// 0053d11e  83c408               add esp, 8
// 0053d121  8bce                 mov ecx, esi
// 0053d123  e8d8f8ffff           call 0x53ca00
// 0053d128  5e                   pop esi
// 0053d129  83c40c               add esp, 0xc
// 0053d12c  c20400               ret 4

struct ScriptContext {
    char pad[0x114];
    int field_114;
    void sub_53ca00(int*);
    void func_53d0e0(int);
};

extern "C" int __stdcall sub_5e29b0(int, int*, int*);
extern "C" void __stdcall sub_49d670(int*, int*);

void ScriptContext::func_53d0e0(int arg)
{
    int local1;
    int local2;
    int* p = (int*)sub_5e29b0((int)&field_114, &local1, &local2);
    if (*(unsigned char*)((char*)p + 8) == 1) {
        int* q = (int*)local2;
        if (*(unsigned char*)((char*)q + 0x110) == 0) {
            int tmp[2];
            sub_49d670(q, tmp);
            sub_53ca00(tmp);
        }
    }
}
