// from server: 77% by colin
// roc 2007-08 004615c0  unit: RBX::VRunService::?$MarshaledListener  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004615c0
//
// 004615c0  56                   push esi
// 004615c1  8bf1                 mov esi, ecx
// 004615c3  e888e91c00           call 0x62ff50
// 004615c8  85c0                 test eax, eax
// 004615ca  742c                 je 0x4615f8
// 004615cc  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 004615d2  85c0                 test eax, eax
// 004615d4  7507                 jne 0x4615dd
// 004615d6  6854597800           push 0x785954
// 004615db  eb0d                 jmp 0x4615ea
// 004615dd  8d88c8000000         lea ecx, [eax + 0xc8]
// 004615e3  ff15a8e67700         call dword ptr [0x77e6a8]
// 004615e9  50                   push eax
// 004615ea  8bce                 mov ecx, esi
// 004615ec  e85fe91c00           call 0x62ff50
// 004615f1  8bc8                 mov ecx, eax
// 004615f3  e81eea1c00           call 0x630016
// 004615f8  8bce                 mov ecx, esi
// 004615fa  e871fcffff           call 0x461270
// 004615ff  33c0                 xor eax, eax
// 00461601  5e                   pop esi
// 00461602  c20800               ret 8

struct S_func_004615c0 {
    char pad[0x134];
    void* m_134;
    int f(int a, int b);
};

extern "C" int __stdcall sub_62ff50();
extern "C" void __stdcall sub_630016(void* p);
extern "C" void __stdcall sub_461270();
extern "C" void* __stdcall sub_77e6a8(void* p);

int S_func_004615c0::f(int a, int b)
{
    if (sub_62ff50() != 0) {
        void* p;
        if (m_134 == 0) {
            p = (void*)0x785954;
        } else {
            p = sub_77e6a8((char*)m_134 + 0xc8);
        }
        sub_630016((void*)sub_62ff50());
    }
    sub_461270();
    return 0;
}
