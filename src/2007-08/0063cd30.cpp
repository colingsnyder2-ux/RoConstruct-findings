// from server: 72% by colin
// roc 2007-08 0063cd30  unit: CRobloxControlColorSelector  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cd30
//
// 0063cd30  8b8138040000         mov eax, dword ptr [ecx + 0x438]
// 0063cd36  83f805               cmp eax, 5
// 0063cd39  751f                 jne 0x63cd5a
// 0063cd3b  e830c20200           call 0x668f70
// 0063cd40  8bc8                 mov ecx, eax
// 0063cd42  e809bd0200           call 0x668a50
// 0063cd47  85c0                 test eax, eax
// 0063cd49  7403                 je 0x63cd4e
// 0063cd4b  33c0                 xor eax, eax
// 0063cd4d  c3                   ret 
// 0063cd4e  e81dc20200           call 0x668f70
// 0063cd53  8bc8                 mov ecx, eax
// 0063cd55  e916c00200           jmp 0x668d70
// 0063cd5a  83f804               cmp eax, 4
// 0063cd5d  75ee                 jne 0x63cd4d
// 0063cd5f  e80cc20200           call 0x668f70
// 0063cd64  8bc8                 mov ecx, eax
// 0063cd66  e9f5bc0200           jmp 0x668a60

struct CRobloxControlColorSelector {
    char pad[0x438];
    int field_0x438;
    int method();
};

extern "C" void* __cdecl func_00668f70();
extern "C" int __fastcall func_00668a50(void*);
extern "C" int __fastcall func_00668a60(void*);
extern "C" int __fastcall func_00668d70(void*);

int CRobloxControlColorSelector::method()
{
    if (field_0x438 == 5)
    {
        void* p = func_00668f70();
        if (func_00668a50(p) == 0)
        {
            void* q = func_00668f70();
            return func_00668d70(q);
        }
        return 0;
    }
    if (field_0x438 == 4)
    {
        void* r = func_00668f70();
        return func_00668a60(r);
    }
    return 0;
}
