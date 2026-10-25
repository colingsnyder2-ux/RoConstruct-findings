// from server: 100% by tester
// roc 2010-06 006c7700  unit: rbx::Vspin_mutex::?$sp_counted_impl_p  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c7700
//
// 006c7700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c7704  83f804               cmp eax, 4
// 006c7707  7409                 je 0x6c7712
// 006c7709  8944240c             mov dword ptr [esp + 0xc], eax
// 006c770d  e9eef9ffff           jmp 0x6c7100
// 006c7712  8b442408             mov eax, dword ptr [esp + 8]
// 006c7716  32c9                 xor cl, cl
// 006c7718  c7002012bd00         mov dword ptr [eax], 0xbd1220
// 006c771e  884804               mov byte ptr [eax + 4], cl
// 006c7721  884805               mov byte ptr [eax + 5], cl
// 006c7724  c3                   ret 

struct FactoryProduct {
    char pad[4];
    char field4;
    char field5;
};

extern "C" void __cdecl sub_6db270(int, int, int);

void __cdecl sub_6db870(int arg0, int arg1, int arg2)
{
    if (arg2 != 4) {
        sub_6db270(arg0, arg1, arg2);
        return;
    }
    FactoryProduct* p = (FactoryProduct*)arg1;
    *(int*)p = 0xbd69a8;
    p->field4 = 0;
    p->field5 = 0;
}
