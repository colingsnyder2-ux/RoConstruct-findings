// from server: 100% by atomic.potato
// roc 2010-06 00649b30  unit: RBX::Stats::Item  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00649b30
//
// 00649b30  8b442404             mov eax, dword ptr [esp + 4]
// 00649b34  8b00                 mov eax, dword ptr [eax]
// 00649b36  50                   push eax
// 00649b37  89442408             mov dword ptr [esp + 8], eax
// 00649b3b  db442408             fild dword ptr [esp + 8]
// 00649b3f  687476a000           push 0xa07674
// 00649b44  83ec08               sub esp, 8
// 00649b47  dd1c24               fstp qword ptr [esp]
// 00649b4a  51                   push ecx
// 00649b4b  e800ffffff           call 0x649a50
// 00649b50  83c414               add esp, 0x14
// 00649b53  c20400               ret 4

extern "C" void __cdecl Func_00649a50(void *, double, const char *, int);

struct StatsItem_00649b30 {
    int value;
    void f(int *);
};

void StatsItem_00649b30::f(int *p)
{
    Func_00649a50(this, (double)*p, (const char *)0x00a07674, *p);
}
